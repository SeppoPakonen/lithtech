#include "PlayerList.h"

// 0x100654f0: PlayerList::AddPlayer
/*
100654f0:	81 ec 0c 01 00 00    	sub    esp,0x10c
100654f6:	56                   	push   esi
100654f7:	8b f1                	mov    esi,ecx
100654f9:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
100654ff:	85 c0                	test   eax,eax
10065501:	0f 84 9f 02 00 00    	je     0x100657a6
10065507:	53                   	push   ebx
10065508:	57                   	push   edi
10065509:	6a 00                	push   0x0
1006550b:	68 88 cc 0d 10       	push   0x100dcc88
10065510:	50                   	push   eax
10065511:	e8 9a ba 03 00       	call   0x100a0fb0
10065516:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1006551c:	83 c4 0c             	add    esp,0xc
1006551f:	8b f8                	mov    edi,eax
10065521:	6a 00                	push   0x0
10065523:	89 7c 24 18          	mov    DWORD PTR [esp+0x18],edi
10065527:	e8 34 f8 00 00       	call   0x10074d60
1006552c:	33 db                	xor    ebx,ebx
1006552e:	85 ff                	test   edi,edi
10065530:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
10065534:	0f 8e ad 00 00 00    	jle    0x100655e7
1006553a:	55                   	push   ebp
1006553b:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
10065541:	68 80 46 0d 10       	push   0x100d4680
10065546:	68 10 cd 0d 10       	push   0x100dcd10
1006554b:	53                   	push   ebx
1006554c:	50                   	push   eax
1006554d:	e8 0e bb 03 00       	call   0x100a1060
10065552:	8b be f8 00 00 00    	mov    edi,DWORD PTR [esi+0xf8]
10065558:	8b e8                	mov    ebp,eax
1006555a:	83 c4 10             	add    esp,0x10
1006555d:	85 ed                	test   ebp,ebp
1006555f:	75 05                	jne    0x10065566
10065561:	bd 00 d0 10 10       	mov    ebp,0x1010d000
10065566:	8b cf                	mov    ecx,edi
10065568:	e8 e3 f9 00 00       	call   0x10074f50
1006556d:	83 f8 18             	cmp    eax,0x18
10065570:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10065574:	7c 37                	jl     0x100655ad
10065576:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006557c:	68 e9 05 00 00       	push   0x5e9
10065581:	68 30 cb 0d 10       	push   0x100dcb30
10065586:	8b 11                	mov    edx,DWORD PTR [ecx]
10065588:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1006558e:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10065593:	6a 18                	push   0x18
10065595:	68 b8 cc 0d 10       	push   0x100dccb8
1006559a:	68 7c 5d 0c 10       	push   0x100c5d7c
1006559f:	8b 08                	mov    ecx,DWORD PTR [eax]
100655a1:	50                   	push   eax
100655a2:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
100655a8:	83 c4 10             	add    esp,0x10
100655ab:	eb 28                	jmp    0x100655d5
100655ad:	c1 e0 06             	shl    eax,0x6
100655b0:	6a 40                	push   0x40
100655b2:	55                   	push   ebp
100655b3:	8d 5c 38 54          	lea    ebx,[eax+edi*1+0x54]
100655b7:	53                   	push   ebx
100655b8:	e8 63 e2 03 00       	call   0x100a3820
100655bd:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
100655c1:	83 c4 0c             	add    esp,0xc
100655c4:	42                   	inc    edx
100655c5:	8b cf                	mov    ecx,edi
100655c7:	52                   	push   edx
100655c8:	c6 43 3f 00          	mov    BYTE PTR [ebx+0x3f],0x0
100655cc:	e8 8f f7 00 00       	call   0x10074d60
100655d1:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
100655d5:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100655d9:	43                   	inc    ebx
100655da:	3b d8                	cmp    ebx,eax
100655dc:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
100655e0:	0f 8c 55 ff ff ff    	jl     0x1006553b
100655e6:	5d                   	pop    ebp
100655e7:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
100655ed:	68 80 46 0d 10       	push   0x100d4680
100655f2:	68 a0 cc 0d 10       	push   0x100dcca0
100655f7:	50                   	push   eax
100655f8:	e8 03 b9 03 00       	call   0x100a0f00
100655fd:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
10065603:	83 c4 0c             	add    esp,0xc
10065606:	50                   	push   eax
10065607:	e8 f4 3d 01 00       	call   0x10079400
1006560c:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
10065612:	68 00 d0 10 10       	push   0x1010d000
10065617:	68 ac cc 0d 10       	push   0x100dccac
1006561c:	51                   	push   ecx
1006561d:	e8 de b8 03 00       	call   0x100a0f00
10065622:	8b 8e 00 01 00 00    	mov    ecx,DWORD PTR [esi+0x100]
10065628:	83 c4 0c             	add    esp,0xc
1006562b:	50                   	push   eax
1006562c:	e8 cf 3d 01 00       	call   0x10079400
10065631:	8b 96 f0 00 00 00    	mov    edx,DWORD PTR [esi+0xf0]
10065637:	52                   	push   edx
10065638:	e8 b3 b8 03 00       	call   0x100a0ef0
1006563d:	83 c4 04             	add    esp,0x4
10065640:	50                   	push   eax
10065641:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
10065647:	50                   	push   eax
10065648:	e8 83 b8 03 00       	call   0x100a0ed0
1006564d:	83 c4 04             	add    esp,0x4
10065650:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
10065654:	50                   	push   eax
10065655:	68 6c cb 0d 10       	push   0x100dcb6c
1006565a:	68 00 01 00 00       	push   0x100
1006565f:	51                   	push   ecx
10065660:	e8 e8 e9 03 00       	call   0x100a404d
10065665:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
1006566b:	83 c4 14             	add    esp,0x14
1006566e:	8d 54 24 18          	lea    edx,[esp+0x18]
10065672:	c6 84 24 17 01 00 00 	mov    BYTE PTR [esp+0x117],0x0
10065679:	00 
1006567a:	52                   	push   edx
1006567b:	e8 80 3d 01 00       	call   0x10079400
10065680:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
10065686:	68 80 46 0d 10       	push   0x100d4680
1006568b:	68 98 cc 0d 10       	push   0x100dcc98
10065690:	50                   	push   eax
10065691:	e8 6a b8 03 00       	call   0x100a0f00
10065696:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
1006569c:	83 c4 0c             	add    esp,0xc
1006569f:	50                   	push   eax
100656a0:	e8 5b 3d 01 00       	call   0x10079400
100656a5:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
100656ab:	68 80 46 0d 10       	push   0x100d4680
100656b0:	68 08 cd 0d 10       	push   0x100dcd08
100656b5:	51                   	push   ecx
100656b6:	e8 45 b8 03 00       	call   0x100a0f00
100656bb:	8b 8e 04 01 00 00    	mov    ecx,DWORD PTR [esi+0x104]
100656c1:	83 c4 0c             	add    esp,0xc
100656c4:	50                   	push   eax
100656c5:	e8 36 3d 01 00       	call   0x10079400
100656ca:	8b 96 f0 00 00 00    	mov    edx,DWORD PTR [esi+0xf0]
100656d0:	68 80 46 0d 10       	push   0x100d4680
100656d5:	68 00 cd 0d 10       	push   0x100dcd00
100656da:	52                   	push   edx
100656db:	e8 20 b8 03 00       	call   0x100a0f00
100656e0:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
100656e6:	83 c4 0c             	add    esp,0xc
100656e9:	50                   	push   eax
100656ea:	e8 11 3d 01 00       	call   0x10079400
100656ef:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
100656f5:	68 80 46 0d 10       	push   0x100d4680
100656fa:	68 fc cc 0d 10       	push   0x100dccfc
100656ff:	50                   	push   eax
10065700:	e8 fb b7 03 00       	call   0x100a0f00
10065705:	8b 8e 0c 01 00 00    	mov    ecx,DWORD PTR [esi+0x10c]
1006570b:	83 c4 0c             	add    esp,0xc
1006570e:	50                   	push   eax
1006570f:	e8 ec 3c 01 00       	call   0x10079400
10065714:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
1006571a:	68 80 46 0d 10       	push   0x100d4680
1006571f:	68 f0 cc 0d 10       	push   0x100dccf0
10065724:	51                   	push   ecx
10065725:	e8 d6 b7 03 00       	call   0x100a0f00
1006572a:	83 c4 0c             	add    esp,0xc
1006572d:	8b 8e 18 01 00 00    	mov    ecx,DWORD PTR [esi+0x118]
10065733:	50                   	push   eax
10065734:	e8 c7 3c 01 00       	call   0x10079400
10065739:	8b 96 f0 00 00 00    	mov    edx,DWORD PTR [esi+0xf0]
1006573f:	68 80 46 0d 10       	push   0x100d4680
10065744:	68 54 53 0d 10       	push   0x100d5354
10065749:	52                   	push   edx
1006574a:	e8 b1 b7 03 00       	call   0x100a0f00
1006574f:	83 c4 0c             	add    esp,0xc
10065752:	50                   	push   eax
10065753:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
10065759:	68 80 46 0d 10       	push   0x100d4680
1006575e:	68 88 cc 0d 10       	push   0x100dcc88
10065763:	50                   	push   eax
10065764:	e8 97 b7 03 00       	call   0x100a0f00
10065769:	83 c4 0c             	add    esp,0xc
1006576c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
10065770:	50                   	push   eax
10065771:	68 e8 cc 0d 10       	push   0x100dcce8
10065776:	68 00 01 00 00       	push   0x100
1006577b:	51                   	push   ecx
1006577c:	e8 cc e8 03 00       	call   0x100a404d
10065781:	8b 8e 1c 01 00 00    	mov    ecx,DWORD PTR [esi+0x11c]
10065787:	83 c4 14             	add    esp,0x14
1006578a:	8d 54 24 18          	lea    edx,[esp+0x18]
1006578e:	c6 84 24 17 01 00 00 	mov    BYTE PTR [esp+0x117],0x0
10065795:	00 
10065796:	52                   	push   edx
10065797:	e8 64 3c 01 00       	call   0x10079400
1006579c:	5f                   	pop    edi
1006579d:	5b                   	pop    ebx
1006579e:	5e                   	pop    esi
1006579f:	81 c4 0c 01 00 00    	add    esp,0x10c
100657a5:	c3                   	ret
100657a6:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
100657ac:	6a 00                	push   0x0
100657ae:	e8 ad f5 00 00       	call   0x10074d60
100657b3:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
100657b9:	68 80 46 0d 10       	push   0x100d4680
100657be:	e8 3d 3c 01 00       	call   0x10079400
100657c3:	8b 8e 00 01 00 00    	mov    ecx,DWORD PTR [esi+0x100]
100657c9:	68 00 d0 10 10       	push   0x1010d000
100657ce:	e8 2d 3c 01 00       	call   0x10079400
100657d3:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
100657d9:	68 80 46 0d 10       	push   0x100d4680
100657de:	e8 1d 3c 01 00       	call   0x10079400
100657e3:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
100657e9:	68 80 46 0d 10       	push   0x100d4680
100657ee:	e8 0d 3c 01 00       	call   0x10079400
100657f3:	8b 8e 04 01 00 00    	mov    ecx,DWORD PTR [esi+0x104]
100657f9:	68 80 46 0d 10       	push   0x100d4680
100657fe:	e8 fd 3b 01 00       	call   0x10079400
10065803:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
10065809:	68 80 46 0d 10       	push   0x100d4680
1006580e:	e8 ed 3b 01 00       	call   0x10079400
10065813:	8b 8e 0c 01 00 00    	mov    ecx,DWORD PTR [esi+0x10c]
10065819:	68 80 46 0d 10       	push   0x100d4680
1006581e:	e8 dd 3b 01 00       	call   0x10079400
10065823:	8b 8e 18 01 00 00    	mov    ecx,DWORD PTR [esi+0x118]
10065829:	68 80 46 0d 10       	push   0x100d4680
1006582e:	e8 cd 3b 01 00       	call   0x10079400
10065833:	8b 8e 1c 01 00 00    	mov    ecx,DWORD PTR [esi+0x11c]
10065839:	68 80 46 0d 10       	push   0x100d4680
1006583e:	e8 bd 3b 01 00       	call   0x10079400
10065843:	5e                   	pop    esi
10065844:	81 c4 0c 01 00 00    	add    esp,0x10c
1006584a:	c3                   	ret
1006584b:	90                   	nop
1006584c:	90                   	nop
1006584d:	90                   	nop
1006584e:	90                   	nop
1006584f:	90                   	nop
10065850:	6a 00                	push   0x0
10065852:	e8 49 df 00 00       	call   0x100737a0
10065857:	b8 01 00 00 00       	mov    eax,0x1
1006585c:	c2 08 00             	ret    0x8
1006585f:	90                   	nop

*/
void PlayerList::AddPlayer() {
    // TODO: Implement AddPlayer
}

