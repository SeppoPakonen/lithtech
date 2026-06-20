#include "ViewpointList.h"

// 0x1006c3f0: ViewpointList::AllocItem
/*

1006c3f0:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
1006c3f3:	c7 01 40 b6 0b 10    	mov    DWORD PTR [ecx],0x100bb640
1006c3f9:	85 c0                	test   eax,eax
1006c3fb:	74 06                	je     0x1006c403
1006c3fd:	8b 51 40             	mov    edx,DWORD PTR [ecx+0x40]
1006c400:	89 50 40             	mov    DWORD PTR [eax+0x40],edx
1006c403:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
1006c406:	85 c0                	test   eax,eax
1006c408:	74 08                	je     0x1006c412
1006c40a:	8b 51 3c             	mov    edx,DWORD PTR [ecx+0x3c]
1006c40d:	89 50 3c             	mov    DWORD PTR [eax+0x3c],edx
1006c410:	eb 08                	jmp    0x1006c41a
1006c412:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
1006c415:	a3 c8 40 12 10       	mov    ds:0x101240c8,eax
1006c41a:	e9 01 21 00 00       	jmp    0x1006e520
1006c41f:	90                   	nop
1006c420:	83 ec 14             	sub    esp,0x14
1006c423:	8b 51 48             	mov    edx,DWORD PTR [ecx+0x48]
1006c426:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1006c42a:	56                   	push   esi
1006c42b:	57                   	push   edi
1006c42c:	8b 4a 3c             	mov    ecx,DWORD PTR [edx+0x3c]
1006c42f:	8b 7a 34             	mov    edi,DWORD PTR [edx+0x34]
1006c432:	c1 e1 05             	shl    ecx,0x5
1006c435:	8b f1                	mov    esi,ecx
1006c437:	33 c0                	xor    eax,eax
1006c439:	c1 e9 02             	shr    ecx,0x2
1006c43c:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1006c43e:	8b ce                	mov    ecx,esi
1006c440:	83 e1 03             	and    ecx,0x3
1006c443:	f3 aa                	rep stos BYTE PTR es:[edi],al
1006c445:	8b 4a 3c             	mov    ecx,DWORD PTR [edx+0x3c]
1006c448:	33 c0                	xor    eax,eax
1006c44a:	85 c9                	test   ecx,ecx
1006c44c:	7e 17                	jle    0x1006c465
1006c44e:	33 c9                	xor    ecx,ecx
1006c450:	83 ce ff             	or     esi,0xffffffff
1006c453:	8b 7a 34             	mov    edi,DWORD PTR [edx+0x34]
1006c456:	40                   	inc    eax
1006c457:	89 74 0f 14          	mov    DWORD PTR [edi+ecx*1+0x14],esi
1006c45b:	8b 7a 3c             	mov    edi,DWORD PTR [edx+0x3c]
1006c45e:	83 c1 20             	add    ecx,0x20
1006c461:	3b c7                	cmp    eax,edi
1006c463:	7c ee                	jl     0x1006c453
1006c465:	a1 cc 40 12 10       	mov    eax,ds:0x101240cc
1006c46a:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1006c471:	00 
1006c472:	85 c0                	test   eax,eax
1006c474:	0f 8e 42 01 00 00    	jle    0x1006c5bc
1006c47a:	a1 50 d0 0d 10       	mov    eax,ds:0x100dd050
1006c47f:	53                   	push   ebx
1006c480:	bb c8 3d 12 10       	mov    ebx,0x10123dc8
1006c485:	b9 58 3e 12 10       	mov    ecx,0x10123e58
1006c48a:	55                   	push   ebp
1006c48b:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
1006c48f:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1006c493:	8b 11                	mov    edx,DWORD PTR [ecx]
1006c495:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1006c49c:	00 
1006c49d:	85 d2                	test   edx,edx
1006c49f:	0f 8e e6 00 00 00    	jle    0x1006c58b
1006c4a5:	8b 2b                	mov    ebp,DWORD PTR [ebx]
1006c4a7:	85 c0                	test   eax,eax
1006c4a9:	0f 8c c2 00 00 00    	jl     0x1006c571
1006c4af:	85 ed                	test   ebp,ebp
1006c4b1:	0f 8c ba 00 00 00    	jl     0x1006c571
1006c4b7:	3b e8                	cmp    ebp,eax
1006c4b9:	0f 84 b2 00 00 00    	je     0x1006c571
1006c4bf:	8d 3c ed 00 00 00 00 	lea    edi,[ebp*8+0x0]
1006c4c6:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
1006c4cd:	2b fd                	sub    edi,ebp
1006c4cf:	2b c8                	sub    ecx,eax
1006c4d1:	c1 e7 03             	shl    edi,0x3
1006c4d4:	8b 34 cd 18 34 12 10 	mov    esi,DWORD PTR [ecx*8+0x10123418]
1006c4db:	8b 97 18 34 12 10    	mov    edx,DWORD PTR [edi+0x10123418]
1006c4e1:	3b d6                	cmp    edx,esi
1006c4e3:	0f 85 88 00 00 00    	jne    0x1006c571
1006c4e9:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1006c4ed:	33 c9                	xor    ecx,ecx
1006c4ef:	8b 70 48             	mov    esi,DWORD PTR [eax+0x48]
1006c4f2:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
1006c4f5:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1006c4f8:	85 d2                	test   edx,edx
1006c4fa:	7e 0d                	jle    0x1006c509
1006c4fc:	f6 00 01             	test   BYTE PTR [eax],0x1
1006c4ff:	74 08                	je     0x1006c509
1006c501:	41                   	inc    ecx
1006c502:	83 c0 20             	add    eax,0x20
1006c505:	3b ca                	cmp    ecx,edx
1006c507:	7c f3                	jl     0x1006c4fc
1006c509:	3b ca                	cmp    ecx,edx
1006c50b:	75 39                	jne    0x1006c546
1006c50d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006c513:	68 29 05 00 00       	push   0x529
1006c518:	68 a4 d0 0d 10       	push   0x100dd0a4
1006c51d:	8b 11                	mov    edx,DWORD PTR [ecx]
1006c51f:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1006c525:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
1006c528:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1006c52d:	52                   	push   edx
1006c52e:	68 fc d0 0d 10       	push   0x100dd0fc
1006c533:	8b 08                	mov    ecx,DWORD PTR [eax]
1006c535:	68 7c 5d 0c 10       	push   0x100c5d7c
1006c53a:	50                   	push   eax
1006c53b:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1006c541:	83 c4 10             	add    esp,0x10
1006c544:	eb 26                	jmp    0x1006c56c
1006c546:	8b 30                	mov    esi,DWORD PTR [eax]
1006c548:	33 c9                	xor    ecx,ecx
1006c54a:	83 ce 01             	or     esi,0x1
1006c54d:	3b c1                	cmp    eax,ecx
1006c54f:	89 30                	mov    DWORD PTR [eax],esi
1006c551:	74 19                	je     0x1006c56c
1006c553:	8d 97 f8 33 12 10    	lea    edx,[edi+0x101233f8]
1006c559:	c7 40 04 01 00 00 00 	mov    DWORD PTR [eax+0x4],0x1
1006c560:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
1006c563:	89 68 14             	mov    DWORD PTR [eax+0x14],ebp
1006c566:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1006c569:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
1006c56c:	a1 50 d0 0d 10       	mov    eax,ds:0x100dd050
1006c571:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1006c575:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1006c579:	42                   	inc    edx
1006c57a:	83 c3 04             	add    ebx,0x4
1006c57d:	8b 31                	mov    esi,DWORD PTR [ecx]
1006c57f:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1006c583:	3b d6                	cmp    edx,esi
1006c585:	0f 8c 1a ff ff ff    	jl     0x1006c4a5
1006c58b:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1006c58f:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
1006c593:	8b 35 cc 40 12 10    	mov    esi,DWORD PTR ds:0x101240cc
1006c599:	42                   	inc    edx
1006c59a:	81 c1 c0 00 00 00    	add    ecx,0xc0
1006c5a0:	81 c3 c0 00 00 00    	add    ebx,0xc0
1006c5a6:	3b d6                	cmp    edx,esi
1006c5a8:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1006c5ac:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1006c5b0:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
1006c5b4:	0f 8c d9 fe ff ff    	jl     0x1006c493
1006c5ba:	5d                   	pop    ebp
1006c5bb:	5b                   	pop    ebx
1006c5bc:	5f                   	pop    edi
1006c5bd:	5e                   	pop    esi
1006c5be:	83 c4 14             	add    esp,0x14
1006c5c1:	c2 04 00             	ret    0x4
1006c5c4:	90                   	nop
1006c5c5:	90                   	nop
1006c5c6:	90                   	nop
1006c5c7:	90                   	nop
1006c5c8:	90                   	nop
1006c5c9:	90                   	nop
1006c5ca:	90                   	nop
1006c5cb:	90                   	nop
1006c5cc:	90                   	nop
1006c5cd:	90                   	nop
1006c5ce:	90                   	nop
1006c5cf:	90                   	nop


*/
void ViewpointList::AllocItem() {
    __asm {
        mov    eax,DWORD PTR [ecx+0x3c]
        mov    DWORD PTR [ecx],0x100bb640
        test   eax,eax
        je     loc_1006c403
        mov    edx,DWORD PTR [ecx+0x40]
        mov    DWORD PTR [eax+0x40],edx
        loc_1006c403:
        mov    eax,DWORD PTR [ecx+0x40]
        test   eax,eax
        je     loc_1006c412
        mov    edx,DWORD PTR [ecx+0x3c]
        mov    DWORD PTR [eax+0x3c],edx
        jmp    loc_1006c41a
    }
}

// 0x1006c5d0: ViewpointList::AllocItem
/*

1006c5d0:	83 ec 14             	sub    esp,0x14
1006c5d3:	8b 51 48             	mov    edx,DWORD PTR [ecx+0x48]
1006c5d6:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1006c5da:	56                   	push   esi
1006c5db:	57                   	push   edi
1006c5dc:	8b 4a 3c             	mov    ecx,DWORD PTR [edx+0x3c]
1006c5df:	8b 7a 34             	mov    edi,DWORD PTR [edx+0x34]
1006c5e2:	c1 e1 05             	shl    ecx,0x5
1006c5e5:	8b f1                	mov    esi,ecx
1006c5e7:	33 c0                	xor    eax,eax
1006c5e9:	c1 e9 02             	shr    ecx,0x2
1006c5ec:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1006c5ee:	8b ce                	mov    ecx,esi
1006c5f0:	83 e1 03             	and    ecx,0x3
1006c5f3:	f3 aa                	rep stos BYTE PTR es:[edi],al
1006c5f5:	8b 4a 3c             	mov    ecx,DWORD PTR [edx+0x3c]
1006c5f8:	33 c0                	xor    eax,eax
1006c5fa:	85 c9                	test   ecx,ecx
1006c5fc:	7e 17                	jle    0x1006c615
1006c5fe:	33 c9                	xor    ecx,ecx
1006c600:	83 ce ff             	or     esi,0xffffffff
1006c603:	8b 7a 34             	mov    edi,DWORD PTR [edx+0x34]
1006c606:	40                   	inc    eax
1006c607:	89 74 0f 14          	mov    DWORD PTR [edi+ecx*1+0x14],esi
1006c60b:	8b 7a 3c             	mov    edi,DWORD PTR [edx+0x3c]
1006c60e:	83 c1 20             	add    ecx,0x20
1006c611:	3b c7                	cmp    eax,edi
1006c613:	7c ee                	jl     0x1006c603
1006c615:	a1 cc 40 12 10       	mov    eax,ds:0x101240cc
1006c61a:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1006c621:	00 
1006c622:	85 c0                	test   eax,eax
1006c624:	0f 8e 42 01 00 00    	jle    0x1006c76c
1006c62a:	a1 50 d0 0d 10       	mov    eax,ds:0x100dd050
1006c62f:	53                   	push   ebx
1006c630:	bb c8 3d 12 10       	mov    ebx,0x10123dc8
1006c635:	b9 58 3e 12 10       	mov    ecx,0x10123e58
1006c63a:	55                   	push   ebp
1006c63b:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
1006c63f:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1006c643:	8b 11                	mov    edx,DWORD PTR [ecx]
1006c645:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1006c64c:	00 
1006c64d:	85 d2                	test   edx,edx
1006c64f:	0f 8e e6 00 00 00    	jle    0x1006c73b
1006c655:	8b 2b                	mov    ebp,DWORD PTR [ebx]
1006c657:	85 c0                	test   eax,eax
1006c659:	0f 8c c2 00 00 00    	jl     0x1006c721
1006c65f:	85 ed                	test   ebp,ebp
1006c661:	0f 8c ba 00 00 00    	jl     0x1006c721
1006c667:	3b e8                	cmp    ebp,eax
1006c669:	0f 84 b2 00 00 00    	je     0x1006c721
1006c66f:	8d 3c ed 00 00 00 00 	lea    edi,[ebp*8+0x0]
1006c676:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
1006c67d:	2b fd                	sub    edi,ebp
1006c67f:	2b c8                	sub    ecx,eax
1006c681:	c1 e7 03             	shl    edi,0x3
1006c684:	8b 34 cd 18 34 12 10 	mov    esi,DWORD PTR [ecx*8+0x10123418]
1006c68b:	8b 97 18 34 12 10    	mov    edx,DWORD PTR [edi+0x10123418]
1006c691:	3b d6                	cmp    edx,esi
1006c693:	0f 85 88 00 00 00    	jne    0x1006c721
1006c699:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1006c69d:	33 c9                	xor    ecx,ecx
1006c69f:	8b 70 48             	mov    esi,DWORD PTR [eax+0x48]
1006c6a2:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
1006c6a5:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1006c6a8:	85 d2                	test   edx,edx
1006c6aa:	7e 0d                	jle    0x1006c6b9
1006c6ac:	f6 00 01             	test   BYTE PTR [eax],0x1
1006c6af:	74 08                	je     0x1006c6b9
1006c6b1:	41                   	inc    ecx
1006c6b2:	83 c0 20             	add    eax,0x20
1006c6b5:	3b ca                	cmp    ecx,edx
1006c6b7:	7c f3                	jl     0x1006c6ac
1006c6b9:	3b ca                	cmp    ecx,edx
1006c6bb:	75 39                	jne    0x1006c6f6
1006c6bd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006c6c3:	68 29 05 00 00       	push   0x529
1006c6c8:	68 a4 d0 0d 10       	push   0x100dd0a4
1006c6cd:	8b 11                	mov    edx,DWORD PTR [ecx]
1006c6cf:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1006c6d5:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
1006c6d8:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1006c6dd:	52                   	push   edx
1006c6de:	68 fc d0 0d 10       	push   0x100dd0fc
1006c6e3:	8b 08                	mov    ecx,DWORD PTR [eax]
1006c6e5:	68 7c 5d 0c 10       	push   0x100c5d7c
1006c6ea:	50                   	push   eax
1006c6eb:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1006c6f1:	83 c4 10             	add    esp,0x10
1006c6f4:	eb 26                	jmp    0x1006c71c
1006c6f6:	8b 30                	mov    esi,DWORD PTR [eax]
1006c6f8:	33 c9                	xor    ecx,ecx
1006c6fa:	83 ce 01             	or     esi,0x1
1006c6fd:	3b c1                	cmp    eax,ecx
1006c6ff:	89 30                	mov    DWORD PTR [eax],esi
1006c701:	74 19                	je     0x1006c71c
1006c703:	8d 97 f8 33 12 10    	lea    edx,[edi+0x101233f8]
1006c709:	c7 40 04 01 00 00 00 	mov    DWORD PTR [eax+0x4],0x1
1006c710:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
1006c713:	89 68 14             	mov    DWORD PTR [eax+0x14],ebp
1006c716:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1006c719:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
1006c71c:	a1 50 d0 0d 10       	mov    eax,ds:0x100dd050
1006c721:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1006c725:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1006c729:	42                   	inc    edx
1006c72a:	83 c3 04             	add    ebx,0x4
1006c72d:	8b 31                	mov    esi,DWORD PTR [ecx]
1006c72f:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1006c733:	3b d6                	cmp    edx,esi
1006c735:	0f 8c 1a ff ff ff    	jl     0x1006c655
1006c73b:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1006c73f:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
1006c743:	8b 35 cc 40 12 10    	mov    esi,DWORD PTR ds:0x101240cc
1006c749:	42                   	inc    edx
1006c74a:	81 c1 c0 00 00 00    	add    ecx,0xc0
1006c750:	81 c3 c0 00 00 00    	add    ebx,0xc0
1006c756:	3b d6                	cmp    edx,esi
1006c758:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1006c75c:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1006c760:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
1006c764:	0f 8c d9 fe ff ff    	jl     0x1006c643
1006c76a:	5d                   	pop    ebp
1006c76b:	5b                   	pop    ebx
1006c76c:	5f                   	pop    edi
1006c76d:	5e                   	pop    esi
1006c76e:	83 c4 14             	add    esp,0x14
1006c771:	c2 04 00             	ret    0x4
1006c774:	90                   	nop
1006c775:	90                   	nop
1006c776:	90                   	nop
1006c777:	90                   	nop
1006c778:	90                   	nop
1006c779:	90                   	nop
1006c77a:	90                   	nop
1006c77b:	90                   	nop
1006c77c:	90                   	nop
1006c77d:	90                   	nop
1006c77e:	90                   	nop
1006c77f:	90                   	nop


*/
void ViewpointList::AllocItem() {
    __asm {
        sub    esp,0x14
        mov    edx,DWORD PTR [ecx+0x48]
        mov    DWORD PTR [esp+0x10],ecx
        push   esi
        push   edi
        mov    ecx,DWORD PTR [edx+0x3c]
        mov    edi,DWORD PTR [edx+0x34]
        shl    ecx,0x5
        mov    esi,ecx
        xor    eax,eax
        shr    ecx,0x2
        rep stosd
        mov    ecx,esi
        and    ecx,0x3
        rep stosb
        mov    ecx,DWORD PTR [edx+0x3c]
        xor    eax,eax
        test   ecx,ecx
        jle    loc_1006c615
        xor    ecx,ecx
        or     esi,0xffffffff
        loc_1006c603:
        mov    edi,DWORD PTR [edx+0x34]
        inc    eax
        mov    DWORD PTR [edi+ecx*1+0x14],esi
        mov    edi,DWORD PTR [edx+0x3c]
        add    ecx,0x20
        cmp    eax,edi
        jl     loc_1006c603
        loc_1006c615:
        mov    eax,ds:0x101240cc
        mov    DWORD PTR [esp+0xc],0x0
        test   eax,eax
        jle    loc_1006c76c
        mov    eax,ds:0x100dd050
        push   ebx
        mov    ebx,0x10123dc8
        mov    ecx,0x10123e58
        push   ebp
        mov    DWORD PTR [esp+0x1c],ebx
        mov    DWORD PTR [esp+0x18],ecx
        loc_1006c643:
        mov    edx,DWORD PTR [ecx]
        mov    DWORD PTR [esp+0x10],0x0
        test   edx,edx
        jle    loc_1006c73b
        loc_1006c655:
        mov    ebp,DWORD PTR [ebx]
        test   eax,eax
        jl     loc_1006c721
        test   ebp,ebp
        jl     loc_1006c721
        cmp    ebp,eax
        je     loc_1006c721
        lea    edi,[ebp*8+0x0]
        lea    ecx,[eax*8+0x0]
        sub    edi,ebp
        sub    ecx,eax
        shl    edi,0x3
        mov    esi,DWORD PTR [ecx*8+0x10123418]
        mov    edx,DWORD PTR [edi+0x10123418]
        cmp    edx,esi
        jne    loc_1006c721
        mov    eax,DWORD PTR [esp+0x20]
        xor    ecx,ecx
        mov    esi,DWORD PTR [eax+0x48]
        mov    edx,DWORD PTR [esi+0x3c]
        mov    eax,DWORD PTR [esi+0x34]
        test   edx,edx
        jle    loc_1006c6b9
        loc_1006c6ac:
        test   BYTE PTR [eax],0x1
        je     loc_1006c6b9
        inc    ecx
        add    eax,0x20
        cmp    ecx,edx
        jl     loc_1006c6ac
        loc_1006c6b9:
        cmp    ecx,edx
        jne    loc_1006c6f6
        mov    ecx,DWORD PTR ds:0x1010cfc8
        push   0x529
        push   0x100dd0a4
        mov    edx,DWORD PTR [ecx]
        call   DWORD PTR [edx+0x120]
        mov    edx,DWORD PTR [esi+0x3c]
        mov    eax,ds:0x1010cfc8
        push   edx
        push   0x100dd0fc
        mov    ecx,DWORD PTR [eax]
        push   0x100c5d7c
        push   eax
        call   DWORD PTR [ecx+0x128]
        add    esp,0x10
        jmp    loc_1006c71c
        loc_1006c6f6:
        mov    esi,DWORD PTR [eax]
        xor    ecx,ecx
        or     esi,0x1
        cmp    eax,ecx
        mov    DWORD PTR [eax],esi
        je     loc_1006c71c
        lea    edx,[edi+0x101233f8]
        mov    DWORD PTR [eax+0x4],0x1
        mov    DWORD PTR [eax+0x8],edx
        mov    DWORD PTR [eax+0x14],ebp
        mov    DWORD PTR [eax+0xc],ecx
        mov    DWORD PTR [eax+0x10],ecx
        loc_1006c71c:
        mov    eax,ds:0x100dd050
        loc_1006c721:
        mov    ecx,DWORD PTR [esp+0x18]
        mov    edx,DWORD PTR [esp+0x10]
        inc    edx
        add    ebx,0x4
        mov    esi,DWORD PTR [ecx]
        mov    DWORD PTR [esp+0x10],edx
        cmp    edx,esi
        jl     loc_1006c655
        loc_1006c73b:
        mov    edx,DWORD PTR [esp+0x14]
        mov    ebx,DWORD PTR [esp+0x1c]
        mov    esi,DWORD PTR ds:0x101240cc
        inc    edx
        add    ecx,0xc0
        add    ebx,0xc0
        cmp    edx,esi
        mov    DWORD PTR [esp+0x14],edx
        mov    DWORD PTR [esp+0x18],ecx
        mov    DWORD PTR [esp+0x1c],ebx
        jl     loc_1006c643
        pop    ebp
        pop    ebx
        loc_1006c76c:
        pop    edi
        pop    esi
        add    esp,0x14
        ret    0x4
    }
}

// 0x1006c780: ViewpointList::AllocItem
/*

1006c780:	83 ec 0c             	sub    esp,0xc
1006c783:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1006c787:	8b 15 50 d0 0d 10    	mov    edx,DWORD PTR ds:0x100dd050
1006c78d:	56                   	push   esi
1006c78e:	3b c2                	cmp    eax,edx
1006c790:	57                   	push   edi
1006c791:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1006c795:	0f 85 9e 01 00 00    	jne    0x1006c939
1006c79b:	83 7c 24 20 07       	cmp    DWORD PTR [esp+0x20],0x7
1006c7a0:	0f 85 93 01 00 00    	jne    0x1006c939
1006c7a6:	8b 51 48             	mov    edx,DWORD PTR [ecx+0x48]
1006c7a9:	33 c0                	xor    eax,eax
1006c7ab:	8b 4a 3c             	mov    ecx,DWORD PTR [edx+0x3c]
1006c7ae:	8b 7a 34             	mov    edi,DWORD PTR [edx+0x34]
1006c7b1:	c1 e1 05             	shl    ecx,0x5
1006c7b4:	8b f1                	mov    esi,ecx
1006c7b6:	c1 e9 02             	shr    ecx,0x2
1006c7b9:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1006c7bb:	8b ce                	mov    ecx,esi
1006c7bd:	83 e1 03             	and    ecx,0x3
1006c7c0:	f3 aa                	rep stos BYTE PTR es:[edi],al
1006c7c2:	8b 4a 3c             	mov    ecx,DWORD PTR [edx+0x3c]
1006c7c5:	33 c0                	xor    eax,eax
1006c7c7:	85 c9                	test   ecx,ecx
1006c7c9:	7e 17                	jle    0x1006c7e2
1006c7cb:	33 c9                	xor    ecx,ecx
1006c7cd:	83 ce ff             	or     esi,0xffffffff
1006c7d0:	8b 7a 34             	mov    edi,DWORD PTR [edx+0x34]
1006c7d3:	40                   	inc    eax
1006c7d4:	89 74 39 14          	mov    DWORD PTR [ecx+edi*1+0x14],esi
1006c7d8:	8b 7a 3c             	mov    edi,DWORD PTR [edx+0x3c]
1006c7db:	83 c1 20             	add    ecx,0x20
1006c7de:	3b c7                	cmp    eax,edi
1006c7e0:	7c ee                	jl     0x1006c7d0
1006c7e2:	a1 cc 40 12 10       	mov    eax,ds:0x101240cc
1006c7e7:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
1006c7ee:	00 
1006c7ef:	85 c0                	test   eax,eax
1006c7f1:	0f 8e 42 01 00 00    	jle    0x1006c939
1006c7f7:	a1 50 d0 0d 10       	mov    eax,ds:0x100dd050
1006c7fc:	53                   	push   ebx
1006c7fd:	bb c8 3d 12 10       	mov    ebx,0x10123dc8
1006c802:	b9 58 3e 12 10       	mov    ecx,0x10123e58
1006c807:	55                   	push   ebp
1006c808:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1006c80c:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1006c810:	8b 11                	mov    edx,DWORD PTR [ecx]
1006c812:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
1006c819:	00 
1006c81a:	85 d2                	test   edx,edx
1006c81c:	0f 8e e6 00 00 00    	jle    0x1006c908
1006c822:	8b 2b                	mov    ebp,DWORD PTR [ebx]
1006c824:	85 c0                	test   eax,eax
1006c826:	0f 8c c2 00 00 00    	jl     0x1006c8ee
1006c82c:	85 ed                	test   ebp,ebp
1006c82e:	0f 8c ba 00 00 00    	jl     0x1006c8ee
1006c834:	3b e8                	cmp    ebp,eax
1006c836:	0f 84 b2 00 00 00    	je     0x1006c8ee
1006c83c:	8d 3c ed 00 00 00 00 	lea    edi,[ebp*8+0x0]
1006c843:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
1006c84a:	2b fd                	sub    edi,ebp
1006c84c:	2b c8                	sub    ecx,eax
1006c84e:	c1 e7 03             	shl    edi,0x3
1006c851:	8b 34 cd 18 34 12 10 	mov    esi,DWORD PTR [ecx*8+0x10123418]
1006c858:	8b 97 18 34 12 10    	mov    edx,DWORD PTR [edi+0x10123418]
1006c85e:	3b d6                	cmp    edx,esi
1006c860:	0f 85 88 00 00 00    	jne    0x1006c8ee
1006c866:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1006c86a:	33 c9                	xor    ecx,ecx
1006c86c:	8b 70 48             	mov    esi,DWORD PTR [eax+0x48]
1006c86f:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
1006c872:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1006c875:	85 d2                	test   edx,edx
1006c877:	7e 0d                	jle    0x1006c886
1006c879:	f6 00 01             	test   BYTE PTR [eax],0x1
1006c87c:	74 08                	je     0x1006c886
1006c87e:	41                   	inc    ecx
1006c87f:	83 c0 20             	add    eax,0x20
1006c882:	3b ca                	cmp    ecx,edx
1006c884:	7c f3                	jl     0x1006c879
1006c886:	3b ca                	cmp    ecx,edx
1006c888:	75 39                	jne    0x1006c8c3
1006c88a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006c890:	68 29 05 00 00       	push   0x529
1006c895:	68 a4 d0 0d 10       	push   0x100dd0a4
1006c89a:	8b 11                	mov    edx,DWORD PTR [ecx]
1006c89c:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1006c8a2:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
1006c8a5:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1006c8aa:	52                   	push   edx
1006c8ab:	68 fc d0 0d 10       	push   0x100dd0fc
1006c8b0:	8b 08                	mov    ecx,DWORD PTR [eax]
1006c8b2:	68 7c 5d 0c 10       	push   0x100c5d7c
1006c8b7:	50                   	push   eax
1006c8b8:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1006c8be:	83 c4 10             	add    esp,0x10
1006c8c1:	eb 26                	jmp    0x1006c8e9
1006c8c3:	8b 30                	mov    esi,DWORD PTR [eax]
1006c8c5:	33 c9                	xor    ecx,ecx
1006c8c7:	83 ce 01             	or     esi,0x1
1006c8ca:	3b c1                	cmp    eax,ecx
1006c8cc:	89 30                	mov    DWORD PTR [eax],esi
1006c8ce:	74 19                	je     0x1006c8e9
1006c8d0:	8d 97 f8 33 12 10    	lea    edx,[edi+0x101233f8]
1006c8d6:	c7 40 04 01 00 00 00 	mov    DWORD PTR [eax+0x4],0x1
1006c8dd:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
1006c8e0:	89 68 14             	mov    DWORD PTR [eax+0x14],ebp
1006c8e3:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1006c8e6:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
1006c8e9:	a1 50 d0 0d 10       	mov    eax,ds:0x100dd050
1006c8ee:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1006c8f2:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1006c8f6:	42                   	inc    edx
1006c8f7:	83 c3 04             	add    ebx,0x4
1006c8fa:	8b 31                	mov    esi,DWORD PTR [ecx]
1006c8fc:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
1006c900:	3b d6                	cmp    edx,esi
1006c902:	0f 8c 1a ff ff ff    	jl     0x1006c822
1006c908:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1006c90c:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
1006c910:	8b 35 cc 40 12 10    	mov    esi,DWORD PTR ds:0x101240cc
1006c916:	42                   	inc    edx
1006c917:	81 c1 c0 00 00 00    	add    ecx,0xc0
1006c91d:	81 c3 c0 00 00 00    	add    ebx,0xc0
1006c923:	3b d6                	cmp    edx,esi
1006c925:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
1006c929:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1006c92d:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1006c931:	0f 8c d9 fe ff ff    	jl     0x1006c810
1006c937:	5d                   	pop    ebp
1006c938:	5b                   	pop    ebx
1006c939:	5f                   	pop    edi
1006c93a:	5e                   	pop    esi
1006c93b:	83 c4 0c             	add    esp,0xc
1006c93e:	c2 0c 00             	ret    0xc
1006c941:	90                   	nop
1006c942:	90                   	nop
1006c943:	90                   	nop
1006c944:	90                   	nop
1006c945:	90                   	nop
1006c946:	90                   	nop
1006c947:	90                   	nop
1006c948:	90                   	nop
1006c949:	90                   	nop
1006c94a:	90                   	nop
1006c94b:	90                   	nop
1006c94c:	90                   	nop
1006c94d:	90                   	nop
1006c94e:	90                   	nop
1006c94f:	90                   	nop


*/
void ViewpointList::AllocItem() {
    __asm {
        sub    esp,0xc
        mov    eax,DWORD PTR [esp+0x10]
        mov    edx,DWORD PTR ds:0x100dd050
        push   esi
        cmp    eax,edx
        push   edi
        mov    DWORD PTR [esp+0x10],ecx
        jne    loc_1006c939
        cmp    DWORD PTR [esp+0x20],0x7
        jne    loc_1006c939
        mov    edx,DWORD PTR [ecx+0x48]
        xor    eax,eax
        mov    ecx,DWORD PTR [edx+0x3c]
        mov    edi,DWORD PTR [edx+0x34]
        shl    ecx,0x5
        mov    esi,ecx
        shr    ecx,0x2
        rep stosd
        mov    ecx,esi
        and    ecx,0x3
        rep stosb
        mov    ecx,DWORD PTR [edx+0x3c]
        xor    eax,eax
        test   ecx,ecx
        jle    loc_1006c7e2
        xor    ecx,ecx
        or     esi,0xffffffff
        loc_1006c7d0:
        mov    edi,DWORD PTR [edx+0x34]
        inc    eax
        mov    DWORD PTR [ecx+edi*1+0x14],esi
        mov    edi,DWORD PTR [edx+0x3c]
        add    ecx,0x20
        cmp    eax,edi
        jl     loc_1006c7d0
        loc_1006c7e2:
        mov    eax,ds:0x101240cc
        mov    DWORD PTR [esp+0x20],0x0
        test   eax,eax
        jle    loc_1006c939
        mov    eax,ds:0x100dd050
        push   ebx
        mov    ebx,0x10123dc8
        mov    ecx,0x10123e58
        push   ebp
        mov    DWORD PTR [esp+0x14],ebx
        mov    DWORD PTR [esp+0x10],ecx
        loc_1006c810:
        mov    edx,DWORD PTR [ecx]
        mov    DWORD PTR [esp+0x20],0x0
        test   edx,edx
        jle    loc_1006c908
        loc_1006c822:
        mov    ebp,DWORD PTR [ebx]
        test   eax,eax
        jl     loc_1006c8ee
        test   ebp,ebp
        jl     loc_1006c8ee
        cmp    ebp,eax
        je     loc_1006c8ee
        lea    edi,[ebp*8+0x0]
        lea    ecx,[eax*8+0x0]
        sub    edi,ebp
        sub    ecx,eax
        shl    edi,0x3
        mov    esi,DWORD PTR [ecx*8+0x10123418]
        mov    edx,DWORD PTR [edi+0x10123418]
        cmp    edx,esi
        jne    loc_1006c8ee
        mov    eax,DWORD PTR [esp+0x18]
        xor    ecx,ecx
        mov    esi,DWORD PTR [eax+0x48]
        mov    edx,DWORD PTR [esi+0x3c]
        mov    eax,DWORD PTR [esi+0x34]
        test   edx,edx
        jle    loc_1006c886
        loc_1006c879:
        test   BYTE PTR [eax],0x1
        je     loc_1006c886
        inc    ecx
        add    eax,0x20
        cmp    ecx,edx
        jl     loc_1006c879
        loc_1006c886:
        cmp    ecx,edx
        jne    loc_1006c8c3
        mov    ecx,DWORD PTR ds:0x1010cfc8
        push   0x529
        push   0x100dd0a4
        mov    edx,DWORD PTR [ecx]
        call   DWORD PTR [edx+0x120]
        mov    edx,DWORD PTR [esi+0x3c]
        mov    eax,ds:0x1010cfc8
        push   edx
        push   0x100dd0fc
        mov    ecx,DWORD PTR [eax]
        push   0x100c5d7c
        push   eax
        call   DWORD PTR [ecx+0x128]
        add    esp,0x10
        jmp    loc_1006c8e9
        loc_1006c8c3:
        mov    esi,DWORD PTR [eax]
        xor    ecx,ecx
        or     esi,0x1
        cmp    eax,ecx
        mov    DWORD PTR [eax],esi
        je     loc_1006c8e9
        lea    edx,[edi+0x101233f8]
        mov    DWORD PTR [eax+0x4],0x1
        mov    DWORD PTR [eax+0x8],edx
        mov    DWORD PTR [eax+0x14],ebp
        mov    DWORD PTR [eax+0xc],ecx
        mov    DWORD PTR [eax+0x10],ecx
        loc_1006c8e9:
        mov    eax,ds:0x100dd050
        loc_1006c8ee:
        mov    ecx,DWORD PTR [esp+0x10]
        mov    edx,DWORD PTR [esp+0x20]
        inc    edx
        add    ebx,0x4
        mov    esi,DWORD PTR [ecx]
        mov    DWORD PTR [esp+0x20],edx
        cmp    edx,esi
        jl     loc_1006c822
        loc_1006c908:
        mov    edx,DWORD PTR [esp+0x28]
        mov    ebx,DWORD PTR [esp+0x14]
        mov    esi,DWORD PTR ds:0x101240cc
        inc    edx
        add    ecx,0xc0
        add    ebx,0xc0
        cmp    edx,esi
        mov    DWORD PTR [esp+0x28],edx
        mov    DWORD PTR [esp+0x10],ecx
        mov    DWORD PTR [esp+0x14],ebx
        jl     loc_1006c810
        pop    ebp
        pop    ebx
        loc_1006c939:
        pop    edi
        pop    esi
        add    esp,0xc
        ret    0xc
    }
}

// 0x1006c950: ViewpointList::AllocItem
/*

1006c950:	53                   	push   ebx
1006c951:	56                   	push   esi
1006c952:	8b 5c 24 0c          	mov    ebx,DWORD PTR [esp+0xc]
1006c956:	57                   	push   edi
1006c957:	8b 79 4c             	mov    edi,DWORD PTR [ecx+0x4c]
1006c95a:	33 c9                	xor    ecx,ecx
1006c95c:	8b 47 3c             	mov    eax,DWORD PTR [edi+0x3c]
1006c95f:	8b 57 34             	mov    edx,DWORD PTR [edi+0x34]
1006c962:	85 c0                	test   eax,eax
1006c964:	8b f2                	mov    esi,edx
1006c966:	7e 0d                	jle    0x1006c975
1006c968:	39 5e 14             	cmp    DWORD PTR [esi+0x14],ebx
1006c96b:	74 69                	je     0x1006c9d6
1006c96d:	41                   	inc    ecx
1006c96e:	83 c6 20             	add    esi,0x20
1006c971:	3b c8                	cmp    ecx,eax
1006c973:	7c f3                	jl     0x1006c968
1006c975:	33 c9                	xor    ecx,ecx
1006c977:	8b f2                	mov    esi,edx
1006c979:	85 c0                	test   eax,eax
1006c97b:	7e 0d                	jle    0x1006c98a
1006c97d:	f6 06 01             	test   BYTE PTR [esi],0x1
1006c980:	74 08                	je     0x1006c98a
1006c982:	41                   	inc    ecx
1006c983:	83 c6 20             	add    esi,0x20
1006c986:	3b c8                	cmp    ecx,eax
1006c988:	7c f3                	jl     0x1006c97d
1006c98a:	3b c8                	cmp    ecx,eax
1006c98c:	75 3d                	jne    0x1006c9cb
1006c98e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006c994:	68 29 05 00 00       	push   0x529
1006c999:	68 a4 d0 0d 10       	push   0x100dd0a4
1006c99e:	8b 01                	mov    eax,DWORD PTR [ecx]
1006c9a0:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1006c9a6:	8b 57 3c             	mov    edx,DWORD PTR [edi+0x3c]
1006c9a9:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1006c9ae:	52                   	push   edx
1006c9af:	68 fc d0 0d 10       	push   0x100dd0fc
1006c9b4:	8b 08                	mov    ecx,DWORD PTR [eax]
1006c9b6:	68 7c 5d 0c 10       	push   0x100c5d7c
1006c9bb:	50                   	push   eax
1006c9bc:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1006c9c2:	83 c4 10             	add    esp,0x10
1006c9c5:	5f                   	pop    edi
1006c9c6:	5e                   	pop    esi
1006c9c7:	5b                   	pop    ebx
1006c9c8:	c2 04 00             	ret    0x4
1006c9cb:	8b 0e                	mov    ecx,DWORD PTR [esi]
1006c9cd:	83 c9 01             	or     ecx,0x1
1006c9d0:	85 f6                	test   esi,esi
1006c9d2:	89 0e                	mov    DWORD PTR [esi],ecx
1006c9d4:	74 24                	je     0x1006c9fa
1006c9d6:	53                   	push   ebx
1006c9d7:	c7 46 04 02 00 00 00 	mov    DWORD PTR [esi+0x4],0x2
1006c9de:	e8 ed 33 fa ff       	call   0x1000fdd0
1006c9e3:	83 c4 04             	add    esp,0x4
1006c9e6:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1006c9e9:	89 5e 14             	mov    DWORD PTR [esi+0x14],ebx
1006c9ec:	c7 46 0c 00 00 00 00 	mov    DWORD PTR [esi+0xc],0x0
1006c9f3:	c7 46 10 00 00 00 00 	mov    DWORD PTR [esi+0x10],0x0
1006c9fa:	5f                   	pop    edi
1006c9fb:	5e                   	pop    esi
1006c9fc:	5b                   	pop    ebx
1006c9fd:	c2 04 00             	ret    0x4
1006ca00:	8b 51 4c             	mov    edx,DWORD PTR [ecx+0x4c]
1006ca03:	56                   	push   esi
1006ca04:	57                   	push   edi
1006ca05:	33 c0                	xor    eax,eax
1006ca07:	8b 4a 3c             	mov    ecx,DWORD PTR [edx+0x3c]
1006ca0a:	8b 7a 34             	mov    edi,DWORD PTR [edx+0x34]
1006ca0d:	c1 e1 05             	shl    ecx,0x5
1006ca10:	8b f1                	mov    esi,ecx
1006ca12:	c1 e9 02             	shr    ecx,0x2
1006ca15:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1006ca17:	8b ce                	mov    ecx,esi
1006ca19:	83 e1 03             	and    ecx,0x3
1006ca1c:	f3 aa                	rep stos BYTE PTR es:[edi],al
1006ca1e:	8b 4a 3c             	mov    ecx,DWORD PTR [edx+0x3c]
1006ca21:	33 c0                	xor    eax,eax
1006ca23:	85 c9                	test   ecx,ecx
1006ca25:	7e 17                	jle    0x1006ca3e
1006ca27:	33 c9                	xor    ecx,ecx
1006ca29:	83 ce ff             	or     esi,0xffffffff
1006ca2c:	8b 7a 34             	mov    edi,DWORD PTR [edx+0x34]
1006ca2f:	40                   	inc    eax
1006ca30:	89 74 0f 14          	mov    DWORD PTR [edi+ecx*1+0x14],esi
1006ca34:	8b 7a 3c             	mov    edi,DWORD PTR [edx+0x3c]
1006ca37:	83 c1 20             	add    ecx,0x20
1006ca3a:	3b c7                	cmp    eax,edi
1006ca3c:	7c ee                	jl     0x1006ca2c
1006ca3e:	5f                   	pop    edi
1006ca3f:	5e                   	pop    esi
1006ca40:	c3                   	ret
1006ca41:	90                   	nop
1006ca42:	90                   	nop
1006ca43:	90                   	nop
1006ca44:	90                   	nop
1006ca45:	90                   	nop
1006ca46:	90                   	nop
1006ca47:	90                   	nop
1006ca48:	90                   	nop
1006ca49:	90                   	nop
1006ca4a:	90                   	nop
1006ca4b:	90                   	nop
1006ca4c:	90                   	nop
1006ca4d:	90                   	nop
1006ca4e:	90                   	nop
1006ca4f:	90                   	nop
1006ca50:	83 ec 10             	sub    esp,0x10
1006ca53:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1006ca57:	53                   	push   ebx
1006ca58:	56                   	push   esi
1006ca59:	57                   	push   edi
1006ca5a:	8b 10                	mov    edx,DWORD PTR [eax]
1006ca5c:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
1006ca63:	00 
1006ca64:	42                   	inc    edx
1006ca65:	8d 71 48             	lea    esi,[ecx+0x48]
1006ca68:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
1006ca6c:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
1006ca6f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1006ca72:	83 ea 02             	sub    edx,0x2
1006ca75:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1006ca79:	40                   	inc    eax
1006ca7a:	bb 02 00 00 00       	mov    ebx,0x2
1006ca7f:	eb 04                	jmp    0x1006ca85
1006ca81:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1006ca85:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1006ca89:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1006ca8f:	8b 3e                	mov    edi,DWORD PTR [esi]
1006ca91:	03 c2                	add    eax,edx
1006ca93:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1006ca97:	e8 d4 07 fe ff       	call   0x1004d270
1006ca9c:	83 f8 12             	cmp    eax,0x12
1006ca9f:	7e 0d                	jle    0x1006caae
1006caa1:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1006caa7:	e8 c4 07 fe ff       	call   0x1004d270
1006caac:	eb 05                	jmp    0x1006cab3
1006caae:	b8 12 00 00 00       	mov    eax,0x12
1006cab3:	8b 4f 3c             	mov    ecx,DWORD PTR [edi+0x3c]
1006cab6:	8d 54 24 0c          	lea    edx,[esp+0xc]
1006caba:	0f af c8             	imul   ecx,eax
1006cabd:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1006cac1:	8b 0e                	mov    ecx,DWORD PTR [esi]
1006cac3:	52                   	push   edx
1006cac4:	e8 87 1b 00 00       	call   0x1006e650
1006cac9:	83 c6 04             	add    esi,0x4
1006cacc:	4b                   	dec    ebx
1006cacd:	75 b2                	jne    0x1006ca81
1006cacf:	5f                   	pop    edi
1006cad0:	5e                   	pop    esi
1006cad1:	5b                   	pop    ebx
1006cad2:	83 c4 10             	add    esp,0x10
1006cad5:	c2 04 00             	ret    0x4
1006cad8:	90                   	nop
1006cad9:	90                   	nop
1006cada:	90                   	nop
1006cadb:	90                   	nop
1006cadc:	90                   	nop
1006cadd:	90                   	nop
1006cade:	90                   	nop
1006cadf:	90                   	nop
1006cae0:	c2 08 00             	ret    0x8
1006cae3:	90                   	nop
1006cae4:	90                   	nop
1006cae5:	90                   	nop
1006cae6:	90                   	nop
1006cae7:	90                   	nop
1006cae8:	90                   	nop
1006cae9:	90                   	nop
1006caea:	90                   	nop
1006caeb:	90                   	nop
1006caec:	90                   	nop
1006caed:	90                   	nop
1006caee:	90                   	nop
1006caef:	90                   	nop
1006caf0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1006caf4:	8b 51 44             	mov    edx,DWORD PTR [ecx+0x44]
1006caf7:	50                   	push   eax
1006caf8:	52                   	push   edx
1006caf9:	e8 22 1e 00 00       	call   0x1006e920
1006cafe:	b8 01 00 00 00       	mov    eax,0x1
1006cb03:	c2 08 00             	ret    0x8
1006cb06:	90                   	nop
1006cb07:	90                   	nop
1006cb08:	90                   	nop
1006cb09:	90                   	nop
1006cb0a:	90                   	nop
1006cb0b:	90                   	nop
1006cb0c:	90                   	nop
1006cb0d:	90                   	nop
1006cb0e:	90                   	nop
1006cb0f:	90                   	nop
1006cb10:	8b c1                	mov    eax,ecx
1006cb12:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
1006cb18:	c7 40 04 08 00 00 00 	mov    DWORD PTR [eax+0x4],0x8
1006cb1f:	c3                   	ret
1006cb20:	6a ff                	push   0xffffffff
1006cb22:	68 34 60 0b 10       	push   0x100b6034
1006cb27:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1006cb2d:	50                   	push   eax
1006cb2e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1006cb35:	83 ec 14             	sub    esp,0x14
1006cb38:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
1006cb3c:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1006cb40:	55                   	push   ebp
1006cb41:	56                   	push   esi
1006cb42:	8b f1                	mov    esi,ecx
1006cb44:	57                   	push   edi
1006cb45:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
1006cb49:	50                   	push   eax
1006cb4a:	80 cd 01             	or     ch,0x1
1006cb4d:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
1006cb51:	51                   	push   ecx
1006cb52:	52                   	push   edx
1006cb53:	8b ce                	mov    ecx,esi
1006cb55:	e8 26 18 00 00       	call   0x1006e380
1006cb5a:	68 20 f6 03 10       	push   0x1003f620
1006cb5f:	68 10 cb 06 10       	push   0x1006cb10
1006cb64:	6a 24                	push   0x24
1006cb66:	8d 46 38             	lea    eax,[esi+0x38]
1006cb69:	33 ed                	xor    ebp,ebp
1006cb6b:	6a 08                	push   0x8
1006cb6d:	50                   	push   eax
1006cb6e:	89 6c 24 3c          	mov    DWORD PTR [esp+0x3c],ebp
1006cb72:	e8 8b 83 03 00       	call   0x100a4f02
1006cb77:	55                   	push   ebp
1006cb78:	6a 01                	push   0x1
1006cb7a:	8d 8e 78 01 00 00    	lea    ecx,[esi+0x178]
1006cb80:	c6 44 24 30 01       	mov    BYTE PTR [esp+0x30],0x1
1006cb85:	e8 76 c3 fd ff       	call   0x10048f00
1006cb8a:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
1006cb8e:	6a 54                	push   0x54
1006cb90:	c7 06 68 b8 0b 10    	mov    DWORD PTR [esi],0x100bb868
1006cb96:	89 4e 2c             	mov    DWORD PTR [esi+0x2c],ecx
1006cb99:	c7 86 60 01 00 00 03 	mov    DWORD PTR [esi+0x160],0x3
1006cba0:	00 00 00 
1006cba3:	89 6e 30             	mov    DWORD PTR [esi+0x30],ebp
1006cba6:	89 ae 74 01 00 00    	mov    DWORD PTR [esi+0x174],ebp
1006cbac:	e8 78 6d 03 00       	call   0x100a3929
1006cbb1:	83 c4 04             	add    esp,0x4
1006cbb4:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
1006cbb8:	3b c5                	cmp    eax,ebp
1006cbba:	c6 44 24 28 02       	mov    BYTE PTR [esp+0x28],0x2
1006cbbf:	74 0e                	je     0x1006cbcf
1006cbc1:	55                   	push   ebp
1006cbc2:	55                   	push   ebp
1006cbc3:	6a 03                	push   0x3
1006cbc5:	56                   	push   esi
1006cbc6:	8b c8                	mov    ecx,eax
1006cbc8:	e8 63 7e 00 00       	call   0x10074a30
1006cbcd:	eb 02                	jmp    0x1006cbd1
1006cbcf:	33 c0                	xor    eax,eax
1006cbd1:	68 b8 00 00 00       	push   0xb8
1006cbd6:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
1006cbdb:	89 86 58 01 00 00    	mov    DWORD PTR [esi+0x158],eax
1006cbe1:	e8 43 6d 03 00       	call   0x100a3929
1006cbe6:	83 c4 04             	add    esp,0x4
1006cbe9:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
1006cbed:	3b c5                	cmp    eax,ebp
1006cbef:	c6 44 24 28 03       	mov    BYTE PTR [esp+0x28],0x3
1006cbf4:	74 0e                	je     0x1006cc04
1006cbf6:	55                   	push   ebp
1006cbf7:	55                   	push   ebp
1006cbf8:	6a 01                	push   0x1
1006cbfa:	56                   	push   esi
1006cbfb:	8b c8                	mov    ecx,eax
1006cbfd:	e8 6e c7 00 00       	call   0x10079370
1006cc02:	eb 02                	jmp    0x1006cc06
1006cc04:	33 c0                	xor    eax,eax
1006cc06:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
1006cc0a:	89 86 5c 01 00 00    	mov    DWORD PTR [esi+0x15c],eax
1006cc10:	89 56 34             	mov    DWORD PTR [esi+0x34],edx
1006cc13:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
1006cc19:	51                   	push   ecx
1006cc1a:	8b c8                	mov    ecx,eax
1006cc1c:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
1006cc21:	e8 ba c7 00 00       	call   0x100793e0
1006cc26:	8b 8e 5c 01 00 00    	mov    ecx,DWORD PTR [esi+0x15c]
1006cc2c:	6a 05                	push   0x5
1006cc2e:	e8 0d c8 00 00       	call   0x10079440
1006cc33:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006cc39:	8d 54 24 10          	lea    edx,[esp+0x10]
1006cc3d:	6a 01                	push   0x1
1006cc3f:	52                   	push   edx
1006cc40:	c7 44 24 18 01 00 00 	mov    DWORD PTR [esp+0x18],0x1
1006cc47:	00 
1006cc48:	c7 44 24 1c 00 04 00 	mov    DWORD PTR [esp+0x1c],0x400
1006cc4f:	00 
1006cc50:	c7 44 24 20 00 d0 10 	mov    DWORD PTR [esp+0x20],0x1010d000
1006cc57:	10 
1006cc58:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
1006cc5c:	e8 4f 80 00 00       	call   0x10074cb0
1006cc61:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006cc67:	e8 54 7f 00 00       	call   0x10074bc0
1006cc6c:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006cc72:	6a 01                	push   0x1
1006cc74:	e8 97 7f 00 00       	call   0x10074c10
1006cc79:	8b 56 30             	mov    edx,DWORD PTR [esi+0x30]
1006cc7c:	83 e2 fe             	and    edx,0xfffffffe
1006cc7f:	8b c2                	mov    eax,edx
1006cc81:	89 56 30             	mov    DWORD PTR [esi+0x30],edx
1006cc84:	a8 01                	test   al,0x1
1006cc86:	74 07                	je     0x1006cc8f
1006cc88:	b8 01 00 00 00       	mov    eax,0x1
1006cc8d:	eb 33                	jmp    0x1006ccc2
1006cc8f:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006cc95:	e8 b6 82 00 00       	call   0x10074f50
1006cc9a:	8b f8                	mov    edi,eax
1006cc9c:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1006cc9f:	50                   	push   eax
1006cca0:	b9 10 59 11 10       	mov    ecx,0x10115910
1006cca5:	e8 b6 29 fb ff       	call   0x1001f660
1006ccaa:	3b c5                	cmp    eax,ebp
1006ccac:	75 04                	jne    0x1006ccb2
1006ccae:	33 c0                	xor    eax,eax
1006ccb0:	eb 03                	jmp    0x1006ccb5
1006ccb2:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1006ccb5:	33 c9                	xor    ecx,ecx
1006ccb7:	3b f8                	cmp    edi,eax
1006ccb9:	0f 9c c1             	setl   cl
1006ccbc:	49                   	dec    ecx
1006ccbd:	83 e1 02             	and    ecx,0x2
1006ccc0:	8b c1                	mov    eax,ecx
1006ccc2:	3b 86 60 01 00 00    	cmp    eax,DWORD PTR [esi+0x160]
1006ccc8:	74 14                	je     0x1006ccde
1006ccca:	33 d2                	xor    edx,edx
1006cccc:	83 f8 01             	cmp    eax,0x1
1006cccf:	0f 94 c2             	sete   dl
1006ccd2:	89 86 60 01 00 00    	mov    DWORD PTR [esi+0x160],eax
1006ccd8:	89 96 7c 01 00 00    	mov    DWORD PTR [esi+0x17c],edx
1006ccde:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1006cce1:	b9 10 59 11 10       	mov    ecx,0x10115910
1006cce6:	50                   	push   eax
1006cce7:	e8 74 29 fb ff       	call   0x1001f660
1006ccec:	8b 0d 58 be 11 10    	mov    ecx,DWORD PTR ds:0x1011be58
1006ccf2:	8b f8                	mov    edi,eax
1006ccf4:	81 f9 00 04 00 00    	cmp    ecx,0x400
1006ccfa:	1b c9                	sbb    ecx,ecx
1006ccfc:	83 c1 11             	add    ecx,0x11
1006ccff:	51                   	push   ecx
1006cd00:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006cd06:	e8 d5 7e 00 00       	call   0x10074be0
1006cd0b:	3b fd                	cmp    edi,ebp
1006cd0d:	89 ae 74 01 00 00    	mov    DWORD PTR [esi+0x174],ebp
1006cd13:	74 40                	je     0x1006cd55
1006cd15:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
1006cd18:	b9 10 00 00 00       	mov    ecx,0x10
1006cd1d:	8d 7c 24 30          	lea    edi,[esp+0x30]
1006cd21:	89 86 74 01 00 00    	mov    DWORD PTR [esi+0x174],eax
1006cd27:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
1006cd2b:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
1006cd2f:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1006cd35:	57                   	push   edi
1006cd36:	8d 7c 24 40          	lea    edi,[esp+0x40]
1006cd3a:	8b 11                	mov    edx,DWORD PTR [ecx]
1006cd3c:	57                   	push   edi
1006cd3d:	50                   	push   eax
1006cd3e:	ff 52 28             	call   DWORD PTR [edx+0x28]
1006cd41:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
1006cd45:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1006cd49:	89 86 6c 01 00 00    	mov    DWORD PTR [esi+0x16c],eax
1006cd4f:	89 8e 70 01 00 00    	mov    DWORD PTR [esi+0x170],ecx
1006cd55:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
1006cd59:	3b c5                	cmp    eax,ebp
1006cd5b:	74 08                	je     0x1006cd65
1006cd5d:	50                   	push   eax
1006cd5e:	8b ce                	mov    ecx,esi
1006cd60:	e8 3b 02 00 00       	call   0x1006cfa0
1006cd65:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1006cd69:	8b c6                	mov    eax,esi
1006cd6b:	5f                   	pop    edi
1006cd6c:	5e                   	pop    esi
1006cd6d:	5d                   	pop    ebp
1006cd6e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1006cd75:	83 c4 20             	add    esp,0x20
1006cd78:	c2 14 00             	ret    0x14
1006cd7b:	90                   	nop
1006cd7c:	90                   	nop
1006cd7d:	90                   	nop
1006cd7e:	90                   	nop
1006cd7f:	90                   	nop
1006cd80:	56                   	push   esi
1006cd81:	8b f1                	mov    esi,ecx
1006cd83:	e8 18 00 00 00       	call   0x1006cda0
1006cd88:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1006cd8d:	74 09                	je     0x1006cd98
1006cd8f:	56                   	push   esi
1006cd90:	e8 89 6b 03 00       	call   0x100a391e
1006cd95:	83 c4 04             	add    esp,0x4
1006cd98:	8b c6                	mov    eax,esi
1006cd9a:	5e                   	pop    esi
1006cd9b:	c2 04 00             	ret    0x4
1006cd9e:	90                   	nop
1006cd9f:	90                   	nop
1006cda0:	6a ff                	push   0xffffffff
1006cda2:	68 48 60 0b 10       	push   0x100b6048
1006cda7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1006cdad:	50                   	push   eax
1006cdae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1006cdb5:	51                   	push   ecx
1006cdb6:	56                   	push   esi
1006cdb7:	8b f1                	mov    esi,ecx
1006cdb9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
1006cdbd:	68 20 f6 03 10       	push   0x1003f620
1006cdc2:	6a 24                	push   0x24
1006cdc4:	8d 46 38             	lea    eax,[esi+0x38]
1006cdc7:	6a 08                	push   0x8
1006cdc9:	50                   	push   eax
1006cdca:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
1006cdd1:	00 
1006cdd2:	e8 ad 81 03 00       	call   0x100a4f84
1006cdd7:	8b ce                	mov    ecx,esi
1006cdd9:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
1006cde0:	ff 
1006cde1:	e8 3a 17 00 00       	call   0x1006e520
1006cde6:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1006cdea:	5e                   	pop    esi
1006cdeb:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1006cdf2:	83 c4 10             	add    esp,0x10
1006cdf5:	c3                   	ret
1006cdf6:	90                   	nop
1006cdf7:	90                   	nop
1006cdf8:	90                   	nop
1006cdf9:	90                   	nop
1006cdfa:	90                   	nop
1006cdfb:	90                   	nop
1006cdfc:	90                   	nop
1006cdfd:	90                   	nop
1006cdfe:	90                   	nop
1006cdff:	90                   	nop
1006ce00:	6a ff                	push   0xffffffff
1006ce02:	68 68 60 0b 10       	push   0x100b6068
1006ce07:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1006ce0d:	50                   	push   eax
1006ce0e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1006ce15:	83 ec 0c             	sub    esp,0xc
1006ce18:	53                   	push   ebx
1006ce19:	55                   	push   ebp
1006ce1a:	8b e9                	mov    ebp,ecx
1006ce1c:	56                   	push   esi
1006ce1d:	33 db                	xor    ebx,ebx
1006ce1f:	57                   	push   edi
1006ce20:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
1006ce24:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1006ce28:	8d 7d 38             	lea    edi,[ebp+0x38]
1006ce2b:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1006ce31:	53                   	push   ebx
1006ce32:	8b 01                	mov    eax,DWORD PTR [ecx]
1006ce34:	ff 50 68             	call   DWORD PTR [eax+0x68]
1006ce37:	8b f0                	mov    esi,eax
1006ce39:	85 f6                	test   esi,esi
1006ce3b:	0f 84 95 00 00 00    	je     0x1006ced6
1006ce41:	8b 16                	mov    edx,DWORD PTR [esi]
1006ce43:	8b ce                	mov    ecx,esi
1006ce45:	ff 52 18             	call   DWORD PTR [edx+0x18]
1006ce48:	3b 45 34             	cmp    eax,DWORD PTR [ebp+0x34]
1006ce4b:	0f 85 85 00 00 00    	jne    0x1006ced6
1006ce51:	8b 06                	mov    eax,DWORD PTR [esi]
1006ce53:	8b ce                	mov    ecx,esi
1006ce55:	ff 50 20             	call   DWORD PTR [eax+0x20]
1006ce58:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006ce5e:	50                   	push   eax
1006ce5f:	8b 11                	mov    edx,DWORD PTR [ecx]
1006ce61:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
1006ce67:	8b d8                	mov    ebx,eax
1006ce69:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
1006ce6d:	8b 07                	mov    eax,DWORD PTR [edi]
1006ce6f:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
1006ce76:	00 
1006ce77:	85 c0                	test   eax,eax
1006ce79:	74 15                	je     0x1006ce90
1006ce7b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006ce81:	50                   	push   eax
1006ce82:	8b 11                	mov    edx,DWORD PTR [ecx]
1006ce84:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1006ce8a:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
1006ce90:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006ce96:	53                   	push   ebx
1006ce97:	8b 01                	mov    eax,DWORD PTR [ecx]
1006ce99:	ff 90 b8 00 00 00    	call   DWORD PTR [eax+0xb8]
1006ce9f:	85 db                	test   ebx,ebx
1006cea1:	89 07                	mov    DWORD PTR [edi],eax
1006cea3:	c7 44 24 24 ff ff ff 	mov    DWORD PTR [esp+0x24],0xffffffff
1006ceaa:	ff 
1006ceab:	74 0f                	je     0x1006cebc
1006cead:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006ceb3:	53                   	push   ebx
1006ceb4:	8b 11                	mov    edx,DWORD PTR [ecx]
1006ceb6:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1006cebc:	8b 06                	mov    eax,DWORD PTR [esi]
1006cebe:	8b ce                	mov    ecx,esi
1006cec0:	ff 50 40             	call   DWORD PTR [eax+0x40]
1006cec3:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1006cec7:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
1006cecb:	41                   	inc    ecx
1006cecc:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
1006cecf:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1006ced3:	83 c7 08             	add    edi,0x8
1006ced6:	43                   	inc    ebx
1006ced7:	83 fb 24             	cmp    ebx,0x24
1006ceda:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1006cede:	0f 8c 47 ff ff ff    	jl     0x1006ce2b
1006cee4:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1006cee8:	51                   	push   ecx
1006cee9:	8b 8d 58 01 00 00    	mov    ecx,DWORD PTR [ebp+0x158]
1006ceef:	e8 6c 7e 00 00       	call   0x10074d60
1006cef4:	f6 45 30 01          	test   BYTE PTR [ebp+0x30],0x1
1006cef8:	74 07                	je     0x1006cf01
1006cefa:	b8 01 00 00 00       	mov    eax,0x1
1006ceff:	eb 2f                	jmp    0x1006cf30
1006cf01:	8b 8d 58 01 00 00    	mov    ecx,DWORD PTR [ebp+0x158]
1006cf07:	e8 44 80 00 00       	call   0x10074f50
1006cf0c:	8b f0                	mov    esi,eax
1006cf0e:	8b 45 34             	mov    eax,DWORD PTR [ebp+0x34]
1006cf11:	50                   	push   eax
1006cf12:	b9 10 59 11 10       	mov    ecx,0x10115910
1006cf17:	e8 44 27 fb ff       	call   0x1001f660
1006cf1c:	85 c0                	test   eax,eax
1006cf1e:	74 03                	je     0x1006cf23
1006cf20:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1006cf23:	33 d2                	xor    edx,edx
1006cf25:	3b f0                	cmp    esi,eax
1006cf27:	0f 9c c2             	setl   dl
1006cf2a:	4a                   	dec    edx
1006cf2b:	83 e2 02             	and    edx,0x2
1006cf2e:	8b c2                	mov    eax,edx
1006cf30:	3b 85 60 01 00 00    	cmp    eax,DWORD PTR [ebp+0x160]
1006cf36:	74 14                	je     0x1006cf4c
1006cf38:	33 c9                	xor    ecx,ecx
1006cf3a:	83 f8 01             	cmp    eax,0x1
1006cf3d:	0f 94 c1             	sete   cl
1006cf40:	89 85 60 01 00 00    	mov    DWORD PTR [ebp+0x160],eax
1006cf46:	89 8d 7c 01 00 00    	mov    DWORD PTR [ebp+0x17c],ecx
1006cf4c:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1006cf50:	5f                   	pop    edi
1006cf51:	5e                   	pop    esi
1006cf52:	5d                   	pop    ebp
1006cf53:	5b                   	pop    ebx
1006cf54:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1006cf5b:	83 c4 18             	add    esp,0x18
1006cf5e:	c3                   	ret
1006cf5f:	90                   	nop
1006cf60:	56                   	push   esi
1006cf61:	8b f1                	mov    esi,ecx
1006cf63:	b9 10 59 11 10       	mov    ecx,0x10115910
1006cf68:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1006cf6b:	50                   	push   eax
1006cf6c:	e8 ef 26 fb ff       	call   0x1001f660
1006cf71:	85 c0                	test   eax,eax
1006cf73:	74 27                	je     0x1006cf9c
1006cf75:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1006cf7b:	8b 40 14             	mov    eax,DWORD PTR [eax+0x14]
1006cf7e:	50                   	push   eax
1006cf7f:	8b 11                	mov    edx,DWORD PTR [ecx]
1006cf81:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1006cf87:	8b 8e 5c 01 00 00    	mov    ecx,DWORD PTR [esi+0x15c]
1006cf8d:	50                   	push   eax
1006cf8e:	e8 6d c4 00 00       	call   0x10079400
1006cf93:	8b 16                	mov    edx,DWORD PTR [esi]
1006cf95:	6a 00                	push   0x0
1006cf97:	8b ce                	mov    ecx,esi
1006cf99:	ff 52 0c             	call   DWORD PTR [edx+0xc]
1006cf9c:	5e                   	pop    esi
1006cf9d:	c3                   	ret
1006cf9e:	90                   	nop
1006cf9f:	90                   	nop
1006cfa0:	83 ec 30             	sub    esp,0x30
1006cfa3:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
1006cfa8:	53                   	push   ebx
1006cfa9:	55                   	push   ebp
1006cfaa:	56                   	push   esi
1006cfab:	8d 1c 40             	lea    ebx,[eax+eax*2]
1006cfae:	a1 1c a0 0d 10       	mov    eax,ds:0x100da01c
1006cfb3:	8b f1                	mov    esi,ecx
1006cfb5:	57                   	push   edi
1006cfb6:	8d 0c 40             	lea    ecx,[eax+eax*2]
1006cfb9:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1006cfbe:	c1 e1 02             	shl    ecx,0x2
1006cfc1:	f7 e1                	mul    ecx
1006cfc3:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1006cfc7:	8d 86 78 01 00 00    	lea    eax,[esi+0x178]
1006cfcd:	51                   	push   ecx
1006cfce:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
1006cfd2:	8b fa                	mov    edi,edx
1006cfd4:	8b 10                	mov    edx,DWORD PTR [eax]
1006cfd6:	c1 e3 02             	shl    ebx,0x2
1006cfd9:	51                   	push   ecx
1006cfda:	50                   	push   eax
1006cfdb:	c1 eb 0a             	shr    ebx,0xa
1006cfde:	c1 ef 09             	shr    edi,0x9
1006cfe1:	ff 14 95 2c a0 0d 10 	call   DWORD PTR [edx*4+0x100da02c]
1006cfe8:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1006cfec:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1006cff0:	8b 8e 5c 01 00 00    	mov    ecx,DWORD PTR [esi+0x15c]
1006cff6:	83 c4 0c             	add    esp,0xc
1006cff9:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
1006cffd:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1006d001:	e8 4a c4 00 00       	call   0x10079450
1006d006:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1006d00a:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1006d00e:	8b 86 6c 01 00 00    	mov    eax,DWORD PTR [esi+0x16c]
1006d014:	03 cf                	add    ecx,edi
1006d016:	99                   	cdq
1006d017:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
1006d01b:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1006d01f:	2b c2                	sub    eax,edx
1006d021:	8b e8                	mov    ebp,eax
1006d023:	8b c1                	mov    eax,ecx
1006d025:	99                   	cdq
1006d026:	2b c2                	sub    eax,edx
1006d028:	8b d0                	mov    edx,eax
1006d02a:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1006d02e:	d1 fd                	sar    ebp,1
1006d030:	d1 fa                	sar    edx,1
1006d032:	2b d5                	sub    edx,ebp
1006d034:	8b 6c 24 2c          	mov    ebp,DWORD PTR [esp+0x2c]
1006d038:	03 d0                	add    edx,eax
1006d03a:	03 c3                	add    eax,ebx
1006d03c:	89 96 64 01 00 00    	mov    DWORD PTR [esi+0x164],edx
1006d042:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1006d046:	03 d5                	add    edx,ebp
1006d048:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1006d04c:	8b 86 70 01 00 00    	mov    eax,DWORD PTR [esi+0x170]
1006d052:	03 d7                	add    edx,edi
1006d054:	89 96 68 01 00 00    	mov    DWORD PTR [esi+0x168],edx
1006d05a:	03 c2                	add    eax,edx
1006d05c:	8d 14 1b             	lea    edx,[ebx+ebx*1]
1006d05f:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
1006d063:	2b ca                	sub    ecx,edx
1006d065:	03 c7                	add    eax,edi
1006d067:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
1006d06b:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1006d06f:	2b c8                	sub    ecx,eax
1006d071:	8d 54 24 20          	lea    edx,[esp+0x20]
1006d075:	2b cf                	sub    ecx,edi
1006d077:	52                   	push   edx
1006d078:	03 cb                	add    ecx,ebx
1006d07a:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
1006d07e:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
1006d082:	8b 8e 5c 01 00 00    	mov    ecx,DWORD PTR [esi+0x15c]
1006d088:	e8 c3 15 00 00       	call   0x1006e650
1006d08d:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006d093:	8d 44 24 30          	lea    eax,[esp+0x30]
1006d097:	50                   	push   eax
1006d098:	e8 b3 15 00 00       	call   0x1006e650
1006d09d:	5f                   	pop    edi
1006d09e:	5e                   	pop    esi
1006d09f:	5d                   	pop    ebp
1006d0a0:	5b                   	pop    ebx
1006d0a1:	83 c4 30             	add    esp,0x30
1006d0a4:	c2 04 00             	ret    0x4
1006d0a7:	90                   	nop
1006d0a8:	90                   	nop
1006d0a9:	90                   	nop
1006d0aa:	90                   	nop
1006d0ab:	90                   	nop
1006d0ac:	90                   	nop
1006d0ad:	90                   	nop
1006d0ae:	90                   	nop
1006d0af:	90                   	nop
1006d0b0:	83 ec 2c             	sub    esp,0x2c
1006d0b3:	53                   	push   ebx
1006d0b4:	55                   	push   ebp
1006d0b5:	56                   	push   esi
1006d0b6:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
1006d0ba:	8b f1                	mov    esi,ecx
1006d0bc:	57                   	push   edi
1006d0bd:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1006d0c1:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1006d0c7:	8d be 78 01 00 00    	lea    edi,[esi+0x178]
1006d0cd:	c1 e0 03             	shl    eax,0x3
1006d0d0:	51                   	push   ecx
1006d0d1:	52                   	push   edx
1006d0d2:	8b 98 30 d1 0d 10    	mov    ebx,DWORD PTR [eax+0x100dd130]
1006d0d8:	8b a8 34 d1 0d 10    	mov    ebp,DWORD PTR [eax+0x100dd134]
1006d0de:	8b 07                	mov    eax,DWORD PTR [edi]
1006d0e0:	57                   	push   edi
1006d0e1:	ff 14 85 38 a0 0d 10 	call   DWORD PTR [eax*4+0x100da038]
1006d0e8:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1006d0ec:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1006d0f0:	83 c4 0c             	add    esp,0xc
1006d0f3:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1006d0f7:	6a 00                	push   0x0
1006d0f9:	53                   	push   ebx
1006d0fa:	55                   	push   ebp
1006d0fb:	55                   	push   ebp
1006d0fc:	53                   	push   ebx
1006d0fd:	50                   	push   eax
1006d0fe:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1006d102:	51                   	push   ecx
1006d103:	8b 0d a0 c4 11 10    	mov    ecx,DWORD PTR ds:0x1011c4a0
1006d109:	52                   	push   edx
1006d10a:	50                   	push   eax
1006d10b:	51                   	push   ecx
1006d10c:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1006d112:	e8 d9 da fd ff       	call   0x1004abf0
1006d117:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
1006d11b:	8b 17                	mov    edx,DWORD PTR [edi]
1006d11d:	50                   	push   eax
1006d11e:	57                   	push   edi
1006d11f:	ff 14 95 20 a0 0d 10 	call   DWORD PTR [edx*4+0x100da020]
1006d126:	8b 86 6c 01 00 00    	mov    eax,DWORD PTR [esi+0x16c]
1006d12c:	8b 8e 74 01 00 00    	mov    ecx,DWORD PTR [esi+0x174]
1006d132:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1006d136:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
1006d13a:	b8 ff ff ff 80       	mov    eax,0x80ffffff
1006d13f:	83 c4 08             	add    esp,0x8
1006d142:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
1006d146:	8b 8e 70 01 00 00    	mov    ecx,DWORD PTR [esi+0x170]
1006d14c:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1006d150:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1006d154:	8b 86 68 01 00 00    	mov    eax,DWORD PTR [esi+0x168]
1006d15a:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
1006d15e:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
1006d162:	8b 8e 64 01 00 00    	mov    ecx,DWORD PTR [esi+0x164]
1006d168:	50                   	push   eax
1006d169:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1006d16f:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
1006d176:	ff 
1006d177:	51                   	push   ecx
1006d178:	8b 4c 84 18          	mov    ecx,DWORD PTR [esp+eax*4+0x18]
1006d17c:	33 d2                	xor    edx,edx
1006d17e:	51                   	push   ecx
1006d17f:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1006d185:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
1006d189:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
1006d18d:	52                   	push   edx
1006d18e:	8d 54 24 30          	lea    edx,[esp+0x30]
1006d192:	52                   	push   edx
1006d193:	e8 58 e3 fd ff       	call   0x1004b4f0
1006d198:	5f                   	pop    edi
1006d199:	5e                   	pop    esi
1006d19a:	5d                   	pop    ebp
1006d19b:	5b                   	pop    ebx
1006d19c:	83 c4 2c             	add    esp,0x2c
1006d19f:	c2 08 00             	ret    0x8
1006d1a2:	90                   	nop
1006d1a3:	90                   	nop
1006d1a4:	90                   	nop
1006d1a5:	90                   	nop
1006d1a6:	90                   	nop
1006d1a7:	90                   	nop
1006d1a8:	90                   	nop
1006d1a9:	90                   	nop
1006d1aa:	90                   	nop
1006d1ab:	90                   	nop
1006d1ac:	90                   	nop
1006d1ad:	90                   	nop
1006d1ae:	90                   	nop
1006d1af:	90                   	nop
1006d1b0:	83 ec 08             	sub    esp,0x8
1006d1b3:	8b 41 34             	mov    eax,DWORD PTR [ecx+0x34]
1006d1b6:	8d 54 24 00          	lea    edx,[esp+0x0]
1006d1ba:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1006d1be:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
1006d1c1:	52                   	push   edx
1006d1c2:	50                   	push   eax
1006d1c3:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
1006d1ca:	00 
1006d1cb:	e8 50 17 00 00       	call   0x1006e920
1006d1d0:	83 c4 08             	add    esp,0x8
1006d1d3:	c2 0c 00             	ret    0xc
1006d1d6:	90                   	nop
1006d1d7:	90                   	nop
1006d1d8:	90                   	nop
1006d1d9:	90                   	nop
1006d1da:	90                   	nop
1006d1db:	90                   	nop
1006d1dc:	90                   	nop
1006d1dd:	90                   	nop
1006d1de:	90                   	nop
1006d1df:	90                   	nop
1006d1e0:	83 ec 10             	sub    esp,0x10
1006d1e3:	33 c0                	xor    eax,eax
1006d1e5:	53                   	push   ebx
1006d1e6:	8b d9                	mov    ebx,ecx
1006d1e8:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1006d1ec:	55                   	push   ebp
1006d1ed:	3b c8                	cmp    ecx,eax
1006d1ef:	56                   	push   esi
1006d1f0:	0f 85 82 00 00 00    	jne    0x1006d278
1006d1f6:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1006d1fa:	39 01                	cmp    DWORD PTR [ecx],eax
1006d1fc:	75 7a                	jne    0x1006d278
1006d1fe:	8b 8b 58 01 00 00    	mov    ecx,DWORD PTR [ebx+0x158]
1006d204:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
1006d208:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
1006d20f:	ff 
1006d210:	c7 44 24 14 80 46 0d 	mov    DWORD PTR [esp+0x14],0x100d4680
1006d217:	10 
1006d218:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1006d21c:	e8 ef 7c 00 00       	call   0x10074f10
1006d221:	8b 8b 58 01 00 00    	mov    ecx,DWORD PTR [ebx+0x158]
1006d227:	8b f0                	mov    esi,eax
1006d229:	e8 f2 7c 00 00       	call   0x10074f20
1006d22e:	8d 6c 30 ff          	lea    ebp,[eax+esi*1-0x1]
1006d232:	3b f5                	cmp    esi,ebp
1006d234:	7f 42                	jg     0x1006d278
1006d236:	57                   	push   edi
1006d237:	8d 7c f3 38          	lea    edi,[ebx+esi*8+0x38]
1006d23b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006d241:	8b 07                	mov    eax,DWORD PTR [edi]
1006d243:	50                   	push   eax
1006d244:	8b 11                	mov    edx,DWORD PTR [ecx]
1006d246:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1006d24c:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1006d250:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1006d254:	51                   	push   ecx
1006d255:	8b 8b 58 01 00 00    	mov    ecx,DWORD PTR [ebx+0x158]
1006d25b:	56                   	push   esi
1006d25c:	e8 4f 7c 00 00       	call   0x10074eb0
1006d261:	46                   	inc    esi
1006d262:	83 c7 08             	add    edi,0x8
1006d265:	3b f5                	cmp    esi,ebp
1006d267:	7e d2                	jle    0x1006d23b
1006d269:	5f                   	pop    edi
1006d26a:	5e                   	pop    esi
1006d26b:	5d                   	pop    ebp
1006d26c:	b8 01 00 00 00       	mov    eax,0x1
1006d271:	5b                   	pop    ebx
1006d272:	83 c4 10             	add    esp,0x10
1006d275:	c2 08 00             	ret    0x8
1006d278:	5e                   	pop    esi
1006d279:	5d                   	pop    ebp
1006d27a:	b8 01 00 00 00       	mov    eax,0x1
1006d27f:	5b                   	pop    ebx
1006d280:	83 c4 10             	add    esp,0x10
1006d283:	c2 08 00             	ret    0x8
1006d286:	90                   	nop
1006d287:	90                   	nop
1006d288:	90                   	nop
1006d289:	90                   	nop
1006d28a:	90                   	nop
1006d28b:	90                   	nop
1006d28c:	90                   	nop
1006d28d:	90                   	nop
1006d28e:	90                   	nop
1006d28f:	90                   	nop
1006d290:	83 ec 08             	sub    esp,0x8
1006d293:	56                   	push   esi
1006d294:	8b f1                	mov    esi,ecx
1006d296:	57                   	push   edi
1006d297:	b9 10 59 11 10       	mov    ecx,0x10115910
1006d29c:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1006d29f:	50                   	push   eax
1006d2a0:	e8 bb 23 fb ff       	call   0x1001f660
1006d2a5:	8b 0d 58 be 11 10    	mov    ecx,DWORD PTR ds:0x1011be58
1006d2ab:	8b f8                	mov    edi,eax
1006d2ad:	81 f9 00 04 00 00    	cmp    ecx,0x400
1006d2b3:	1b c9                	sbb    ecx,ecx
1006d2b5:	83 c1 11             	add    ecx,0x11
1006d2b8:	51                   	push   ecx
1006d2b9:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1006d2bf:	e8 1c 79 00 00       	call   0x10074be0
1006d2c4:	85 ff                	test   edi,edi
1006d2c6:	c7 86 74 01 00 00 00 	mov    DWORD PTR [esi+0x174],0x0
1006d2cd:	00 00 00 
1006d2d0:	74 40                	je     0x1006d312
1006d2d2:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
1006d2d5:	b9 10 00 00 00       	mov    ecx,0x10
1006d2da:	8d 7c 24 0c          	lea    edi,[esp+0xc]
1006d2de:	89 86 74 01 00 00    	mov    DWORD PTR [esi+0x174],eax
1006d2e4:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1006d2e8:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
1006d2ec:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1006d2f2:	57                   	push   edi
1006d2f3:	8d 7c 24 0c          	lea    edi,[esp+0xc]
1006d2f7:	8b 11                	mov    edx,DWORD PTR [ecx]
1006d2f9:	57                   	push   edi
1006d2fa:	50                   	push   eax
1006d2fb:	ff 52 28             	call   DWORD PTR [edx+0x28]
1006d2fe:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1006d302:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1006d306:	89 86 6c 01 00 00    	mov    DWORD PTR [esi+0x16c],eax
1006d30c:	89 8e 70 01 00 00    	mov    DWORD PTR [esi+0x170],ecx
1006d312:	5f                   	pop    edi
1006d313:	5e                   	pop    esi
1006d314:	83 c4 08             	add    esp,0x8
1006d317:	c2 04 00             	ret    0x4
1006d31a:	90                   	nop
1006d31b:	90                   	nop
1006d31c:	90                   	nop
1006d31d:	90                   	nop
1006d31e:	90                   	nop
1006d31f:	90                   	nop
1006d320:	6a ff                	push   0xffffffff
1006d322:	68 9e 60 0b 10       	push   0x100b609e
1006d327:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1006d32d:	50                   	push   eax
1006d32e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1006d335:	51                   	push   ecx
1006d336:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1006d33a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1006d33e:	53                   	push   ebx
1006d33f:	55                   	push   ebp
1006d340:	56                   	push   esi
1006d341:	8b f1                	mov    esi,ecx
1006d343:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1006d347:	57                   	push   edi
1006d348:	50                   	push   eax
1006d349:	51                   	push   ecx
1006d34a:	52                   	push   edx
1006d34b:	8b ce                	mov    ecx,esi
1006d34d:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
1006d351:	e8 2a 10 00 00       	call   0x1006e380
1006d356:	33 db                	xor    ebx,ebx
1006d358:	6a 01                	push   0x1
1006d35a:	6a 01                	push   0x1
1006d35c:	8d 4e 68             	lea    ecx,[esi+0x68]
1006d35f:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
1006d363:	e8 98 bb fd ff       	call   0x10048f00
1006d368:	6a 38                	push   0x38
1006d36a:	c7 06 d8 b8 0b 10    	mov    DWORD PTR [esi],0x100bb8d8
1006d370:	c7 46 2c ff ff ff ff 	mov    DWORD PTR [esi+0x2c],0xffffffff
1006d377:	89 5e 30             	mov    DWORD PTR [esi+0x30],ebx
1006d37a:	e8 aa 65 03 00       	call   0x100a3929
1006d37f:	83 c4 04             	add    esp,0x4
1006d382:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1006d386:	3b c3                	cmp    eax,ebx
1006d388:	c6 44 24 1c 01       	mov    BYTE PTR [esp+0x1c],0x1
1006d38d:	74 0d                	je     0x1006d39c
1006d38f:	53                   	push   ebx
1006d390:	6a 01                	push   0x1
1006d392:	56                   	push   esi
1006d393:	8b c8                	mov    ecx,eax
1006d395:	e8 06 c1 00 00       	call   0x100794a0
1006d39a:	eb 02                	jmp    0x1006d39e
1006d39c:	33 c0                	xor    eax,eax
1006d39e:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
1006d3a2:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
1006d3a5:	33 ff                	xor    edi,edi
1006d3a7:	8d 6e 54             	lea    ebp,[esi+0x54]
1006d3aa:	68 80 01 00 00       	push   0x180
1006d3af:	e8 75 65 03 00       	call   0x100a3929
1006d3b4:	83 c4 04             	add    esp,0x4
1006d3b7:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1006d3bb:	3b c3                	cmp    eax,ebx
1006d3bd:	c6 44 24 1c 02       	mov    BYTE PTR [esp+0x1c],0x2
1006d3c2:	74 0e                	je     0x1006d3d2
1006d3c4:	53                   	push   ebx
1006d3c5:	53                   	push   ebx
1006d3c6:	57                   	push   edi
1006d3c7:	57                   	push   edi
1006d3c8:	56                   	push   esi
1006d3c9:	8b c8                	mov    ecx,eax
1006d3cb:	e8 50 f7 ff ff       	call   0x1006cb20
1006d3d0:	eb 02                	jmp    0x1006d3d4
1006d3d2:	33 c0                	xor    eax,eax
1006d3d4:	89 45 00             	mov    DWORD PTR [ebp+0x0],eax
1006d3d7:	47                   	inc    edi
1006d3d8:	83 c5 04             	add    ebp,0x4
1006d3db:	83 ff 04             	cmp    edi,0x4
1006d3de:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
1006d3e2:	7c c6                	jl     0x1006d3aa
1006d3e4:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1006d3e8:	3b c3                	cmp    eax,ebx
1006d3ea:	74 08                	je     0x1006d3f4
1006d3ec:	50                   	push   eax
1006d3ed:	8b ce                	mov    ecx,esi
1006d3ef:	e8 ec 03 00 00       	call   0x1006d7e0
1006d3f4:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1006d3f8:	8b c6                	mov    eax,esi
1006d3fa:	5f                   	pop    edi
1006d3fb:	5e                   	pop    esi
1006d3fc:	5d                   	pop    ebp
1006d3fd:	5b                   	pop    ebx
1006d3fe:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1006d405:	83 c4 10             	add    esp,0x10
1006d408:	c2 0c 00             	ret    0xc
1006d40b:	90                   	nop
1006d40c:	90                   	nop
1006d40d:	90                   	nop
1006d40e:	90                   	nop
1006d40f:	90                   	nop
1006d410:	a1 28 59 11 10       	mov    eax,ds:0x10115928
1006d415:	53                   	push   ebx
1006d416:	56                   	push   esi
1006d417:	8b d9                	mov    ebx,ecx
1006d419:	33 f6                	xor    esi,esi
1006d41b:	57                   	push   edi
1006d41c:	85 c0                	test   eax,eax
1006d41e:	89 43 30             	mov    DWORD PTR [ebx+0x30],eax
1006d421:	7e 25                	jle    0x1006d448
1006d423:	8d 7b 54             	lea    edi,[ebx+0x54]
1006d426:	8b 0f                	mov    ecx,DWORD PTR [edi]
1006d428:	e8 d3 f9 ff ff       	call   0x1006ce00
1006d42d:	8b 0f                	mov    ecx,DWORD PTR [edi]
1006d42f:	6a 00                	push   0x0
1006d431:	6a 03                	push   0x3
1006d433:	e8 48 13 00 00       	call   0x1006e780
1006d438:	8b 43 30             	mov    eax,DWORD PTR [ebx+0x30]
1006d43b:	46                   	inc    esi
1006d43c:	83 c7 04             	add    edi,0x4
1006d43f:	3b f0                	cmp    esi,eax
1006d441:	7c e3                	jl     0x1006d426
1006d443:	83 fe 04             	cmp    esi,0x4
1006d446:	7d 1e                	jge    0x1006d466
1006d448:	55                   	push   ebp
1006d449:	bd 04 00 00 00       	mov    ebp,0x4
1006d44e:	8d 7c b3 54          	lea    edi,[ebx+esi*4+0x54]
1006d452:	2b ee                	sub    ebp,esi
1006d454:	8b 0f                	mov    ecx,DWORD PTR [edi]
1006d456:	6a 03                	push   0x3
1006d458:	6a 00                	push   0x0
1006d45a:	e8 21 13 00 00       	call   0x1006e780
1006d45f:	83 c7 04             	add    edi,0x4
1006d462:	4d                   	dec    ebp
1006d463:	75 ef                	jne    0x1006d454
1006d465:	5d                   	pop    ebp
1006d466:	8d 43 1c             	lea    eax,[ebx+0x1c]
1006d469:	8b cb                	mov    ecx,ebx
1006d46b:	50                   	push   eax
1006d46c:	e8 df 11 00 00       	call   0x1006e650
1006d471:	5f                   	pop    edi
1006d472:	5e                   	pop    esi
1006d473:	5b                   	pop    ebx
1006d474:	c3                   	ret
1006d475:	90                   	nop
1006d476:	90                   	nop
1006d477:	90                   	nop
1006d478:	90                   	nop
1006d479:	90                   	nop
1006d47a:	90                   	nop
1006d47b:	90                   	nop
1006d47c:	90                   	nop
1006d47d:	90                   	nop
1006d47e:	90                   	nop
1006d47f:	90                   	nop


*/
void ViewpointList::AllocItem() {
    __asm {
        push   ebx
        push   esi
        mov    ebx,DWORD PTR [esp+0xc]
        push   edi
        mov    edi,DWORD PTR [ecx+0x4c]
        xor    ecx,ecx
        mov    eax,DWORD PTR [edi+0x3c]
        mov    edx,DWORD PTR [edi+0x34]
        test   eax,eax
        mov    esi,edx
        jle    loc_1006c975
        loc_1006c968:
        cmp    DWORD PTR [esi+0x14],ebx
        je     loc_1006c9d6
        inc    ecx
        add    esi,0x20
        cmp    ecx,eax
        jl     loc_1006c968
        loc_1006c975:
        xor    ecx,ecx
        mov    esi,edx
        test   eax,eax
        jle    loc_1006c98a
        loc_1006c97d:
        test   BYTE PTR [esi],0x1
        je     loc_1006c98a
        inc    ecx
        add    esi,0x20
        cmp    ecx,eax
        jl     loc_1006c97d
        loc_1006c98a:
        cmp    ecx,eax
        jne    loc_1006c9cb
        mov    ecx,DWORD PTR ds:0x1010cfc8
        push   0x529
        push   0x100dd0a4
        mov    eax,DWORD PTR [ecx]
        call   DWORD PTR [eax+0x120]
        mov    edx,DWORD PTR [edi+0x3c]
        mov    eax,ds:0x1010cfc8
        push   edx
        push   0x100dd0fc
        mov    ecx,DWORD PTR [eax]
        push   0x100c5d7c
        push   eax
        call   DWORD PTR [ecx+0x128]
        add    esp,0x10
        pop    edi
        pop    esi
        pop    ebx
        ret    0x4
    }
}

