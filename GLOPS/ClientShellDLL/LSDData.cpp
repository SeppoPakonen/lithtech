#include "LSDData.h"

// 0x1008e3a0: LSDData::SetLocalSourceQueryType
/*
1008e3a0:	8b 91 30 01 00 00    	mov    edx,DWORD PTR [ecx+0x130]
1008e3a6:	8b 01                	mov    eax,DWORD PTR [ecx]
1008e3a8:	56                   	push   esi
1008e3a9:	57                   	push   edi
1008e3aa:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
1008e3ae:	57                   	push   edi
1008e3af:	52                   	push   edx
1008e3b0:	ff 10                	call   DWORD PTR [eax]
1008e3b2:	8b c7                	mov    eax,edi
1008e3b4:	48                   	dec    eax
1008e3b5:	74 42                	je     0x1008e3f9
1008e3b7:	48                   	dec    eax
1008e3b8:	74 38                	je     0x1008e3f2
1008e3ba:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008e3c0:	6a 58                	push   0x58
1008e3c2:	68 08 e3 0d 10       	push   0x100de308
1008e3c7:	be b3 00 00 00       	mov    esi,0xb3
1008e3cc:	8b 01                	mov    eax,DWORD PTR [ecx]
1008e3ce:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1008e3d4:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008e3d9:	57                   	push   edi
1008e3da:	68 cc e2 0d 10       	push   0x100de2cc
1008e3df:	68 7c 5d 0c 10       	push   0x100c5d7c
1008e3e4:	8b 08                	mov    ecx,DWORD PTR [eax]
1008e3e6:	50                   	push   eax
1008e3e7:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1008e3ed:	83 c4 10             	add    esp,0x10
1008e3f0:	eb 0c                	jmp    0x1008e3fe
1008e3f2:	be b4 00 00 00       	mov    esi,0xb4
1008e3f7:	eb 05                	jmp    0x1008e3fe
1008e3f9:	be b3 00 00 00       	mov    esi,0xb3
1008e3fe:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008e404:	56                   	push   esi
1008e405:	8b 11                	mov    edx,DWORD PTR [ecx]
1008e407:	ff 92 90 01 00 00    	call   DWORD PTR [edx+0x190]
1008e40d:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008e413:	50                   	push   eax
1008e414:	8b 11                	mov    edx,DWORD PTR [ecx]
1008e416:	ff 92 94 01 00 00    	call   DWORD PTR [edx+0x194]
1008e41c:	5f                   	pop    edi
1008e41d:	5e                   	pop    esi
1008e41e:	c2 04 00             	ret    0x4
1008e421:	90                   	nop
1008e422:	90                   	nop
1008e423:	90                   	nop
1008e424:	90                   	nop
1008e425:	90                   	nop
1008e426:	90                   	nop
1008e427:	90                   	nop
1008e428:	90                   	nop
1008e429:	90                   	nop
1008e42a:	90                   	nop
1008e42b:	90                   	nop
1008e42c:	90                   	nop
1008e42d:	90                   	nop
1008e42e:	90                   	nop
1008e42f:	90                   	nop
1008e430:	53                   	push   ebx
1008e431:	8b d9                	mov    ebx,ecx
1008e433:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1008e437:	56                   	push   esi
1008e438:	8b 83 30 01 00 00    	mov    eax,DWORD PTR [ebx+0x130]
1008e43e:	57                   	push   edi
1008e43f:	85 c9                	test   ecx,ecx
1008e441:	8b 7c c3 08          	mov    edi,DWORD PTR [ebx+eax*8+0x8]
1008e445:	74 0e                	je     0x1008e455
1008e447:	85 ff                	test   edi,edi
1008e449:	7f 07                	jg     0x1008e452
1008e44b:	bf 02 00 00 00       	mov    edi,0x2
1008e450:	eb 0d                	jmp    0x1008e45f
1008e452:	4f                   	dec    edi
1008e453:	eb 0a                	jmp    0x1008e45f
1008e455:	83 ff 02             	cmp    edi,0x2
1008e458:	7c 04                	jl     0x1008e45e
1008e45a:	33 ff                	xor    edi,edi
1008e45c:	eb 01                	jmp    0x1008e45f
1008e45e:	47                   	inc    edi
1008e45f:	57                   	push   edi
1008e460:	50                   	push   eax
1008e461:	8b cb                	mov    ecx,ebx
1008e463:	e8 d8 7c f7 ff       	call   0x10006140
1008e468:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008e46e:	68 b2 00 00 00       	push   0xb2
1008e473:	8b 01                	mov    eax,DWORD PTR [ecx]
1008e475:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
1008e47b:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008e481:	8b f0                	mov    esi,eax
1008e483:	8a 83 30 01 00 00    	mov    al,BYTE PTR [ebx+0x130]
1008e489:	8b 11                	mov    edx,DWORD PTR [ecx]
1008e48b:	50                   	push   eax
1008e48c:	56                   	push   esi
1008e48d:	ff 52 08             	call   DWORD PTR [edx+0x8]
1008e490:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008e496:	57                   	push   edi
1008e497:	56                   	push   esi
1008e498:	8b 11                	mov    edx,DWORD PTR [ecx]
1008e49a:	ff 52 08             	call   DWORD PTR [edx+0x8]
1008e49d:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008e4a3:	56                   	push   esi
1008e4a4:	8b 01                	mov    eax,DWORD PTR [ecx]
1008e4a6:	ff 90 94 01 00 00    	call   DWORD PTR [eax+0x194]
1008e4ac:	5f                   	pop    edi
1008e4ad:	5e                   	pop    esi
1008e4ae:	5b                   	pop    ebx
1008e4af:	c2 04 00             	ret    0x4
1008e4b2:	90                   	nop
1008e4b3:	90                   	nop
1008e4b4:	90                   	nop
1008e4b5:	90                   	nop
1008e4b6:	90                   	nop
1008e4b7:	90                   	nop
1008e4b8:	90                   	nop
1008e4b9:	90                   	nop
1008e4ba:	90                   	nop
1008e4bb:	90                   	nop
1008e4bc:	90                   	nop
1008e4bd:	90                   	nop
1008e4be:	90                   	nop
1008e4bf:	90                   	nop
1008e4c0:	c7 81 18 09 00 00 00 	mov    DWORD PTR [ecx+0x918],0x42c80000
1008e4c7:	00 c8 42 
1008e4ca:	c3                   	ret
1008e4cb:	90                   	nop
1008e4cc:	90                   	nop
1008e4cd:	90                   	nop
1008e4ce:	90                   	nop
1008e4cf:	90                   	nop

*/
void LSDData::SetLocalSourceQueryType() {
    // TODO: Implement SetLocalSourceQueryType
}

// 0x1008e4d0: LSDData::Think
/*
1008e4d0:	83 ec 10             	sub    esp,0x10
1008e4d3:	53                   	push   ebx
1008e4d4:	56                   	push   esi
1008e4d5:	8b f1                	mov    esi,ecx
1008e4d7:	57                   	push   edi
1008e4d8:	b9 48 00 00 00       	mov    ecx,0x48
1008e4dd:	8d 86 48 01 00 00    	lea    eax,[esi+0x148]
1008e4e3:	c7 40 f0 00 00 00 00 	mov    DWORD PTR [eax-0x10],0x0
1008e4ea:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
1008e4f0:	83 c0 1c             	add    eax,0x1c
1008e4f3:	49                   	dec    ecx
1008e4f4:	75 ed                	jne    0x1008e4e3
1008e4f6:	8b 86 30 01 00 00    	mov    eax,DWORD PTR [esi+0x130]
1008e4fc:	85 c0                	test   eax,eax
1008e4fe:	7d 3a                	jge    0x1008e53a
1008e500:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008e506:	68 90 00 00 00       	push   0x90
1008e50b:	68 08 e3 0d 10       	push   0x100de308
1008e510:	8b 01                	mov    eax,DWORD PTR [ecx]
1008e512:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1008e518:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008e51d:	68 38 e3 0d 10       	push   0x100de338
1008e522:	68 7c 5d 0c 10       	push   0x100c5d7c
1008e527:	50                   	push   eax
1008e528:	8b 08                	mov    ecx,DWORD PTR [eax]
1008e52a:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1008e530:	83 c4 0c             	add    esp,0xc
1008e533:	5f                   	pop    edi
1008e534:	5e                   	pop    esi
1008e535:	5b                   	pop    ebx
1008e536:	83 c4 10             	add    esp,0x10
1008e539:	c3                   	ret
1008e53a:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1008e540:	8b 9a c8 81 01 00    	mov    ebx,DWORD PTR [edx+0x181c8]
1008e546:	85 db                	test   ebx,ebx
1008e548:	0f 84 fc 01 00 00    	je     0x1008e74a
1008e54e:	8b 03                	mov    eax,DWORD PTR [ebx]
1008e550:	8b cb                	mov    ecx,ebx
1008e552:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
1008e555:	8b f8                	mov    edi,eax
1008e557:	85 ff                	test   edi,edi
1008e559:	0f 84 eb 01 00 00    	je     0x1008e74a
1008e55f:	8b 15 4c a1 11 10    	mov    edx,DWORD PTR ds:0x1011a14c
1008e565:	8d 8e 24 01 00 00    	lea    ecx,[esi+0x124]
1008e56b:	51                   	push   ecx
1008e56c:	57                   	push   edi
1008e56d:	ff 92 f0 02 00 00    	call   DWORD PTR [edx+0x2f0]
1008e573:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1008e578:	83 c4 08             	add    esp,0x8
1008e57b:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
1008e57e:	8d 44 24 10          	lea    eax,[esp+0x10]
1008e582:	50                   	push   eax
1008e583:	57                   	push   edi
1008e584:	8b 11                	mov    edx,DWORD PTR [ecx]
1008e586:	ff 52 30             	call   DWORD PTR [edx+0x30]
1008e589:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1008e58d:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
1008e593:	8b cb                	mov    ecx,ebx
1008e595:	d8 86 28 01 00 00    	fadd   DWORD PTR [esi+0x128]
1008e59b:	d9 9e 28 01 00 00    	fstp   DWORD PTR [esi+0x128]
1008e5a1:	8b 13                	mov    edx,DWORD PTR [ebx]
1008e5a3:	ff 52 40             	call   DWORD PTR [edx+0x40]
1008e5a6:	83 f8 07             	cmp    eax,0x7
1008e5a9:	0f 84 94 00 00 00    	je     0x1008e643
1008e5af:	8b 86 30 01 00 00    	mov    eax,DWORD PTR [esi+0x130]
1008e5b5:	83 7c c6 04 02       	cmp    DWORD PTR [esi+eax*8+0x4],0x2
1008e5ba:	74 04                	je     0x1008e5c0
1008e5bc:	33 c0                	xor    eax,eax
1008e5be:	eb 04                	jmp    0x1008e5c4
1008e5c0:	8b 44 c6 08          	mov    eax,DWORD PTR [esi+eax*8+0x8]
1008e5c4:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1008e5ca:	8d 04 80             	lea    eax,[eax+eax*4]
1008e5cd:	8b 11                	mov    edx,DWORD PTR [ecx]
1008e5cf:	8d 3c 85 90 e2 0d 10 	lea    edi,[eax*4+0x100de290]
1008e5d6:	ff 92 dc 00 00 00    	call   DWORD PTR [edx+0xdc]
1008e5dc:	d8 4f 08             	fmul   DWORD PTR [edi+0x8]
1008e5df:	d8 86 18 09 00 00    	fadd   DWORD PTR [esi+0x918]
1008e5e5:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1008e5eb:	d9 96 18 09 00 00    	fst    DWORD PTR [esi+0x918]
1008e5f1:	df e0                	fnstsw ax
1008e5f3:	f6 c4 01             	test   ah,0x1
1008e5f6:	74 0a                	je     0x1008e602
1008e5f8:	dd d8                	fstp   st(0)
1008e5fa:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1008e600:	eb 15                	jmp    0x1008e617
1008e602:	d8 15 04 85 0b 10    	fcom   DWORD PTR ds:0x100b8504
1008e608:	df e0                	fnstsw ax
1008e60a:	f6 c4 41             	test   ah,0x41
1008e60d:	75 08                	jne    0x1008e617
1008e60f:	dd d8                	fstp   st(0)
1008e611:	d9 05 04 85 0b 10    	fld    DWORD PTR ds:0x100b8504
1008e617:	d9 96 18 09 00 00    	fst    DWORD PTR [esi+0x918]
1008e61d:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1008e623:	df e0                	fnstsw ax
1008e625:	f6 c4 40             	test   ah,0x40
1008e628:	74 19                	je     0x1008e643
1008e62a:	d9 47 08             	fld    DWORD PTR [edi+0x8]
1008e62d:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1008e633:	df e0                	fnstsw ax
1008e635:	f6 c4 41             	test   ah,0x41
1008e638:	74 09                	je     0x1008e643
1008e63a:	6a 00                	push   0x0
1008e63c:	8b ce                	mov    ecx,esi
1008e63e:	e8 fd fc ff ff       	call   0x1008e340
1008e643:	8b 03                	mov    eax,DWORD PTR [ebx]
1008e645:	8b cb                	mov    ecx,ebx
1008e647:	ff 10                	call   DWORD PTR [eax]
1008e649:	8b 13                	mov    edx,DWORD PTR [ebx]
1008e64b:	8b cb                	mov    ecx,ebx
1008e64d:	8b f8                	mov    edi,eax
1008e64f:	ff 52 40             	call   DWORD PTR [edx+0x40]
1008e652:	83 f8 07             	cmp    eax,0x7
1008e655:	74 21                	je     0x1008e678
1008e657:	83 ff 03             	cmp    edi,0x3
1008e65a:	74 1c                	je     0x1008e678
1008e65c:	83 ff 04             	cmp    edi,0x4
1008e65f:	74 17                	je     0x1008e678
1008e661:	83 ff 07             	cmp    edi,0x7
1008e664:	74 12                	je     0x1008e678
1008e666:	8b 03                	mov    eax,DWORD PTR [ebx]
1008e668:	8b cb                	mov    ecx,ebx
1008e66a:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1008e670:	85 c0                	test   eax,eax
1008e672:	0f 84 d2 00 00 00    	je     0x1008e74a
1008e678:	8d 4e 04             	lea    ecx,[esi+0x4]
1008e67b:	55                   	push   ebp
1008e67c:	33 ed                	xor    ebp,ebp
1008e67e:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1008e682:	3b ae 30 01 00 00    	cmp    ebp,DWORD PTR [esi+0x130]
1008e688:	75 0e                	jne    0x1008e698
1008e68a:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1008e690:	8b ba c8 81 01 00    	mov    edi,DWORD PTR [edx+0x181c8]
1008e696:	eb 0e                	jmp    0x1008e6a6
1008e698:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1008e69e:	55                   	push   ebp
1008e69f:	8b 01                	mov    eax,DWORD PTR [ecx]
1008e6a1:	ff 50 68             	call   DWORD PTR [eax+0x68]
1008e6a4:	8b f8                	mov    edi,eax
1008e6a6:	85 ff                	test   edi,edi
1008e6a8:	0f 84 86 00 00 00    	je     0x1008e734
1008e6ae:	8b 17                	mov    edx,DWORD PTR [edi]
1008e6b0:	8b cf                	mov    ecx,edi
1008e6b2:	ff 52 40             	call   DWORD PTR [edx+0x40]
1008e6b5:	83 f8 07             	cmp    eax,0x7
1008e6b8:	74 56                	je     0x1008e710
1008e6ba:	3b ae 30 01 00 00    	cmp    ebp,DWORD PTR [esi+0x130]
1008e6c0:	75 17                	jne    0x1008e6d9
1008e6c2:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1008e6c7:	8b 88 c8 81 01 00    	mov    ecx,DWORD PTR [eax+0x181c8]
1008e6cd:	8b 11                	mov    edx,DWORD PTR [ecx]
1008e6cf:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008e6d5:	85 c0                	test   eax,eax
1008e6d7:	75 37                	jne    0x1008e710
1008e6d9:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1008e6dd:	8b 01                	mov    eax,DWORD PTR [ecx]
1008e6df:	85 c0                	test   eax,eax
1008e6e1:	74 51                	je     0x1008e734
1008e6e3:	83 f8 01             	cmp    eax,0x1
1008e6e6:	74 4c                	je     0x1008e734
1008e6e8:	83 f8 02             	cmp    eax,0x2
1008e6eb:	74 11                	je     0x1008e6fe
1008e6ed:	33 c0                	xor    eax,eax
1008e6ef:	57                   	push   edi
1008e6f0:	53                   	push   ebx
1008e6f1:	8d 04 80             	lea    eax,[eax+eax*4]
1008e6f4:	8d 0c 85 90 e2 0d 10 	lea    ecx,[eax*4+0x100de290]
1008e6fb:	51                   	push   ecx
1008e6fc:	eb 2f                	jmp    0x1008e72d
1008e6fe:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1008e701:	57                   	push   edi
1008e702:	53                   	push   ebx
1008e703:	8d 04 80             	lea    eax,[eax+eax*4]
1008e706:	8d 0c 85 90 e2 0d 10 	lea    ecx,[eax*4+0x100de290]
1008e70d:	51                   	push   ecx
1008e70e:	eb 1d                	jmp    0x1008e72d
1008e710:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1008e714:	83 38 02             	cmp    DWORD PTR [eax],0x2
1008e717:	74 04                	je     0x1008e71d
1008e719:	33 c0                	xor    eax,eax
1008e71b:	eb 03                	jmp    0x1008e720
1008e71d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1008e720:	8d 14 80             	lea    edx,[eax+eax*4]
1008e723:	57                   	push   edi
1008e724:	53                   	push   ebx
1008e725:	8d 04 95 90 e2 0d 10 	lea    eax,[edx*4+0x100de290]
1008e72c:	50                   	push   eax
1008e72d:	8b ce                	mov    ecx,esi
1008e72f:	e8 2c 00 00 00       	call   0x1008e760
1008e734:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1008e738:	45                   	inc    ebp
1008e739:	83 c1 08             	add    ecx,0x8
1008e73c:	83 fd 24             	cmp    ebp,0x24
1008e73f:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1008e743:	0f 8c 39 ff ff ff    	jl     0x1008e682
1008e749:	5d                   	pop    ebp
1008e74a:	5f                   	pop    edi
1008e74b:	5e                   	pop    esi
1008e74c:	5b                   	pop    ebx
1008e74d:	83 c4 10             	add    esp,0x10
1008e750:	c3                   	ret
1008e751:	90                   	nop
1008e752:	90                   	nop
1008e753:	90                   	nop
1008e754:	90                   	nop
1008e755:	90                   	nop
1008e756:	90                   	nop
1008e757:	90                   	nop
1008e758:	90                   	nop
1008e759:	90                   	nop
1008e75a:	90                   	nop
1008e75b:	90                   	nop
1008e75c:	90                   	nop
1008e75d:	90                   	nop
1008e75e:	90                   	nop
1008e75f:	90                   	nop

*/
void LSDData::Think() {
    // TODO: Implement Think
}

