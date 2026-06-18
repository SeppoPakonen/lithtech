#include "ItemInfoWindow.h"

// 0x1008c130: ItemInfoWindow::GetIcon
/*
1008c130:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1008c134:	83 ec 10             	sub    esp,0x10
1008c137:	83 f8 3f             	cmp    eax,0x3f
1008c13a:	53                   	push   ebx
1008c13b:	55                   	push   ebp
1008c13c:	56                   	push   esi
1008c13d:	8b f1                	mov    esi,ecx
1008c13f:	57                   	push   edi
1008c140:	c7 86 4c 01 00 00 00 	mov    DWORD PTR [esi+0x14c],0x0
1008c147:	00 00 00 
1008c14a:	89 86 70 01 00 00    	mov    DWORD PTR [esi+0x170],eax
1008c150:	0f 87 c6 04 00 00    	ja     0x1008c61c
1008c156:	3b 05 70 cf 10 10    	cmp    eax,DWORD PTR ds:0x1010cf70
1008c15c:	0f 83 4f 06 00 00    	jae    0x1008c7b1
1008c162:	8d 0c 80             	lea    ecx,[eax+eax*4]
1008c165:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1008c168:	8d 14 48             	lea    edx,[eax+ecx*2]
1008c16b:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1008c170:	8d 3c 90             	lea    edi,[eax+edx*4]
1008c173:	85 ff                	test   edi,edi
1008c175:	0f 84 36 06 00 00    	je     0x1008c7b1
1008c17b:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1008c180:	68 d1 05 00 00       	push   0x5d1
1008c185:	50                   	push   eax
1008c186:	8b 08                	mov    ecx,DWORD PTR [eax]
1008c188:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1008c18e:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1008c192:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1008c197:	68 d4 05 00 00       	push   0x5d4
1008c19c:	50                   	push   eax
1008c19d:	8b 10                	mov    edx,DWORD PTR [eax]
1008c19f:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1008c1a5:	8b e8                	mov    ebp,eax
1008c1a7:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1008c1ac:	68 ba 05 00 00       	push   0x5ba
1008c1b1:	50                   	push   eax
1008c1b2:	8b 08                	mov    ecx,DWORD PTR [eax]
1008c1b4:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1008c1ba:	8d 57 08             	lea    edx,[edi+0x8]
1008c1bd:	8b d8                	mov    ebx,eax
1008c1bf:	52                   	push   edx
1008c1c0:	8d 86 f4 03 00 00    	lea    eax,[esi+0x3f4]
1008c1c6:	68 70 74 0d 10       	push   0x100d7470
1008c1cb:	50                   	push   eax
1008c1cc:	e8 8a 7c 01 00       	call   0x100a3e5b
1008c1d1:	33 c9                	xor    ecx,ecx
1008c1d3:	8d 96 54 04 00 00    	lea    edx,[esi+0x454]
1008c1d9:	8a 8f 28 01 00 00    	mov    cl,BYTE PTR [edi+0x128]
1008c1df:	51                   	push   ecx
1008c1e0:	68 34 b4 0d 10       	push   0x100db434
1008c1e5:	52                   	push   edx
1008c1e6:	e8 70 7c 01 00       	call   0x100a3e5b
1008c1eb:	33 c0                	xor    eax,eax
1008c1ed:	8d 8e 74 04 00 00    	lea    ecx,[esi+0x474]
1008c1f3:	8a 87 26 01 00 00    	mov    al,BYTE PTR [edi+0x126]
1008c1f9:	50                   	push   eax
1008c1fa:	68 34 b4 0d 10       	push   0x100db434
1008c1ff:	51                   	push   ecx
1008c200:	e8 56 7c 01 00       	call   0x100a3e5b
1008c205:	33 d2                	xor    edx,edx
1008c207:	8d 86 34 04 00 00    	lea    eax,[esi+0x434]
1008c20d:	66 8b 97 24 01 00 00 	mov    dx,WORD PTR [edi+0x124]
1008c214:	52                   	push   edx
1008c215:	68 bc df 0d 10       	push   0x100ddfbc
1008c21a:	50                   	push   eax
1008c21b:	e8 3b 7c 01 00       	call   0x100a3e5b
1008c220:	83 c4 48             	add    esp,0x48
1008c223:	8d 8f c4 00 00 00    	lea    ecx,[edi+0xc4]
1008c229:	8d 96 94 04 00 00    	lea    edx,[esi+0x494]
1008c22f:	51                   	push   ecx
1008c230:	68 70 74 0d 10       	push   0x100d7470
1008c235:	52                   	push   edx
1008c236:	e8 20 7c 01 00       	call   0x100a3e5b
1008c23b:	d9 87 00 01 00 00    	fld    DWORD PTR [edi+0x100]
1008c241:	d8 1d ec 83 0b 10    	fcomp  DWORD PTR ds:0x100b83ec
1008c247:	83 c4 0c             	add    esp,0xc
1008c24a:	df e0                	fnstsw ax
1008c24c:	f6 c4 01             	test   ah,0x1
1008c24f:	74 15                	je     0x1008c266
1008c251:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c257:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1008c25b:	52                   	push   edx
1008c25c:	8b 01                	mov    eax,DWORD PTR [ecx]
1008c25e:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1008c264:	eb 25                	jmp    0x1008c28b
1008c266:	d9 87 00 01 00 00    	fld    DWORD PTR [edi+0x100]
1008c26c:	d8 1d d0 84 0b 10    	fcomp  DWORD PTR ds:0x100b84d0
1008c272:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c278:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c27a:	df e0                	fnstsw ax
1008c27c:	f6 c4 01             	test   ah,0x1
1008c27f:	74 03                	je     0x1008c284
1008c281:	55                   	push   ebp
1008c282:	eb 01                	jmp    0x1008c285
1008c284:	53                   	push   ebx
1008c285:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008c28b:	50                   	push   eax
1008c28c:	8d 86 d4 04 00 00    	lea    eax,[esi+0x4d4]
1008c292:	68 70 74 0d 10       	push   0x100d7470
1008c297:	50                   	push   eax
1008c298:	e8 be 7b 01 00       	call   0x100a3e5b
1008c29d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008c2a0:	83 c4 0c             	add    esp,0xc
1008c2a3:	83 f8 05             	cmp    eax,0x5
1008c2a6:	0f 87 9d 01 00 00    	ja     0x1008c449
1008c2ac:	ff 24 85 bc c7 08 10 	jmp    DWORD PTR [eax*4+0x1008c7bc]
1008c2b3:	d9 87 34 01 00 00    	fld    DWORD PTR [edi+0x134]
1008c2b9:	d8 1d 30 d7 0b 10    	fcomp  DWORD PTR ds:0x100bd730
1008c2bf:	eb 69                	jmp    0x1008c32a
1008c2c1:	d9 87 34 01 00 00    	fld    DWORD PTR [edi+0x134]
1008c2c7:	d8 1d 2c d7 0b 10    	fcomp  DWORD PTR ds:0x100bd72c
1008c2cd:	df e0                	fnstsw ax
1008c2cf:	f6 c4 01             	test   ah,0x1
1008c2d2:	74 25                	je     0x1008c2f9
1008c2d4:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c2da:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1008c2de:	50                   	push   eax
1008c2df:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c2e1:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008c2e7:	50                   	push   eax
1008c2e8:	8d 8e b4 04 00 00    	lea    ecx,[esi+0x4b4]
1008c2ee:	68 70 74 0d 10       	push   0x100d7470
1008c2f3:	51                   	push   ecx
1008c2f4:	e9 6c 01 00 00       	jmp    0x1008c465
1008c2f9:	d9 87 34 01 00 00    	fld    DWORD PTR [edi+0x134]
1008c2ff:	d8 1d fc 84 0b 10    	fcomp  DWORD PTR ds:0x100b84fc
1008c305:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c30b:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c30d:	df e0                	fnstsw ax
1008c30f:	f6 c4 01             	test   ah,0x1
1008c312:	0f 84 39 01 00 00    	je     0x1008c451
1008c318:	55                   	push   ebp
1008c319:	e9 34 01 00 00       	jmp    0x1008c452
1008c31e:	d9 87 34 01 00 00    	fld    DWORD PTR [edi+0x134]
1008c324:	d8 1d ec 84 0b 10    	fcomp  DWORD PTR ds:0x100b84ec
1008c32a:	df e0                	fnstsw ax
1008c32c:	f6 c4 01             	test   ah,0x1
1008c32f:	74 25                	je     0x1008c356
1008c331:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c337:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1008c33b:	50                   	push   eax
1008c33c:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c33e:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008c344:	50                   	push   eax
1008c345:	8d 8e b4 04 00 00    	lea    ecx,[esi+0x4b4]
1008c34b:	68 70 74 0d 10       	push   0x100d7470
1008c350:	51                   	push   ecx
1008c351:	e9 0f 01 00 00       	jmp    0x1008c465
1008c356:	d9 87 34 01 00 00    	fld    DWORD PTR [edi+0x134]
1008c35c:	d8 1d 10 85 0b 10    	fcomp  DWORD PTR ds:0x100b8510
1008c362:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c368:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c36a:	df e0                	fnstsw ax
1008c36c:	f6 c4 01             	test   ah,0x1
1008c36f:	0f 84 dc 00 00 00    	je     0x1008c451
1008c375:	55                   	push   ebp
1008c376:	e9 d7 00 00 00       	jmp    0x1008c452
1008c37b:	d9 87 34 01 00 00    	fld    DWORD PTR [edi+0x134]
1008c381:	d8 1d 28 d7 0b 10    	fcomp  DWORD PTR ds:0x100bd728
1008c387:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c38d:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c38f:	df e0                	fnstsw ax
1008c391:	f6 c4 01             	test   ah,0x1
1008c394:	0f 84 b7 00 00 00    	je     0x1008c451
1008c39a:	55                   	push   ebp
1008c39b:	e9 b2 00 00 00       	jmp    0x1008c452
1008c3a0:	d9 87 34 01 00 00    	fld    DWORD PTR [edi+0x134]
1008c3a6:	d8 1d 34 8b 0b 10    	fcomp  DWORD PTR ds:0x100b8b34
1008c3ac:	df e0                	fnstsw ax
1008c3ae:	f6 c4 01             	test   ah,0x1
1008c3b1:	74 25                	je     0x1008c3d8
1008c3b3:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c3b9:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1008c3bd:	50                   	push   eax
1008c3be:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c3c0:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008c3c6:	50                   	push   eax
1008c3c7:	8d 8e b4 04 00 00    	lea    ecx,[esi+0x4b4]
1008c3cd:	68 70 74 0d 10       	push   0x100d7470
1008c3d2:	51                   	push   ecx
1008c3d3:	e9 8d 00 00 00       	jmp    0x1008c465
1008c3d8:	d9 87 34 01 00 00    	fld    DWORD PTR [edi+0x134]
1008c3de:	d8 1d d0 84 0b 10    	fcomp  DWORD PTR ds:0x100b84d0
1008c3e4:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c3ea:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c3ec:	df e0                	fnstsw ax
1008c3ee:	f6 c4 01             	test   ah,0x1
1008c3f1:	74 5e                	je     0x1008c451
1008c3f3:	55                   	push   ebp
1008c3f4:	eb 5c                	jmp    0x1008c452
1008c3f6:	d9 87 34 01 00 00    	fld    DWORD PTR [edi+0x134]
1008c3fc:	d8 1d 24 d7 0b 10    	fcomp  DWORD PTR ds:0x100bd724
1008c402:	df e0                	fnstsw ax
1008c404:	f6 c4 01             	test   ah,0x1
1008c407:	74 22                	je     0x1008c42b
1008c409:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c40f:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1008c413:	50                   	push   eax
1008c414:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c416:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008c41c:	50                   	push   eax
1008c41d:	8d 8e b4 04 00 00    	lea    ecx,[esi+0x4b4]
1008c423:	68 70 74 0d 10       	push   0x100d7470
1008c428:	51                   	push   ecx
1008c429:	eb 3a                	jmp    0x1008c465
1008c42b:	d9 87 34 01 00 00    	fld    DWORD PTR [edi+0x134]
1008c431:	d8 1d f8 84 0b 10    	fcomp  DWORD PTR ds:0x100b84f8
1008c437:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c43d:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c43f:	df e0                	fnstsw ax
1008c441:	f6 c4 01             	test   ah,0x1
1008c444:	74 0b                	je     0x1008c451
1008c446:	55                   	push   ebp
1008c447:	eb 09                	jmp    0x1008c452
1008c449:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c44f:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c451:	53                   	push   ebx
1008c452:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008c458:	50                   	push   eax
1008c459:	8d 86 b4 04 00 00    	lea    eax,[esi+0x4b4]
1008c45f:	68 70 74 0d 10       	push   0x100d7470
1008c464:	50                   	push   eax
1008c465:	e8 f1 79 01 00       	call   0x100a3e5b
1008c46a:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c470:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
1008c474:	83 c4 0c             	add    esp,0xc
1008c477:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c479:	50                   	push   eax
1008c47a:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008c480:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c486:	55                   	push   ebp
1008c487:	8b 11                	mov    edx,DWORD PTR [ecx]
1008c489:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008c48f:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008c495:	53                   	push   ebx
1008c496:	8b 01                	mov    eax,DWORD PTR [ecx]
1008c498:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
1008c49e:	8d 8e 60 01 00 00    	lea    ecx,[esi+0x160]
1008c4a4:	8d 86 74 01 00 00    	lea    eax,[esi+0x174]
1008c4aa:	ba 04 00 00 00       	mov    edx,0x4
1008c4af:	bd 0f 00 00 00       	mov    ebp,0xf
1008c4b4:	89 68 40             	mov    DWORD PTR [eax+0x40],ebp
1008c4b7:	66 c7 00 ff ff       	mov    WORD PTR [eax],0xffff
1008c4bc:	c7 01 00 00 00 00    	mov    DWORD PTR [ecx],0x0
1008c4c2:	83 c1 04             	add    ecx,0x4
1008c4c5:	05 88 00 00 00       	add    eax,0x88
1008c4ca:	4a                   	dec    edx
1008c4cb:	75 e7                	jne    0x1008c4b4
1008c4cd:	8b 0d 10 43 12 10    	mov    ecx,DWORD PTR ds:0x10124310
1008c4d3:	8d 86 b8 01 00 00    	lea    eax,[esi+0x1b8]
1008c4d9:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1008c4dd:	8d 9e 50 01 00 00    	lea    ebx,[esi+0x150]
1008c4e3:	8b 51 40             	mov    edx,DWORD PTR [ecx+0x40]
1008c4e6:	8d 8f 68 01 00 00    	lea    ecx,[edi+0x168]
1008c4ec:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1008c4f0:	ba 98 fe ff ff       	mov    edx,0xfffffe98
1008c4f5:	2b d7                	sub    edx,edi
1008c4f7:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
1008c4fb:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
1008c4ff:	8a 01                	mov    al,BYTE PTR [ecx]
1008c501:	3c ff                	cmp    al,0xff
1008c503:	0f 84 d8 00 00 00    	je     0x1008c5e1
1008c509:	8b 8e 14 09 00 00    	mov    ecx,DWORD PTR [esi+0x914]
1008c50f:	0f be d0             	movsx  edx,al
1008c512:	52                   	push   edx
1008c513:	e8 78 9a f7 ff       	call   0x10005f90
1008c518:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1008c51a:	8b e8                	mov    ebp,eax
1008c51c:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
1008c520:	e8 fb 24 fe ff       	call   0x1006ea20
1008c525:	85 ed                	test   ebp,ebp
1008c527:	75 37                	jne    0x1008c560
1008c529:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008c52f:	68 9e 1a 00 00       	push   0x1a9e
1008c534:	68 4c dd 0d 10       	push   0x100ddd4c
1008c539:	8b 01                	mov    eax,DWORD PTR [ecx]
1008c53b:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1008c541:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008c546:	68 fc df 0d 10       	push   0x100ddffc
1008c54b:	68 7c 5d 0c 10       	push   0x100c5d7c
1008c550:	50                   	push   eax
1008c551:	8b 08                	mov    ecx,DWORD PTR [eax]
1008c553:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1008c559:	83 c4 0c             	add    esp,0xc
1008c55c:	33 c0                	xor    eax,eax
1008c55e:	eb 06                	jmp    0x1008c566
1008c560:	8b 85 84 00 00 00    	mov    eax,DWORD PTR [ebp+0x84]
1008c566:	89 43 10             	mov    DWORD PTR [ebx+0x10],eax
1008c569:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1008c56d:	85 c0                	test   eax,eax
1008c56f:	74 46                	je     0x1008c5b7
1008c571:	8b 88 d0 16 00 00    	mov    ecx,DWORD PTR [eax+0x16d0]
1008c577:	8b be 70 01 00 00    	mov    edi,DWORD PTR [esi+0x170]
1008c57d:	8b c1                	mov    eax,ecx
1008c57f:	33 d2                	xor    edx,edx
1008c581:	c1 e0 05             	shl    eax,0x5
1008c584:	03 c1                	add    eax,ecx
1008c586:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1008c58a:	8d 04 40             	lea    eax,[eax+eax*2]
1008c58d:	8d 84 81 14 0f 00 00 	lea    eax,[ecx+eax*4+0xf14]
1008c594:	39 78 fc             	cmp    DWORD PTR [eax-0x4],edi
1008c597:	75 15                	jne    0x1008c5ae
1008c599:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1008c59d:	bd 01 00 00 00       	mov    ebp,0x1
1008c5a2:	8a 09                	mov    cl,BYTE PTR [ecx]
1008c5a4:	d3 e5                	shl    ebp,cl
1008c5a6:	85 28                	test   DWORD PTR [eax],ebp
1008c5a8:	75 63                	jne    0x1008c60d
1008c5aa:	8b 6c 24 18          	mov    ebp,DWORD PTR [esp+0x18]
1008c5ae:	42                   	inc    edx
1008c5af:	83 c0 2c             	add    eax,0x2c
1008c5b2:	83 fa 09             	cmp    edx,0x9
1008c5b5:	7c dd                	jl     0x1008c594
1008c5b7:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1008c5b9:	6a 00                	push   0x0
1008c5bb:	e8 d0 4d fe ff       	call   0x10071390
1008c5c0:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1008c5c4:	8b 55 40             	mov    edx,DWORD PTR [ebp+0x40]
1008c5c7:	89 50 fc             	mov    DWORD PTR [eax-0x4],edx
1008c5ca:	66 8b 4d 44          	mov    cx,WORD PTR [ebp+0x44]
1008c5ce:	66 89 08             	mov    WORD PTR [eax],cx
1008c5d1:	66 8b 55 00          	mov    dx,WORD PTR [ebp+0x0]
1008c5d5:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1008c5d9:	66 89 50 bc          	mov    WORD PTR [eax-0x44],dx
1008c5dd:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1008c5e1:	8b 6c 24 10          	mov    ebp,DWORD PTR [esp+0x10]
1008c5e5:	83 c3 04             	add    ebx,0x4
1008c5e8:	41                   	inc    ecx
1008c5e9:	81 c5 88 00 00 00    	add    ebp,0x88
1008c5ef:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
1008c5f3:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
1008c5f7:	8d 04 0a             	lea    eax,[edx+ecx*1]
1008c5fa:	83 f8 04             	cmp    eax,0x4
1008c5fd:	0f 8c fc fe ff ff    	jl     0x1008c4ff
1008c603:	5f                   	pop    edi
1008c604:	5e                   	pop    esi
1008c605:	5d                   	pop    ebp
1008c606:	5b                   	pop    ebx
1008c607:	83 c4 10             	add    esp,0x10
1008c60a:	c2 04 00             	ret    0x4

*/
void ItemInfoWindow::GetIcon() {
    // TODO: Implement GetIcon
}

