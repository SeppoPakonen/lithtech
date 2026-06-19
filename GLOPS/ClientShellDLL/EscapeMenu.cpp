#include "EscapeMenu.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// 0x1004c551: EscapeMenu::AddOption
/*
1004c551:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1004c557:	8b 86 40 01 00 00    	mov    eax,DWORD PTR [esi+0x140]
1004c55d:	50                   	push   eax
1004c55e:	8b 11                	mov    edx,DWORD PTR [ecx]
1004c560:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1004c566:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
1004c56c:	83 f9 04             	cmp    ecx,0x4
1004c56f:	7c 37                	jl     0x1004c5a8
1004c571:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004c577:	68 ef 00 00 00       	push   0xef
1004c57c:	68 80 a1 0d 10       	push   0x100da180
1004c581:	8b 11                	mov    edx,DWORD PTR [ecx]
1004c583:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1004c589:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004c58e:	6a 04                	push   0x4
1004c590:	68 4c a1 0d 10       	push   0x100da14c
1004c595:	68 7c 5d 0c 10       	push   0x100c5d7c
1004c59a:	8b 08                	mov    ecx,DWORD PTR [eax]
1004c59c:	50                   	push   eax
1004c59d:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004c5a3:	83 c4 10             	add    esp,0x10
1004c5a6:	eb 25                	jmp    0x1004c5cd
1004c5a8:	89 84 8e f0 00 00 00 	mov    DWORD PTR [esi+ecx*4+0xf0],eax
1004c5af:	8b 96 10 01 00 00    	mov    edx,DWORD PTR [esi+0x110]
1004c5b5:	c7 84 96 00 01 00 00 	mov    DWORD PTR [esi+edx*4+0x100],0x1004ce40
1004c5bc:	40 ce 04 10 
1004c5c0:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004c5c6:	40                   	inc    eax
1004c5c7:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
1004c5cd:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1004c5d3:	8b 96 3c 01 00 00    	mov    edx,DWORD PTR [esi+0x13c]
1004c5d9:	68 20 ce 04 10       	push   0x1004ce20
1004c5de:	52                   	push   edx
1004c5df:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c5e1:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1004c5e7:	50                   	push   eax
1004c5e8:	8b ce                	mov    ecx,esi
1004c5ea:	e8 c1 08 00 00       	call   0x1004ceb0
1004c5ef:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1004c5f5:	8b 96 44 01 00 00    	mov    edx,DWORD PTR [esi+0x144]
1004c5fb:	68 60 ce 04 10       	push   0x1004ce60
1004c600:	52                   	push   edx
1004c601:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c603:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1004c609:	50                   	push   eax
1004c60a:	8b ce                	mov    ecx,esi
1004c60c:	e8 9f 08 00 00       	call   0x1004ceb0
1004c611:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1004c617:	8b 96 48 01 00 00    	mov    edx,DWORD PTR [esi+0x148]
1004c61d:	68 50 ce 04 10       	push   0x1004ce50
1004c622:	52                   	push   edx
1004c623:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c625:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1004c62b:	50                   	push   eax
1004c62c:	8b ce                	mov    ecx,esi
1004c62e:	e8 7d 08 00 00       	call   0x1004ceb0
1004c633:	8b ce                	mov    ecx,esi
1004c635:	e8 46 08 00 00       	call   0x1004ce80
1004c63a:	5f                   	pop    edi
1004c63b:	5e                   	pop    esi
1004c63c:	c3                   	ret

*/
void EscapeMenu::Init() {
    m_nNumOptions = 0;
    AddOption(1, 100); // Resume
    AddOption(2, 101); // Options
    AddOption(3, 102); // Disconnect
    AddOption(4, 103); // Exit
}

// 0x1004c63d: EscapeMenu::OnLoadData
/*
1004c63d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004c643:	6a 3e                	push   0x3e
1004c645:	68 80 a1 0d 10       	push   0x100da180
1004c64a:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c64c:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1004c652:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004c657:	68 0c a1 0d 10       	push   0x100da10c
1004c65c:	68 7c 5d 0c 10       	push   0x100c5d7c
1004c661:	50                   	push   eax
1004c662:	8b 08                	mov    ecx,DWORD PTR [eax]
1004c664:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004c66a:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1004c670:	8b 86 3c 01 00 00    	mov    eax,DWORD PTR [esi+0x13c]
1004c676:	83 c4 0c             	add    esp,0xc
1004c679:	8b 11                	mov    edx,DWORD PTR [ecx]
1004c67b:	50                   	push   eax
1004c67c:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1004c682:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
1004c688:	83 f9 04             	cmp    ecx,0x4
1004c68b:	7c 37                	jl     0x1004c6c4
1004c68d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004c693:	68 ef 00 00 00       	push   0xef
1004c698:	68 80 a1 0d 10       	push   0x100da180
1004c69d:	8b 11                	mov    edx,DWORD PTR [ecx]
1004c69f:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1004c6a5:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004c6aa:	6a 04                	push   0x4
1004c6ac:	68 4c a1 0d 10       	push   0x100da14c
1004c6b1:	68 7c 5d 0c 10       	push   0x100c5d7c
1004c6b6:	8b 08                	mov    ecx,DWORD PTR [eax]
1004c6b8:	50                   	push   eax
1004c6b9:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004c6bf:	83 c4 10             	add    esp,0x10
1004c6c2:	eb 25                	jmp    0x1004c6e9
1004c6c4:	89 84 8e f0 00 00 00 	mov    DWORD PTR [esi+ecx*4+0xf0],eax
1004c6cb:	8b 96 10 01 00 00    	mov    edx,DWORD PTR [esi+0x110]
1004c6d1:	c7 84 96 00 01 00 00 	mov    DWORD PTR [esi+edx*4+0x100],0x1004ce20
1004c6d8:	20 ce 04 10 
1004c6dc:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004c6e2:	40                   	inc    eax
1004c6e3:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
1004c6e9:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1004c6ef:	8b 96 40 01 00 00    	mov    edx,DWORD PTR [esi+0x140]
1004c6f5:	52                   	push   edx
1004c6f6:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c6f8:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1004c6fe:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
1004c704:	83 f9 04             	cmp    ecx,0x4
1004c707:	7c 37                	jl     0x1004c740
1004c709:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004c70f:	68 ef 00 00 00       	push   0xef
1004c714:	68 80 a1 0d 10       	push   0x100da180
1004c719:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c71b:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1004c721:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004c726:	6a 04                	push   0x4
1004c728:	68 4c a1 0d 10       	push   0x100da14c
1004c72d:	68 7c 5d 0c 10       	push   0x100c5d7c
1004c732:	8b 08                	mov    ecx,DWORD PTR [eax]
1004c734:	50                   	push   eax
1004c735:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004c73b:	83 c4 10             	add    esp,0x10
1004c73e:	eb 25                	jmp    0x1004c765
1004c740:	89 84 8e f0 00 00 00 	mov    DWORD PTR [esi+ecx*4+0xf0],eax
1004c747:	8b 96 10 01 00 00    	mov    edx,DWORD PTR [esi+0x110]
1004c74d:	c7 84 96 00 01 00 00 	mov    DWORD PTR [esi+edx*4+0x100],0x1004ce40
1004c754:	40 ce 04 10 
1004c758:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004c75e:	40                   	inc    eax
1004c75f:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
1004c765:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004c76b:	83 f8 04             	cmp    eax,0x4
1004c76e:	7c 37                	jl     0x1004c7a7
1004c770:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004c776:	68 ef 00 00 00       	push   0xef
1004c77b:	68 80 a1 0d 10       	push   0x100da180
1004c780:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c782:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1004c788:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004c78d:	6a 04                	push   0x4
1004c78f:	68 4c a1 0d 10       	push   0x100da14c
1004c794:	68 7c 5d 0c 10       	push   0x100c5d7c
1004c799:	8b 08                	mov    ecx,DWORD PTR [eax]
1004c79b:	50                   	push   eax
1004c79c:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004c7a2:	83 c4 10             	add    esp,0x10
1004c7a5:	eb 21                	jmp    0x1004c7c8
1004c7a7:	89 bc 86 f0 00 00 00 	mov    DWORD PTR [esi+eax*4+0xf0],edi
1004c7ae:	8b 96 10 01 00 00    	mov    edx,DWORD PTR [esi+0x110]
1004c7b4:	89 bc 96 00 01 00 00 	mov    DWORD PTR [esi+edx*4+0x100],edi
1004c7bb:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004c7c1:	40                   	inc    eax
1004c7c2:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
1004c7c8:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1004c7ce:	8b 96 48 01 00 00    	mov    edx,DWORD PTR [esi+0x148]
1004c7d4:	52                   	push   edx
1004c7d5:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c7d7:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1004c7dd:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
1004c7e3:	83 f9 04             	cmp    ecx,0x4
1004c7e6:	0f 8c a6 01 00 00    	jl     0x1004c992
1004c7ec:	e9 62 01 00 00       	jmp    0x1004c953
1004c7f1:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1004c7f7:	8b 96 40 01 00 00    	mov    edx,DWORD PTR [esi+0x140]
1004c7fd:	52                   	push   edx
1004c7fe:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c800:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1004c806:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
1004c80c:	83 f9 04             	cmp    ecx,0x4
1004c80f:	7c 37                	jl     0x1004c848
1004c811:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004c817:	68 ef 00 00 00       	push   0xef
1004c81c:	68 80 a1 0d 10       	push   0x100da180
1004c821:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c823:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1004c829:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004c82e:	6a 04                	push   0x4
1004c830:	68 4c a1 0d 10       	push   0x100da14c
1004c835:	68 7c 5d 0c 10       	push   0x100c5d7c
1004c83a:	8b 08                	mov    ecx,DWORD PTR [eax]
1004c83c:	50                   	push   eax
1004c83d:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004c843:	83 c4 10             	add    esp,0x10
1004c846:	eb 25                	jmp    0x1004c86d
1004c848:	89 84 8e f0 00 00 00 	mov    DWORD PTR [esi+ecx*4+0xf0],eax
1004c84f:	8b 96 10 01 00 00    	mov    edx,DWORD PTR [esi+0x110]
1004c855:	c7 84 96 00 01 00 00 	mov    DWORD PTR [esi+edx*4+0x100],0x1004ce40
1004c85c:	40 ce 04 10 
1004c860:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004c866:	40                   	inc    eax
1004c867:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
1004c86d:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004c873:	83 f8 04             	cmp    eax,0x4
1004c876:	7c 37                	jl     0x1004c8af
1004c878:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004c87e:	68 ef 00 00 00       	push   0xef
1004c883:	68 80 a1 0d 10       	push   0x100da180
1004c888:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c88a:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1004c890:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004c895:	6a 04                	push   0x4
1004c897:	68 4c a1 0d 10       	push   0x100da14c
1004c89c:	68 7c 5d 0c 10       	push   0x100c5d7c
1004c8a1:	8b 08                	mov    ecx,DWORD PTR [eax]
1004c8a3:	50                   	push   eax
1004c8a4:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004c8aa:	83 c4 10             	add    esp,0x10
1004c8ad:	eb 21                	jmp    0x1004c8d0
1004c8af:	89 bc 86 f0 00 00 00 	mov    DWORD PTR [esi+eax*4+0xf0],edi
1004c8b6:	8b 96 10 01 00 00    	mov    edx,DWORD PTR [esi+0x110]
1004c8bc:	89 bc 96 00 01 00 00 	mov    DWORD PTR [esi+edx*4+0x100],edi
1004c8c3:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004c8c9:	40                   	inc    eax
1004c8ca:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
1004c8d0:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004c8d6:	83 f8 04             	cmp    eax,0x4
1004c8d9:	7c 37                	jl     0x1004c912
1004c8db:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004c8e1:	68 ef 00 00 00       	push   0xef
1004c8e6:	68 80 a1 0d 10       	push   0x100da180
1004c8eb:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c8ed:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1004c8f3:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004c8f8:	6a 04                	push   0x4
1004c8fa:	68 4c a1 0d 10       	push   0x100da14c
1004c8ff:	68 7c 5d 0c 10       	push   0x100c5d7c
1004c904:	8b 08                	mov    ecx,DWORD PTR [eax]
1004c906:	50                   	push   eax
1004c907:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004c90d:	83 c4 10             	add    esp,0x10
1004c910:	eb 21                	jmp    0x1004c933
1004c912:	89 bc 86 f0 00 00 00 	mov    DWORD PTR [esi+eax*4+0xf0],edi
1004c919:	8b 96 10 01 00 00    	mov    edx,DWORD PTR [esi+0x110]
1004c91f:	89 bc 96 00 01 00 00 	mov    DWORD PTR [esi+edx*4+0x100],edi
1004c926:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004c92c:	40                   	inc    eax
1004c92d:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
1004c933:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1004c939:	8b 96 48 01 00 00    	mov    edx,DWORD PTR [esi+0x148]
1004c93f:	52                   	push   edx
1004c940:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c942:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1004c948:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
1004c94e:	83 f9 04             	cmp    ecx,0x4
1004c951:	7c 3f                	jl     0x1004c992
1004c953:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004c959:	68 ef 00 00 00       	push   0xef
1004c95e:	68 80 a1 0d 10       	push   0x100da180
1004c963:	8b 01                	mov    eax,DWORD PTR [ecx]
1004c965:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1004c96b:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004c970:	6a 04                	push   0x4
1004c972:	68 4c a1 0d 10       	push   0x100da14c
1004c977:	68 7c 5d 0c 10       	push   0x100c5d7c
1004c97c:	8b 08                	mov    ecx,DWORD PTR [eax]
1004c97e:	50                   	push   eax
1004c97f:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004c985:	83 c4 10             	add    esp,0x10
1004c988:	8b ce                	mov    ecx,esi
1004c98a:	e8 f1 04 00 00       	call   0x1004ce80
1004c98f:	5f                   	pop    edi
1004c990:	5e                   	pop    esi
1004c991:	c3                   	ret
1004c992:	89 84 8e f0 00 00 00 	mov    DWORD PTR [esi+ecx*4+0xf0],eax
1004c999:	8b 96 10 01 00 00    	mov    edx,DWORD PTR [esi+0x110]
1004c99f:	8b ce                	mov    ecx,esi
1004c9a1:	c7 84 96 00 01 00 00 	mov    DWORD PTR [esi+edx*4+0x100],0x1004ce50
1004c9a8:	50 ce 04 10 
1004c9ac:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004c9b2:	40                   	inc    eax
1004c9b3:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
1004c9b9:	e8 c2 04 00 00       	call   0x1004ce80
1004c9be:	5f                   	pop    edi
1004c9bf:	5e                   	pop    esi
1004c9c0:	c3                   	ret
1004c9c1:	90                   	nop
1004c9c2:	90                   	nop
1004c9c3:	90                   	nop
1004c9c4:	90                   	nop
1004c9c5:	90                   	nop
1004c9c6:	90                   	nop
1004c9c7:	90                   	nop
1004c9c8:	90                   	nop
1004c9c9:	90                   	nop
1004c9ca:	90                   	nop
1004c9cb:	90                   	nop
1004c9cc:	90                   	nop
1004c9cd:	90                   	nop
1004c9ce:	90                   	nop
1004c9cf:	90                   	nop
1004c9d0:	53                   	push   ebx
1004c9d1:	8b 99 1c 01 00 00    	mov    ebx,DWORD PTR [ecx+0x11c]
1004c9d7:	56                   	push   esi
1004c9d8:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
1004c9dc:	57                   	push   edi
1004c9dd:	8b b9 18 01 00 00    	mov    edi,DWORD PTR [ecx+0x118]
1004c9e3:	2b f7                	sub    esi,edi
1004c9e5:	8b b9 20 01 00 00    	mov    edi,DWORD PTR [ecx+0x120]
1004c9eb:	03 fb                	add    edi,ebx
1004c9ed:	85 f6                	test   esi,esi
1004c9ef:	7c 21                	jl     0x1004ca12
1004c9f1:	8b c6                	mov    eax,esi
1004c9f3:	99                   	cdq
1004c9f4:	f7 ff                	idiv   edi
1004c9f6:	3b d3                	cmp    edx,ebx
1004c9f8:	7d 18                	jge    0x1004ca12
1004c9fa:	8b c6                	mov    eax,esi
1004c9fc:	99                   	cdq
1004c9fd:	f7 ff                	idiv   edi
1004c9ff:	3b 81 10 01 00 00    	cmp    eax,DWORD PTR [ecx+0x110]
1004ca05:	7d 0b                	jge    0x1004ca12
1004ca07:	8b 94 81 f0 00 00 00 	mov    edx,DWORD PTR [ecx+eax*4+0xf0]
1004ca0e:	85 d2                	test   edx,edx
1004ca10:	75 03                	jne    0x1004ca15
1004ca12:	83 c8 ff             	or     eax,0xffffffff
1004ca15:	6a 00                	push   0x0
1004ca17:	6a 04                	push   0x4
1004ca19:	89 81 14 01 00 00    	mov    DWORD PTR [ecx+0x114],eax
1004ca1f:	e8 5c 1d 02 00       	call   0x1006e780
1004ca24:	5f                   	pop    edi
1004ca25:	5e                   	pop    esi
1004ca26:	5b                   	pop    ebx
1004ca27:	c2 0c 00             	ret    0xc
1004ca2a:	90                   	nop
1004ca2b:	90                   	nop
1004ca2c:	90                   	nop
1004ca2d:	90                   	nop
1004ca2e:	90                   	nop
1004ca2f:	90                   	nop
1004ca30:	53                   	push   ebx
1004ca31:	56                   	push   esi
1004ca32:	8b f1                	mov    esi,ecx
1004ca34:	57                   	push   edi
1004ca35:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1004ca39:	8b be 18 01 00 00    	mov    edi,DWORD PTR [esi+0x118]
1004ca3f:	8b 9e 1c 01 00 00    	mov    ebx,DWORD PTR [esi+0x11c]
1004ca45:	2b cf                	sub    ecx,edi
1004ca47:	8b be 20 01 00 00    	mov    edi,DWORD PTR [esi+0x120]
1004ca4d:	03 fb                	add    edi,ebx
1004ca4f:	85 c9                	test   ecx,ecx
1004ca51:	7c 23                	jl     0x1004ca76
1004ca53:	8b c1                	mov    eax,ecx
1004ca55:	99                   	cdq
1004ca56:	f7 ff                	idiv   edi
1004ca58:	3b d3                	cmp    edx,ebx
1004ca5a:	7d 1a                	jge    0x1004ca76
1004ca5c:	8b c1                	mov    eax,ecx
1004ca5e:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
1004ca64:	99                   	cdq
1004ca65:	f7 ff                	idiv   edi
1004ca67:	3b c1                	cmp    eax,ecx
1004ca69:	7d 0b                	jge    0x1004ca76
1004ca6b:	8b 8c 86 f0 00 00 00 	mov    ecx,DWORD PTR [esi+eax*4+0xf0]
1004ca72:	85 c9                	test   ecx,ecx
1004ca74:	75 03                	jne    0x1004ca79
1004ca76:	83 c8 ff             	or     eax,0xffffffff
1004ca79:	6a 04                	push   0x4
1004ca7b:	6a 00                	push   0x0
1004ca7d:	8b ce                	mov    ecx,esi
1004ca7f:	89 86 14 01 00 00    	mov    DWORD PTR [esi+0x114],eax
1004ca85:	e8 f6 1c 02 00       	call   0x1006e780
1004ca8a:	8b be 14 01 00 00    	mov    edi,DWORD PTR [esi+0x114]
1004ca90:	83 ff ff             	cmp    edi,0xffffffff
1004ca93:	74 23                	je     0x1004cab8
1004ca95:	3b be 10 01 00 00    	cmp    edi,DWORD PTR [esi+0x110]
1004ca9b:	7d 1b                	jge    0x1004cab8
1004ca9d:	8b 84 be 00 01 00 00 	mov    eax,DWORD PTR [esi+edi*4+0x100]
1004caa4:	85 c0                	test   eax,eax
1004caa6:	74 10                	je     0x1004cab8
1004caa8:	6a 00                	push   0x0
1004caaa:	8b ce                	mov    ecx,esi
1004caac:	e8 ef 6c 02 00       	call   0x100737a0
1004cab1:	ff 94 be 00 01 00 00 	call   DWORD PTR [esi+edi*4+0x100]
1004cab8:	5f                   	pop    edi
1004cab9:	5e                   	pop    esi
1004caba:	5b                   	pop    ebx
1004cabb:	c2 0c 00             	ret    0xc
1004cabe:	90                   	nop
1004cabf:	90                   	nop
1004cac0:	53                   	push   ebx
1004cac1:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
1004cac5:	56                   	push   esi
1004cac6:	83 fb 31             	cmp    ebx,0x31
1004cac9:	57                   	push   edi
1004caca:	8b f1                	mov    esi,ecx
1004cacc:	72 2b                	jb     0x1004caf9
1004cace:	83 fb 34             	cmp    ebx,0x34
1004cad1:	77 26                	ja     0x1004caf9
1004cad3:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004cad9:	8d 7b cf             	lea    edi,[ebx-0x31]
1004cadc:	3b f8                	cmp    edi,eax
1004cade:	7d 19                	jge    0x1004caf9
1004cae0:	8b 84 be 00 01 00 00 	mov    eax,DWORD PTR [esi+edi*4+0x100]
1004cae7:	85 c0                	test   eax,eax
1004cae9:	74 0e                	je     0x1004caf9
1004caeb:	6a 00                	push   0x0
1004caed:	e8 ae 6c 02 00       	call   0x100737a0
1004caf2:	ff 94 be 00 01 00 00 	call   DWORD PTR [esi+edi*4+0x100]
1004caf9:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1004cafd:	8b ce                	mov    ecx,esi
1004caff:	50                   	push   eax
1004cb00:	53                   	push   ebx
1004cb01:	e8 fa 6e 02 00       	call   0x10073a00
1004cb06:	5f                   	pop    edi
1004cb07:	5e                   	pop    esi
1004cb08:	5b                   	pop    ebx
1004cb09:	c2 08 00             	ret    0x8
1004cb0c:	90                   	nop
1004cb0d:	90                   	nop
1004cb0e:	90                   	nop
1004cb0f:	90                   	nop
1004cb10:	53                   	push   ebx
1004cb11:	8b 99 1c 01 00 00    	mov    ebx,DWORD PTR [ecx+0x11c]
1004cb17:	56                   	push   esi
1004cb18:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
1004cb1c:	57                   	push   edi
1004cb1d:	8b b9 18 01 00 00    	mov    edi,DWORD PTR [ecx+0x118]
1004cb23:	2b f7                	sub    esi,edi
1004cb25:	8b b9 20 01 00 00    	mov    edi,DWORD PTR [ecx+0x120]
1004cb2b:	03 fb                	add    edi,ebx
1004cb2d:	85 f6                	test   esi,esi
1004cb2f:	7c 21                	jl     0x1004cb52
1004cb31:	8b c6                	mov    eax,esi
1004cb33:	99                   	cdq
1004cb34:	f7 ff                	idiv   edi
1004cb36:	3b d3                	cmp    edx,ebx
1004cb38:	7d 18                	jge    0x1004cb52
1004cb3a:	8b c6                	mov    eax,esi
1004cb3c:	99                   	cdq
1004cb3d:	f7 ff                	idiv   edi
1004cb3f:	3b 81 10 01 00 00    	cmp    eax,DWORD PTR [ecx+0x110]
1004cb45:	7d 0b                	jge    0x1004cb52
1004cb47:	8b 94 81 f0 00 00 00 	mov    edx,DWORD PTR [ecx+eax*4+0xf0]
1004cb4e:	85 d2                	test   edx,edx
1004cb50:	75 03                	jne    0x1004cb55
1004cb52:	83 c8 ff             	or     eax,0xffffffff
1004cb55:	5f                   	pop    edi
1004cb56:	5e                   	pop    esi
1004cb57:	89 81 14 01 00 00    	mov    DWORD PTR [ecx+0x114],eax
1004cb5d:	5b                   	pop    ebx
1004cb5e:	c2 0c 00             	ret    0xc
1004cb61:	90                   	nop
1004cb62:	90                   	nop
1004cb63:	90                   	nop
1004cb64:	90                   	nop
1004cb65:	90                   	nop
1004cb66:	90                   	nop
1004cb67:	90                   	nop
1004cb68:	90                   	nop
1004cb69:	90                   	nop
1004cb6a:	90                   	nop
1004cb6b:	90                   	nop
1004cb6c:	90                   	nop
1004cb6d:	90                   	nop
1004cb6e:	90                   	nop
1004cb6f:	90                   	nop
1004cb70:	83 ec 10             	sub    esp,0x10
1004cb73:	53                   	push   ebx
1004cb74:	56                   	push   esi
1004cb75:	57                   	push   edi
1004cb76:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
1004cb7a:	8b f1                	mov    esi,ecx
1004cb7c:	57                   	push   edi
1004cb7d:	e8 9e 6c 02 00       	call   0x10073820
1004cb82:	8d 44 24 0c          	lea    eax,[esp+0xc]
1004cb86:	8b ce                	mov    ecx,esi
1004cb88:	50                   	push   eax
1004cb89:	57                   	push   edi
1004cb8a:	e8 61 6b 02 00       	call   0x100736f0
1004cb8f:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
1004cb95:	e8 d6 06 00 00       	call   0x1004d270
1004cb9a:	83 c0 02             	add    eax,0x2
1004cb9d:	bf 00 04 00 00       	mov    edi,0x400
1004cba2:	89 86 1c 01 00 00    	mov    DWORD PTR [esi+0x11c],eax
1004cba8:	8b 1d 58 be 11 10    	mov    ebx,DWORD PTR ds:0x1011be58
1004cbae:	3b df                	cmp    ebx,edi
1004cbb0:	68 60 75 0d 10       	push   0x100d7560
1004cbb5:	1b c9                	sbb    ecx,ecx
1004cbb7:	83 e1 fc             	and    ecx,0xfffffffc
1004cbba:	83 c1 0a             	add    ecx,0xa
1004cbbd:	89 8e 20 01 00 00    	mov    DWORD PTR [esi+0x120],ecx
1004cbc3:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
1004cbc9:	e8 52 06 00 00       	call   0x1004d220
1004cbce:	89 86 28 01 00 00    	mov    DWORD PTR [esi+0x128],eax
1004cbd4:	8b 1d 58 be 11 10    	mov    ebx,DWORD PTR ds:0x1011be58
1004cbda:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004cbe0:	3b df                	cmp    ebx,edi
1004cbe2:	1b d2                	sbb    edx,edx
1004cbe4:	33 ff                	xor    edi,edi
1004cbe6:	83 e2 f8             	and    edx,0xfffffff8
1004cbe9:	33 db                	xor    ebx,ebx
1004cbeb:	83 c2 14             	add    edx,0x14
1004cbee:	85 c0                	test   eax,eax
1004cbf0:	89 96 2c 01 00 00    	mov    DWORD PTR [esi+0x12c],edx
1004cbf6:	7e 2f                	jle    0x1004cc27
1004cbf8:	55                   	push   ebp
1004cbf9:	8d ae f0 00 00 00    	lea    ebp,[esi+0xf0]
1004cbff:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1004cc02:	85 c0                	test   eax,eax
1004cc04:	74 12                	je     0x1004cc18
1004cc06:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
1004cc0c:	50                   	push   eax
1004cc0d:	e8 0e 06 00 00       	call   0x1004d220
1004cc12:	3b c7                	cmp    eax,edi
1004cc14:	7e 02                	jle    0x1004cc18
1004cc16:	8b f8                	mov    edi,eax
1004cc18:	8b 86 10 01 00 00    	mov    eax,DWORD PTR [esi+0x110]
1004cc1e:	43                   	inc    ebx
1004cc1f:	83 c5 04             	add    ebp,0x4
1004cc22:	3b d8                	cmp    ebx,eax
1004cc24:	7c d9                	jl     0x1004cbff
1004cc26:	5d                   	pop    ebp
1004cc27:	8b 8e 20 01 00 00    	mov    ecx,DWORD PTR [esi+0x120]
1004cc2d:	8b 86 1c 01 00 00    	mov    eax,DWORD PTR [esi+0x11c]
1004cc33:	03 c1                	add    eax,ecx
1004cc35:	8b 9e 28 01 00 00    	mov    ebx,DWORD PTR [esi+0x128]
1004cc3b:	0f af 86 10 01 00 00 	imul   eax,DWORD PTR [esi+0x110]
1004cc42:	2b c1                	sub    eax,ecx
1004cc44:	89 be 34 01 00 00    	mov    DWORD PTR [esi+0x134],edi
1004cc4a:	99                   	cdq
1004cc4b:	2b c2                	sub    eax,edx
1004cc4d:	8b c8                	mov    ecx,eax
1004cc4f:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1004cc53:	99                   	cdq
1004cc54:	2b c2                	sub    eax,edx
1004cc56:	d1 f9                	sar    ecx,1
1004cc58:	d1 f8                	sar    eax,1
1004cc5a:	2b c1                	sub    eax,ecx
1004cc5c:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1004cc60:	03 c1                	add    eax,ecx
1004cc62:	8b 8e 2c 01 00 00    	mov    ecx,DWORD PTR [esi+0x12c]
1004cc68:	89 86 18 01 00 00    	mov    DWORD PTR [esi+0x118],eax
1004cc6e:	8d 04 0b             	lea    eax,[ebx+ecx*1]
1004cc71:	03 c7                	add    eax,edi
1004cc73:	99                   	cdq
1004cc74:	2b c2                	sub    eax,edx
1004cc76:	8b f8                	mov    edi,eax
1004cc78:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1004cc7c:	99                   	cdq
1004cc7d:	2b c2                	sub    eax,edx
1004cc7f:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
1004cc83:	d1 ff                	sar    edi,1
1004cc85:	d1 f8                	sar    eax,1
1004cc87:	2b c7                	sub    eax,edi
1004cc89:	5f                   	pop    edi
1004cc8a:	03 c2                	add    eax,edx
1004cc8c:	89 86 24 01 00 00    	mov    DWORD PTR [esi+0x124],eax
1004cc92:	03 c3                	add    eax,ebx
1004cc94:	03 c1                	add    eax,ecx
1004cc96:	89 86 30 01 00 00    	mov    DWORD PTR [esi+0x130],eax
1004cc9c:	5e                   	pop    esi
1004cc9d:	5b                   	pop    ebx
1004cc9e:	83 c4 10             	add    esp,0x10
1004cca1:	c2 04 00             	ret    0x4
1004cca4:	90                   	nop
1004cca5:	90                   	nop
1004cca6:	90                   	nop
1004cca7:	90                   	nop
1004cca8:	90                   	nop
1004cca9:	90                   	nop
1004ccaa:	90                   	nop
1004ccab:	90                   	nop
1004ccac:	90                   	nop
1004ccad:	90                   	nop
1004ccae:	90                   	nop
1004ccaf:	90                   	nop
1004ccb0:	51                   	push   ecx
1004ccb1:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1004ccb5:	55                   	push   ebp
1004ccb6:	56                   	push   esi
1004ccb7:	8b f1                	mov    esi,ecx
1004ccb9:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1004ccbd:	50                   	push   eax
1004ccbe:	51                   	push   ecx
1004ccbf:	8b ce                	mov    ecx,esi
1004ccc1:	e8 fa 6b 02 00       	call   0x100738c0
1004ccc6:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
1004cccc:	8b 96 24 01 00 00    	mov    edx,DWORD PTR [esi+0x124]
1004ccd2:	8b ae 18 01 00 00    	mov    ebp,DWORD PTR [esi+0x118]
1004ccd8:	33 c0                	xor    eax,eax
1004ccda:	85 c9                	test   ecx,ecx
1004ccdc:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1004cce0:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
1004cce4:	0f 8e d3 00 00 00    	jle    0x1004cdbd
1004ccea:	53                   	push   ebx
1004cceb:	57                   	push   edi
1004ccec:	c7 44 24 1c fc a0 0d 	mov    DWORD PTR [esp+0x1c],0x100da0fc
1004ccf3:	10 
1004ccf4:	8d 9e f0 00 00 00    	lea    ebx,[esi+0xf0]
1004ccfa:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
1004cd00:	8b f8                	mov    edi,eax
1004cd02:	2b f9                	sub    edi,ecx
1004cd04:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1004cd06:	f7 df                	neg    edi
1004cd08:	1b ff                	sbb    edi,edi
1004cd0a:	81 e7 ff 00 ff 00    	and    edi,0xff00ff
1004cd10:	81 c7 00 ff 00 ff    	add    edi,0xff00ff00
1004cd16:	85 c9                	test   ecx,ecx
1004cd18:	74 70                	je     0x1004cd8a
1004cd1a:	8b 86 1c 01 00 00    	mov    eax,DWORD PTR [esi+0x11c]
1004cd20:	8b 8e 28 01 00 00    	mov    ecx,DWORD PTR [esi+0x128]
1004cd26:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1004cd2a:	6a 06                	push   0x6
1004cd2c:	57                   	push   edi
1004cd2d:	50                   	push   eax
1004cd2e:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1004cd32:	51                   	push   ecx
1004cd33:	55                   	push   ebp
1004cd34:	52                   	push   edx
1004cd35:	8b 08                	mov    ecx,DWORD PTR [eax]
1004cd37:	8b 15 f0 b6 0d 10    	mov    edx,DWORD PTR ds:0x100db6f0
1004cd3d:	51                   	push   ecx
1004cd3e:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1004cd44:	52                   	push   edx
1004cd45:	e8 b6 d3 ff ff       	call   0x1004a100
1004cd4a:	8b 86 1c 01 00 00    	mov    eax,DWORD PTR [esi+0x11c]
1004cd50:	8b 8e 34 01 00 00    	mov    ecx,DWORD PTR [esi+0x134]
1004cd56:	8b 96 2c 01 00 00    	mov    edx,DWORD PTR [esi+0x12c]
1004cd5c:	6a 04                	push   0x4
1004cd5e:	57                   	push   edi
1004cd5f:	50                   	push   eax
1004cd60:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1004cd64:	51                   	push   ecx
1004cd65:	8b 8e 28 01 00 00    	mov    ecx,DWORD PTR [esi+0x128]
1004cd6b:	55                   	push   ebp
1004cd6c:	03 d1                	add    edx,ecx
1004cd6e:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
1004cd74:	03 d0                	add    edx,eax
1004cd76:	8b 03                	mov    eax,DWORD PTR [ebx]
1004cd78:	52                   	push   edx
1004cd79:	50                   	push   eax
1004cd7a:	51                   	push   ecx
1004cd7b:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1004cd81:	e8 7a d3 ff ff       	call   0x1004a100
1004cd86:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1004cd8a:	8b 96 20 01 00 00    	mov    edx,DWORD PTR [esi+0x120]
1004cd90:	8b 8e 1c 01 00 00    	mov    ecx,DWORD PTR [esi+0x11c]
1004cd96:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
1004cd9a:	03 d1                	add    edx,ecx
1004cd9c:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
1004cda2:	03 ea                	add    ebp,edx
1004cda4:	40                   	inc    eax
1004cda5:	83 c7 04             	add    edi,0x4
1004cda8:	83 c3 04             	add    ebx,0x4
1004cdab:	3b c1                	cmp    eax,ecx
1004cdad:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1004cdb1:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
1004cdb5:	0f 8c 3f ff ff ff    	jl     0x1004ccfa
1004cdbb:	5f                   	pop    edi
1004cdbc:	5b                   	pop    ebx
1004cdbd:	5e                   	pop    esi
1004cdbe:	5d                   	pop    ebp
1004cdbf:	59                   	pop    ecx
1004cdc0:	c2 08 00             	ret    0x8
1004cdc3:	90                   	nop
1004cdc4:	90                   	nop
1004cdc5:	90                   	nop
1004cdc6:	90                   	nop
1004cdc7:	90                   	nop
1004cdc8:	90                   	nop
1004cdc9:	90                   	nop
1004cdca:	90                   	nop
1004cdcb:	90                   	nop
1004cdcc:	90                   	nop
1004cdcd:	90                   	nop
1004cdce:	90                   	nop
1004cdcf:	90                   	nop
1004cdd0:	e8 4b 46 00 00       	call   0x10051420
1004cdd5:	e9 86 46 00 00       	jmp    0x10051460
1004cdda:	90                   	nop
1004cddb:	90                   	nop
1004cddc:	90                   	nop
1004cddd:	90                   	nop
1004cdde:	90                   	nop
1004cddf:	90                   	nop
1004cde0:	56                   	push   esi
1004cde1:	57                   	push   edi
1004cde2:	8b f9                	mov    edi,ecx
1004cde4:	e8 77 41 00 00       	call   0x10050f60
1004cde9:	8b f0                	mov    esi,eax
1004cdeb:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004cdf0:	f7 de                	neg    esi
1004cdf2:	1b f6                	sbb    esi,esi
1004cdf4:	46                   	inc    esi
1004cdf5:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
1004cdf8:	f7 d8                	neg    eax
1004cdfa:	1b c0                	sbb    eax,eax
1004cdfc:	83 e0 02             	and    eax,0x2
1004cdff:	0b f0                	or     esi,eax
1004ce01:	8b 87 38 01 00 00    	mov    eax,DWORD PTR [edi+0x138]
1004ce07:	3b f0                	cmp    esi,eax
1004ce09:	74 07                	je     0x1004ce12
1004ce0b:	8b 17                	mov    edx,DWORD PTR [edi]
1004ce0d:	8b cf                	mov    ecx,edi
1004ce0f:	ff 52 78             	call   DWORD PTR [edx+0x78]
1004ce12:	5f                   	pop    edi
1004ce13:	5e                   	pop    esi
1004ce14:	c2 04 00             	ret    0x4
1004ce17:	90                   	nop
1004ce18:	90                   	nop
1004ce19:	90                   	nop
1004ce1a:	90                   	nop
1004ce1b:	90                   	nop
1004ce1c:	90                   	nop
1004ce1d:	90                   	nop
1004ce1e:	90                   	nop
1004ce1f:	90                   	nop
1004ce20:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004ce25:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
1004ce28:	85 c0                	test   eax,eax
1004ce2a:	74 05                	je     0x1004ce31
1004ce2c:	e9 df 40 00 00       	jmp    0x10050f10
1004ce31:	e9 8a 40 00 00       	jmp    0x10050ec0
1004ce36:	90                   	nop
1004ce37:	90                   	nop
1004ce38:	90                   	nop
1004ce39:	90                   	nop
1004ce3a:	90                   	nop
1004ce3b:	90                   	nop
1004ce3c:	90                   	nop
1004ce3d:	90                   	nop
1004ce3e:	90                   	nop
1004ce3f:	90                   	nop
1004ce40:	e9 7b 40 00 00       	jmp    0x10050ec0
1004ce45:	90                   	nop
1004ce46:	90                   	nop
1004ce47:	90                   	nop
1004ce48:	90                   	nop
1004ce49:	90                   	nop
1004ce4a:	90                   	nop
1004ce4b:	90                   	nop
1004ce4c:	90                   	nop
1004ce4d:	90                   	nop
1004ce4e:	90                   	nop
1004ce4f:	90                   	nop
1004ce50:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1004ce55:	c7 80 28 85 01 00 02 	mov    DWORD PTR [eax+0x18528],0x2
1004ce5c:	00 00 00 
1004ce5f:	c3                   	ret
1004ce60:	e8 5b 40 00 00       	call   0x10050ec0
1004ce65:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004ce6a:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
1004ce6d:	85 c0                	test   eax,eax
1004ce6f:	74 09                	je     0x1004ce7a
1004ce71:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004ce77:	ff 61 30             	jmp    DWORD PTR [ecx+0x30]
1004ce7a:	c3                   	ret
1004ce7b:	90                   	nop
1004ce7c:	90                   	nop
1004ce7d:	90                   	nop
1004ce7e:	90                   	nop
1004ce7f:	90                   	nop
1004ce80:	83 ec 10             	sub    esp,0x10
1004ce83:	8d 44 24 00          	lea    eax,[esp+0x0]
1004ce87:	56                   	push   esi
1004ce88:	8b f1                	mov    esi,ecx
1004ce8a:	50                   	push   eax
1004ce8b:	e8 30 18 02 00       	call   0x1006e6c0
1004ce90:	8d 4c 24 04          	lea    ecx,[esp+0x4]
1004ce94:	51                   	push   ecx
1004ce95:	8b ce                	mov    ecx,esi
1004ce97:	e8 b4 17 02 00       	call   0x1006e650
1004ce9c:	5e                   	pop    esi
1004ce9d:	83 c4 10             	add    esp,0x10
1004cea0:	c3                   	ret
1004cea1:	90                   	nop
1004cea2:	90                   	nop
1004cea3:	90                   	nop
1004cea4:	90                   	nop
1004cea5:	90                   	nop
1004cea6:	90                   	nop
1004cea7:	90                   	nop
1004cea8:	90                   	nop
1004cea9:	90                   	nop
1004ceaa:	90                   	nop
1004ceab:	90                   	nop
1004ceac:	90                   	nop
1004cead:	90                   	nop
1004ceae:	90                   	nop
1004ceaf:	90                   	nop

*/
void EscapeMenu::OnLoadData() {
    // Perform state check: in game, but not connected
    // g_pLTClient->CPrint("EscapeMenu::OnLoadData: Bad state: in game, but not connected");
}

// 0x1004ceb0: EscapeMenu::AddOption
/*
1004ceb0:	8b 81 10 01 00 00    	mov    eax,DWORD PTR [ecx+0x110]
1004ceb6:	83 f8 04             	cmp    eax,0x4
1004ceb9:	7c 38                	jl     0x1004cef3
1004cebb:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1004cec1:	68 ef 00 00 00       	push   0xef
1004cec6:	68 80 a1 0d 10       	push   0x100da180
1004cecb:	8b 01                	mov    eax,DWORD PTR [ecx]
1004cecd:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1004ced3:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1004ced8:	6a 04                	push   0x4
1004ceda:	68 4c a1 0d 10       	push   0x100da14c
1004cedf:	68 7c 5d 0c 10       	push   0x100c5d7c
1004cee4:	8b 08                	mov    ecx,DWORD PTR [eax]
1004cee6:	50                   	push   eax
1004cee7:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1004ceed:	83 c4 10             	add    esp,0x10
1004cef0:	c2 08 00             	ret    0x8
1004cef3:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1004cef7:	89 94 81 f0 00 00 00 	mov    DWORD PTR [ecx+eax*4+0xf0],edx
1004cefe:	8b 81 10 01 00 00    	mov    eax,DWORD PTR [ecx+0x110]
1004cf04:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1004cf08:	89 94 81 00 01 00 00 	mov    DWORD PTR [ecx+eax*4+0x100],edx
1004cf0f:	8b 81 10 01 00 00    	mov    eax,DWORD PTR [ecx+0x110]
1004cf15:	40                   	inc    eax
1004cf16:	89 81 10 01 00 00    	mov    DWORD PTR [ecx+0x110],eax
1004cf1c:	c2 08 00             	ret    0x8
1004cf1f:	90                   	nop
1004cf20:	8b c1                	mov    eax,ecx
1004cf22:	c7 00 74 95 0b 10    	mov    DWORD PTR [eax],0x100b9574
1004cf28:	c3                   	ret
1004cf29:	90                   	nop
1004cf2a:	90                   	nop
1004cf2b:	90                   	nop
1004cf2c:	90                   	nop
1004cf2d:	90                   	nop
1004cf2e:	90                   	nop
1004cf2f:	90                   	nop
1004cf30:	8a 44 24 04          	mov    al,BYTE PTR [esp+0x4]
1004cf34:	56                   	push   esi
1004cf35:	8b f1                	mov    esi,ecx
1004cf37:	a8 01                	test   al,0x1
1004cf39:	c7 06 74 95 0b 10    	mov    DWORD PTR [esi],0x100b9574
1004cf3f:	74 09                	je     0x1004cf4a
1004cf41:	56                   	push   esi
1004cf42:	e8 d7 69 05 00       	call   0x100a391e
1004cf47:	83 c4 04             	add    esp,0x4
1004cf4a:	8b c6                	mov    eax,esi
1004cf4c:	5e                   	pop    esi
1004cf4d:	c2 04 00             	ret    0x4
1004cf50:	c7 01 74 95 0b 10    	mov    DWORD PTR [ecx],0x100b9574
1004cf56:	c3                   	ret
1004cf57:	90                   	nop
1004cf58:	90                   	nop
1004cf59:	90                   	nop
1004cf5a:	90                   	nop
1004cf5b:	90                   	nop
1004cf5c:	90                   	nop
1004cf5d:	90                   	nop
1004cf5e:	90                   	nop
1004cf5f:	90                   	nop

*/
void EscapeMenu::AddOption(uint32 optionId, uint32 nameId) {
    if (m_nNumOptions >= 4) {
        g_pLTClient->CPrint("EscapeMenu::AddOption: MAX_OPTIONS exceeded (%i)", m_nNumOptions);
        return;
    }
    
    m_anOptionIds[m_nNumOptions] = optionId;
    m_anOptionNames[m_nNumOptions] = nameId;
    m_nNumOptions++;
}

