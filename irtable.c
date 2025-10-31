#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/io.h>
#include <asm/hw_irq.h>
#include <linux/irq.h>
#include <linux/dmar.h>

#define IRTA_REG 0xb8
#define PQH_REG 0xc0

static unsigned long dmar_reg_base = 0;
module_param(dmar_reg_base, ulong, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
MODULE_PARM_DESC(dmar_reg_base, "DMAR Reg Base Addr");

struct irte *temp;

MODULE_LICENSE("GPL");
MODULE_AUTHOR("sharath kumar");
MODULE_DESCRIPTION("print interrupt remapping table");
MODULE_VERSION("0.1");

static int __init hello_mod_init(void)
{
#if 0
        vector_irq_t* vector_irq = (vector_irq_t*)kallsyms_lookup_name("vector_irq");
     int vector_num [] = { 0xA2 , 0xB2 , 0xC2 , 0xD2 , 0xE2 , 0x23 , 0x43 , 0x53 , 0x63 } ;
#endif
        int i;
		char *virt_addr;
        unsigned long irte_addr=0;
		
        virt_addr = ioremap(dmar_reg_base, PQH_REG);
        irte_addr = readl(virt_addr + IRTA_REG) & 0xfffff000;
        irte_addr |= (unsigned long)readl(virt_addr + IRTA_REG + 4) << 32;
        printk("addr %lx\n", irte_addr);
        temp = (struct irte *)phys_to_virt(irte_addr);
        for(i=0;i<64;i++) {
            printk("present %x, vector %x, dest mode %x, dest id %x, sid(BDF) %x",temp->present,temp->vector,temp->dst_mode,temp->dest_id,temp->sid);
            temp++;
        }

#if 0
     for(i=0;i < 9 ; i++) {
         struct irq_desc* desc = __this_cpu_read((*vector_irq)[vector_num[i]]);
         if (IS_ERR_OR_NULL(desc)){
             continue ;
        }
        struct irq_data* data = irq_desc_get_irq_data(desc);
        printk( " %x : %d\n " , vector_num[i], data->irq);
    }
#endif 
        return 0;
}

static void __exit hello_mod_exit(void)
{
        printk(KERN_ALERT "Bye\n");
}

module_init(hello_mod_init);
module_exit(hello_mod_exit);
