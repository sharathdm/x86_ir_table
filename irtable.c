#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/io.h>
#include <asm/hw_irq.h>
#include <linux/irq.h>
#include <linux/dmar.h>

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
        unsigned int *data = phys_to_virt(0x100300000);
        int i;
	temp = (struct irte *)data;
        for(i=0;i<64;i++) {
			printk("index = %d \n",i);
            printk("present %x, vector %x, dest mode %x, dest id %x, sid(BDF) %x",temp->present,temp->vector,temp->dst_mode,temp->dest_id,temp->sid);
	    temp++;
	}
        printk(KERN_ALERT "Hello \n");
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
