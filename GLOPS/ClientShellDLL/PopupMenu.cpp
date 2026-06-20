#include "PopupMenu.h"

// 0x1006fff0: PopupMenu::AddItem
/*
1006fff0:	53                   	push   ebx
1006fff1:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
1006fff5:	56                   	push   esi
1006fff6:	8b f1                	mov    esi,ecx
1006fff8:	85 db                	test   ebx,ebx
1006fffa:	75 05                	jne    0x10070001
1006fffc:	bb 00 d0 10 10       	mov    ebx,0x1010d000
10070001:	8b 86 f4 08 00 00    	mov    eax,DWORD PTR [esi+0x8f4]
10070007:	83 f8 10             	cmp    eax,0x10
1007000a:	7c 40                	jl     0x1007004c
1007000c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10070012:	68 a1 00 00 00       	push   0xa1
10070017:	68 f8 d6 0d 10       	push   0x100dd6f8
1007001c:	8b 01                	mov    eax,DWORD PTR [ecx]
1007001e:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10070024:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10070028:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1007002d:	52                   	push   edx
1007002e:	53                   	push   ebx
1007002f:	8b 08                	mov    ecx,DWORD PTR [eax]
10070031:	6a 10                	push   0x10
10070033:	68 b0 d6 0d 10       	push   0x100dd6b0
10070038:	68 7c 5d 0c 10       	push   0x100c5d7c
1007003d:	50                   	push   eax
1007003e:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10070044:	83 c4 18             	add    esp,0x18
10070047:	5e                   	pop    esi
10070048:	5b                   	pop    ebx
10070049:	c2 08 00             	ret    0x8
1007004c:	c1 e0 07             	shl    eax,0x7
1007004f:	57                   	push   edi
10070050:	6a 7f                	push   0x7f
10070052:	8d bc 30 b4 00 00 00 	lea    edi,[eax+esi*1+0xb4]
10070059:	53                   	push   ebx
1007005a:	57                   	push   edi
1007005b:	e8 c0 37 03 00       	call   0x100a3820
10070060:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
10070064:	c6 47 7f 00          	mov    BYTE PTR [edi+0x7f],0x0
10070068:	8b 86 f4 08 00 00    	mov    eax,DWORD PTR [esi+0x8f4]
1007006e:	83 c4 0c             	add    esp,0xc
10070071:	89 8c 86 b4 08 00 00 	mov    DWORD PTR [esi+eax*4+0x8b4],ecx
10070078:	8b 86 f4 08 00 00    	mov    eax,DWORD PTR [esi+0x8f4]
1007007e:	40                   	inc    eax
1007007f:	5f                   	pop    edi
10070080:	89 86 f4 08 00 00    	mov    DWORD PTR [esi+0x8f4],eax
10070086:	5e                   	pop    esi
10070087:	5b                   	pop    ebx
10070088:	c2 08 00             	ret    0x8
1007008b:	90                   	nop
1007008c:	90                   	nop
1007008d:	90                   	nop
1007008e:	90                   	nop
1007008f:	90                   	nop
10070090:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10070094:	85 c0                	test   eax,eax
10070096:	75 05                	jne    0x1007009d
10070098:	b8 00 d0 10 10       	mov    eax,0x1010d000
1007009d:	56                   	push   esi
1007009e:	8d 71 34             	lea    esi,[ecx+0x34]
100700a1:	6a 7f                	push   0x7f
100700a3:	50                   	push   eax
100700a4:	56                   	push   esi
100700a5:	e8 76 37 03 00       	call   0x100a3820
100700aa:	83 c4 0c             	add    esp,0xc
100700ad:	c6 46 7f 00          	mov    BYTE PTR [esi+0x7f],0x0
100700b1:	5e                   	pop    esi
100700b2:	c2 04 00             	ret    0x4
100700b5:	90                   	nop
100700b6:	90                   	nop
100700b7:	90                   	nop
100700b8:	90                   	nop
100700b9:	90                   	nop
100700ba:	90                   	nop
100700bb:	90                   	nop
100700bc:	90                   	nop
100700bd:	90                   	nop
100700be:	90                   	nop
100700bf:	90                   	nop
100700c0:	83 ec 10             	sub    esp,0x10
100700c3:	53                   	push   ebx
100700c4:	56                   	push   esi
100700c5:	57                   	push   edi
100700c6:	6a 00                	push   0x0
100700c8:	8b f1                	mov    esi,ecx
100700ca:	6a 07                	push   0x7
100700cc:	e8 af e6 ff ff       	call   0x1006e780
100700d1:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100700d7:	56                   	push   esi
100700d8:	e8 63 f1 ff ff       	call   0x1006f240
100700dd:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100700e3:	56                   	push   esi
100700e4:	e8 17 f1 ff ff       	call   0x1006f200
100700e9:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100700ef:	56                   	push   esi
100700f0:	e8 7b f1 ff ff       	call   0x1006f270
100700f5:	8b ce                	mov    ecx,esi
100700f7:	e8 b4 e9 ff ff       	call   0x1006eab0
100700fc:	8d 44 24 0c          	lea    eax,[esp+0xc]
10070100:	8b ce                	mov    ecx,esi
10070102:	50                   	push   eax
10070103:	e8 b8 e5 ff ff       	call   0x1006e6c0
10070108:	8b 86 f4 08 00 00    	mov    eax,DWORD PTR [esi+0x8f4]
1007010e:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
10070112:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
10070116:	33 ff                	xor    edi,edi
10070118:	85 c0                	test   eax,eax
1007011a:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
1007011e:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10070122:	bb 20 00 00 00       	mov    ebx,0x20
10070127:	7e 2b                	jle    0x10070154
10070129:	55                   	push   ebp
1007012a:	8d ae b4 00 00 00    	lea    ebp,[esi+0xb4]
10070130:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10070136:	55                   	push   ebp
10070137:	e8 e4 d0 fd ff       	call   0x1004d220
1007013c:	3b c3                	cmp    eax,ebx
1007013e:	7e 02                	jle    0x10070142
10070140:	8b d8                	mov    ebx,eax
10070142:	8b 86 f4 08 00 00    	mov    eax,DWORD PTR [esi+0x8f4]
10070148:	47                   	inc    edi
10070149:	81 c5 80 00 00 00    	add    ebp,0x80
1007014f:	3b f8                	cmp    edi,eax
10070151:	7c dd                	jl     0x10070130
10070153:	5d                   	pop    ebp
10070154:	8a 46 34             	mov    al,BYTE PTR [esi+0x34]
10070157:	83 c3 08             	add    ebx,0x8
1007015a:	84 c0                	test   al,al
1007015c:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
10070160:	74 12                	je     0x10070174
10070162:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10070168:	e8 03 d1 fd ff       	call   0x1004d270
1007016d:	8b f8                	mov    edi,eax
1007016f:	83 c7 04             	add    edi,0x4
10070172:	eb 02                	jmp    0x10070176
10070174:	33 ff                	xor    edi,edi
10070176:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1007017c:	e8 ef d0 fd ff       	call   0x1004d270
10070181:	83 c0 02             	add    eax,0x2
10070184:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10070188:	0f af 86 f4 08 00 00 	imul   eax,DWORD PTR [esi+0x8f4]
1007018f:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10070193:	8d 7c 38 02          	lea    edi,[eax+edi*1+0x2]
10070197:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
1007019c:	8d 1c 11             	lea    ebx,[ecx+edx*1]
1007019f:	89 7c 24 18          	mov    DWORD PTR [esp+0x18],edi
100701a3:	3b d8                	cmp    ebx,eax
100701a5:	7c 08                	jl     0x100701af
100701a7:	2b c1                	sub    eax,ecx
100701a9:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
100701ad:	eb 0c                	jmp    0x100701bb
100701af:	85 d2                	test   edx,edx
100701b1:	7d 08                	jge    0x100701bb
100701b3:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
100701ba:	00 
100701bb:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100701bf:	a1 54 be 11 10       	mov    eax,ds:0x1011be54
100701c4:	8d 14 0f             	lea    edx,[edi+ecx*1]
100701c7:	3b d0                	cmp    edx,eax
100701c9:	7c 08                	jl     0x100701d3
100701cb:	2b c7                	sub    eax,edi
100701cd:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100701d1:	eb 0c                	jmp    0x100701df
100701d3:	85 c9                	test   ecx,ecx
100701d5:	7d 08                	jge    0x100701df
100701d7:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
100701de:	00 
100701df:	8d 44 24 0c          	lea    eax,[esp+0xc]
100701e3:	8b ce                	mov    ecx,esi
100701e5:	50                   	push   eax
100701e6:	e8 65 e4 ff ff       	call   0x1006e650
100701eb:	5f                   	pop    edi
100701ec:	5e                   	pop    esi
100701ed:	5b                   	pop    ebx
100701ee:	83 c4 10             	add    esp,0x10
100701f1:	c2 08 00             	ret    0x8
100701f4:	90                   	nop
100701f5:	90                   	nop
100701f6:	90                   	nop
100701f7:	90                   	nop
100701f8:	90                   	nop
100701f9:	90                   	nop
100701fa:	90                   	nop
100701fb:	90                   	nop
100701fc:	90                   	nop
100701fd:	90                   	nop
100701fe:	90                   	nop
100701ff:	90                   	nop
10070200:	83 ec 08             	sub    esp,0x8
10070203:	8d 41 34             	lea    eax,[ecx+0x34]
10070206:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
1007020a:	53                   	push   ebx
1007020b:	55                   	push   ebp
1007020c:	8a 08                	mov    cl,BYTE PTR [eax]
1007020e:	56                   	push   esi
1007020f:	84 c9                	test   cl,cl
10070211:	57                   	push   edi
10070212:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10070216:	74 12                	je     0x1007022a
10070218:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1007021e:	e8 4d d0 fd ff       	call   0x1004d270
10070223:	8b d8                	mov    ebx,eax
10070225:	83 c3 04             	add    ebx,0x4
10070228:	eb 02                	jmp    0x1007022c
1007022a:	33 db                	xor    ebx,ebx
1007022c:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10070232:	e8 39 d0 fd ff       	call   0x1004d270
10070237:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
1007023b:	8b f8                	mov    edi,eax
1007023d:	68 a8 7b 3a ff       	push   0xff3a7ba8
10070242:	68 2e 2e 2e ff       	push   0xff2e2e2e
10070247:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
1007024a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007024d:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10070250:	51                   	push   ecx
10070251:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10070257:	52                   	push   edx
10070258:	8d 68 01             	lea    ebp,[eax+0x1]
1007025b:	50                   	push   eax
1007025c:	8b 06                	mov    eax,DWORD PTR [esi]
1007025e:	83 c7 02             	add    edi,0x2
10070261:	50                   	push   eax
10070262:	e8 09 93 fd ff       	call   0x10049570
10070267:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1007026b:	80 39 00             	cmp    BYTE PTR [ecx],0x0
1007026e:	74 4a                	je     0x100702ba
10070270:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10070273:	8b 06                	mov    eax,DWORD PTR [esi]
10070275:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1007027b:	68 2e 2e 2e ff       	push   0xff2e2e2e
10070280:	6a 00                	push   0x0
10070282:	53                   	push   ebx
10070283:	52                   	push   edx
10070284:	55                   	push   ebp
10070285:	50                   	push   eax
10070286:	e8 e5 92 fd ff       	call   0x10049570
1007028b:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1007028e:	6a 00                	push   0x0
10070290:	8d 4b fe             	lea    ecx,[ebx-0x2]
10070293:	6a ff                	push   0xffffffff
10070295:	51                   	push   ecx
10070296:	8b 0e                	mov    ecx,DWORD PTR [esi]
10070298:	83 ea 04             	sub    edx,0x4
1007029b:	8d 45 01             	lea    eax,[ebp+0x1]
1007029e:	52                   	push   edx
1007029f:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
100702a3:	83 c1 02             	add    ecx,0x2
100702a6:	50                   	push   eax
100702a7:	a1 ec b6 0d 10       	mov    eax,ds:0x100db6ec
100702ac:	51                   	push   ecx
100702ad:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100702b3:	52                   	push   edx
100702b4:	50                   	push   eax
100702b5:	e8 46 9e fd ff       	call   0x1004a100
100702ba:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100702be:	03 eb                	add    ebp,ebx
100702c0:	33 db                	xor    ebx,ebx
100702c2:	8b 88 f4 08 00 00    	mov    ecx,DWORD PTR [eax+0x8f4]
100702c8:	85 c9                	test   ecx,ecx
100702ca:	0f 8e a5 00 00 00    	jle    0x10070375
100702d0:	8d 4d 01             	lea    ecx,[ebp+0x1]
100702d3:	8d 90 b4 00 00 00    	lea    edx,[eax+0xb4]
100702d9:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
100702dd:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
100702e1:	eb 04                	jmp    0x100702e7
100702e3:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100702e7:	f6 40 30 01          	test   BYTE PTR [eax+0x30],0x1
100702eb:	74 0f                	je     0x100702fc
100702ed:	39 98 f8 08 00 00    	cmp    DWORD PTR [eax+0x8f8],ebx
100702f3:	75 07                	jne    0x100702fc
100702f5:	b8 b4 8f 45 ff       	mov    eax,0xff458fb4
100702fa:	eb 02                	jmp    0x100702fe
100702fc:	33 c0                	xor    eax,eax
100702fe:	8b 0e                	mov    ecx,DWORD PTR [esi]
10070300:	50                   	push   eax
10070301:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10070304:	6a 00                	push   0x0
10070306:	83 e8 02             	sub    eax,0x2
10070309:	57                   	push   edi
1007030a:	50                   	push   eax
1007030b:	41                   	inc    ecx
1007030c:	55                   	push   ebp
1007030d:	51                   	push   ecx
1007030e:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10070314:	e8 57 92 fd ff       	call   0x10049570
10070319:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1007031c:	8b 0e                	mov    ecx,DWORD PTR [esi]
1007031e:	6a 00                	push   0x0
10070320:	8d 47 fe             	lea    eax,[edi-0x2]
10070323:	6a ff                	push   0xffffffff
10070325:	50                   	push   eax
10070326:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1007032a:	83 ea 04             	sub    edx,0x4
1007032d:	52                   	push   edx
1007032e:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
10070332:	83 c1 02             	add    ecx,0x2
10070335:	50                   	push   eax
10070336:	a1 ec b6 0d 10       	mov    eax,ds:0x100db6ec
1007033b:	51                   	push   ecx
1007033c:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10070342:	52                   	push   edx
10070343:	50                   	push   eax
10070344:	e8 b7 9d fd ff       	call   0x1004a100
10070349:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1007034d:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10070351:	03 cf                	add    ecx,edi
10070353:	05 80 00 00 00       	add    eax,0x80
10070358:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1007035c:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10070360:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10070364:	43                   	inc    ebx
10070365:	8b 81 f4 08 00 00    	mov    eax,DWORD PTR [ecx+0x8f4]
1007036b:	03 ef                	add    ebp,edi
1007036d:	3b d8                	cmp    ebx,eax
1007036f:	0f 8c 6e ff ff ff    	jl     0x100702e3
10070375:	5f                   	pop    edi
10070376:	5e                   	pop    esi
10070377:	5d                   	pop    ebp
10070378:	5b                   	pop    ebx
10070379:	83 c4 08             	add    esp,0x8
1007037c:	c2 08 00             	ret    0x8
1007037f:	90                   	nop
10070380:	83 ec 10             	sub    esp,0x10
10070383:	8d 44 24 00          	lea    eax,[esp+0x0]
10070387:	56                   	push   esi
10070388:	8b f1                	mov    esi,ecx
1007038a:	57                   	push   edi
1007038b:	50                   	push   eax
1007038c:	83 4e 30 03          	or     DWORD PTR [esi+0x30],0x3
10070390:	e8 2b e3 ff ff       	call   0x1006e6c0
10070395:	8a 46 34             	mov    al,BYTE PTR [esi+0x34]
10070398:	84 c0                	test   al,al
1007039a:	74 10                	je     0x100703ac
1007039c:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
100703a2:	e8 c9 ce fd ff       	call   0x1004d270
100703a7:	83 c0 04             	add    eax,0x4
100703aa:	eb 02                	jmp    0x100703ae
100703ac:	33 c0                	xor    eax,eax
100703ae:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
100703b2:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100703b6:	03 f8                	add    edi,eax
100703b8:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
100703bc:	3b c1                	cmp    eax,ecx
100703be:	89 7c 24 0c          	mov    DWORD PTR [esp+0xc],edi
100703c2:	7c 39                	jl     0x100703fd
100703c4:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100703c8:	03 d1                	add    edx,ecx
100703ca:	3b c2                	cmp    eax,edx
100703cc:	7d 2f                	jge    0x100703fd
100703ce:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
100703d2:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100703d6:	3b f8                	cmp    edi,eax
100703d8:	7c 23                	jl     0x100703fd
100703da:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
100703e0:	e8 8b ce fd ff       	call   0x1004d270
100703e5:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
100703e9:	8b c8                	mov    ecx,eax
100703eb:	8b c7                	mov    eax,edi
100703ed:	83 c1 02             	add    ecx,0x2
100703f0:	2b c2                	sub    eax,edx
100703f2:	99                   	cdq
100703f3:	f7 f9                	idiv   ecx
100703f5:	3b 86 f4 08 00 00    	cmp    eax,DWORD PTR [esi+0x8f4]
100703fb:	7c 03                	jl     0x10070400
100703fd:	83 c8 ff             	or     eax,0xffffffff
10070400:	89 86 f8 08 00 00    	mov    DWORD PTR [esi+0x8f8],eax
10070406:	5f                   	pop    edi
10070407:	5e                   	pop    esi
10070408:	83 c4 10             	add    esp,0x10
1007040b:	c2 0c 00             	ret    0xc
1007040e:	90                   	nop
1007040f:	90                   	nop
10070410:	83 ec 10             	sub    esp,0x10
10070413:	56                   	push   esi
10070414:	8b f1                	mov    esi,ecx
10070416:	f6 46 30 01          	test   BYTE PTR [esi+0x30],0x1
1007041a:	0f 84 dc 00 00 00    	je     0x100704fc
10070420:	8d 44 24 04          	lea    eax,[esp+0x4]
10070424:	50                   	push   eax
10070425:	e8 96 e2 ff ff       	call   0x1006e6c0
1007042a:	8a 46 34             	mov    al,BYTE PTR [esi+0x34]
1007042d:	84 c0                	test   al,al
1007042f:	74 10                	je     0x10070441
10070431:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10070437:	e8 34 ce fd ff       	call   0x1004d270
1007043c:	83 c0 04             	add    eax,0x4
1007043f:	eb 02                	jmp    0x10070443
10070441:	33 c0                	xor    eax,eax
10070443:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10070447:	57                   	push   edi
10070448:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
1007044c:	03 f8                	add    edi,eax
1007044e:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10070452:	3b c1                	cmp    eax,ecx
10070454:	89 7c 24 0c          	mov    DWORD PTR [esp+0xc],edi
10070458:	7c 39                	jl     0x10070493
1007045a:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1007045e:	03 d1                	add    edx,ecx
10070460:	3b c2                	cmp    eax,edx
10070462:	7d 2f                	jge    0x10070493
10070464:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
10070468:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1007046c:	3b f8                	cmp    edi,eax
1007046e:	7c 23                	jl     0x10070493
10070470:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10070476:	e8 f5 cd fd ff       	call   0x1004d270
1007047b:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
1007047f:	8b c8                	mov    ecx,eax
10070481:	8b c7                	mov    eax,edi
10070483:	83 c1 02             	add    ecx,0x2
10070486:	2b c2                	sub    eax,edx
10070488:	99                   	cdq
10070489:	f7 f9                	idiv   ecx
1007048b:	3b 86 f4 08 00 00    	cmp    eax,DWORD PTR [esi+0x8f4]
10070491:	7c 03                	jl     0x10070496
10070493:	83 c8 ff             	or     eax,0xffffffff
10070496:	6a 07                	push   0x7
10070498:	6a 00                	push   0x0
1007049a:	8b ce                	mov    ecx,esi
1007049c:	89 86 f8 08 00 00    	mov    DWORD PTR [esi+0x8f8],eax
100704a2:	e8 d9 e2 ff ff       	call   0x1006e780
100704a7:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100704ad:	6a 00                	push   0x0
100704af:	e8 8c ed ff ff       	call   0x1006f240
100704b4:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100704ba:	6a 00                	push   0x0
100704bc:	e8 3f ed ff ff       	call   0x1006f200
100704c1:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100704c7:	6a 00                	push   0x0
100704c9:	e8 a2 ed ff ff       	call   0x1006f270
100704ce:	8b 86 f8 08 00 00    	mov    eax,DWORD PTR [esi+0x8f8]
100704d4:	5f                   	pop    edi
100704d5:	85 c0                	test   eax,eax
100704d7:	7c 23                	jl     0x100704fc
100704d9:	6a 1c                	push   0x1c
100704db:	e8 60 cd fc ff       	call   0x1003d240
100704e0:	8b 86 f8 08 00 00    	mov    eax,DWORD PTR [esi+0x8f8]
100704e6:	8b 56 2c             	mov    edx,DWORD PTR [esi+0x2c]
100704e9:	83 c4 04             	add    esp,0x4
100704ec:	8b 8c 86 b4 08 00 00 	mov    ecx,DWORD PTR [esi+eax*4+0x8b4]
100704f3:	51                   	push   ecx
100704f4:	52                   	push   edx
100704f5:	8b ce                	mov    ecx,esi
100704f7:	e8 24 e4 ff ff       	call   0x1006e920
100704fc:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
100704ff:	24 fc                	and    al,0xfc
10070501:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10070504:	5e                   	pop    esi
10070505:	83 c4 10             	add    esp,0x10
10070508:	c2 0c 00             	ret    0xc
1007050b:	90                   	nop
1007050c:	90                   	nop
1007050d:	90                   	nop
1007050e:	90                   	nop
1007050f:	90                   	nop
10070510:	8b 41 30             	mov    eax,DWORD PTR [ecx+0x30]
10070513:	a8 02                	test   al,0x2
10070515:	74 06                	je     0x1007051d
10070517:	0c 01                	or     al,0x1
10070519:	89 41 30             	mov    DWORD PTR [ecx+0x30],eax
1007051c:	c3                   	ret
1007051d:	6a 3c                	push   0x3c
1007051f:	e8 1c cd fc ff       	call   0x1003d240
10070524:	59                   	pop    ecx
10070525:	c3                   	ret
10070526:	90                   	nop
10070527:	90                   	nop
10070528:	90                   	nop
10070529:	90                   	nop
1007052a:	90                   	nop
1007052b:	90                   	nop
1007052c:	90                   	nop
1007052d:	90                   	nop
1007052e:	90                   	nop
1007052f:	90                   	nop
10070530:	83 ec 10             	sub    esp,0x10
10070533:	57                   	push   edi
10070534:	8b f9                	mov    edi,ecx
10070536:	f6 47 30 01          	test   BYTE PTR [edi+0x30],0x1
1007053a:	74 7d                	je     0x100705b9
1007053c:	8d 44 24 04          	lea    eax,[esp+0x4]
10070540:	50                   	push   eax
10070541:	e8 7a e1 ff ff       	call   0x1006e6c0
10070546:	8a 47 34             	mov    al,BYTE PTR [edi+0x34]
10070549:	84 c0                	test   al,al
1007054b:	74 10                	je     0x1007055d
1007054d:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10070553:	e8 18 cd fd ff       	call   0x1004d270
10070558:	83 c0 04             	add    eax,0x4
1007055b:	eb 02                	jmp    0x1007055f
1007055d:	33 c0                	xor    eax,eax
1007055f:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10070563:	56                   	push   esi
10070564:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
10070568:	03 f0                	add    esi,eax
1007056a:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1007056e:	3b c1                	cmp    eax,ecx
10070570:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
10070574:	7c 39                	jl     0x100705af
10070576:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1007057a:	03 d1                	add    edx,ecx
1007057c:	3b c2                	cmp    eax,edx
1007057e:	7d 2f                	jge    0x100705af
10070580:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
10070584:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10070588:	3b f0                	cmp    esi,eax
1007058a:	7c 23                	jl     0x100705af
1007058c:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10070592:	e8 d9 cc fd ff       	call   0x1004d270
10070597:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
1007059b:	8b c8                	mov    ecx,eax
1007059d:	8b c6                	mov    eax,esi
1007059f:	83 c1 02             	add    ecx,0x2
100705a2:	2b c2                	sub    eax,edx
100705a4:	99                   	cdq
100705a5:	f7 f9                	idiv   ecx
100705a7:	3b 87 f4 08 00 00    	cmp    eax,DWORD PTR [edi+0x8f4]
100705ad:	7c 03                	jl     0x100705b2
100705af:	83 c8 ff             	or     eax,0xffffffff
100705b2:	89 87 f8 08 00 00    	mov    DWORD PTR [edi+0x8f8],eax
100705b8:	5e                   	pop    esi
100705b9:	5f                   	pop    edi
100705ba:	83 c4 10             	add    esp,0x10
100705bd:	c2 0c 00             	ret    0xc
100705c0:	83 7c 24 04 1b       	cmp    DWORD PTR [esp+0x4],0x1b
100705c5:	75 30                	jne    0x100705f7
100705c7:	6a 07                	push   0x7
100705c9:	6a 00                	push   0x0
100705cb:	e8 b0 e1 ff ff       	call   0x1006e780
100705d0:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100705d6:	6a 00                	push   0x0
100705d8:	e8 63 ec ff ff       	call   0x1006f240
100705dd:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100705e3:	6a 00                	push   0x0
100705e5:	e8 16 ec ff ff       	call   0x1006f200
100705ea:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100705f0:	6a 00                	push   0x0
100705f2:	e8 79 ec ff ff       	call   0x1006f270
100705f7:	b8 01 00 00 00       	mov    eax,0x1
100705fc:	c2 04 00             	ret    0x4
100705ff:	90                   	nop
10070600:	6a ff                	push   0xffffffff
10070602:	68 18 61 0b 10       	push   0x100b6118
10070607:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1007060d:	50                   	push   eax
1007060e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10070615:	51                   	push   ecx
10070616:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1007061a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1007061e:	56                   	push   esi
1007061f:	8b f1                	mov    esi,ecx
10070621:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
10070625:	50                   	push   eax
10070626:	51                   	push   ecx
10070627:	52                   	push   edx
10070628:	8b ce                	mov    ecx,esi
1007062a:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
1007062e:	e8 4d dd ff ff       	call   0x1006e380
10070633:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10070637:	33 c9                	xor    ecx,ecx
10070639:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
1007063c:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10070640:	3b c1                	cmp    eax,ecx
10070642:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10070646:	c7 06 10 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb10
1007064c:	89 4e 30             	mov    DWORD PTR [esi+0x30],ecx
1007064f:	74 12                	je     0x10070663
10070651:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10070657:	50                   	push   eax
10070658:	8b 11                	mov    edx,DWORD PTR [ecx]
1007065a:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
10070660:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10070663:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10070667:	8b c6                	mov    eax,esi
10070669:	5e                   	pop    esi
1007066a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10070671:	83 c4 10             	add    esp,0x10
10070674:	c2 14 00             	ret    0x14
10070677:	90                   	nop
10070678:	90                   	nop
10070679:	90                   	nop
1007067a:	90                   	nop
1007067b:	90                   	nop
1007067c:	90                   	nop
1007067d:	90                   	nop
1007067e:	90                   	nop
1007067f:	90                   	nop
10070680:	b8 20 00 00 00       	mov    eax,0x20
10070685:	c3                   	ret
10070686:	90                   	nop
10070687:	90                   	nop
10070688:	90                   	nop
10070689:	90                   	nop
1007068a:	90                   	nop
1007068b:	90                   	nop
1007068c:	90                   	nop
1007068d:	90                   	nop
1007068e:	90                   	nop
1007068f:	90                   	nop
10070690:	56                   	push   esi
10070691:	8b f1                	mov    esi,ecx
10070693:	e8 18 00 00 00       	call   0x100706b0
10070698:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1007069d:	74 09                	je     0x100706a8
1007069f:	56                   	push   esi
100706a0:	e8 79 32 03 00       	call   0x100a391e
100706a5:	83 c4 04             	add    esp,0x4
100706a8:	8b c6                	mov    eax,esi
100706aa:	5e                   	pop    esi
100706ab:	c2 04 00             	ret    0x4
100706ae:	90                   	nop
100706af:	90                   	nop
100706b0:	6a ff                	push   0xffffffff
100706b2:	68 38 61 0b 10       	push   0x100b6138
100706b7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100706bd:	50                   	push   eax
100706be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100706c5:	51                   	push   ecx
100706c6:	56                   	push   esi
100706c7:	8b f1                	mov    esi,ecx
100706c9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
100706cd:	c7 06 10 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb10
100706d3:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
100706d6:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
100706dd:	00 
100706de:	85 c0                	test   eax,eax
100706e0:	74 16                	je     0x100706f8
100706e2:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
100706e8:	50                   	push   eax
100706e9:	8b 11                	mov    edx,DWORD PTR [ecx]
100706eb:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100706f1:	c7 46 30 00 00 00 00 	mov    DWORD PTR [esi+0x30],0x0
100706f8:	8b ce                	mov    ecx,esi
100706fa:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
10070701:	ff 
10070702:	e8 19 de ff ff       	call   0x1006e520
10070707:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1007070b:	5e                   	pop    esi
1007070c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10070713:	83 c4 10             	add    esp,0x10
10070716:	c3                   	ret
10070717:	90                   	nop
10070718:	90                   	nop
10070719:	90                   	nop
1007071a:	90                   	nop
1007071b:	90                   	nop
1007071c:	90                   	nop
1007071d:	90                   	nop
1007071e:	90                   	nop
1007071f:	90                   	nop
10070720:	56                   	push   esi
10070721:	8b f1                	mov    esi,ecx
10070723:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10070726:	85 c0                	test   eax,eax
10070728:	74 16                	je     0x10070740
1007072a:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10070730:	50                   	push   eax
10070731:	8b 11                	mov    edx,DWORD PTR [ecx]
10070733:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10070739:	c7 46 30 00 00 00 00 	mov    DWORD PTR [esi+0x30],0x0
10070740:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
10070745:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10070749:	52                   	push   edx
1007074a:	50                   	push   eax
1007074b:	8b 08                	mov    ecx,DWORD PTR [eax]
1007074d:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10070753:	83 c4 08             	add    esp,0x8
10070756:	33 c9                	xor    ecx,ecx
10070758:	85 c0                	test   eax,eax
1007075a:	0f 95 c1             	setne  cl
1007075d:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10070760:	8b c1                	mov    eax,ecx
10070762:	5e                   	pop    esi
10070763:	c2 04 00             	ret    0x4
10070766:	90                   	nop
10070767:	90                   	nop
10070768:	90                   	nop
10070769:	90                   	nop
1007076a:	90                   	nop
1007076b:	90                   	nop
1007076c:	90                   	nop
1007076d:	90                   	nop
1007076e:	90                   	nop
1007076f:	90                   	nop
10070770:	56                   	push   esi
10070771:	8b f1                	mov    esi,ecx
10070773:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10070776:	85 c0                	test   eax,eax
10070778:	74 16                	je     0x10070790
1007077a:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10070780:	50                   	push   eax
10070781:	8b 11                	mov    edx,DWORD PTR [ecx]
10070783:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10070789:	c7 46 30 00 00 00 00 	mov    DWORD PTR [esi+0x30],0x0
10070790:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10070794:	85 c0                	test   eax,eax
10070796:	75 09                	jne    0x100707a1
10070798:	b8 01 00 00 00       	mov    eax,0x1
1007079d:	5e                   	pop    esi
1007079e:	c2 04 00             	ret    0x4
100707a1:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
100707a7:	50                   	push   eax
100707a8:	8b 11                	mov    edx,DWORD PTR [ecx]
100707aa:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
100707b0:	33 c9                	xor    ecx,ecx
100707b2:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
100707b5:	85 c0                	test   eax,eax
100707b7:	0f 95 c1             	setne  cl
100707ba:	8b c1                	mov    eax,ecx
100707bc:	5e                   	pop    esi
100707bd:	c2 04 00             	ret    0x4
100707c0:	56                   	push   esi
100707c1:	8b f1                	mov    esi,ecx
100707c3:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
100707c6:	85 c0                	test   eax,eax
100707c8:	74 16                	je     0x100707e0
100707ca:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
100707d0:	50                   	push   eax
100707d1:	8b 11                	mov    edx,DWORD PTR [ecx]
100707d3:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100707d9:	c7 46 30 00 00 00 00 	mov    DWORD PTR [esi+0x30],0x0
100707e0:	5e                   	pop    esi
100707e1:	c3                   	ret
100707e2:	90                   	nop
100707e3:	90                   	nop
100707e4:	90                   	nop
100707e5:	90                   	nop
100707e6:	90                   	nop
100707e7:	90                   	nop
100707e8:	90                   	nop
100707e9:	90                   	nop
100707ea:	90                   	nop
100707eb:	90                   	nop
100707ec:	90                   	nop
100707ed:	90                   	nop
100707ee:	90                   	nop
100707ef:	90                   	nop
100707f0:	a1 f0 b6 0d 10       	mov    eax,ds:0x100db6f0
100707f5:	c7 05 04 41 12 10 05 	mov    DWORD PTR ds:0x10124104,0x5
100707fc:	00 00 00 
100707ff:	a3 00 41 12 10       	mov    ds:0x10124100,eax
10070804:	83 c8 ff             	or     eax,0xffffffff
10070807:	a3 08 41 12 10       	mov    ds:0x10124108,eax
1007080c:	c7 05 0c 41 12 10 30 	mov    DWORD PTR ds:0x1012410c,0x1011c930
10070813:	c9 11 10 
10070816:	c7 05 10 41 12 10 bc 	mov    DWORD PTR ds:0x10124110,0x1011c9bc
1007081d:	c9 11 10 
10070820:	a3 14 41 12 10       	mov    ds:0x10124114,eax
10070825:	c7 05 18 41 12 10 4c 	mov    DWORD PTR ds:0x10124118,0x1011c94c
1007082c:	c9 11 10 
1007082f:	c7 05 1c 41 12 10 d8 	mov    DWORD PTR ds:0x1012411c,0x1011c9d8
10070836:	c9 11 10 
10070839:	c7 05 20 41 12 10 db 	mov    DWORD PTR ds:0x10124120,0xffa6c7db
10070840:	c7 a6 ff 
10070843:	c7 05 24 41 12 10 68 	mov    DWORD PTR ds:0x10124124,0x1011c968
1007084a:	c9 11 10 
1007084d:	c7 05 28 41 12 10 f4 	mov    DWORD PTR ds:0x10124128,0x1011c9f4
10070854:	c9 11 10 
10070857:	a3 2c 41 12 10       	mov    ds:0x1012412c,eax
1007085c:	c7 05 30 41 12 10 84 	mov    DWORD PTR ds:0x10124130,0x1011c984
10070863:	c9 11 10 
10070866:	c7 05 34 41 12 10 10 	mov    DWORD PTR ds:0x10124134,0x1011ca10
1007086d:	ca 11 10 
10070870:	a3 38 41 12 10       	mov    ds:0x10124138,eax
10070875:	c7 05 3c 41 12 10 a0 	mov    DWORD PTR ds:0x1012413c,0x1011c9a0
1007087c:	c9 11 10 
1007087f:	c7 05 40 41 12 10 2c 	mov    DWORD PTR ds:0x10124140,0x1011ca2c
10070886:	ca 11 10 
10070889:	c3                   	ret
1007088a:	90                   	nop
1007088b:	90                   	nop
1007088c:	90                   	nop
1007088d:	90                   	nop
1007088e:	90                   	nop
1007088f:	90                   	nop
10070890:	6a ff                	push   0xffffffff
10070892:	68 60 61 0b 10       	push   0x100b6160
10070897:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1007089d:	50                   	push   eax
1007089e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100708a5:	51                   	push   ecx
100708a6:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
100708aa:	53                   	push   ebx
100708ab:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
100708af:	56                   	push   esi
100708b0:	8b f1                	mov    esi,ecx
100708b2:	50                   	push   eax
100708b3:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
100708b7:	53                   	push   ebx
100708b8:	51                   	push   ecx
100708b9:	8b ce                	mov    ecx,esi
100708bb:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
100708bf:	e8 bc da ff ff       	call   0x1006e380
100708c4:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
100708c8:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
100708cc:	85 c0                	test   eax,eax
100708ce:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
100708d5:	00 
100708d6:	c7 06 10 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb10
100708dc:	89 56 2c             	mov    DWORD PTR [esi+0x2c],edx
100708df:	c7 46 30 00 00 00 00 	mov    DWORD PTR [esi+0x30],0x0
100708e6:	74 12                	je     0x100708fa
100708e8:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
100708ee:	50                   	push   eax
100708ef:	8b 11                	mov    edx,DWORD PTR [ecx]
100708f1:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
100708f7:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
100708fa:	f6 c3 02             	test   bl,0x2
100708fd:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
10070904:	00 
10070905:	c7 06 88 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb88
1007090b:	c7 46 3c 00 00 00 00 	mov    DWORD PTR [esi+0x3c],0x0
10070912:	75 07                	jne    0x1007091b
10070914:	c7 46 3c 04 00 00 00 	mov    DWORD PTR [esi+0x3c],0x4
1007091b:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
1007091e:	8b ce                	mov    ecx,esi
10070920:	50                   	push   eax
10070921:	c7 46 38 48 41 12 10 	mov    DWORD PTR [esi+0x38],0x10124148
10070928:	ff 15 04 bc 0b 10    	call   DWORD PTR ds:0x100bbc04
1007092e:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10070931:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10070935:	85 c0                	test   eax,eax
10070937:	75 05                	jne    0x1007093e
10070939:	b8 00 41 12 10       	mov    eax,0x10124100
1007093e:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10070942:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
10070945:	8b c6                	mov    eax,esi
10070947:	5e                   	pop    esi
10070948:	5b                   	pop    ebx
10070949:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10070950:	83 c4 10             	add    esp,0x10
10070953:	c2 18 00             	ret    0x18
10070956:	90                   	nop
10070957:	90                   	nop
10070958:	90                   	nop
10070959:	90                   	nop
1007095a:	90                   	nop
1007095b:	90                   	nop
1007095c:	90                   	nop
1007095d:	90                   	nop
1007095e:	90                   	nop
1007095f:	90                   	nop
10070960:	b8 00 41 12 10       	mov    eax,0x10124100
10070965:	c3                   	ret
10070966:	90                   	nop
10070967:	90                   	nop
10070968:	90                   	nop
10070969:	90                   	nop
1007096a:	90                   	nop
1007096b:	90                   	nop
1007096c:	90                   	nop
1007096d:	90                   	nop
1007096e:	90                   	nop
1007096f:	90                   	nop
10070970:	56                   	push   esi
10070971:	8b f1                	mov    esi,ecx
10070973:	e8 18 00 00 00       	call   0x10070990
10070978:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1007097d:	74 09                	je     0x10070988
1007097f:	56                   	push   esi
10070980:	e8 99 2f 03 00       	call   0x100a391e
10070985:	83 c4 04             	add    esp,0x4
10070988:	8b c6                	mov    eax,esi
1007098a:	5e                   	pop    esi
1007098b:	c2 04 00             	ret    0x4
1007098e:	90                   	nop
1007098f:	90                   	nop
10070990:	6a ff                	push   0xffffffff
10070992:	68 78 61 0b 10       	push   0x100b6178
10070997:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1007099d:	50                   	push   eax
1007099e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100709a5:	51                   	push   ecx
100709a6:	56                   	push   esi
100709a7:	8b f1                	mov    esi,ecx
100709a9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
100709ad:	c7 06 10 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb10
100709b3:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
100709b6:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
100709bd:	00 
100709be:	85 c0                	test   eax,eax
100709c0:	74 16                	je     0x100709d8
100709c2:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
100709c8:	50                   	push   eax
100709c9:	8b 11                	mov    edx,DWORD PTR [ecx]
100709cb:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100709d1:	c7 46 30 00 00 00 00 	mov    DWORD PTR [esi+0x30],0x0
100709d8:	8b ce                	mov    ecx,esi
100709da:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
100709e1:	ff 
100709e2:	e8 39 db ff ff       	call   0x1006e520
100709e7:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100709eb:	5e                   	pop    esi
100709ec:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100709f3:	83 c4 10             	add    esp,0x10
100709f6:	c3                   	ret
100709f7:	90                   	nop
100709f8:	90                   	nop
100709f9:	90                   	nop
100709fa:	90                   	nop
100709fb:	90                   	nop
100709fc:	90                   	nop
100709fd:	90                   	nop
100709fe:	90                   	nop
100709ff:	90                   	nop
10070a00:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10070a04:	85 c0                	test   eax,eax
10070a06:	75 05                	jne    0x10070a0d
10070a08:	b8 48 41 12 10       	mov    eax,0x10124148
10070a0d:	8b 51 3c             	mov    edx,DWORD PTR [ecx+0x3c]
10070a10:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
10070a13:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10070a17:	83 e0 70             	and    eax,0x70
10070a1a:	0b d0                	or     edx,eax
10070a1c:	89 51 3c             	mov    DWORD PTR [ecx+0x3c],edx
10070a1f:	c2 08 00             	ret    0x8
10070a22:	90                   	nop
10070a23:	90                   	nop
10070a24:	90                   	nop
10070a25:	90                   	nop
10070a26:	90                   	nop
10070a27:	90                   	nop
10070a28:	90                   	nop
10070a29:	90                   	nop
10070a2a:	90                   	nop
10070a2b:	90                   	nop
10070a2c:	90                   	nop
10070a2d:	90                   	nop
10070a2e:	90                   	nop
10070a2f:	90                   	nop
10070a30:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10070a34:	56                   	push   esi
10070a35:	8b f1                	mov    esi,ecx
10070a37:	85 c0                	test   eax,eax
10070a39:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
10070a3c:	74 04                	je     0x10070a42
10070a3e:	0c 08                	or     al,0x8
10070a40:	eb 02                	jmp    0x10070a44
10070a42:	24 f7                	and    al,0xf7
10070a44:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
10070a47:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
10070a4a:	8b 06                	mov    eax,DWORD PTR [esi]
10070a4c:	51                   	push   ecx
10070a4d:	8b ce                	mov    ecx,esi
10070a4f:	ff 50 7c             	call   DWORD PTR [eax+0x7c]
10070a52:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10070a55:	5e                   	pop    esi
10070a56:	c2 04 00             	ret    0x4
10070a59:	90                   	nop
10070a5a:	90                   	nop
10070a5b:	90                   	nop
10070a5c:	90                   	nop
10070a5d:	90                   	nop
10070a5e:	90                   	nop
10070a5f:	90                   	nop
10070a60:	53                   	push   ebx
10070a61:	56                   	push   esi
10070a62:	8b f1                	mov    esi,ecx
10070a64:	57                   	push   edi
10070a65:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
10070a68:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10070a6b:	40                   	inc    eax
10070a6c:	8d 04 40             	lea    eax,[eax+eax*2]
10070a6f:	8b 14 81             	mov    edx,DWORD PTR [ecx+eax*4]
10070a72:	8a 46 3c             	mov    al,BYTE PTR [esi+0x3c]
10070a75:	8b 7a 14             	mov    edi,DWORD PTR [edx+0x14]
10070a78:	d1 e7                	shl    edi,1
10070a7a:	a8 10                	test   al,0x10
10070a7c:	8d 5f 01             	lea    ebx,[edi+0x1]
10070a7f:	74 25                	je     0x10070aa6
10070a81:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
10070a84:	85 c0                	test   eax,eax
10070a86:	74 1e                	je     0x10070aa6
10070a88:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
10070a8e:	8b 40 14             	mov    eax,DWORD PTR [eax+0x14]
10070a91:	8d 14 09             	lea    edx,[ecx+ecx*1]
10070a94:	c1 ea 0a             	shr    edx,0xa
10070a97:	8d 04 50             	lea    eax,[eax+edx*2]
10070a9a:	03 c7                	add    eax,edi
10070a9c:	3b d8                	cmp    ebx,eax
10070a9e:	7e 3d                	jle    0x10070add
10070aa0:	5f                   	pop    edi
10070aa1:	8b c3                	mov    eax,ebx
10070aa3:	5e                   	pop    esi
10070aa4:	5b                   	pop    ebx
10070aa5:	c3                   	ret
10070aa6:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10070aac:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10070aaf:	50                   	push   eax
10070ab0:	8b 11                	mov    edx,DWORD PTR [ecx]
10070ab2:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10070ab8:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10070abb:	50                   	push   eax
10070abc:	8b 09                	mov    ecx,DWORD PTR [ecx]
10070abe:	e8 5d c7 fd ff       	call   0x1004d220
10070ac3:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
10070ac9:	8d 14 49             	lea    edx,[ecx+ecx*2]
10070acc:	c1 e2 02             	shl    edx,0x2
10070acf:	c1 ea 0a             	shr    edx,0xa
10070ad2:	8d 04 50             	lea    eax,[eax+edx*2]
10070ad5:	03 c7                	add    eax,edi
10070ad7:	3b d8                	cmp    ebx,eax
10070ad9:	7e 02                	jle    0x10070add
10070adb:	8b c3                	mov    eax,ebx
10070add:	5f                   	pop    edi
10070ade:	5e                   	pop    esi
10070adf:	5b                   	pop    ebx
10070ae0:	c3                   	ret
10070ae1:	90                   	nop
10070ae2:	90                   	nop
10070ae3:	90                   	nop
10070ae4:	90                   	nop
10070ae5:	90                   	nop
10070ae6:	90                   	nop
10070ae7:	90                   	nop
10070ae8:	90                   	nop
10070ae9:	90                   	nop
10070aea:	90                   	nop
10070aeb:	90                   	nop
10070aec:	90                   	nop
10070aed:	90                   	nop
10070aee:	90                   	nop
10070aef:	90                   	nop
10070af0:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
10070af3:	8b 49 34             	mov    ecx,DWORD PTR [ecx+0x34]
10070af6:	40                   	inc    eax
10070af7:	8d 04 40             	lea    eax,[eax+eax*2]
10070afa:	8b 14 81             	mov    edx,DWORD PTR [ecx+eax*4]
10070afd:	8b 42 18             	mov    eax,DWORD PTR [edx+0x18]
10070b00:	c3                   	ret
10070b01:	90                   	nop
10070b02:	90                   	nop
10070b03:	90                   	nop
10070b04:	90                   	nop
10070b05:	90                   	nop
10070b06:	90                   	nop
10070b07:	90                   	nop
10070b08:	90                   	nop
10070b09:	90                   	nop
10070b0a:	90                   	nop
10070b0b:	90                   	nop
10070b0c:	90                   	nop
10070b0d:	90                   	nop
10070b0e:	90                   	nop
10070b0f:	90                   	nop
10070b10:	8a 44 24 04          	mov    al,BYTE PTR [esp+0x4]
10070b14:	56                   	push   esi
10070b15:	a8 02                	test   al,0x2
10070b17:	8a 44 24 0c          	mov    al,BYTE PTR [esp+0xc]
10070b1b:	8b f1                	mov    esi,ecx
10070b1d:	74 0c                	je     0x10070b2b
10070b1f:	a8 02                	test   al,0x2
10070b21:	75 0c                	jne    0x10070b2f
10070b23:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
10070b26:	83 e2 fb             	and    edx,0xfffffffb
10070b29:	eb 0a                	jmp    0x10070b35
10070b2b:	a8 02                	test   al,0x2
10070b2d:	74 16                	je     0x10070b45
10070b2f:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
10070b32:	83 ca 04             	or     edx,0x4
10070b35:	89 56 3c             	mov    DWORD PTR [esi+0x3c],edx
10070b38:	8b c2                	mov    eax,edx
10070b3a:	8b 16                	mov    edx,DWORD PTR [esi]
10070b3c:	50                   	push   eax
10070b3d:	8b ce                	mov    ecx,esi
10070b3f:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
10070b42:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10070b45:	5e                   	pop    esi
10070b46:	c2 08 00             	ret    0x8
10070b49:	90                   	nop
10070b4a:	90                   	nop
10070b4b:	90                   	nop
10070b4c:	90                   	nop
10070b4d:	90                   	nop
10070b4e:	90                   	nop
10070b4f:	90                   	nop
10070b50:	56                   	push   esi
10070b51:	8b f1                	mov    esi,ecx
10070b53:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
10070b56:	83 ca 01             	or     edx,0x1
10070b59:	89 56 3c             	mov    DWORD PTR [esi+0x3c],edx
10070b5c:	8b c2                	mov    eax,edx
10070b5e:	8b 16                	mov    edx,DWORD PTR [esi]
10070b60:	50                   	push   eax
10070b61:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
10070b64:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10070b67:	5e                   	pop    esi
10070b68:	c2 0c 00             	ret    0xc
10070b6b:	90                   	nop
10070b6c:	90                   	nop
10070b6d:	90                   	nop
10070b6e:	90                   	nop
10070b6f:	90                   	nop
10070b70:	56                   	push   esi
10070b71:	8b f1                	mov    esi,ecx
10070b73:	57                   	push   edi
10070b74:	33 c0                	xor    eax,eax
10070b76:	8b 7e 40             	mov    edi,DWORD PTR [esi+0x40]
10070b79:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
10070b7c:	83 ff 01             	cmp    edi,0x1
10070b7f:	0f 94 c0             	sete   al
10070b82:	83 e2 fe             	and    edx,0xfffffffe
10070b85:	8b f8                	mov    edi,eax
10070b87:	89 56 3c             	mov    DWORD PTR [esi+0x3c],edx
10070b8a:	8b c2                	mov    eax,edx
10070b8c:	8b 16                	mov    edx,DWORD PTR [esi]
10070b8e:	50                   	push   eax
10070b8f:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
10070b92:	85 ff                	test   edi,edi
10070b94:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10070b97:	74 21                	je     0x10070bba
10070b99:	6a 1c                	push   0x1c
10070b9b:	e8 a0 c6 fc ff       	call   0x1003d240
10070ba0:	8b 06                	mov    eax,DWORD PTR [esi]
10070ba2:	83 c4 04             	add    esp,0x4
10070ba5:	8b ce                	mov    ecx,esi
10070ba7:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
10070bad:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
10070bb0:	6a 00                	push   0x0
10070bb2:	51                   	push   ecx
10070bb3:	8b ce                	mov    ecx,esi
10070bb5:	e8 66 dd ff ff       	call   0x1006e920
10070bba:	5f                   	pop    edi
10070bbb:	5e                   	pop    esi
10070bbc:	c2 0c 00             	ret    0xc
10070bbf:	90                   	nop
10070bc0:	56                   	push   esi
10070bc1:	8b f1                	mov    esi,ecx
10070bc3:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
10070bc6:	83 ca 02             	or     edx,0x2
10070bc9:	89 56 3c             	mov    DWORD PTR [esi+0x3c],edx
10070bcc:	8b c2                	mov    eax,edx
10070bce:	8b 16                	mov    edx,DWORD PTR [esi]
10070bd0:	50                   	push   eax
10070bd1:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
10070bd4:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10070bd7:	8a 46 3c             	mov    al,BYTE PTR [esi+0x3c]
10070bda:	a8 04                	test   al,0x4
10070bdc:	5e                   	pop    esi
10070bdd:	75 08                	jne    0x10070be7
10070bdf:	6a 3c                	push   0x3c
10070be1:	e8 5a c6 fc ff       	call   0x1003d240
10070be6:	59                   	pop    ecx
10070be7:	c3                   	ret
10070be8:	90                   	nop
10070be9:	90                   	nop
10070bea:	90                   	nop
10070beb:	90                   	nop
10070bec:	90                   	nop
10070bed:	90                   	nop
10070bee:	90                   	nop
10070bef:	90                   	nop
10070bf0:	56                   	push   esi
10070bf1:	8b f1                	mov    esi,ecx
10070bf3:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
10070bf6:	83 e2 fd             	and    edx,0xfffffffd
10070bf9:	89 56 3c             	mov    DWORD PTR [esi+0x3c],edx
10070bfc:	8b c2                	mov    eax,edx
10070bfe:	8b 16                	mov    edx,DWORD PTR [esi]
10070c00:	50                   	push   eax
10070c01:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
10070c04:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10070c07:	5e                   	pop    esi
10070c08:	c3                   	ret
10070c09:	90                   	nop
10070c0a:	90                   	nop
10070c0b:	90                   	nop
10070c0c:	90                   	nop
10070c0d:	90                   	nop
10070c0e:	90                   	nop
10070c0f:	90                   	nop
10070c10:	83 ec 08             	sub    esp,0x8
10070c13:	53                   	push   ebx
10070c14:	55                   	push   ebp
10070c15:	56                   	push   esi
10070c16:	57                   	push   edi
10070c17:	8b f9                	mov    edi,ecx
10070c19:	8b 47 40             	mov    eax,DWORD PTR [edi+0x40]
10070c1c:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
10070c1f:	8d 04 40             	lea    eax,[eax+eax*2]
10070c22:	8b 54 81 08          	mov    edx,DWORD PTR [ecx+eax*4+0x8]
10070c26:	8b 5c 81 0c          	mov    ebx,DWORD PTR [ecx+eax*4+0xc]
10070c2a:	8b 6c 81 10          	mov    ebp,DWORD PTR [ecx+eax*4+0x10]
10070c2e:	8d 44 81 08          	lea    eax,[ecx+eax*4+0x8]
10070c32:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10070c38:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10070c3c:	8b 57 30             	mov    edx,DWORD PTR [edi+0x30]
10070c3f:	8b 01                	mov    eax,DWORD PTR [ecx]
10070c41:	52                   	push   edx
10070c42:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
10070c48:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
10070c4c:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10070c50:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10070c53:	8b 0e                	mov    ecx,DWORD PTR [esi]
10070c55:	50                   	push   eax
10070c56:	51                   	push   ecx
10070c57:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10070c5d:	6a ff                	push   0xffffffff
10070c5f:	6a 00                	push   0x0
10070c61:	53                   	push   ebx
10070c62:	e8 89 a8 fd ff       	call   0x1004b4f0
10070c67:	8b 43 14             	mov    eax,DWORD PTR [ebx+0x14]
10070c6a:	8b 55 18             	mov    edx,DWORD PTR [ebp+0x18]
10070c6d:	52                   	push   edx
10070c6e:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10070c71:	8d 0c 00             	lea    ecx,[eax+eax*1]
10070c74:	2b d1                	sub    edx,ecx
10070c76:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10070c79:	52                   	push   edx
10070c7a:	8b 16                	mov    edx,DWORD PTR [esi]
10070c7c:	03 c2                	add    eax,edx
10070c7e:	51                   	push   ecx
10070c7f:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10070c85:	50                   	push   eax
10070c86:	6a ff                	push   0xffffffff
10070c88:	6a 00                	push   0x0
10070c8a:	55                   	push   ebp
10070c8b:	e8 90 a8 fd ff       	call   0x1004b520
10070c90:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10070c93:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10070c96:	8b 4b 14             	mov    ecx,DWORD PTR [ebx+0x14]
10070c99:	52                   	push   edx
10070c9a:	8b 16                	mov    edx,DWORD PTR [esi]
10070c9c:	2b c1                	sub    eax,ecx
10070c9e:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10070ca4:	03 c2                	add    eax,edx
10070ca6:	50                   	push   eax
10070ca7:	6a ff                	push   0xffffffff
10070ca9:	6a 02                	push   0x2
10070cab:	53                   	push   ebx
10070cac:	e8 3f a8 fd ff       	call   0x1004b4f0
10070cb1:	8b 4f 3c             	mov    ecx,DWORD PTR [edi+0x3c]
10070cb4:	f6 c1 10             	test   cl,0x10
10070cb7:	74 62                	je     0x10070d1b
10070cb9:	8b 7f 38             	mov    edi,DWORD PTR [edi+0x38]
10070cbc:	8b 2e                	mov    ebp,DWORD PTR [esi]
10070cbe:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
10070cc1:	99                   	cdq
10070cc2:	2b c2                	sub    eax,edx
10070cc4:	8b d8                	mov    ebx,eax
10070cc6:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10070cc9:	99                   	cdq
10070cca:	2b c2                	sub    eax,edx
10070ccc:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10070ccf:	d1 fb                	sar    ebx,1
10070cd1:	d1 f8                	sar    eax,1
10070cd3:	2b c3                	sub    eax,ebx
10070cd5:	03 c2                	add    eax,edx
10070cd7:	50                   	push   eax
10070cd8:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
10070cdb:	99                   	cdq
10070cdc:	2b c2                	sub    eax,edx
10070cde:	8b d8                	mov    ebx,eax
10070ce0:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10070ce3:	99                   	cdq
10070ce4:	2b c2                	sub    eax,edx
10070ce6:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10070cea:	d1 fb                	sar    ebx,1
10070cec:	d1 f8                	sar    eax,1
10070cee:	2b c3                	sub    eax,ebx
10070cf0:	03 c5                	add    eax,ebp
10070cf2:	50                   	push   eax
10070cf3:	8b c1                	mov    eax,ecx
10070cf5:	c1 e8 02             	shr    eax,0x2
10070cf8:	83 e0 10             	and    eax,0x10
10070cfb:	83 e1 20             	and    ecx,0x20
10070cfe:	0b c1                	or     eax,ecx
10070d00:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10070d06:	c1 e8 04             	shr    eax,0x4
10070d09:	52                   	push   edx
10070d0a:	50                   	push   eax
10070d0b:	57                   	push   edi
10070d0c:	e8 df a7 fd ff       	call   0x1004b4f0
10070d11:	5f                   	pop    edi
10070d12:	5e                   	pop    esi
10070d13:	5d                   	pop    ebp
10070d14:	5b                   	pop    ebx
10070d15:	83 c4 08             	add    esp,0x8
10070d18:	c2 08 00             	ret    0x8
10070d1b:	8b 7f 34             	mov    edi,DWORD PTR [edi+0x34]
10070d1e:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10070d22:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
10070d25:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10070d28:	51                   	push   ecx
10070d29:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10070d2c:	52                   	push   edx
10070d2d:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10070d30:	50                   	push   eax
10070d31:	8b 06                	mov    eax,DWORD PTR [esi]
10070d33:	51                   	push   ecx
10070d34:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10070d38:	52                   	push   edx
10070d39:	8b 17                	mov    edx,DWORD PTR [edi]
10070d3b:	50                   	push   eax
10070d3c:	51                   	push   ecx
10070d3d:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10070d43:	52                   	push   edx
10070d44:	e8 b7 93 fd ff       	call   0x1004a100
10070d49:	5f                   	pop    edi
10070d4a:	5e                   	pop    esi
10070d4b:	5d                   	pop    ebp
10070d4c:	5b                   	pop    ebx
10070d4d:	83 c4 08             	add    esp,0x8
10070d50:	c2 08 00             	ret    0x8
10070d53:	90                   	nop
10070d54:	90                   	nop
10070d55:	90                   	nop
10070d56:	90                   	nop
10070d57:	90                   	nop
10070d58:	90                   	nop
10070d59:	90                   	nop
10070d5a:	90                   	nop
10070d5b:	90                   	nop
10070d5c:	90                   	nop
10070d5d:	90                   	nop
10070d5e:	90                   	nop
10070d5f:	90                   	nop
10070d60:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10070d64:	a8 04                	test   al,0x4
10070d66:	74 08                	je     0x10070d70
10070d68:	b8 02 00 00 00       	mov    eax,0x2
10070d6d:	c2 04 00             	ret    0x4
10070d70:	a8 02                	test   al,0x2
10070d72:	74 18                	je     0x10070d8c
10070d74:	a8 01                	test   al,0x1
10070d76:	74 08                	je     0x10070d80
10070d78:	b8 01 00 00 00       	mov    eax,0x1
10070d7d:	c2 04 00             	ret    0x4
10070d80:	24 08                	and    al,0x8
10070d82:	f6 d8                	neg    al
10070d84:	1b c0                	sbb    eax,eax
10070d86:	83 c0 04             	add    eax,0x4
10070d89:	c2 04 00             	ret    0x4
10070d8c:	24 08                	and    al,0x8
10070d8e:	f6 d8                	neg    al
10070d90:	1b c0                	sbb    eax,eax
10070d92:	83 e0 03             	and    eax,0x3
10070d95:	c2 04 00             	ret    0x4
10070d98:	90                   	nop
10070d99:	90                   	nop
10070d9a:	90                   	nop
10070d9b:	90                   	nop
10070d9c:	90                   	nop
10070d9d:	90                   	nop
10070d9e:	90                   	nop
10070d9f:	90                   	nop
10070da0:	a1 f0 b6 0d 10       	mov    eax,ds:0x100db6f0
10070da5:	c7 05 6c 41 12 10 04 	mov    DWORD PTR ds:0x1012416c,0x4
10070dac:	00 00 00 
10070daf:	a3 68 41 12 10       	mov    ds:0x10124168,eax
10070db4:	83 c8 ff             	or     eax,0xffffffff
10070db7:	a3 70 41 12 10       	mov    ds:0x10124170,eax
10070dbc:	c7 05 74 41 12 10 30 	mov    DWORD PTR ds:0x10124174,0x1011c930
10070dc3:	c9 11 10 
10070dc6:	c7 05 78 41 12 10 bc 	mov    DWORD PTR ds:0x10124178,0x1011c9bc
10070dcd:	c9 11 10 
10070dd0:	a3 7c 41 12 10       	mov    ds:0x1012417c,eax
10070dd5:	c7 05 80 41 12 10 4c 	mov    DWORD PTR ds:0x10124180,0x1011c94c
10070ddc:	c9 11 10 
10070ddf:	c7 05 84 41 12 10 d8 	mov    DWORD PTR ds:0x10124184,0x1011c9d8
10070de6:	c9 11 10 
10070de9:	c7 05 88 41 12 10 db 	mov    DWORD PTR ds:0x10124188,0xffa6c7db
10070df0:	c7 a6 ff 
10070df3:	c7 05 8c 41 12 10 68 	mov    DWORD PTR ds:0x1012418c,0x1011c968
10070dfa:	c9 11 10 
10070dfd:	c7 05 90 41 12 10 f4 	mov    DWORD PTR ds:0x10124190,0x1011c9f4
10070e04:	c9 11 10 
10070e07:	a3 94 41 12 10       	mov    ds:0x10124194,eax
10070e0c:	c7 05 98 41 12 10 84 	mov    DWORD PTR ds:0x10124198,0x1011c984
10070e13:	c9 11 10 
10070e16:	c7 05 9c 41 12 10 10 	mov    DWORD PTR ds:0x1012419c,0x1011ca10
10070e1d:	ca 11 10 
10070e20:	a3 a0 41 12 10       	mov    ds:0x101241a0,eax
10070e25:	c7 05 a4 41 12 10 a0 	mov    DWORD PTR ds:0x101241a4,0x1011c9a0
10070e2c:	c9 11 10 
10070e2f:	c7 05 a8 41 12 10 2c 	mov    DWORD PTR ds:0x101241a8,0x1011ca2c
10070e36:	ca 11 10 
10070e39:	c3                   	ret
10070e3a:	90                   	nop
10070e3b:	90                   	nop
10070e3c:	90                   	nop
10070e3d:	90                   	nop
10070e3e:	90                   	nop
10070e3f:	90                   	nop
10070e40:	6a ff                	push   0xffffffff
10070e42:	68 a0 61 0b 10       	push   0x100b61a0
10070e47:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10070e4d:	50                   	push   eax
10070e4e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10070e55:	51                   	push   ecx
10070e56:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10070e5a:	53                   	push   ebx
10070e5b:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
10070e5f:	56                   	push   esi
10070e60:	8b f1                	mov    esi,ecx
10070e62:	50                   	push   eax
10070e63:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
10070e67:	53                   	push   ebx
10070e68:	51                   	push   ecx
10070e69:	8b ce                	mov    ecx,esi
10070e6b:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
10070e6f:	e8 0c d5 ff ff       	call   0x1006e380
10070e74:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
10070e78:	c7 46 30 00 00 00 00 	mov    DWORD PTR [esi+0x30],0x0
10070e7f:	89 56 2c             	mov    DWORD PTR [esi+0x2c],edx
10070e82:	f6 c3 02             	test   bl,0x2
10070e85:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
10070e8c:	00 
10070e8d:	c7 06 88 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb88
10070e93:	c7 46 3c 00 00 00 00 	mov    DWORD PTR [esi+0x3c],0x0
10070e9a:	75 07                	jne    0x10070ea3
10070e9c:	c7 46 3c 04 00 00 00 	mov    DWORD PTR [esi+0x3c],0x4
10070ea3:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
10070ea6:	8b ce                	mov    ecx,esi
10070ea8:	50                   	push   eax
10070ea9:	c7 46 38 48 41 12 10 	mov    DWORD PTR [esi+0x38],0x10124148
10070eb0:	ff 15 04 bc 0b 10    	call   DWORD PTR ds:0x100bbc04
10070eb6:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10070eb9:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10070ebd:	85 c0                	test   eax,eax
10070ebf:	75 05                	jne    0x10070ec6
10070ec1:	b8 00 41 12 10       	mov    eax,0x10124100
10070ec6:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10070eca:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
10070ecd:	c7 06 0c bc 0b 10    	mov    DWORD PTR [esi],0x100bbc0c
10070ed3:	8b c6                	mov    eax,esi
10070ed5:	5e                   	pop    esi
10070ed6:	5b                   	pop    ebx
10070ed7:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10070ede:	83 c4 10             	add    esp,0x10
10070ee1:	c2 14 00             	ret    0x14
10070ee4:	90                   	nop
10070ee5:	90                   	nop
10070ee6:	90                   	nop
10070ee7:	90                   	nop
10070ee8:	90                   	nop
10070ee9:	90                   	nop
10070eea:	90                   	nop
10070eeb:	90                   	nop
10070eec:	90                   	nop
10070eed:	90                   	nop
10070eee:	90                   	nop
10070eef:	90                   	nop
10070ef0:	b8 68 41 12 10       	mov    eax,0x10124168
10070ef5:	c3                   	ret
10070ef6:	90                   	nop
10070ef7:	90                   	nop
10070ef8:	90                   	nop
10070ef9:	90                   	nop
10070efa:	90                   	nop
10070efb:	90                   	nop
10070efc:	90                   	nop
10070efd:	90                   	nop
10070efe:	90                   	nop
10070eff:	90                   	nop
10070f00:	56                   	push   esi
10070f01:	8b f1                	mov    esi,ecx
10070f03:	e8 18 00 00 00       	call   0x10070f20
10070f08:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
10070f0d:	74 09                	je     0x10070f18
10070f0f:	56                   	push   esi
10070f10:	e8 09 2a 03 00       	call   0x100a391e
10070f15:	83 c4 04             	add    esp,0x4
10070f18:	8b c6                	mov    eax,esi
10070f1a:	5e                   	pop    esi
10070f1b:	c2 04 00             	ret    0x4
10070f1e:	90                   	nop
10070f1f:	90                   	nop
10070f20:	6a ff                	push   0xffffffff
10070f22:	68 b8 61 0b 10       	push   0x100b61b8
10070f27:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10070f2d:	50                   	push   eax
10070f2e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10070f35:	51                   	push   ecx
10070f36:	56                   	push   esi
10070f37:	8b f1                	mov    esi,ecx
10070f39:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
10070f3d:	c7 06 10 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb10
10070f43:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10070f46:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
10070f4d:	00 
10070f4e:	85 c0                	test   eax,eax
10070f50:	74 16                	je     0x10070f68
10070f52:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10070f58:	50                   	push   eax
10070f59:	8b 11                	mov    edx,DWORD PTR [ecx]
10070f5b:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10070f61:	c7 46 30 00 00 00 00 	mov    DWORD PTR [esi+0x30],0x0
10070f68:	8b ce                	mov    ecx,esi
10070f6a:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
10070f71:	ff 
10070f72:	e8 a9 d5 ff ff       	call   0x1006e520
10070f77:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10070f7b:	5e                   	pop    esi
10070f7c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10070f83:	83 c4 10             	add    esp,0x10
10070f86:	c3                   	ret
10070f87:	90                   	nop
10070f88:	90                   	nop
10070f89:	90                   	nop
10070f8a:	90                   	nop
10070f8b:	90                   	nop
10070f8c:	90                   	nop
10070f8d:	90                   	nop
10070f8e:	90                   	nop
10070f8f:	90                   	nop
10070f90:	53                   	push   ebx
10070f91:	56                   	push   esi
10070f92:	8b f1                	mov    esi,ecx
10070f94:	57                   	push   edi
10070f95:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
10070f98:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10070f9b:	40                   	inc    eax
10070f9c:	8d 04 40             	lea    eax,[eax+eax*2]
10070f9f:	8b 14 81             	mov    edx,DWORD PTR [ecx+eax*4]
10070fa2:	8a 46 3c             	mov    al,BYTE PTR [esi+0x3c]
10070fa5:	8b 7a 14             	mov    edi,DWORD PTR [edx+0x14]
10070fa8:	d1 e7                	shl    edi,1
10070faa:	a8 10                	test   al,0x10
10070fac:	8d 5f 01             	lea    ebx,[edi+0x1]
10070faf:	74 21                	je     0x10070fd2
10070fb1:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
10070fb4:	85 c0                	test   eax,eax
10070fb6:	74 1a                	je     0x10070fd2
10070fb8:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
10070fbe:	8b 40 14             	mov    eax,DWORD PTR [eax+0x14]
10070fc1:	8d 14 09             	lea    edx,[ecx+ecx*1]
10070fc4:	c1 ea 0a             	shr    edx,0xa
10070fc7:	8d 04 50             	lea    eax,[eax+edx*2]
10070fca:	03 c7                	add    eax,edi
10070fcc:	3b d8                	cmp    ebx,eax
10070fce:	7e 39                	jle    0x10071009
10070fd0:	eb 35                	jmp    0x10071007
10070fd2:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10070fd8:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10070fdb:	50                   	push   eax
10070fdc:	8b 11                	mov    edx,DWORD PTR [ecx]
10070fde:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10070fe4:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10070fe7:	50                   	push   eax
10070fe8:	8b 09                	mov    ecx,DWORD PTR [ecx]
10070fea:	e8 31 c2 fd ff       	call   0x1004d220
10070fef:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
10070ff5:	8d 14 49             	lea    edx,[ecx+ecx*2]
10070ff8:	c1 e2 02             	shl    edx,0x2
10070ffb:	c1 ea 0a             	shr    edx,0xa
10070ffe:	8d 04 50             	lea    eax,[eax+edx*2]
10071001:	03 c7                	add    eax,edi
10071003:	3b d8                	cmp    ebx,eax
10071005:	7e 02                	jle    0x10071009
10071007:	8b c3                	mov    eax,ebx
10071009:	8b 4e 40             	mov    ecx,DWORD PTR [esi+0x40]
1007100c:	8b 56 34             	mov    edx,DWORD PTR [esi+0x34]
1007100f:	41                   	inc    ecx
10071010:	5f                   	pop    edi
10071011:	5e                   	pop    esi
10071012:	5b                   	pop    ebx
10071013:	8d 0c 49             	lea    ecx,[ecx+ecx*2]
10071016:	8b 0c 8a             	mov    ecx,DWORD PTR [edx+ecx*4]
10071019:	8b 49 18             	mov    ecx,DWORD PTR [ecx+0x18]
1007101c:	3b c1                	cmp    eax,ecx
1007101e:	7f 02                	jg     0x10071022
10071020:	8b c1                	mov    eax,ecx
10071022:	c3                   	ret
10071023:	90                   	nop
10071024:	90                   	nop
10071025:	90                   	nop
10071026:	90                   	nop
10071027:	90                   	nop
10071028:	90                   	nop
10071029:	90                   	nop
1007102a:	90                   	nop
1007102b:	90                   	nop
1007102c:	90                   	nop
1007102d:	90                   	nop
1007102e:	90                   	nop
1007102f:	90                   	nop
10071030:	53                   	push   ebx
10071031:	8b d9                	mov    ebx,ecx
10071033:	55                   	push   ebp
10071034:	56                   	push   esi
10071035:	8b 43 40             	mov    eax,DWORD PTR [ebx+0x40]
10071038:	8b 4b 34             	mov    ecx,DWORD PTR [ebx+0x34]
1007103b:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
1007103f:	57                   	push   edi
10071040:	8d 04 40             	lea    eax,[eax+eax*2]
10071043:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10071046:	8b 7c 81 0c          	mov    edi,DWORD PTR [ecx+eax*4+0xc]
1007104a:	8b 6c 81 10          	mov    ebp,DWORD PTR [ecx+eax*4+0x10]
1007104e:	8d 44 81 08          	lea    eax,[ecx+eax*4+0x8]
10071052:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071058:	8b 06                	mov    eax,DWORD PTR [esi]
1007105a:	52                   	push   edx
1007105b:	50                   	push   eax
1007105c:	6a ff                	push   0xffffffff
1007105e:	6a 00                	push   0x0
10071060:	57                   	push   edi
10071061:	e8 8a a4 fd ff       	call   0x1004b4f0
10071066:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
10071069:	8b 4d 18             	mov    ecx,DWORD PTR [ebp+0x18]
1007106c:	51                   	push   ecx
1007106d:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10071070:	8d 14 00             	lea    edx,[eax+eax*1]
10071073:	2b ca                	sub    ecx,edx
10071075:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10071078:	51                   	push   ecx
10071079:	8b 0e                	mov    ecx,DWORD PTR [esi]
1007107b:	03 c8                	add    ecx,eax
1007107d:	52                   	push   edx
1007107e:	51                   	push   ecx
1007107f:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071085:	6a ff                	push   0xffffffff
10071087:	6a 00                	push   0x0
10071089:	55                   	push   ebp
1007108a:	e8 91 a4 fd ff       	call   0x1004b520
1007108f:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10071092:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10071095:	8b 6f 14             	mov    ebp,DWORD PTR [edi+0x14]
10071098:	52                   	push   edx
10071099:	8b 16                	mov    edx,DWORD PTR [esi]
1007109b:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100710a1:	2b c5                	sub    eax,ebp
100710a3:	03 c2                	add    eax,edx
100710a5:	50                   	push   eax
100710a6:	6a ff                	push   0xffffffff
100710a8:	6a 02                	push   0x2
100710aa:	57                   	push   edi
100710ab:	e8 40 a4 fd ff       	call   0x1004b4f0
100710b0:	f6 43 3c 08          	test   BYTE PTR [ebx+0x3c],0x8
100710b4:	74 4b                	je     0x10071101
100710b6:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100710b9:	8b 3e                	mov    edi,DWORD PTR [esi]
100710bb:	99                   	cdq
100710bc:	2b c2                	sub    eax,edx
100710be:	8b c8                	mov    ecx,eax
100710c0:	a1 2c c9 11 10       	mov    eax,ds:0x1011c92c
100710c5:	99                   	cdq
100710c6:	2b c2                	sub    eax,edx
100710c8:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100710cb:	d1 f9                	sar    ecx,1
100710cd:	d1 f8                	sar    eax,1
100710cf:	2b c8                	sub    ecx,eax
100710d1:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
100710d4:	03 ca                	add    ecx,edx
100710d6:	99                   	cdq
100710d7:	2b c2                	sub    eax,edx
100710d9:	51                   	push   ecx
100710da:	8b c8                	mov    ecx,eax
100710dc:	a1 28 c9 11 10       	mov    eax,ds:0x1011c928
100710e1:	99                   	cdq
100710e2:	2b c2                	sub    eax,edx
100710e4:	d1 f9                	sar    ecx,1
100710e6:	d1 f8                	sar    eax,1
100710e8:	2b c8                	sub    ecx,eax
100710ea:	03 cf                	add    ecx,edi
100710ec:	51                   	push   ecx
100710ed:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100710f3:	6a ff                	push   0xffffffff
100710f5:	6a 00                	push   0x0
100710f7:	68 14 c9 11 10       	push   0x1011c914
100710fc:	e8 ef a3 fd ff       	call   0x1004b4f0
10071101:	5f                   	pop    edi
10071102:	5e                   	pop    esi
10071103:	5d                   	pop    ebp
10071104:	5b                   	pop    ebx
10071105:	c2 08 00             	ret    0x8
10071108:	90                   	nop
10071109:	90                   	nop
1007110a:	90                   	nop
1007110b:	90                   	nop
1007110c:	90                   	nop
1007110d:	90                   	nop
1007110e:	90                   	nop
1007110f:	90                   	nop
10071110:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10071114:	a8 04                	test   al,0x4
10071116:	74 08                	je     0x10071120
10071118:	b8 02 00 00 00       	mov    eax,0x2
1007111d:	c2 04 00             	ret    0x4
10071120:	a8 02                	test   al,0x2
10071122:	74 0e                	je     0x10071132
10071124:	24 01                	and    al,0x1
10071126:	f6 d8                	neg    al
10071128:	1b c0                	sbb    eax,eax
1007112a:	24 fd                	and    al,0xfd
1007112c:	83 c0 04             	add    eax,0x4
1007112f:	c2 04 00             	ret    0x4
10071132:	33 c0                	xor    eax,eax
10071134:	c2 04 00             	ret    0x4
10071137:	90                   	nop
10071138:	90                   	nop
10071139:	90                   	nop
1007113a:	90                   	nop
1007113b:	90                   	nop
1007113c:	90                   	nop
1007113d:	90                   	nop
1007113e:	90                   	nop
1007113f:	90                   	nop
10071140:	56                   	push   esi
10071141:	8b f1                	mov    esi,ecx
10071143:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
10071146:	8b c8                	mov    ecx,eax
10071148:	f7 d1                	not    ecx
1007114a:	f6 c1 08             	test   cl,0x8
1007114d:	74 12                	je     0x10071161
1007114f:	8b 16                	mov    edx,DWORD PTR [esi]
10071151:	0c 08                	or     al,0x8
10071153:	50                   	push   eax
10071154:	8b ce                	mov    ecx,esi
10071156:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
10071159:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007115c:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
1007115f:	5e                   	pop    esi
10071160:	c3                   	ret
10071161:	8b 16                	mov    edx,DWORD PTR [esi]
10071163:	24 f7                	and    al,0xf7
10071165:	50                   	push   eax
10071166:	8b ce                	mov    ecx,esi
10071168:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
1007116b:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007116e:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10071171:	5e                   	pop    esi
10071172:	c3                   	ret
10071173:	90                   	nop
10071174:	90                   	nop
10071175:	90                   	nop
10071176:	90                   	nop
10071177:	90                   	nop
10071178:	90                   	nop
10071179:	90                   	nop
1007117a:	90                   	nop
1007117b:	90                   	nop
1007117c:	90                   	nop
1007117d:	90                   	nop
1007117e:	90                   	nop
1007117f:	90                   	nop
10071180:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10071184:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10071188:	53                   	push   ebx
10071189:	56                   	push   esi
1007118a:	8b f1                	mov    esi,ecx
1007118c:	50                   	push   eax
1007118d:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10071191:	51                   	push   ecx
10071192:	52                   	push   edx
10071193:	8b ce                	mov    ecx,esi
10071195:	e8 e6 d1 ff ff       	call   0x1006e380
1007119a:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1007119e:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
100711a2:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
100711a5:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
100711a9:	33 db                	xor    ebx,ebx
100711ab:	c7 06 90 bc 0b 10    	mov    DWORD PTR [esi],0x100bbc90
100711b1:	3b c3                	cmp    eax,ebx
100711b3:	89 4e 3c             	mov    DWORD PTR [esi+0x3c],ecx
100711b6:	89 5e 40             	mov    DWORD PTR [esi+0x40],ebx
100711b9:	89 5e 44             	mov    DWORD PTR [esi+0x44],ebx
100711bc:	89 5e 4c             	mov    DWORD PTR [esi+0x4c],ebx
100711bf:	74 14                	je     0x100711d5
100711c1:	68 ff 00 00 00       	push   0xff
100711c6:	8d 56 50             	lea    edx,[esi+0x50]
100711c9:	50                   	push   eax
100711ca:	52                   	push   edx
100711cb:	e8 50 26 03 00       	call   0x100a3820
100711d0:	83 c4 0c             	add    esp,0xc
100711d3:	eb 03                	jmp    0x100711d8
100711d5:	88 5e 50             	mov    BYTE PTR [esi+0x50],bl
100711d8:	89 9e 50 01 00 00    	mov    DWORD PTR [esi+0x150],ebx
100711de:	89 9e 54 01 00 00    	mov    DWORD PTR [esi+0x154],ebx
100711e4:	c7 86 60 01 00 00 01 	mov    DWORD PTR [esi+0x160],0x1
100711eb:	00 00 00 
100711ee:	89 9e 58 01 00 00    	mov    DWORD PTR [esi+0x158],ebx
100711f4:	a1 78 d5 0d 10       	mov    eax,ds:0x100dd578
100711f9:	89 86 6c 01 00 00    	mov    DWORD PTR [esi+0x16c],eax
100711ff:	8b 0d 54 d5 0d 10    	mov    ecx,DWORD PTR ds:0x100dd554
10071205:	89 8e 64 01 00 00    	mov    DWORD PTR [esi+0x164],ecx
1007120b:	8b 15 60 d5 0d 10    	mov    edx,DWORD PTR ds:0x100dd560
10071211:	89 96 68 01 00 00    	mov    DWORD PTR [esi+0x168],edx
10071217:	a1 74 d5 0d 10       	mov    eax,ds:0x100dd574
1007121c:	89 86 78 01 00 00    	mov    DWORD PTR [esi+0x178],eax
10071222:	8b 0d 50 d5 0d 10    	mov    ecx,DWORD PTR ds:0x100dd550
10071228:	89 8e 70 01 00 00    	mov    DWORD PTR [esi+0x170],ecx
1007122e:	8b 15 5c d5 0d 10    	mov    edx,DWORD PTR ds:0x100dd55c
10071234:	89 96 74 01 00 00    	mov    DWORD PTR [esi+0x174],edx
1007123a:	a1 7c d5 0d 10       	mov    eax,ds:0x100dd57c
1007123f:	89 86 84 01 00 00    	mov    DWORD PTR [esi+0x184],eax
10071245:	8b 0d 58 d5 0d 10    	mov    ecx,DWORD PTR ds:0x100dd558
1007124b:	89 8e 7c 01 00 00    	mov    DWORD PTR [esi+0x17c],ecx
10071251:	8b 15 64 d5 0d 10    	mov    edx,DWORD PTR ds:0x100dd564
10071257:	8a 4c 24 10          	mov    cl,BYTE PTR [esp+0x10]
1007125b:	89 96 80 01 00 00    	mov    DWORD PTR [esi+0x180],edx
10071261:	c7 86 5c 01 00 00 00 	mov    DWORD PTR [esi+0x15c],0x3f000000
10071268:	00 00 3f 
1007126b:	a1 f0 b6 0d 10       	mov    eax,ds:0x100db6f0
10071270:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
10071273:	b8 02 00 00 00       	mov    eax,0x2
10071278:	84 c8                	test   al,cl
1007127a:	75 06                	jne    0x10071282
1007127c:	89 5e 44             	mov    DWORD PTR [esi+0x44],ebx
1007127f:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10071282:	8b c6                	mov    eax,esi
10071284:	5e                   	pop    esi
10071285:	5b                   	pop    ebx
10071286:	c2 18 00             	ret    0x18
10071289:	90                   	nop
1007128a:	90                   	nop
1007128b:	90                   	nop
1007128c:	90                   	nop
1007128d:	90                   	nop
1007128e:	90                   	nop
1007128f:	90                   	nop
10071290:	56                   	push   esi
10071291:	8b f1                	mov    esi,ecx
10071293:	e8 18 00 00 00       	call   0x100712b0
10071298:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1007129d:	74 09                	je     0x100712a8
1007129f:	56                   	push   esi
100712a0:	e8 79 26 03 00       	call   0x100a391e
100712a5:	83 c4 04             	add    esp,0x4
100712a8:	8b c6                	mov    eax,esi
100712aa:	5e                   	pop    esi
100712ab:	c2 04 00             	ret    0x4
100712ae:	90                   	nop
100712af:	90                   	nop
100712b0:	c7 01 90 bc 0b 10    	mov    DWORD PTR [ecx],0x100bbc90
100712b6:	e9 65 d2 ff ff       	jmp    0x1006e520
100712bb:	90                   	nop
100712bc:	90                   	nop
100712bd:	90                   	nop
100712be:	90                   	nop
100712bf:	90                   	nop
100712c0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100712c4:	85 c0                	test   eax,eax
100712c6:	74 15                	je     0x100712dd
100712c8:	68 ff 00 00 00       	push   0xff
100712cd:	83 c1 50             	add    ecx,0x50
100712d0:	50                   	push   eax
100712d1:	51                   	push   ecx
100712d2:	e8 49 25 03 00       	call   0x100a3820
100712d7:	83 c4 0c             	add    esp,0xc
100712da:	c2 04 00             	ret    0x4
100712dd:	c6 41 50 00          	mov    BYTE PTR [ecx+0x50],0x0
100712e1:	c2 04 00             	ret    0x4
100712e4:	90                   	nop
100712e5:	90                   	nop
100712e6:	90                   	nop
100712e7:	90                   	nop
100712e8:	90                   	nop
100712e9:	90                   	nop
100712ea:	90                   	nop
100712eb:	90                   	nop
100712ec:	90                   	nop
100712ed:	90                   	nop
100712ee:	90                   	nop
100712ef:	90                   	nop
100712f0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100712f4:	89 81 60 01 00 00    	mov    DWORD PTR [ecx+0x160],eax
100712fa:	c2 04 00             	ret    0x4
100712fd:	90                   	nop
100712fe:	90                   	nop
100712ff:	90                   	nop
10071300:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10071304:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10071308:	89 81 6c 01 00 00    	mov    DWORD PTR [ecx+0x16c],eax
1007130e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10071312:	89 91 64 01 00 00    	mov    DWORD PTR [ecx+0x164],edx
10071318:	89 81 68 01 00 00    	mov    DWORD PTR [ecx+0x168],eax
1007131e:	c2 0c 00             	ret    0xc
10071321:	90                   	nop
10071322:	90                   	nop
10071323:	90                   	nop
10071324:	90                   	nop
10071325:	90                   	nop
10071326:	90                   	nop
10071327:	90                   	nop
10071328:	90                   	nop
10071329:	90                   	nop
1007132a:	90                   	nop
1007132b:	90                   	nop
1007132c:	90                   	nop
1007132d:	90                   	nop
1007132e:	90                   	nop
1007132f:	90                   	nop
10071330:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10071334:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10071338:	89 81 78 01 00 00    	mov    DWORD PTR [ecx+0x178],eax
1007133e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10071342:	89 91 70 01 00 00    	mov    DWORD PTR [ecx+0x170],edx
10071348:	89 81 74 01 00 00    	mov    DWORD PTR [ecx+0x174],eax
1007134e:	c2 0c 00             	ret    0xc
10071351:	90                   	nop
10071352:	90                   	nop
10071353:	90                   	nop
10071354:	90                   	nop
10071355:	90                   	nop
10071356:	90                   	nop
10071357:	90                   	nop
10071358:	90                   	nop
10071359:	90                   	nop
1007135a:	90                   	nop
1007135b:	90                   	nop
1007135c:	90                   	nop
1007135d:	90                   	nop
1007135e:	90                   	nop
1007135f:	90                   	nop
10071360:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10071364:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10071368:	89 81 84 01 00 00    	mov    DWORD PTR [ecx+0x184],eax
1007136e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10071372:	89 91 7c 01 00 00    	mov    DWORD PTR [ecx+0x17c],edx
10071378:	89 81 80 01 00 00    	mov    DWORD PTR [ecx+0x180],eax
1007137e:	c2 0c 00             	ret    0xc
10071381:	90                   	nop
10071382:	90                   	nop
10071383:	90                   	nop
10071384:	90                   	nop
10071385:	90                   	nop
10071386:	90                   	nop
10071387:	90                   	nop
10071388:	90                   	nop
10071389:	90                   	nop
1007138a:	90                   	nop
1007138b:	90                   	nop
1007138c:	90                   	nop
1007138d:	90                   	nop
1007138e:	90                   	nop
1007138f:	90                   	nop
10071390:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10071394:	85 c0                	test   eax,eax
10071396:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
10071399:	74 0a                	je     0x100713a5
1007139b:	c7 41 40 01 00 00 00 	mov    DWORD PTR [ecx+0x40],0x1
100713a2:	c2 04 00             	ret    0x4
100713a5:	c7 41 40 00 00 00 00 	mov    DWORD PTR [ecx+0x40],0x0
100713ac:	c2 04 00             	ret    0x4
100713af:	90                   	nop
100713b0:	56                   	push   esi
100713b1:	57                   	push   edi
100713b2:	8b f9                	mov    edi,ecx
100713b4:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
100713ba:	85 c0                	test   eax,eax
100713bc:	0f 84 f5 01 00 00    	je     0x100715b7
100713c2:	8b 87 54 01 00 00    	mov    eax,DWORD PTR [edi+0x154]
100713c8:	85 c0                	test   eax,eax
100713ca:	74 44                	je     0x10071410
100713cc:	8b 4f 40             	mov    ecx,DWORD PTR [edi+0x40]
100713cf:	85 c9                	test   ecx,ecx
100713d1:	75 3d                	jne    0x10071410
100713d3:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
100713d7:	6a ff                	push   0xffffffff
100713d9:	6a 00                	push   0x0
100713db:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100713de:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
100713e1:	51                   	push   ecx
100713e2:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100713e5:	52                   	push   edx
100713e6:	8b 16                	mov    edx,DWORD PTR [esi]
100713e8:	51                   	push   ecx
100713e9:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100713ef:	52                   	push   edx
100713f0:	50                   	push   eax
100713f1:	e8 9a 92 fd ff       	call   0x1004a690
100713f6:	8b 87 70 01 00 00    	mov    eax,DWORD PTR [edi+0x170]
100713fc:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100713ff:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10071402:	6a 00                	push   0x0
10071404:	50                   	push   eax
10071405:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10071408:	51                   	push   ecx
10071409:	8b 0e                	mov    ecx,DWORD PTR [esi]
1007140b:	52                   	push   edx
1007140c:	50                   	push   eax
1007140d:	51                   	push   ecx
1007140e:	eb 50                	jmp    0x10071460
10071410:	8b 57 40             	mov    edx,DWORD PTR [edi+0x40]
10071413:	33 c9                	xor    ecx,ecx
10071415:	33 c0                	xor    eax,eax
10071417:	2b d1                	sub    edx,ecx
10071419:	74 24                	je     0x1007143f
1007141b:	4a                   	dec    edx
1007141c:	74 13                	je     0x10071431
1007141e:	83 ea 02             	sub    edx,0x2
10071421:	75 28                	jne    0x1007144b
10071423:	8b 87 6c 01 00 00    	mov    eax,DWORD PTR [edi+0x16c]
10071429:	8b 8f 78 01 00 00    	mov    ecx,DWORD PTR [edi+0x178]
1007142f:	eb 1a                	jmp    0x1007144b
10071431:	8b 87 68 01 00 00    	mov    eax,DWORD PTR [edi+0x168]
10071437:	8b 8f 74 01 00 00    	mov    ecx,DWORD PTR [edi+0x174]
1007143d:	eb 0c                	jmp    0x1007144b
1007143f:	8b 87 64 01 00 00    	mov    eax,DWORD PTR [edi+0x164]
10071445:	8b 8f 70 01 00 00    	mov    ecx,DWORD PTR [edi+0x170]
1007144b:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1007144f:	50                   	push   eax
10071450:	51                   	push   ecx
10071451:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
10071454:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10071457:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1007145a:	52                   	push   edx
1007145b:	8b 16                	mov    edx,DWORD PTR [esi]
1007145d:	50                   	push   eax
1007145e:	51                   	push   ecx
1007145f:	52                   	push   edx
10071460:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071466:	e8 05 81 fd ff       	call   0x10049570
1007146b:	83 7f 40 03          	cmp    DWORD PTR [edi+0x40],0x3
1007146f:	0f 84 b4 00 00 00    	je     0x10071529
10071475:	d9 87 58 01 00 00    	fld    DWORD PTR [edi+0x158]
1007147b:	d8 87 5c 01 00 00    	fadd   DWORD PTR [edi+0x15c]
10071481:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10071487:	8b 01                	mov    eax,DWORD PTR [ecx]
10071489:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1007148d:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
10071493:	d8 5c 24 10          	fcomp  DWORD PTR [esp+0x10]
10071497:	df e0                	fnstsw ax
10071499:	f6 c4 01             	test   ah,0x1
1007149c:	0f 84 87 00 00 00    	je     0x10071529
100714a2:	8b 87 6c 01 00 00    	mov    eax,DWORD PTR [edi+0x16c]
100714a8:	85 c0                	test   eax,eax
100714aa:	74 7d                	je     0x10071529
100714ac:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100714b2:	8b 11                	mov    edx,DWORD PTR [ecx]
100714b4:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
100714ba:	d8 a7 58 01 00 00    	fsub   DWORD PTR [edi+0x158]
100714c0:	d8 b7 5c 01 00 00    	fdiv   DWORD PTR [edi+0x15c]
100714c6:	d8 0d f0 85 0b 10    	fmul   DWORD PTR ds:0x100b85f0
100714cc:	e8 63 29 03 00       	call   0x100a3e34
100714d1:	b9 ff 00 00 00       	mov    ecx,0xff
100714d6:	33 d2                	xor    edx,edx
100714d8:	2b c8                	sub    ecx,eax
100714da:	8b 87 6c 01 00 00    	mov    eax,DWORD PTR [edi+0x16c]
100714e0:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100714e4:	8a 54 24 12          	mov    dl,BYTE PTR [esp+0x12]
100714e8:	8a f1                	mov    dh,cl
100714ea:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100714ed:	c1 e8 08             	shr    eax,0x8
100714f0:	c1 e2 08             	shl    edx,0x8
100714f3:	25 ff 00 00 00       	and    eax,0xff
100714f8:	83 e9 02             	sub    ecx,0x2
100714fb:	0b d0                	or     edx,eax
100714fd:	33 c0                	xor    eax,eax
100714ff:	8a 87 6c 01 00 00    	mov    al,BYTE PTR [edi+0x16c]
10071505:	c1 e2 08             	shl    edx,0x8
10071508:	0b d0                	or     edx,eax
1007150a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007150d:	52                   	push   edx
1007150e:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10071511:	6a 00                	push   0x0
10071513:	51                   	push   ecx
10071514:	8b 0e                	mov    ecx,DWORD PTR [esi]
10071516:	83 ea 02             	sub    edx,0x2
10071519:	40                   	inc    eax
1007151a:	52                   	push   edx
1007151b:	41                   	inc    ecx
1007151c:	50                   	push   eax
1007151d:	51                   	push   ecx
1007151e:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071524:	e8 47 80 fd ff       	call   0x10049570
10071529:	8b 87 50 01 00 00    	mov    eax,DWORD PTR [edi+0x150]
1007152f:	85 c0                	test   eax,eax
10071531:	74 34                	je     0x10071567
10071533:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10071539:	6a 03                	push   0x3
1007153b:	8b 11                	mov    edx,DWORD PTR [ecx]
1007153d:	ff 52 14             	call   DWORD PTR [edx+0x14]
10071540:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10071543:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10071546:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10071549:	6a ff                	push   0xffffffff
1007154b:	48                   	dec    eax
1007154c:	6a 00                	push   0x0
1007154e:	49                   	dec    ecx
1007154f:	50                   	push   eax
10071550:	8b 06                	mov    eax,DWORD PTR [esi]
10071552:	51                   	push   ecx
10071553:	8b 8f 50 01 00 00    	mov    ecx,DWORD PTR [edi+0x150]
10071559:	52                   	push   edx
1007155a:	50                   	push   eax
1007155b:	51                   	push   ecx
1007155c:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071562:	e8 29 91 fd ff       	call   0x1004a690
10071567:	8d 57 50             	lea    edx,[edi+0x50]
1007156a:	85 d2                	test   edx,edx
1007156c:	74 49                	je     0x100715b7
1007156e:	8b 47 40             	mov    eax,DWORD PTR [edi+0x40]
10071571:	33 c9                	xor    ecx,ecx
10071573:	2b c1                	sub    eax,ecx
10071575:	74 18                	je     0x1007158f
10071577:	48                   	dec    eax
10071578:	74 0d                	je     0x10071587
1007157a:	83 e8 02             	sub    eax,0x2
1007157d:	75 16                	jne    0x10071595
1007157f:	8b 8f 84 01 00 00    	mov    ecx,DWORD PTR [edi+0x184]
10071585:	eb 0e                	jmp    0x10071595
10071587:	8b 8f 80 01 00 00    	mov    ecx,DWORD PTR [edi+0x180]
1007158d:	eb 06                	jmp    0x10071595
1007158f:	8b 8f 7c 01 00 00    	mov    ecx,DWORD PTR [edi+0x17c]
10071595:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10071598:	6a 05                	push   0x5
1007159a:	51                   	push   ecx
1007159b:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1007159e:	50                   	push   eax
1007159f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100715a2:	51                   	push   ecx
100715a3:	8b 0e                	mov    ecx,DWORD PTR [esi]
100715a5:	50                   	push   eax
100715a6:	51                   	push   ecx
100715a7:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100715ad:	52                   	push   edx
100715ae:	8b 57 2c             	mov    edx,DWORD PTR [edi+0x2c]
100715b1:	52                   	push   edx
100715b2:	e8 49 8b fd ff       	call   0x1004a100
100715b7:	5f                   	pop    edi
100715b8:	5e                   	pop    esi
100715b9:	c2 08 00             	ret    0x8
100715bc:	90                   	nop
100715bd:	90                   	nop
100715be:	90                   	nop
100715bf:	90                   	nop
100715c0:	83 79 40 02          	cmp    DWORD PTR [ecx+0x40],0x2
100715c4:	74 10                	je     0x100715d6
100715c6:	8b 51 44             	mov    edx,DWORD PTR [ecx+0x44]
100715c9:	b8 01 00 00 00       	mov    eax,0x1
100715ce:	0b d0                	or     edx,eax
100715d0:	89 41 40             	mov    DWORD PTR [ecx+0x40],eax
100715d3:	89 51 44             	mov    DWORD PTR [ecx+0x44],edx
100715d6:	c2 0c 00             	ret    0xc
100715d9:	90                   	nop
100715da:	90                   	nop
100715db:	90                   	nop
100715dc:	90                   	nop
100715dd:	90                   	nop
100715de:	90                   	nop
100715df:	90                   	nop
100715e0:	56                   	push   esi
100715e1:	8b f1                	mov    esi,ecx
100715e3:	b8 01 00 00 00       	mov    eax,0x1
100715e8:	84 46 44             	test   BYTE PTR [esi+0x44],al
100715eb:	74 2b                	je     0x10071618
100715ed:	39 46 40             	cmp    DWORD PTR [esi+0x40],eax
100715f0:	75 1e                	jne    0x10071610
100715f2:	6a 1c                	push   0x1c
100715f4:	c7 46 40 03 00 00 00 	mov    DWORD PTR [esi+0x40],0x3
100715fb:	e8 40 bc fc ff       	call   0x1003d240
10071600:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
10071603:	83 c4 04             	add    esp,0x4
10071606:	8b ce                	mov    ecx,esi
10071608:	6a 00                	push   0x0
1007160a:	50                   	push   eax
1007160b:	e8 10 d3 ff ff       	call   0x1006e920
10071610:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
10071613:	24 fe                	and    al,0xfe
10071615:	89 46 44             	mov    DWORD PTR [esi+0x44],eax
10071618:	5e                   	pop    esi
10071619:	c2 0c 00             	ret    0xc
1007161c:	90                   	nop
1007161d:	90                   	nop
1007161e:	90                   	nop
1007161f:	90                   	nop
10071620:	56                   	push   esi
10071621:	8b f1                	mov    esi,ecx
10071623:	83 7e 40 02          	cmp    DWORD PTR [esi+0x40],0x2
10071627:	74 3f                	je     0x10071668
10071629:	f6 46 44 01          	test   BYTE PTR [esi+0x44],0x1
1007162d:	74 14                	je     0x10071643
1007162f:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
10071632:	6a 01                	push   0x1
10071634:	50                   	push   eax
10071635:	c7 46 40 01 00 00 00 	mov    DWORD PTR [esi+0x40],0x1
1007163c:	e8 df d2 ff ff       	call   0x1006e920
10071641:	5e                   	pop    esi
10071642:	c3                   	ret
10071643:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
10071646:	85 c0                	test   eax,eax
10071648:	75 11                	jne    0x1007165b
1007164a:	6a 3c                	push   0x3c
1007164c:	c7 46 40 03 00 00 00 	mov    DWORD PTR [esi+0x40],0x3
10071653:	e8 e8 bb fc ff       	call   0x1003d240
10071658:	83 c4 04             	add    esp,0x4
1007165b:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
1007165e:	6a 01                	push   0x1
10071660:	50                   	push   eax
10071661:	8b ce                	mov    ecx,esi
10071663:	e8 b8 d2 ff ff       	call   0x1006e920
10071668:	5e                   	pop    esi
10071669:	c3                   	ret
1007166a:	90                   	nop
1007166b:	90                   	nop
1007166c:	90                   	nop
1007166d:	90                   	nop
1007166e:	90                   	nop
1007166f:	90                   	nop
10071670:	56                   	push   esi
10071671:	8b f1                	mov    esi,ecx
10071673:	83 7e 40 02          	cmp    DWORD PTR [esi+0x40],0x2
10071677:	74 45                	je     0x100716be
10071679:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007167c:	85 c0                	test   eax,eax
1007167e:	74 16                	je     0x10071696
10071680:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
10071683:	6a 00                	push   0x0
10071685:	51                   	push   ecx
10071686:	8b ce                	mov    ecx,esi
10071688:	c7 46 40 01 00 00 00 	mov    DWORD PTR [esi+0x40],0x1
1007168f:	e8 8c d2 ff ff       	call   0x1006e920
10071694:	5e                   	pop    esi
10071695:	c3                   	ret
10071696:	c7 46 40 00 00 00 00 	mov    DWORD PTR [esi+0x40],0x0
1007169d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100716a3:	8b 01                	mov    eax,DWORD PTR [ecx]
100716a5:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
100716ab:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
100716ae:	6a 00                	push   0x0
100716b0:	d9 9e 58 01 00 00    	fstp   DWORD PTR [esi+0x158]
100716b6:	51                   	push   ecx
100716b7:	8b ce                	mov    ecx,esi
100716b9:	e8 62 d2 ff ff       	call   0x1006e920
100716be:	5e                   	pop    esi
100716bf:	c3                   	ret
100716c0:	53                   	push   ebx
100716c1:	8a 5c 24 0c          	mov    bl,BYTE PTR [esp+0xc]
100716c5:	b8 02 00 00 00       	mov    eax,0x2
100716ca:	33 d2                	xor    edx,edx
100716cc:	84 d8                	test   al,bl
100716ce:	74 06                	je     0x100716d6
100716d0:	89 51 44             	mov    DWORD PTR [ecx+0x44],edx
100716d3:	89 41 40             	mov    DWORD PTR [ecx+0x40],eax
100716d6:	84 44 24 08          	test   BYTE PTR [esp+0x8],al
100716da:	5b                   	pop    ebx
100716db:	74 03                	je     0x100716e0
100716dd:	89 51 40             	mov    DWORD PTR [ecx+0x40],edx
100716e0:	c2 08 00             	ret    0x8
100716e3:	90                   	nop
100716e4:	90                   	nop
100716e5:	90                   	nop
100716e6:	90                   	nop
100716e7:	90                   	nop
100716e8:	90                   	nop
100716e9:	90                   	nop
100716ea:	90                   	nop
100716eb:	90                   	nop
100716ec:	90                   	nop
100716ed:	90                   	nop
100716ee:	90                   	nop
100716ef:	90                   	nop
100716f0:	6a ff                	push   0xffffffff
100716f2:	68 d8 61 0b 10       	push   0x100b61d8
100716f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100716fd:	50                   	push   eax
100716fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10071705:	51                   	push   ecx
10071706:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1007170a:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1007170e:	56                   	push   esi
1007170f:	57                   	push   edi
10071710:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
10071714:	8b f1                	mov    esi,ecx
10071716:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1007171a:	50                   	push   eax
1007171b:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1007171f:	57                   	push   edi
10071720:	51                   	push   ecx
10071721:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
10071725:	52                   	push   edx
10071726:	50                   	push   eax
10071727:	51                   	push   ecx
10071728:	8b ce                	mov    ecx,esi
1007172a:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
1007172e:	e8 4d fa ff ff       	call   0x10071180
10071733:	8d 86 90 01 00 00    	lea    eax,[esi+0x190]
10071739:	33 d2                	xor    edx,edx
1007173b:	c7 06 00 bd 0b 10    	mov    DWORD PTR [esi],0x100bbd00
10071741:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
10071748:	00 
10071749:	89 10                	mov    DWORD PTR [eax],edx
1007174b:	85 ff                	test   edi,edi
1007174d:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
10071750:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
10071753:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
10071756:	89 96 88 01 00 00    	mov    DWORD PTR [esi+0x188],edx
1007175c:	89 96 a0 01 00 00    	mov    DWORD PTR [esi+0x1a0],edx
10071762:	74 15                	je     0x10071779
10071764:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1007176a:	57                   	push   edi
1007176b:	8b 11                	mov    edx,DWORD PTR [ecx]
1007176d:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
10071773:	89 86 a0 01 00 00    	mov    DWORD PTR [esi+0x1a0],eax
10071779:	6a 00                	push   0x0
1007177b:	8b ce                	mov    ecx,esi
1007177d:	e8 be 00 00 00       	call   0x10071840
10071782:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10071786:	8b c6                	mov    eax,esi
10071788:	5f                   	pop    edi
10071789:	5e                   	pop    esi
1007178a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10071791:	83 c4 10             	add    esp,0x10
10071794:	c2 18 00             	ret    0x18
10071797:	90                   	nop
10071798:	90                   	nop
10071799:	90                   	nop
1007179a:	90                   	nop
1007179b:	90                   	nop
1007179c:	90                   	nop
1007179d:	90                   	nop
1007179e:	90                   	nop
1007179f:	90                   	nop
100717a0:	56                   	push   esi
100717a1:	8b f1                	mov    esi,ecx
100717a3:	e8 28 00 00 00       	call   0x100717d0
100717a8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
100717ad:	74 09                	je     0x100717b8
100717af:	56                   	push   esi
100717b0:	e8 69 21 03 00       	call   0x100a391e
100717b5:	83 c4 04             	add    esp,0x4
100717b8:	8b c6                	mov    eax,esi
100717ba:	5e                   	pop    esi
100717bb:	c2 04 00             	ret    0x4
100717be:	90                   	nop
100717bf:	90                   	nop
100717c0:	8b 81 8c 01 00 00    	mov    eax,DWORD PTR [ecx+0x18c]
100717c6:	50                   	push   eax
100717c7:	e8 74 00 00 00       	call   0x10071840
100717cc:	c2 04 00             	ret    0x4
100717cf:	90                   	nop
100717d0:	6a ff                	push   0xffffffff
100717d2:	68 f8 61 0b 10       	push   0x100b61f8
100717d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100717dd:	50                   	push   eax
100717de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100717e5:	51                   	push   ecx
100717e6:	56                   	push   esi
100717e7:	8b f1                	mov    esi,ecx
100717e9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
100717ed:	c7 06 00 bd 0b 10    	mov    DWORD PTR [esi],0x100bbd00
100717f3:	8b 86 a0 01 00 00    	mov    eax,DWORD PTR [esi+0x1a0]
100717f9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
10071800:	00 
10071801:	85 c0                	test   eax,eax
10071803:	74 0f                	je     0x10071814
10071805:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1007180b:	50                   	push   eax
1007180c:	8b 11                	mov    edx,DWORD PTR [ecx]
1007180e:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10071814:	8b ce                	mov    ecx,esi
10071816:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
1007181d:	ff 
1007181e:	c7 06 90 bc 0b 10    	mov    DWORD PTR [esi],0x100bbc90
10071824:	e8 f7 cc ff ff       	call   0x1006e520
10071829:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1007182d:	5e                   	pop    esi
1007182e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10071835:	83 c4 10             	add    esp,0x10
10071838:	c3                   	ret
10071839:	90                   	nop
1007183a:	90                   	nop
1007183b:	90                   	nop
1007183c:	90                   	nop
1007183d:	90                   	nop
1007183e:	90                   	nop
1007183f:	90                   	nop
10071840:	83 ec 10             	sub    esp,0x10
10071843:	8d 44 24 00          	lea    eax,[esp+0x0]
10071847:	56                   	push   esi
10071848:	8b f1                	mov    esi,ecx
1007184a:	50                   	push   eax
1007184b:	e8 70 ce ff ff       	call   0x1006e6c0
10071850:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10071854:	c7 86 88 01 00 00 00 	mov    DWORD PTR [esi+0x188],0x0
1007185b:	00 00 00 
1007185e:	89 86 8c 01 00 00    	mov    DWORD PTR [esi+0x18c],eax
10071864:	48                   	dec    eax
10071865:	83 f8 04             	cmp    eax,0x4
10071868:	0f 87 94 00 00 00    	ja     0x10071902
1007186e:	ff 24 85 74 19 07 10 	jmp    DWORD PTR [eax*4+0x10071974]
10071875:	c7 86 90 01 00 00 22 	mov    DWORD PTR [esi+0x190],0x22
1007187c:	00 00 00 
1007187f:	c7 86 94 01 00 00 23 	mov    DWORD PTR [esi+0x194],0x23
10071886:	00 00 00 
10071889:	c7 86 98 01 00 00 24 	mov    DWORD PTR [esi+0x198],0x24
10071890:	00 00 00 
10071893:	e9 88 00 00 00       	jmp    0x10071920
10071898:	c7 86 88 01 00 00 01 	mov    DWORD PTR [esi+0x188],0x1
1007189f:	00 00 00 
100718a2:	c7 86 90 01 00 00 52 	mov    DWORD PTR [esi+0x190],0x52
100718a9:	00 00 00 
100718ac:	c7 86 94 01 00 00 54 	mov    DWORD PTR [esi+0x194],0x54
100718b3:	00 00 00 
100718b6:	c7 86 98 01 00 00 53 	mov    DWORD PTR [esi+0x198],0x53
100718bd:	00 00 00 
100718c0:	eb 5e                	jmp    0x10071920
100718c2:	c7 86 90 01 00 00 ff 	mov    DWORD PTR [esi+0x190],0xffffffff
100718c9:	ff ff ff 
100718cc:	c7 86 94 01 00 00 4d 	mov    DWORD PTR [esi+0x194],0x4d
100718d3:	00 00 00 
100718d6:	c7 86 98 01 00 00 4e 	mov    DWORD PTR [esi+0x198],0x4e
100718dd:	00 00 00 
100718e0:	eb 3e                	jmp    0x10071920
100718e2:	c7 86 90 01 00 00 ff 	mov    DWORD PTR [esi+0x190],0xffffffff
100718e9:	ff ff ff 
100718ec:	c7 86 94 01 00 00 4f 	mov    DWORD PTR [esi+0x194],0x4f
100718f3:	00 00 00 
100718f6:	c7 86 98 01 00 00 50 	mov    DWORD PTR [esi+0x198],0x50
100718fd:	00 00 00 
10071900:	eb 1e                	jmp    0x10071920
10071902:	c7 86 90 01 00 00 1f 	mov    DWORD PTR [esi+0x190],0x1f
10071909:	00 00 00 
1007190c:	c7 86 94 01 00 00 20 	mov    DWORD PTR [esi+0x194],0x20
10071913:	00 00 00 
10071916:	c7 86 98 01 00 00 21 	mov    DWORD PTR [esi+0x198],0x21
1007191d:	00 00 00 
10071920:	8b 8e 98 01 00 00    	mov    ecx,DWORD PTR [esi+0x198]
10071926:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
1007192a:	8d 04 cd 00 00 00 00 	lea    eax,[ecx*8+0x0]
10071931:	2b c1                	sub    eax,ecx
10071933:	c1 e0 02             	shl    eax,0x2
10071936:	8b 88 1c c5 11 10    	mov    ecx,DWORD PTR [eax+0x1011c51c]
1007193c:	3b d1                	cmp    edx,ecx
1007193e:	75 10                	jne    0x10071950
10071940:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10071944:	57                   	push   edi
10071945:	8b b8 20 c5 11 10    	mov    edi,DWORD PTR [eax+0x1011c520]
1007194b:	3b d7                	cmp    edx,edi
1007194d:	5f                   	pop    edi
1007194e:	74 1a                	je     0x1007196a
10071950:	8b 80 20 c5 11 10    	mov    eax,DWORD PTR [eax+0x1011c520]
10071956:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
1007195a:	8d 4c 24 04          	lea    ecx,[esp+0x4]
1007195e:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10071962:	51                   	push   ecx
10071963:	8b ce                	mov    ecx,esi
10071965:	e8 e6 cc ff ff       	call   0x1006e650
1007196a:	5e                   	pop    esi
1007196b:	83 c4 10             	add    esp,0x10
1007196e:	c2 04 00             	ret    0x4
10071971:	8d 49 00             	lea    ecx,[ecx+0x0]
10071974:	75 18                	jne    0x1007198e
10071976:	07                   	pop    es
10071977:	10 98 18 07 10 a2    	adc    BYTE PTR [eax-0x5deff8e8],bl
1007197d:	18 07                	sbb    BYTE PTR [edi],al
1007197f:	10 c2                	adc    dl,al
10071981:	18 07                	sbb    BYTE PTR [edi],al
10071983:	10 e2                	adc    dl,ah
10071985:	18 07                	sbb    BYTE PTR [edi],al
10071987:	10 90 90 90 90 90    	adc    BYTE PTR [eax-0x6f6f6f70],dl
1007198d:	90                   	nop
1007198e:	90                   	nop
1007198f:	90                   	nop
10071990:	56                   	push   esi
10071991:	8b f1                	mov    esi,ecx
10071993:	57                   	push   edi
10071994:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10071998:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
1007199b:	83 f8 03             	cmp    eax,0x3
1007199e:	77 70                	ja     0x10071a10
100719a0:	ff 24 85 54 1a 07 10 	jmp    DWORD PTR [eax*4+0x10071a54]
100719a7:	8b 86 90 01 00 00    	mov    eax,DWORD PTR [esi+0x190]
100719ad:	85 c0                	test   eax,eax
100719af:	7c 5f                	jl     0x10071a10
100719b1:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
100719b8:	2b c8                	sub    ecx,eax
100719ba:	8d 04 8d 08 c5 11 10 	lea    eax,[ecx*4+0x1011c508]
100719c1:	eb 26                	jmp    0x100719e9
100719c3:	8b 86 94 01 00 00    	mov    eax,DWORD PTR [esi+0x194]
100719c9:	eb 0e                	jmp    0x100719d9
100719cb:	8b 86 98 01 00 00    	mov    eax,DWORD PTR [esi+0x198]
100719d1:	eb de                	jmp    0x100719b1
100719d3:	8b 86 9c 01 00 00    	mov    eax,DWORD PTR [esi+0x19c]
100719d9:	8d 14 c5 00 00 00 00 	lea    edx,[eax*8+0x0]
100719e0:	2b d0                	sub    edx,eax
100719e2:	8d 04 95 08 c5 11 10 	lea    eax,[edx*4+0x1011c508]
100719e9:	85 c0                	test   eax,eax
100719eb:	74 23                	je     0x10071a10
100719ed:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100719f0:	8b 17                	mov    edx,DWORD PTR [edi]
100719f2:	51                   	push   ecx
100719f3:	8b 8e 88 01 00 00    	mov    ecx,DWORD PTR [esi+0x188]
100719f9:	f7 d9                	neg    ecx
100719fb:	1b c9                	sbb    ecx,ecx
100719fd:	52                   	push   edx
100719fe:	83 e1 02             	and    ecx,0x2
10071a01:	6a ff                	push   0xffffffff
10071a03:	51                   	push   ecx
10071a04:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071a0a:	50                   	push   eax
10071a0b:	e8 e0 9a fd ff       	call   0x1004b4f0
10071a10:	8b 86 a0 01 00 00    	mov    eax,DWORD PTR [esi+0x1a0]
10071a16:	85 c0                	test   eax,eax
10071a18:	74 32                	je     0x10071a4c
10071a1a:	8b 57 0c             	mov    edx,DWORD PTR [edi+0xc]
10071a1d:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
10071a20:	6a 05                	push   0x5
10071a22:	6a ff                	push   0xffffffff
10071a24:	52                   	push   edx
10071a25:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10071a28:	51                   	push   ecx
10071a29:	8b 0f                	mov    ecx,DWORD PTR [edi]
10071a2b:	52                   	push   edx
10071a2c:	51                   	push   ecx
10071a2d:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10071a33:	50                   	push   eax
10071a34:	8b 11                	mov    edx,DWORD PTR [ecx]
10071a36:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10071a3c:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071a42:	50                   	push   eax
10071a43:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
10071a46:	50                   	push   eax
10071a47:	e8 b4 86 fd ff       	call   0x1004a100
10071a4c:	5f                   	pop    edi
10071a4d:	5e                   	pop    esi
10071a4e:	c2 08 00             	ret    0x8
10071a51:	8d 49 00             	lea    ecx,[ecx+0x0]
10071a54:	a7                   	cmps   DWORD PTR ds:[esi],DWORD PTR es:[edi]
10071a55:	19 07                	sbb    DWORD PTR [edi],eax
10071a57:	10 cb                	adc    bl,cl
10071a59:	19 07                	sbb    DWORD PTR [edi],eax
10071a5b:	10 d3                	adc    bl,dl
10071a5d:	19 07                	sbb    DWORD PTR [edi],eax
10071a5f:	10 c3                	adc    bl,al
10071a61:	19 07                	sbb    DWORD PTR [edi],eax
10071a63:	10 90 90 90 90 90    	adc    BYTE PTR [eax-0x6f6f6f70],dl
10071a69:	90                   	nop
10071a6a:	90                   	nop
10071a6b:	90                   	nop
10071a6c:	90                   	nop
10071a6d:	90                   	nop
10071a6e:	90                   	nop
10071a6f:	90                   	nop
10071a70:	6a ff                	push   0xffffffff
10071a72:	68 18 62 0b 10       	push   0x100b6218
10071a77:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10071a7d:	50                   	push   eax
10071a7e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10071a85:	51                   	push   ecx
10071a86:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10071a8a:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
10071a8e:	56                   	push   esi
10071a8f:	57                   	push   edi
10071a90:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
10071a94:	8b f1                	mov    esi,ecx
10071a96:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
10071a9a:	57                   	push   edi
10071a9b:	50                   	push   eax
10071a9c:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10071aa0:	51                   	push   ecx
10071aa1:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
10071aa5:	52                   	push   edx
10071aa6:	50                   	push   eax
10071aa7:	51                   	push   ecx
10071aa8:	8b ce                	mov    ecx,esi
10071aaa:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
10071aae:	e8 8d 02 00 00       	call   0x10071d40
10071ab3:	33 c0                	xor    eax,eax
10071ab5:	c7 06 70 bd 0b 10    	mov    DWORD PTR [esi],0x100bbd70
10071abb:	3b f8                	cmp    edi,eax
10071abd:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10071ac1:	89 86 84 01 00 00    	mov    DWORD PTR [esi+0x184],eax
10071ac7:	89 86 bc 01 00 00    	mov    DWORD PTR [esi+0x1bc],eax
10071acd:	89 86 a0 01 00 00    	mov    DWORD PTR [esi+0x1a0],eax
10071ad3:	89 86 d8 01 00 00    	mov    DWORD PTR [esi+0x1d8],eax
10071ad9:	89 86 f4 01 00 00    	mov    DWORD PTR [esi+0x1f4],eax
10071adf:	74 15                	je     0x10071af6
10071ae1:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10071ae7:	57                   	push   edi
10071ae8:	8b 11                	mov    edx,DWORD PTR [ecx]
10071aea:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
10071af0:	89 86 f4 01 00 00    	mov    DWORD PTR [esi+0x1f4],eax
10071af6:	6a 01                	push   0x1
10071af8:	8b ce                	mov    ecx,esi
10071afa:	e8 c1 00 00 00       	call   0x10071bc0
10071aff:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10071b03:	8b c6                	mov    eax,esi
10071b05:	5f                   	pop    edi
10071b06:	5e                   	pop    esi
10071b07:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10071b0e:	83 c4 10             	add    esp,0x10
10071b11:	c2 18 00             	ret    0x18
10071b14:	90                   	nop
10071b15:	90                   	nop
10071b16:	90                   	nop
10071b17:	90                   	nop
10071b18:	90                   	nop
10071b19:	90                   	nop
10071b1a:	90                   	nop
10071b1b:	90                   	nop
10071b1c:	90                   	nop
10071b1d:	90                   	nop
10071b1e:	90                   	nop
10071b1f:	90                   	nop
10071b20:	56                   	push   esi
10071b21:	8b f1                	mov    esi,ecx
10071b23:	e8 18 00 00 00       	call   0x10071b40
10071b28:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
10071b2d:	74 09                	je     0x10071b38
10071b2f:	56                   	push   esi
10071b30:	e8 e9 1d 03 00       	call   0x100a391e
10071b35:	83 c4 04             	add    esp,0x4
10071b38:	8b c6                	mov    eax,esi
10071b3a:	5e                   	pop    esi
10071b3b:	c2 04 00             	ret    0x4
10071b3e:	90                   	nop
10071b3f:	90                   	nop
10071b40:	6a ff                	push   0xffffffff
10071b42:	68 38 62 0b 10       	push   0x100b6238
10071b47:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10071b4d:	50                   	push   eax
10071b4e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10071b55:	51                   	push   ecx
10071b56:	56                   	push   esi
10071b57:	8b f1                	mov    esi,ecx
10071b59:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
10071b5d:	c7 06 70 bd 0b 10    	mov    DWORD PTR [esi],0x100bbd70
10071b63:	8b 86 f4 01 00 00    	mov    eax,DWORD PTR [esi+0x1f4]
10071b69:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
10071b70:	00 
10071b71:	85 c0                	test   eax,eax
10071b73:	74 0f                	je     0x10071b84
10071b75:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10071b7b:	50                   	push   eax
10071b7c:	8b 11                	mov    edx,DWORD PTR [ecx]
10071b7e:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10071b84:	8b ce                	mov    ecx,esi
10071b86:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
10071b8d:	ff 
10071b8e:	e8 8d c9 ff ff       	call   0x1006e520
10071b93:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10071b97:	5e                   	pop    esi
10071b98:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10071b9f:	83 c4 10             	add    esp,0x10
10071ba2:	c3                   	ret
10071ba3:	90                   	nop
10071ba4:	90                   	nop
10071ba5:	90                   	nop
10071ba6:	90                   	nop
10071ba7:	90                   	nop
10071ba8:	90                   	nop
10071ba9:	90                   	nop
10071baa:	90                   	nop
10071bab:	90                   	nop
10071bac:	90                   	nop
10071bad:	90                   	nop
10071bae:	90                   	nop
10071baf:	90                   	nop
10071bb0:	8b 81 80 01 00 00    	mov    eax,DWORD PTR [ecx+0x180]
10071bb6:	50                   	push   eax
10071bb7:	e8 04 00 00 00       	call   0x10071bc0
10071bbc:	c2 04 00             	ret    0x4
10071bbf:	90                   	nop
10071bc0:	83 ec 10             	sub    esp,0x10
10071bc3:	8d 44 24 00          	lea    eax,[esp+0x0]
10071bc7:	53                   	push   ebx
10071bc8:	56                   	push   esi
10071bc9:	57                   	push   edi
10071bca:	8b d9                	mov    ebx,ecx
10071bcc:	50                   	push   eax
10071bcd:	e8 ee ca ff ff       	call   0x1006e6c0
10071bd2:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10071bd6:	8d bb 84 01 00 00    	lea    edi,[ebx+0x184]
10071bdc:	85 c0                	test   eax,eax
10071bde:	89 83 80 01 00 00    	mov    DWORD PTR [ebx+0x180],eax
10071be4:	b9 07 00 00 00       	mov    ecx,0x7
10071be9:	74 2b                	je     0x10071c16
10071beb:	be 6c c8 11 10       	mov    esi,0x1011c86c
10071bf0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10071bf2:	8d bb a0 01 00 00    	lea    edi,[ebx+0x1a0]
10071bf8:	b9 07 00 00 00       	mov    ecx,0x7
10071bfd:	be 88 c8 11 10       	mov    esi,0x1011c888
10071c02:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10071c04:	8d bb bc 01 00 00    	lea    edi,[ebx+0x1bc]
10071c0a:	b9 07 00 00 00       	mov    ecx,0x7
10071c0f:	be a4 c8 11 10       	mov    esi,0x1011c8a4
10071c14:	eb 29                	jmp    0x10071c3f
10071c16:	be c0 c8 11 10       	mov    esi,0x1011c8c0
10071c1b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10071c1d:	8d bb a0 01 00 00    	lea    edi,[ebx+0x1a0]
10071c23:	b9 07 00 00 00       	mov    ecx,0x7
10071c28:	be dc c8 11 10       	mov    esi,0x1011c8dc
10071c2d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10071c2f:	8d bb bc 01 00 00    	lea    edi,[ebx+0x1bc]
10071c35:	b9 07 00 00 00       	mov    ecx,0x7
10071c3a:	be f8 c8 11 10       	mov    esi,0x1011c8f8
10071c3f:	8b 83 98 01 00 00    	mov    eax,DWORD PTR [ebx+0x198]
10071c45:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10071c47:	39 44 24 14          	cmp    DWORD PTR [esp+0x14],eax
10071c4b:	75 0e                	jne    0x10071c5b
10071c4d:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10071c51:	8b 93 9c 01 00 00    	mov    edx,DWORD PTR [ebx+0x19c]
10071c57:	3b ca                	cmp    ecx,edx
10071c59:	74 1a                	je     0x10071c75
10071c5b:	8b 93 9c 01 00 00    	mov    edx,DWORD PTR [ebx+0x19c]
10071c61:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10071c65:	8d 44 24 0c          	lea    eax,[esp+0xc]
10071c69:	8b cb                	mov    ecx,ebx
10071c6b:	50                   	push   eax
10071c6c:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
10071c70:	e8 db c9 ff ff       	call   0x1006e650
10071c75:	5f                   	pop    edi
10071c76:	5e                   	pop    esi
10071c77:	5b                   	pop    ebx
10071c78:	83 c4 10             	add    esp,0x10
10071c7b:	c2 04 00             	ret    0x4
10071c7e:	90                   	nop
10071c7f:	90                   	nop
10071c80:	56                   	push   esi
10071c81:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
10071c85:	57                   	push   edi
10071c86:	8b f9                	mov    edi,ecx
10071c88:	8b 47 40             	mov    eax,DWORD PTR [edi+0x40]
10071c8b:	85 c0                	test   eax,eax
10071c8d:	75 13                	jne    0x10071ca2
10071c8f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10071c92:	8b 0e                	mov    ecx,DWORD PTR [esi]
10071c94:	50                   	push   eax
10071c95:	51                   	push   ecx
10071c96:	6a ff                	push   0xffffffff
10071c98:	6a 00                	push   0x0
10071c9a:	8d 97 84 01 00 00    	lea    edx,[edi+0x184]
10071ca0:	eb 46                	jmp    0x10071ce8
10071ca2:	83 f8 03             	cmp    eax,0x3
10071ca5:	75 13                	jne    0x10071cba
10071ca7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10071caa:	8b 0e                	mov    ecx,DWORD PTR [esi]
10071cac:	50                   	push   eax
10071cad:	51                   	push   ecx
10071cae:	6a ff                	push   0xffffffff
10071cb0:	6a 00                	push   0x0
10071cb2:	8d 97 a0 01 00 00    	lea    edx,[edi+0x1a0]
10071cb8:	eb 2e                	jmp    0x10071ce8
10071cba:	83 f8 01             	cmp    eax,0x1
10071cbd:	75 13                	jne    0x10071cd2
10071cbf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10071cc2:	8b 0e                	mov    ecx,DWORD PTR [esi]
10071cc4:	50                   	push   eax
10071cc5:	51                   	push   ecx
10071cc6:	6a ff                	push   0xffffffff
10071cc8:	6a 00                	push   0x0
10071cca:	8d 97 bc 01 00 00    	lea    edx,[edi+0x1bc]
10071cd0:	eb 16                	jmp    0x10071ce8
10071cd2:	83 f8 02             	cmp    eax,0x2
10071cd5:	75 1d                	jne    0x10071cf4
10071cd7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10071cda:	8b 0e                	mov    ecx,DWORD PTR [esi]
10071cdc:	50                   	push   eax
10071cdd:	51                   	push   ecx
10071cde:	6a ff                	push   0xffffffff
10071ce0:	6a 00                	push   0x0
10071ce2:	8d 97 d8 01 00 00    	lea    edx,[edi+0x1d8]
10071ce8:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071cee:	52                   	push   edx
10071cef:	e8 fc 97 fd ff       	call   0x1004b4f0
10071cf4:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10071cf7:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10071cfa:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10071cfd:	6a 05                	push   0x5
10071cff:	6a ff                	push   0xffffffff
10071d01:	50                   	push   eax
10071d02:	8b 06                	mov    eax,DWORD PTR [esi]
10071d04:	51                   	push   ecx
10071d05:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10071d0b:	52                   	push   edx
10071d0c:	50                   	push   eax
10071d0d:	8b 87 f4 01 00 00    	mov    eax,DWORD PTR [edi+0x1f4]
10071d13:	8b 11                	mov    edx,DWORD PTR [ecx]
10071d15:	50                   	push   eax
10071d16:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10071d1c:	8b 4f 2c             	mov    ecx,DWORD PTR [edi+0x2c]
10071d1f:	50                   	push   eax
10071d20:	51                   	push   ecx
10071d21:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071d27:	e8 d4 83 fd ff       	call   0x1004a100
10071d2c:	5f                   	pop    edi
10071d2d:	5e                   	pop    esi
10071d2e:	c2 08 00             	ret    0x8
10071d31:	90                   	nop
10071d32:	90                   	nop
10071d33:	90                   	nop
10071d34:	90                   	nop
10071d35:	90                   	nop
10071d36:	90                   	nop
10071d37:	90                   	nop
10071d38:	90                   	nop
10071d39:	90                   	nop
10071d3a:	90                   	nop
10071d3b:	90                   	nop
10071d3c:	90                   	nop
10071d3d:	90                   	nop
10071d3e:	90                   	nop
10071d3f:	90                   	nop
10071d40:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10071d44:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10071d48:	53                   	push   ebx
10071d49:	56                   	push   esi
10071d4a:	8b f1                	mov    esi,ecx
10071d4c:	50                   	push   eax
10071d4d:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10071d51:	51                   	push   ecx
10071d52:	52                   	push   edx
10071d53:	8b ce                	mov    ecx,esi
10071d55:	e8 26 c6 ff ff       	call   0x1006e380
10071d5a:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10071d5e:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
10071d62:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10071d65:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10071d69:	33 db                	xor    ebx,ebx
10071d6b:	c7 06 e0 bd 0b 10    	mov    DWORD PTR [esi],0x100bbde0
10071d71:	3b c3                	cmp    eax,ebx
10071d73:	89 4e 34             	mov    DWORD PTR [esi+0x34],ecx
10071d76:	89 5e 40             	mov    DWORD PTR [esi+0x40],ebx
10071d79:	89 5e 44             	mov    DWORD PTR [esi+0x44],ebx
10071d7c:	89 5e 4c             	mov    DWORD PTR [esi+0x4c],ebx
10071d7f:	74 14                	je     0x10071d95
10071d81:	68 ff 00 00 00       	push   0xff
10071d86:	8d 56 50             	lea    edx,[esi+0x50]
10071d89:	50                   	push   eax
10071d8a:	52                   	push   edx
10071d8b:	e8 90 1a 03 00       	call   0x100a3820
10071d90:	83 c4 0c             	add    esp,0xc
10071d93:	eb 03                	jmp    0x10071d98
10071d95:	88 5e 50             	mov    BYTE PTR [esi+0x50],bl
10071d98:	89 9e 54 01 00 00    	mov    DWORD PTR [esi+0x154],ebx
10071d9e:	89 9e 50 01 00 00    	mov    DWORD PTR [esi+0x150],ebx
10071da4:	89 9e 58 01 00 00    	mov    DWORD PTR [esi+0x158],ebx
10071daa:	a1 78 d5 0d 10       	mov    eax,ds:0x100dd578
10071daf:	89 86 64 01 00 00    	mov    DWORD PTR [esi+0x164],eax
10071db5:	8b 0d 54 d5 0d 10    	mov    ecx,DWORD PTR ds:0x100dd554
10071dbb:	89 8e 5c 01 00 00    	mov    DWORD PTR [esi+0x15c],ecx
10071dc1:	8b 15 60 d5 0d 10    	mov    edx,DWORD PTR ds:0x100dd560
10071dc7:	89 96 60 01 00 00    	mov    DWORD PTR [esi+0x160],edx
10071dcd:	a1 74 d5 0d 10       	mov    eax,ds:0x100dd574
10071dd2:	89 86 70 01 00 00    	mov    DWORD PTR [esi+0x170],eax
10071dd8:	8b 0d 50 d5 0d 10    	mov    ecx,DWORD PTR ds:0x100dd550
10071dde:	89 8e 68 01 00 00    	mov    DWORD PTR [esi+0x168],ecx
10071de4:	8b 15 5c d5 0d 10    	mov    edx,DWORD PTR ds:0x100dd55c
10071dea:	89 96 6c 01 00 00    	mov    DWORD PTR [esi+0x16c],edx
10071df0:	a1 7c d5 0d 10       	mov    eax,ds:0x100dd57c
10071df5:	89 86 7c 01 00 00    	mov    DWORD PTR [esi+0x17c],eax
10071dfb:	8b 0d 58 d5 0d 10    	mov    ecx,DWORD PTR ds:0x100dd558
10071e01:	89 8e 74 01 00 00    	mov    DWORD PTR [esi+0x174],ecx
10071e07:	8b 15 64 d5 0d 10    	mov    edx,DWORD PTR ds:0x100dd564
10071e0d:	89 96 78 01 00 00    	mov    DWORD PTR [esi+0x178],edx
10071e13:	a1 f0 b6 0d 10       	mov    eax,ds:0x100db6f0
10071e18:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
10071e1b:	8b c6                	mov    eax,esi
10071e1d:	5e                   	pop    esi
10071e1e:	5b                   	pop    ebx
10071e1f:	c2 18 00             	ret    0x18
10071e22:	90                   	nop
10071e23:	90                   	nop
10071e24:	90                   	nop
10071e25:	90                   	nop
10071e26:	90                   	nop
10071e27:	90                   	nop
10071e28:	90                   	nop
10071e29:	90                   	nop
10071e2a:	90                   	nop
10071e2b:	90                   	nop
10071e2c:	90                   	nop
10071e2d:	90                   	nop
10071e2e:	90                   	nop
10071e2f:	90                   	nop
10071e30:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10071e34:	85 c0                	test   eax,eax
10071e36:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
10071e39:	74 17                	je     0x10071e52
10071e3b:	8b 41 30             	mov    eax,DWORD PTR [ecx+0x30]
10071e3e:	8b 51 34             	mov    edx,DWORD PTR [ecx+0x34]
10071e41:	50                   	push   eax
10071e42:	52                   	push   edx
10071e43:	c7 41 40 01 00 00 00 	mov    DWORD PTR [ecx+0x40],0x1
10071e4a:	e8 d1 ca ff ff       	call   0x1006e920
10071e4f:	c2 04 00             	ret    0x4
10071e52:	c7 41 40 00 00 00 00 	mov    DWORD PTR [ecx+0x40],0x0
10071e59:	c2 04 00             	ret    0x4
10071e5c:	90                   	nop
10071e5d:	90                   	nop
10071e5e:	90                   	nop
10071e5f:	90                   	nop
10071e60:	56                   	push   esi
10071e61:	57                   	push   edi
10071e62:	8b f9                	mov    edi,ecx
10071e64:	8b 87 54 01 00 00    	mov    eax,DWORD PTR [edi+0x154]
10071e6a:	85 c0                	test   eax,eax
10071e6c:	74 59                	je     0x10071ec7
10071e6e:	8b 47 40             	mov    eax,DWORD PTR [edi+0x40]
10071e71:	85 c0                	test   eax,eax
10071e73:	75 52                	jne    0x10071ec7
10071e75:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10071e7b:	6a 03                	push   0x3
10071e7d:	8b 01                	mov    eax,DWORD PTR [ecx]
10071e7f:	ff 50 14             	call   DWORD PTR [eax+0x14]
10071e82:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
10071e86:	6a ff                	push   0xffffffff
10071e88:	6a 00                	push   0x0
10071e8a:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
10071e8d:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10071e90:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10071e93:	49                   	dec    ecx
10071e94:	4a                   	dec    edx
10071e95:	51                   	push   ecx
10071e96:	8b 0e                	mov    ecx,DWORD PTR [esi]
10071e98:	52                   	push   edx
10071e99:	8b 97 54 01 00 00    	mov    edx,DWORD PTR [edi+0x154]
10071e9f:	50                   	push   eax
10071ea0:	51                   	push   ecx
10071ea1:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071ea7:	52                   	push   edx
10071ea8:	e8 e3 87 fd ff       	call   0x1004a690
10071ead:	8b 87 68 01 00 00    	mov    eax,DWORD PTR [edi+0x168]
10071eb3:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
10071eb6:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10071eb9:	6a 00                	push   0x0
10071ebb:	50                   	push   eax
10071ebc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10071ebf:	51                   	push   ecx
10071ec0:	8b 0e                	mov    ecx,DWORD PTR [esi]
10071ec2:	52                   	push   edx
10071ec3:	50                   	push   eax
10071ec4:	51                   	push   ecx
10071ec5:	eb 50                	jmp    0x10071f17
10071ec7:	8b 57 40             	mov    edx,DWORD PTR [edi+0x40]
10071eca:	33 c9                	xor    ecx,ecx
10071ecc:	33 c0                	xor    eax,eax
10071ece:	2b d1                	sub    edx,ecx
10071ed0:	74 24                	je     0x10071ef6
10071ed2:	4a                   	dec    edx
10071ed3:	74 13                	je     0x10071ee8
10071ed5:	83 ea 02             	sub    edx,0x2
10071ed8:	75 28                	jne    0x10071f02
10071eda:	8b 87 64 01 00 00    	mov    eax,DWORD PTR [edi+0x164]
10071ee0:	8b 8f 70 01 00 00    	mov    ecx,DWORD PTR [edi+0x170]
10071ee6:	eb 1a                	jmp    0x10071f02
10071ee8:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
10071eee:	8b 8f 6c 01 00 00    	mov    ecx,DWORD PTR [edi+0x16c]
10071ef4:	eb 0c                	jmp    0x10071f02
10071ef6:	8b 87 5c 01 00 00    	mov    eax,DWORD PTR [edi+0x15c]
10071efc:	8b 8f 68 01 00 00    	mov    ecx,DWORD PTR [edi+0x168]
10071f02:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
10071f06:	50                   	push   eax
10071f07:	51                   	push   ecx
10071f08:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
10071f0b:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10071f0e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10071f11:	52                   	push   edx
10071f12:	8b 16                	mov    edx,DWORD PTR [esi]
10071f14:	50                   	push   eax
10071f15:	51                   	push   ecx
10071f16:	52                   	push   edx
10071f17:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071f1d:	e8 4e 76 fd ff       	call   0x10049570
10071f22:	83 7f 40 03          	cmp    DWORD PTR [edi+0x40],0x3
10071f26:	0f 84 a2 00 00 00    	je     0x10071fce
10071f2c:	d9 87 58 01 00 00    	fld    DWORD PTR [edi+0x158]
10071f32:	d8 05 e0 83 0b 10    	fadd   DWORD PTR ds:0x100b83e0
10071f38:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10071f3e:	8b 01                	mov    eax,DWORD PTR [ecx]
10071f40:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10071f44:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
10071f4a:	d8 5c 24 10          	fcomp  DWORD PTR [esp+0x10]
10071f4e:	df e0                	fnstsw ax
10071f50:	f6 c4 01             	test   ah,0x1
10071f53:	74 79                	je     0x10071fce
10071f55:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10071f5b:	8b 11                	mov    edx,DWORD PTR [ecx]
10071f5d:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
10071f63:	d8 a7 58 01 00 00    	fsub   DWORD PTR [edi+0x158]
10071f69:	dc c0                	fadd   st(0),st
10071f6b:	d8 0d f0 85 0b 10    	fmul   DWORD PTR ds:0x100b85f0
10071f71:	e8 be 1e 03 00       	call   0x100a3e34
10071f76:	b9 ff 00 00 00       	mov    ecx,0xff
10071f7b:	33 d2                	xor    edx,edx
10071f7d:	2b c8                	sub    ecx,eax
10071f7f:	8b 87 64 01 00 00    	mov    eax,DWORD PTR [edi+0x164]
10071f85:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10071f89:	8a 54 24 12          	mov    dl,BYTE PTR [esp+0x12]
10071f8d:	8a f1                	mov    dh,cl
10071f8f:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
10071f92:	c1 e8 08             	shr    eax,0x8
10071f95:	c1 e2 08             	shl    edx,0x8
10071f98:	25 ff 00 00 00       	and    eax,0xff
10071f9d:	83 e9 02             	sub    ecx,0x2
10071fa0:	0b d0                	or     edx,eax
10071fa2:	33 c0                	xor    eax,eax
10071fa4:	8a 87 64 01 00 00    	mov    al,BYTE PTR [edi+0x164]
10071faa:	c1 e2 08             	shl    edx,0x8
10071fad:	0b d0                	or     edx,eax
10071faf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10071fb2:	52                   	push   edx
10071fb3:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10071fb6:	6a 00                	push   0x0
10071fb8:	51                   	push   ecx
10071fb9:	8b 0e                	mov    ecx,DWORD PTR [esi]
10071fbb:	83 ea 02             	sub    edx,0x2
10071fbe:	40                   	inc    eax
10071fbf:	52                   	push   edx
10071fc0:	41                   	inc    ecx
10071fc1:	50                   	push   eax
10071fc2:	51                   	push   ecx
10071fc3:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10071fc9:	e8 a2 75 fd ff       	call   0x10049570
10071fce:	8b 87 50 01 00 00    	mov    eax,DWORD PTR [edi+0x150]
10071fd4:	85 c0                	test   eax,eax
10071fd6:	74 34                	je     0x1007200c
10071fd8:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10071fde:	6a 03                	push   0x3
10071fe0:	8b 11                	mov    edx,DWORD PTR [ecx]
10071fe2:	ff 52 14             	call   DWORD PTR [edx+0x14]
10071fe5:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10071fe8:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10071feb:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10071fee:	6a ff                	push   0xffffffff
10071ff0:	48                   	dec    eax
10071ff1:	6a 00                	push   0x0
10071ff3:	49                   	dec    ecx
10071ff4:	50                   	push   eax
10071ff5:	8b 06                	mov    eax,DWORD PTR [esi]
10071ff7:	51                   	push   ecx
10071ff8:	8b 8f 50 01 00 00    	mov    ecx,DWORD PTR [edi+0x150]
10071ffe:	52                   	push   edx
10071fff:	50                   	push   eax
10072000:	51                   	push   ecx
10072001:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10072007:	e8 84 86 fd ff       	call   0x1004a690
1007200c:	8d 57 50             	lea    edx,[edi+0x50]
1007200f:	85 d2                	test   edx,edx
10072011:	74 49                	je     0x1007205c
10072013:	8b 47 40             	mov    eax,DWORD PTR [edi+0x40]
10072016:	33 c9                	xor    ecx,ecx
10072018:	2b c1                	sub    eax,ecx
1007201a:	74 18                	je     0x10072034
1007201c:	48                   	dec    eax
1007201d:	74 0d                	je     0x1007202c
1007201f:	83 e8 02             	sub    eax,0x2
10072022:	75 16                	jne    0x1007203a
10072024:	8b 8f 7c 01 00 00    	mov    ecx,DWORD PTR [edi+0x17c]
1007202a:	eb 0e                	jmp    0x1007203a
1007202c:	8b 8f 78 01 00 00    	mov    ecx,DWORD PTR [edi+0x178]
10072032:	eb 06                	jmp    0x1007203a
10072034:	8b 8f 74 01 00 00    	mov    ecx,DWORD PTR [edi+0x174]
1007203a:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007203d:	6a 05                	push   0x5
1007203f:	51                   	push   ecx
10072040:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10072043:	50                   	push   eax
10072044:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10072047:	51                   	push   ecx
10072048:	8b 0e                	mov    ecx,DWORD PTR [esi]
1007204a:	50                   	push   eax
1007204b:	51                   	push   ecx
1007204c:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10072052:	52                   	push   edx
10072053:	8b 57 2c             	mov    edx,DWORD PTR [edi+0x2c]
10072056:	52                   	push   edx
10072057:	e8 a4 80 fd ff       	call   0x1004a100
1007205c:	5f                   	pop    edi
1007205d:	5e                   	pop    esi
1007205e:	c2 08 00             	ret    0x8
10072061:	90                   	nop
10072062:	90                   	nop
10072063:	90                   	nop
10072064:	90                   	nop
10072065:	90                   	nop
10072066:	90                   	nop
10072067:	90                   	nop
10072068:	90                   	nop
10072069:	90                   	nop
1007206a:	90                   	nop
1007206b:	90                   	nop
1007206c:	90                   	nop
1007206d:	90                   	nop
1007206e:	90                   	nop
1007206f:	90                   	nop
10072070:	56                   	push   esi
10072071:	8b f1                	mov    esi,ecx
10072073:	b8 01 00 00 00       	mov    eax,0x1
10072078:	84 46 44             	test   BYTE PTR [esi+0x44],al
1007207b:	74 3d                	je     0x100720ba
1007207d:	39 46 40             	cmp    DWORD PTR [esi+0x40],eax
10072080:	75 30                	jne    0x100720b2
10072082:	6a 1c                	push   0x1c
10072084:	89 46 4c             	mov    DWORD PTR [esi+0x4c],eax
10072087:	c7 46 40 03 00 00 00 	mov    DWORD PTR [esi+0x40],0x3
1007208e:	e8 ad b1 fc ff       	call   0x1003d240
10072093:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10072096:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10072099:	83 c4 04             	add    esp,0x4
1007209c:	50                   	push   eax
1007209d:	51                   	push   ecx
1007209e:	8b ce                	mov    ecx,esi
100720a0:	e8 9b c8 ff ff       	call   0x1006e940
100720a5:	8b 56 30             	mov    edx,DWORD PTR [esi+0x30]
100720a8:	6a 00                	push   0x0
100720aa:	52                   	push   edx
100720ab:	8b ce                	mov    ecx,esi
100720ad:	e8 6e c8 ff ff       	call   0x1006e920
100720b2:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
100720b5:	24 fe                	and    al,0xfe
100720b7:	89 46 44             	mov    DWORD PTR [esi+0x44],eax
100720ba:	5e                   	pop    esi
100720bb:	c2 0c 00             	ret    0xc
100720be:	90                   	nop
100720bf:	90                   	nop
100720c0:	56                   	push   esi
100720c1:	8b f1                	mov    esi,ecx
100720c3:	83 7e 40 02          	cmp    DWORD PTR [esi+0x40],0x2
100720c7:	74 22                	je     0x100720eb
100720c9:	8a 4e 44             	mov    cl,BYTE PTR [esi+0x44]
100720cc:	b8 01 00 00 00       	mov    eax,0x1
100720d1:	84 c8                	test   al,cl
100720d3:	74 05                	je     0x100720da
100720d5:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
100720d8:	5e                   	pop    esi
100720d9:	c3                   	ret
100720da:	6a 3c                	push   0x3c
100720dc:	e8 5f b1 fc ff       	call   0x1003d240
100720e1:	83 c4 04             	add    esp,0x4
100720e4:	c7 46 40 03 00 00 00 	mov    DWORD PTR [esi+0x40],0x3
100720eb:	5e                   	pop    esi
100720ec:	c3                   	ret
100720ed:	90                   	nop
100720ee:	90                   	nop
100720ef:	90                   	nop
100720f0:	56                   	push   esi
100720f1:	8b f1                	mov    esi,ecx
100720f3:	83 7e 40 02          	cmp    DWORD PTR [esi+0x40],0x2
100720f7:	74 2b                	je     0x10072124
100720f9:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
100720fc:	85 c0                	test   eax,eax
100720fe:	74 09                	je     0x10072109
10072100:	c7 46 40 01 00 00 00 	mov    DWORD PTR [esi+0x40],0x1
10072107:	5e                   	pop    esi
10072108:	c3                   	ret
10072109:	c7 46 40 00 00 00 00 	mov    DWORD PTR [esi+0x40],0x0
10072110:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10072116:	8b 01                	mov    eax,DWORD PTR [ecx]
10072118:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1007211e:	d9 9e 58 01 00 00    	fstp   DWORD PTR [esi+0x158]
10072124:	5e                   	pop    esi
10072125:	c3                   	ret
10072126:	90                   	nop
10072127:	90                   	nop
10072128:	90                   	nop
10072129:	90                   	nop
1007212a:	90                   	nop
1007212b:	90                   	nop
1007212c:	90                   	nop
1007212d:	90                   	nop
1007212e:	90                   	nop
1007212f:	90                   	nop
10072130:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10072134:	8b 51 34             	mov    edx,DWORD PTR [ecx+0x34]
10072137:	3b c2                	cmp    eax,edx
10072139:	75 13                	jne    0x1007214e
1007213b:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1007213f:	8b 41 30             	mov    eax,DWORD PTR [ecx+0x30]
10072142:	3b d0                	cmp    edx,eax
10072144:	74 08                	je     0x1007214e
10072146:	33 c0                	xor    eax,eax
10072148:	89 41 40             	mov    DWORD PTR [ecx+0x40],eax
1007214b:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
1007214e:	33 c0                	xor    eax,eax
10072150:	c2 08 00             	ret    0x8
10072153:	90                   	nop
10072154:	90                   	nop
10072155:	90                   	nop
10072156:	90                   	nop
10072157:	90                   	nop
10072158:	90                   	nop
10072159:	90                   	nop
1007215a:	90                   	nop
1007215b:	90                   	nop
1007215c:	90                   	nop
1007215d:	90                   	nop
1007215e:	90                   	nop
1007215f:	90                   	nop
10072160:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10072164:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10072168:	89 81 64 01 00 00    	mov    DWORD PTR [ecx+0x164],eax
1007216e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10072172:	89 91 5c 01 00 00    	mov    DWORD PTR [ecx+0x15c],edx
10072178:	89 81 60 01 00 00    	mov    DWORD PTR [ecx+0x160],eax
1007217e:	c2 0c 00             	ret    0xc
10072181:	90                   	nop
10072182:	90                   	nop
10072183:	90                   	nop
10072184:	90                   	nop
10072185:	90                   	nop
10072186:	90                   	nop
10072187:	90                   	nop
10072188:	90                   	nop
10072189:	90                   	nop
1007218a:	90                   	nop
1007218b:	90                   	nop
1007218c:	90                   	nop
1007218d:	90                   	nop
1007218e:	90                   	nop
1007218f:	90                   	nop
10072190:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10072194:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10072198:	89 81 70 01 00 00    	mov    DWORD PTR [ecx+0x170],eax
1007219e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
100721a2:	89 91 68 01 00 00    	mov    DWORD PTR [ecx+0x168],edx
100721a8:	89 81 6c 01 00 00    	mov    DWORD PTR [ecx+0x16c],eax
100721ae:	c2 0c 00             	ret    0xc
100721b1:	90                   	nop
100721b2:	90                   	nop
100721b3:	90                   	nop
100721b4:	90                   	nop
100721b5:	90                   	nop
100721b6:	90                   	nop
100721b7:	90                   	nop
100721b8:	90                   	nop
100721b9:	90                   	nop
100721ba:	90                   	nop
100721bb:	90                   	nop
100721bc:	90                   	nop
100721bd:	90                   	nop
100721be:	90                   	nop
100721bf:	90                   	nop
100721c0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100721c4:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
100721c8:	89 81 7c 01 00 00    	mov    DWORD PTR [ecx+0x17c],eax
100721ce:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
100721d2:	89 91 74 01 00 00    	mov    DWORD PTR [ecx+0x174],edx
100721d8:	89 81 78 01 00 00    	mov    DWORD PTR [ecx+0x178],eax
100721de:	c2 0c 00             	ret    0xc
100721e1:	90                   	nop
100721e2:	90                   	nop
100721e3:	90                   	nop
100721e4:	90                   	nop
100721e5:	90                   	nop
100721e6:	90                   	nop
100721e7:	90                   	nop
100721e8:	90                   	nop
100721e9:	90                   	nop
100721ea:	90                   	nop
100721eb:	90                   	nop
100721ec:	90                   	nop
100721ed:	90                   	nop
100721ee:	90                   	nop
100721ef:	90                   	nop
100721f0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100721f4:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
100721f8:	56                   	push   esi
100721f9:	8b f1                	mov    esi,ecx
100721fb:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
100721ff:	50                   	push   eax
10072200:	51                   	push   ecx
10072201:	52                   	push   edx
10072202:	8b ce                	mov    ecx,esi
10072204:	e8 77 c1 ff ff       	call   0x1006e380
10072209:	33 c0                	xor    eax,eax
1007220b:	c7 06 50 be 0b 10    	mov    DWORD PTR [esi],0x100bbe50
10072211:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
10072214:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10072217:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
1007221a:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
1007221d:	8b c6                	mov    eax,esi
1007221f:	5e                   	pop    esi
10072220:	c2 0c 00             	ret    0xc
10072223:	90                   	nop
10072224:	90                   	nop
10072225:	90                   	nop
10072226:	90                   	nop
10072227:	90                   	nop
10072228:	90                   	nop
10072229:	90                   	nop
1007222a:	90                   	nop
1007222b:	90                   	nop
1007222c:	90                   	nop
1007222d:	90                   	nop
1007222e:	90                   	nop
1007222f:	90                   	nop
10072230:	56                   	push   esi
10072231:	8b f1                	mov    esi,ecx
10072233:	e8 18 00 00 00       	call   0x10072250
10072238:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1007223d:	74 09                	je     0x10072248
1007223f:	56                   	push   esi
10072240:	e8 d9 16 03 00       	call   0x100a391e
10072245:	83 c4 04             	add    esp,0x4
10072248:	8b c6                	mov    eax,esi
1007224a:	5e                   	pop    esi
1007224b:	c2 04 00             	ret    0x4
1007224e:	90                   	nop
1007224f:	90                   	nop
10072250:	c7 01 50 be 0b 10    	mov    DWORD PTR [ecx],0x100bbe50
10072256:	e9 c5 c2 ff ff       	jmp    0x1006e520
1007225b:	90                   	nop
1007225c:	90                   	nop
1007225d:	90                   	nop
1007225e:	90                   	nop
1007225f:	90                   	nop
10072260:	83 79 34 03          	cmp    DWORD PTR [ecx+0x34],0x3
10072264:	74 16                	je     0x1007227c
10072266:	83 7c 24 04 20       	cmp    DWORD PTR [esp+0x4],0x20
1007226b:	75 0f                	jne    0x1007227c
1007226d:	c7 41 34 02 00 00 00 	mov    DWORD PTR [ecx+0x34],0x2
10072274:	b8 01 00 00 00       	mov    eax,0x1
10072279:	c2 08 00             	ret    0x8
1007227c:	33 c0                	xor    eax,eax
1007227e:	c2 08 00             	ret    0x8
10072281:	90                   	nop
10072282:	90                   	nop
10072283:	90                   	nop
10072284:	90                   	nop
10072285:	90                   	nop
10072286:	90                   	nop
10072287:	90                   	nop
10072288:	90                   	nop
10072289:	90                   	nop
1007228a:	90                   	nop
1007228b:	90                   	nop
1007228c:	90                   	nop
1007228d:	90                   	nop
1007228e:	90                   	nop
1007228f:	90                   	nop
10072290:	8b 41 38             	mov    eax,DWORD PTR [ecx+0x38]
10072293:	0c 01                	or     al,0x1
10072295:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
10072298:	8b 41 34             	mov    eax,DWORD PTR [ecx+0x34]
1007229b:	83 f8 03             	cmp    eax,0x3
1007229e:	74 07                	je     0x100722a7
100722a0:	c7 41 34 02 00 00 00 	mov    DWORD PTR [ecx+0x34],0x2
100722a7:	c2 0c 00             	ret    0xc
100722aa:	90                   	nop
100722ab:	90                   	nop
100722ac:	90                   	nop
100722ad:	90                   	nop
100722ae:	90                   	nop
100722af:	90                   	nop
100722b0:	56                   	push   esi
100722b1:	8b f1                	mov    esi,ecx
100722b3:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
100722b6:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
100722b9:	83 e1 fe             	and    ecx,0xfffffffe
100722bc:	83 f8 03             	cmp    eax,0x3
100722bf:	89 4e 38             	mov    DWORD PTR [esi+0x38],ecx
100722c2:	74 1f                	je     0x100722e3
100722c4:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
100722c7:	85 c0                	test   eax,eax
100722c9:	74 11                	je     0x100722dc
100722cb:	6a 1c                	push   0x1c
100722cd:	e8 6e af fc ff       	call   0x1003d240
100722d2:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
100722d5:	50                   	push   eax
100722d6:	ff 56 2c             	call   DWORD PTR [esi+0x2c]
100722d9:	83 c4 08             	add    esp,0x8
100722dc:	c7 46 34 01 00 00 00 	mov    DWORD PTR [esi+0x34],0x1
100722e3:	5e                   	pop    esi
100722e4:	c2 0c 00             	ret    0xc
100722e7:	90                   	nop
100722e8:	90                   	nop
100722e9:	90                   	nop
100722ea:	90                   	nop
100722eb:	90                   	nop
100722ec:	90                   	nop
100722ed:	90                   	nop
100722ee:	90                   	nop
100722ef:	90                   	nop
100722f0:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
100722f4:	8b 01                	mov    eax,DWORD PTR [ecx]
100722f6:	52                   	push   edx
100722f7:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
100722fb:	52                   	push   edx
100722fc:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10072300:	52                   	push   edx
10072301:	ff 50 24             	call   DWORD PTR [eax+0x24]
10072304:	c2 0c 00             	ret    0xc
10072307:	90                   	nop
10072308:	90                   	nop
10072309:	90                   	nop
1007230a:	90                   	nop
1007230b:	90                   	nop
1007230c:	90                   	nop
1007230d:	90                   	nop
1007230e:	90                   	nop
1007230f:	90                   	nop
10072310:	83 79 34 03          	cmp    DWORD PTR [ecx+0x34],0x3
10072314:	74 17                	je     0x1007232d
10072316:	8b 41 38             	mov    eax,DWORD PTR [ecx+0x38]
10072319:	6a 3c                	push   0x3c
1007231b:	24 01                	and    al,0x1
1007231d:	f6 d8                	neg    al
1007231f:	1b c0                	sbb    eax,eax
10072321:	f7 d8                	neg    eax
10072323:	40                   	inc    eax
10072324:	89 41 34             	mov    DWORD PTR [ecx+0x34],eax
10072327:	e8 14 af fc ff       	call   0x1003d240
1007232c:	59                   	pop    ecx
1007232d:	c3                   	ret
1007232e:	90                   	nop
1007232f:	90                   	nop
10072330:	83 79 34 03          	cmp    DWORD PTR [ecx+0x34],0x3
10072334:	74 07                	je     0x1007233d
10072336:	c7 41 34 00 00 00 00 	mov    DWORD PTR [ecx+0x34],0x0
1007233d:	c3                   	ret
1007233e:	90                   	nop
1007233f:	90                   	nop
10072340:	56                   	push   esi
10072341:	8b f1                	mov    esi,ecx
10072343:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
10072346:	85 c0                	test   eax,eax
10072348:	74 11                	je     0x1007235b
1007234a:	6a 1c                	push   0x1c
1007234c:	e8 ef ae fc ff       	call   0x1003d240
10072351:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10072354:	50                   	push   eax
10072355:	ff 56 2c             	call   DWORD PTR [esi+0x2c]
10072358:	83 c4 08             	add    esp,0x8
1007235b:	5e                   	pop    esi
1007235c:	c3                   	ret
1007235d:	90                   	nop
1007235e:	90                   	nop
1007235f:	90                   	nop
10072360:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10072364:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10072368:	89 41 2c             	mov    DWORD PTR [ecx+0x2c],eax
1007236b:	89 51 30             	mov    DWORD PTR [ecx+0x30],edx
1007236e:	c2 08 00             	ret    0x8
10072371:	90                   	nop
10072372:	90                   	nop
10072373:	90                   	nop
10072374:	90                   	nop
10072375:	90                   	nop
10072376:	90                   	nop
10072377:	90                   	nop
10072378:	90                   	nop
10072379:	90                   	nop
1007237a:	90                   	nop
1007237b:	90                   	nop
1007237c:	90                   	nop
1007237d:	90                   	nop
1007237e:	90                   	nop
1007237f:	90                   	nop
10072380:	83 ec 10             	sub    esp,0x10
10072383:	8d 44 24 00          	lea    eax,[esp+0x0]
10072387:	56                   	push   esi
10072388:	57                   	push   edi
10072389:	8b f1                	mov    esi,ecx
1007238b:	50                   	push   eax
1007238c:	e8 2f c3 ff ff       	call   0x1006e6c0
10072391:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10072397:	6a 02                	push   0x2
10072399:	8b 11                	mov    edx,DWORD PTR [ecx]
1007239b:	ff 52 18             	call   DWORD PTR [edx+0x18]
1007239e:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100723a4:	6a 01                	push   0x1
100723a6:	8b 01                	mov    eax,DWORD PTR [ecx]
100723a8:	ff 50 0c             	call   DWORD PTR [eax+0xc]
100723ab:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100723b1:	6a 00                	push   0x0
100723b3:	8b 11                	mov    edx,DWORD PTR [ecx]
100723b5:	ff 52 20             	call   DWORD PTR [edx+0x20]
100723b8:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100723be:	6a 01                	push   0x1
100723c0:	8b 01                	mov    eax,DWORD PTR [ecx]
100723c2:	ff 50 24             	call   DWORD PTR [eax+0x24]
100723c5:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100723cb:	6a 00                	push   0x0
100723cd:	8b 11                	mov    edx,DWORD PTR [ecx]
100723cf:	ff 52 28             	call   DWORD PTR [edx+0x28]
100723d2:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100723d8:	6a 03                	push   0x3
100723da:	8b 01                	mov    eax,DWORD PTR [ecx]
100723dc:	ff 50 10             	call   DWORD PTR [eax+0x10]
100723df:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100723e5:	6a 00                	push   0x0
100723e7:	8b 11                	mov    edx,DWORD PTR [ecx]
100723e9:	ff 52 14             	call   DWORD PTR [edx+0x14]
100723ec:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100723f2:	6a 03                	push   0x3
100723f4:	8b 01                	mov    eax,DWORD PTR [ecx]
100723f6:	ff 50 1c             	call   DWORD PTR [eax+0x1c]
100723f9:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100723ff:	8d 7e 3c             	lea    edi,[esi+0x3c]
10072402:	68 00 00 00 ff       	push   0xff000000
10072407:	57                   	push   edi
10072408:	8b 11                	mov    edx,DWORD PTR [ecx]
1007240a:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
10072410:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10072416:	6a 00                	push   0x0
10072418:	57                   	push   edi
10072419:	8b 01                	mov    eax,DWORD PTR [ecx]
1007241b:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
10072421:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10072424:	83 f8 03             	cmp    eax,0x3
10072427:	77 49                	ja     0x10072472
10072429:	ff 24 85 e4 24 07 10 	jmp    DWORD PTR [eax*4+0x100724e4]
10072430:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10072436:	8b 86 9c 00 00 00    	mov    eax,DWORD PTR [esi+0x9c]
1007243c:	8b 11                	mov    edx,DWORD PTR [ecx]
1007243e:	eb 2e                	jmp    0x1007246e
10072440:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10072446:	8b 86 94 00 00 00    	mov    eax,DWORD PTR [esi+0x94]
1007244c:	8b 11                	mov    edx,DWORD PTR [ecx]
1007244e:	eb 1e                	jmp    0x1007246e
10072450:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10072456:	8b 86 98 00 00 00    	mov    eax,DWORD PTR [esi+0x98]
1007245c:	8b 11                	mov    edx,DWORD PTR [ecx]
1007245e:	eb 0e                	jmp    0x1007246e
10072460:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10072466:	8b 86 90 00 00 00    	mov    eax,DWORD PTR [esi+0x90]
1007246c:	8b 11                	mov    edx,DWORD PTR [ecx]
1007246e:	50                   	push   eax
1007246f:	ff 52 08             	call   DWORD PTR [edx+0x8]
10072472:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10072478:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
1007247c:	51                   	push   ecx
1007247d:	8b 11                	mov    edx,DWORD PTR [ecx]
1007247f:	d9 1c 24             	fstp   DWORD PTR [esp]
10072482:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
10072486:	51                   	push   ecx
10072487:	d9 1c 24             	fstp   DWORD PTR [esp]
1007248a:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
1007248e:	51                   	push   ecx
1007248f:	d9 1c 24             	fstp   DWORD PTR [esp]
10072492:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
10072496:	51                   	push   ecx
10072497:	d9 1c 24             	fstp   DWORD PTR [esp]
1007249a:	57                   	push   edi
1007249b:	ff 92 9c 00 00 00    	call   DWORD PTR [edx+0x9c]
100724a1:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100724a7:	68 00 00 80 3f       	push   0x3f800000
100724ac:	6a 00                	push   0x0
100724ae:	68 00 00 80 3f       	push   0x3f800000
100724b3:	8b 01                	mov    eax,DWORD PTR [ecx]
100724b5:	68 00 00 80 3f       	push   0x3f800000
100724ba:	6a 00                	push   0x0
100724bc:	68 00 00 80 3f       	push   0x3f800000
100724c1:	6a 00                	push   0x0
100724c3:	6a 00                	push   0x0
100724c5:	57                   	push   edi
100724c6:	ff 90 a4 00 00 00    	call   DWORD PTR [eax+0xa4]
100724cc:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100724d2:	6a 01                	push   0x1
100724d4:	57                   	push   edi
100724d5:	8b 11                	mov    edx,DWORD PTR [ecx]
100724d7:	ff 52 44             	call   DWORD PTR [edx+0x44]
100724da:	5f                   	pop    edi
100724db:	5e                   	pop    esi
100724dc:	83 c4 10             	add    esp,0x10
100724df:	c2 08 00             	ret    0x8
100724e2:	8b ff                	mov    edi,edi
100724e4:	30 24 07             	xor    BYTE PTR [edi+eax*1],ah
100724e7:	10 50 24             	adc    BYTE PTR [eax+0x24],dl
100724ea:	07                   	pop    es
100724eb:	10 40 24             	adc    BYTE PTR [eax+0x24],al
100724ee:	07                   	pop    es
100724ef:	10 60 24             	adc    BYTE PTR [eax+0x24],ah
100724f2:	07                   	pop    es
100724f3:	10 90 90 90 90 90    	adc    BYTE PTR [eax-0x6f6f6f70],dl
100724f9:	90                   	nop
100724fa:	90                   	nop
100724fb:	90                   	nop
100724fc:	90                   	nop
100724fd:	90                   	nop
100724fe:	90                   	nop
100724ff:	90                   	nop
10072500:	83 ec 10             	sub    esp,0x10
10072503:	53                   	push   ebx
10072504:	55                   	push   ebp
10072505:	56                   	push   esi
10072506:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
1007250a:	57                   	push   edi
1007250b:	8b f9                	mov    edi,ecx
1007250d:	8b 16                	mov    edx,DWORD PTR [esi]
1007250f:	8b 47 2c             	mov    eax,DWORD PTR [edi+0x2c]
10072512:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
10072515:	8b 68 18             	mov    ebp,DWORD PTR [eax+0x18]
10072518:	83 ed 04             	sub    ebp,0x4
1007251b:	8d 1c 0a             	lea    ebx,[edx+ecx*1]
1007251e:	03 c9                	add    ecx,ecx
10072520:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
10072524:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
10072527:	83 c3 02             	add    ebx,0x2
1007252a:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1007252e:	8b 5e 08             	mov    ebx,DWORD PTR [esi+0x8]
10072531:	2b d9                	sub    ebx,ecx
10072533:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
10072536:	80 e1 01             	and    cl,0x1
10072539:	f6 d9                	neg    cl
1007253b:	1b c9                	sbb    ecx,ecx
1007253d:	81 e1 24 38 59 00    	and    ecx,0x593824
10072543:	81 c1 db c7 a6 ff    	add    ecx,0xffa6c7db
10072549:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
1007254d:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10072550:	51                   	push   ecx
10072551:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10072557:	52                   	push   edx
10072558:	6a ff                	push   0xffffffff
1007255a:	6a 00                	push   0x0
1007255c:	50                   	push   eax
1007255d:	e8 8e 8f fd ff       	call   0x1004b4f0
10072562:	8b 47 2c             	mov    eax,DWORD PTR [edi+0x2c]
10072565:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
10072568:	8b 50 18             	mov    edx,DWORD PTR [eax+0x18]
1007256b:	52                   	push   edx
1007256c:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1007256f:	8d 04 09             	lea    eax,[ecx+ecx*1]
10072572:	2b d0                	sub    edx,eax
10072574:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10072577:	52                   	push   edx
10072578:	8b 16                	mov    edx,DWORD PTR [esi]
1007257a:	03 d1                	add    edx,ecx
1007257c:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10072582:	50                   	push   eax
10072583:	8b 47 30             	mov    eax,DWORD PTR [edi+0x30]
10072586:	52                   	push   edx
10072587:	6a ff                	push   0xffffffff
10072589:	6a 00                	push   0x0
1007258b:	50                   	push   eax
1007258c:	e8 8f 8f fd ff       	call   0x1004b520
10072591:	8b 47 2c             	mov    eax,DWORD PTR [edi+0x2c]
10072594:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10072597:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1007259a:	51                   	push   ecx
1007259b:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
1007259e:	2b d1                	sub    edx,ecx
100725a0:	8b 0e                	mov    ecx,DWORD PTR [esi]
100725a2:	03 d1                	add    edx,ecx
100725a4:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100725aa:	52                   	push   edx
100725ab:	6a ff                	push   0xffffffff
100725ad:	6a 02                	push   0x2
100725af:	50                   	push   eax
100725b0:	e8 3b 8f fd ff       	call   0x1004b4f0
100725b5:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
100725b9:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
100725bd:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100725c1:	6a 05                	push   0x5
100725c3:	50                   	push   eax
100725c4:	a1 f0 b6 0d 10       	mov    eax,ds:0x100db6f0
100725c9:	55                   	push   ebp
100725ca:	53                   	push   ebx
100725cb:	51                   	push   ecx
100725cc:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100725d2:	83 c7 3c             	add    edi,0x3c
100725d5:	52                   	push   edx
100725d6:	57                   	push   edi
100725d7:	50                   	push   eax
100725d8:	e8 23 7b fd ff       	call   0x1004a100
100725dd:	5f                   	pop    edi
100725de:	5e                   	pop    esi
100725df:	5d                   	pop    ebp
100725e0:	5b                   	pop    ebx
100725e1:	83 c4 10             	add    esp,0x10
100725e4:	c2 08 00             	ret    0x8
100725e7:	90                   	nop
100725e8:	90                   	nop
100725e9:	90                   	nop
100725ea:	90                   	nop
100725eb:	90                   	nop
100725ec:	90                   	nop
100725ed:	90                   	nop
100725ee:	90                   	nop
100725ef:	90                   	nop
100725f0:	8b 41 38             	mov    eax,DWORD PTR [ecx+0x38]
100725f3:	6a 00                	push   0x0
100725f5:	50                   	push   eax
100725f6:	e8 25 c3 ff ff       	call   0x1006e920
100725fb:	6a 1c                	push   0x1c
100725fd:	e8 3e ac fc ff       	call   0x1003d240
10072602:	59                   	pop    ecx
10072603:	c2 0c 00             	ret    0xc
10072606:	90                   	nop
10072607:	90                   	nop
10072608:	90                   	nop
10072609:	90                   	nop
1007260a:	90                   	nop
1007260b:	90                   	nop
1007260c:	90                   	nop
1007260d:	90                   	nop
1007260e:	90                   	nop
1007260f:	90                   	nop
10072610:	83 ec 10             	sub    esp,0x10
10072613:	53                   	push   ebx
10072614:	56                   	push   esi
10072615:	8b f1                	mov    esi,ecx
10072617:	33 db                	xor    ebx,ebx
10072619:	8b 46 58             	mov    eax,DWORD PTR [esi+0x58]
1007261c:	85 c0                	test   eax,eax
1007261e:	7e 1c                	jle    0x1007263c
10072620:	57                   	push   edi
10072621:	8d 7e 34             	lea    edi,[esi+0x34]
10072624:	8b 0f                	mov    ecx,DWORD PTR [edi]
10072626:	85 c9                	test   ecx,ecx
10072628:	74 06                	je     0x10072630
1007262a:	8b 01                	mov    eax,DWORD PTR [ecx]
1007262c:	6a 01                	push   0x1
1007262e:	ff 10                	call   DWORD PTR [eax]
10072630:	8b 46 58             	mov    eax,DWORD PTR [esi+0x58]
10072633:	43                   	inc    ebx
10072634:	83 c7 04             	add    edi,0x4
10072637:	3b d8                	cmp    ebx,eax
10072639:	7c e9                	jl     0x10072624
1007263b:	5f                   	pop    edi
1007263c:	8d 4c 24 08          	lea    ecx,[esp+0x8]
10072640:	c7 46 58 00 00 00 00 	mov    DWORD PTR [esi+0x58],0x0
10072647:	51                   	push   ecx
10072648:	8b ce                	mov    ecx,esi
1007264a:	c7 46 54 00 00 00 00 	mov    DWORD PTR [esi+0x54],0x0
10072651:	e8 6a c0 ff ff       	call   0x1006e6c0
10072656:	8b 16                	mov    edx,DWORD PTR [esi]
10072658:	8d 44 24 08          	lea    eax,[esp+0x8]
1007265c:	50                   	push   eax
1007265d:	8b ce                	mov    ecx,esi
1007265f:	ff 52 54             	call   DWORD PTR [edx+0x54]
10072662:	5e                   	pop    esi
10072663:	5b                   	pop    ebx
10072664:	83 c4 10             	add    esp,0x10
10072667:	c3                   	ret
10072668:	90                   	nop
10072669:	90                   	nop
1007266a:	90                   	nop
1007266b:	90                   	nop
1007266c:	90                   	nop
1007266d:	90                   	nop
1007266e:	90                   	nop
1007266f:	90                   	nop

*/
void PopupMenu::AddItem() {
    // TODO: Implement AddItem
}

