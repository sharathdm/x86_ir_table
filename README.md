# x86_ir_table

module to print the x86 Interrupt Remapping Table

root@root# insmod irtable.ko
root@root# dmesg
[ 6137.634324] index = 0
[ 6137.634331] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634336] index = 1
[ 6137.634338] present 1, vector 30, dest mode 1, dest id 1, sid(BDF) f7
[ 6137.634342] index = 2
[ 6137.634344] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634347] index = 3
[ 6137.634349] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634352] index = 4
[ 6137.634353] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634356] index = 5
[ 6137.634358] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634360] index = 6
[ 6137.634362] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634364] index = 7
[ 6137.634366] present 1, vector 21, dest mode 1, dest id 400, sid(BDF) f7
[ 6137.634369] index = 8
[ 6137.634371] present 1, vector 21, dest mode 1, dest id 4, sid(BDF) f7
[ 6137.634374] index = 9
[ 6137.634376] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634378] index = 10
[ 6137.634381] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634383] index = 11
[ 6137.634385] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634387] index = 12
[ 6137.634389] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634391] index = 13
[ 6137.634393] present 1, vector 21, dest mode 1, dest id 1000, sid(BDF) f7
[ 6137.634396] index = 14
[ 6137.634398] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634401] index = 15
[ 6137.634402] present 1, vector 21, dest mode 1, dest id 100, sid(BDF) f7
[ 6137.634405] index = 16
[ 6137.634407] present 1, vector 22, dest mode 1, dest id 2000, sid(BDF) 8
[ 6137.634410] index = 17
[ 6137.634412] present 1, vector 23, dest mode 1, dest id 400, sid(BDF) d8
[ 6137.634415] index = 18
[ 6137.634417] present 1, vector 23, dest mode 1, dest id 40, sid(BDF) dc
[ 6137.634420] index = 19
[ 6137.634421] present 1, vector 21, dest mode 1, dest id 4000, sid(BDF) b8
[ 6137.634424] index = 20
[ 6137.634426] present 1, vector 21, dest mode 1, dest id 10, sid(BDF) a0
[ 6137.634429] index = 21
[ 6137.634430] present 1, vector 23, dest mode 1, dest id 4000, sid(BDF) 300
[ 6137.634433] index = 22
[ 6137.634435] present 1, vector 22, dest mode 1, dest id 8, sid(BDF) fe
[ 6137.634438] index = 23
[ 6137.634440] present 1, vector 22, dest mode 1, dest id 1, sid(BDF) 300
[ 6137.634442] index = 24
[ 6137.634444] present 1, vector 22, dest mode 1, dest id 4, sid(BDF) 300
[ 6137.634447] index = 25
[ 6137.634448] present 1, vector 22, dest mode 1, dest id 10, sid(BDF) 300
[ 6137.634451] index = 26
[ 6137.634453] present 1, vector 22, dest mode 1, dest id 40, sid(BDF) 300
[ 6137.634456] index = 27
[ 6137.634457] present 1, vector 22, dest mode 1, dest id 100, sid(BDF) 300
[ 6137.634460] index = 28
[ 6137.634462] present 1, vector 22, dest mode 1, dest id 400, sid(BDF) 300
[ 6137.634465] index = 29
[ 6137.634466] present 1, vector 22, dest mode 1, dest id 1000, sid(BDF) 300
[ 6137.634469] index = 30
[ 6137.634471] present 1, vector 22, dest mode 1, dest id 4000, sid(BDF) 300
[ 6137.634474] index = 31
[ 6137.634475] present 1, vector 22, dest mode 1, dest id 10001, sid(BDF) 300
[ 6137.634478] index = 32
[ 6137.634480] present 1, vector 22, dest mode 1, dest id 10004, sid(BDF) 300
[ 6137.634483] index = 33
[ 6137.634485] present 1, vector 22, dest mode 1, dest id 2, sid(BDF) 300
[ 6137.634487] index = 34
[ 6137.634489] present 1, vector 21, dest mode 1, dest id 8, sid(BDF) 300
[ 6137.634491] index = 35
[ 6137.634493] present 1, vector 21, dest mode 1, dest id 20, sid(BDF) 300
[ 6137.634496] index = 36
[ 6137.634498] present 1, vector 21, dest mode 1, dest id 80, sid(BDF) 300
[ 6137.634500] index = 37
[ 6137.634502] present 1, vector 21, dest mode 1, dest id 200, sid(BDF) 300
[ 6137.634505] index = 38
[ 6137.634506] present 1, vector 21, dest mode 1, dest id 800, sid(BDF) 300
[ 6137.634509] index = 39
[ 6137.634511] present 1, vector 21, dest mode 1, dest id 2000, sid(BDF) 300
[ 6137.634513] index = 40
[ 6137.634515] present 1, vector 21, dest mode 1, dest id 8000, sid(BDF) 300
[ 6137.634518] index = 41
[ 6137.634520] present 1, vector 21, dest mode 1, dest id 10002, sid(BDF) 300
[ 6137.634522] index = 42
[ 6137.634524] present 1, vector 21, dest mode 1, dest id 10008, sid(BDF) 300
[ 6137.634527] index = 43
[ 6137.634528] present 1, vector 22, dest mode 1, dest id 20, sid(BDF) b0
[ 6137.634531] index = 44
[ 6137.634533] present 1, vector 23, dest mode 1, dest id 10004, sid(BDF) 100
[ 6137.634535] index = 45
[ 6137.634537] present 1, vector 22, dest mode 1, dest id 200, sid(BDF) fb
[ 6137.634540] index = 46
[ 6137.634542] present 1, vector 22, dest mode 1, dest id 800, sid(BDF) f7
[ 6137.634544] index = 47
[ 6137.634546] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634549] index = 48
[ 6137.634550] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634553] index = 49
[ 6137.634555] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634557] index = 50
[ 6137.634559] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634562] index = 51
[ 6137.634563] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634566] index = 52
[ 6137.634568] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634570] index = 53
[ 6137.634572] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634574] index = 54
[ 6137.634576] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634578] index = 55
[ 6137.634580] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634583] index = 56
[ 6137.634584] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634587] index = 57
[ 6137.634589] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634591] index = 58
[ 6137.634593] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634595] index = 59
[ 6137.634597] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634599] index = 60
[ 6137.634601] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634604] index = 61
[ 6137.634605] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634608] index = 62
[ 6137.634610] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634612] index = 63
[ 6137.634614] present 0, vector 0, dest mode 0, dest id 0, sid(BDF) 0
[ 6137.634616] Hello
root@bapvecise025:/tmp#



