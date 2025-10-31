# x86_ir_table

module to print the x86 Interrupt Remapping Table

dmesg | grep DMAR

[    0.056820] DMAR: DRHD base: 0x000000aa3fc000 flags: 0x0
[    0.056825] DMAR: dmar0: reg_base_addr aa3fc000 ver 6:0 cap 9ed008c40780466 ecap 3ee9e86f050df

convert 0xaa3c000 to decimal ans pass as argument to insmod


root@root# insmod irtable.ko dmar_reg_base=2856304640

root@root# dmesg

[ 6137.634331] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634338] present 1, vector 30, dest mode 1, dest id 1, sid(BDF) f7

[ 6137.634344] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634349] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634353] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634358] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634362] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634366] present 1, vector 21, dest mode 1, dest id 400, sid(BDF) f7

[ 6137.634371] present 1, vector 21, dest mode 1, dest id 4, sid(BDF) f7

[ 6137.634376] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634381] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634385] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634389] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634393] present 1, vector 21, dest mode 1, dest id 1000, sid(BDF) f7

[ 6137.634398] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634402] present 1, vector 21, dest mode 1, dest id 100, sid(BDF) f7

[ 6137.634407] present 1, vector 22, dest mode 1, dest id 2000, sid(BDF) 8

[ 6137.634412] present 1, vector 23, dest mode 1, dest id 400, sid(BDF) d8

[ 6137.634417] present 1, vector 23, dest mode 1, dest id 40, sid(BDF) dc

[ 6137.634421] present 1, vector 21, dest mode 1, dest id 4000, sid(BDF) b8

[ 6137.634426] present 1, vector 21, dest mode 1, dest id 10, sid(BDF) a0

[ 6137.634430] present 1, vector 23, dest mode 1, dest id 4000, sid(BDF) 300

[ 6137.634435] present 1, vector 22, dest mode 1, dest id 8, sid(BDF) fe

[ 6137.634440] present 1, vector 22, dest mode 1, dest id 1, sid(BDF) 300

[ 6137.634444] present 1, vector 22, dest mode 1, dest id 4, sid(BDF) 300

[ 6137.634448] present 1, vector 22, dest mode 1, dest id 10, sid(BDF) 300

[ 6137.634453] present 1, vector 22, dest mode 1, dest id 40, sid(BDF) 300

[ 6137.634457] present 1, vector 22, dest mode 1, dest id 100, sid(BDF) 300

[ 6137.634462] present 1, vector 22, dest mode 1, dest id 400, sid(BDF) 300

[ 6137.634466] present 1, vector 22, dest mode 1, dest id 1000, sid(BDF) 300

[ 6137.634471] present 1, vector 22, dest mode 1, dest id 4000, sid(BDF) 300

[ 6137.634475] present 1, vector 22, dest mode 1, dest id 10001, sid(BDF) 300

[ 6137.634480] present 1, vector 22, dest mode 1, dest id 10004, sid(BDF) 300

[ 6137.634485] present 1, vector 22, dest mode 1, dest id 2, sid(BDF) 300

[ 6137.634489] present 1, vector 21, dest mode 1, dest id 8, sid(BDF) 300

[ 6137.634493] present 1, vector 21, dest mode 1, dest id 20, sid(BDF) 300

[ 6137.634498] present 1, vector 21, dest mode 1, dest id 80, sid(BDF) 300

[ 6137.634502] present 1, vector 21, dest mode 1, dest id 200, sid(BDF) 300

[ 6137.634506] present 1, vector 21, dest mode 1, dest id 800, sid(BDF) 300

[ 6137.634511] present 1, vector 21, dest mode 1, dest id 2000, sid(BDF) 300

[ 6137.634515] present 1, vector 21, dest mode 1, dest id 8000, sid(BDF) 300

[ 6137.634520] present 1, vector 21, dest mode 1, dest id 10002, sid(BDF) 300

[ 6137.634524] present 1, vector 21, dest mode 1, dest id 10008, sid(BDF) 300

[ 6137.634528] present 1, vector 22, dest mode 1, dest id 20, sid(BDF) b0

[ 6137.634533] present 1, vector 23, dest mode 1, dest id 10004, sid(BDF) 100

[ 6137.634537] present 1, vector 22, dest mode 1, dest id 200, sid(BDF) fb

[ 6137.634542] present 1, vector 22, dest mode 1, dest id 800, sid(BDF) f7

[ 6137.634546] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634550] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634555] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634559] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634563] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634568] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634572] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634576] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634580] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634584] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634589] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634593] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634597] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634601] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634605] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634610] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0

[ 6137.634614] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0




