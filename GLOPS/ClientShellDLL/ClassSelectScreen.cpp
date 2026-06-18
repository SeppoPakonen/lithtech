#include "ClassSelectScreen.h"

// 0x1008258a: ClassSelectScreen::GetNextAvailableSpecialty
/*
1008258a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082590:	68 bd 04 00 00       	push   0x4bd
10082595:	68 4c dd 0d 10       	push   0x100ddd4c
1008259a:	8b 11                	mov    edx,DWORD PTR [ecx]
1008259c:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
100825a2:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100825a7:	53                   	push   ebx
100825a8:	68 8c dd 0d 10       	push   0x100ddd8c
100825ad:	68 7c 5d 0c 10       	push   0x100c5d7c
100825b2:	8b 08                	mov    ecx,DWORD PTR [eax]
100825b4:	50                   	push   eax
100825b5:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
100825bb:	83 c4 10             	add    esp,0x10
100825be:	b8 07 00 00 00       	mov    eax,0x7
100825c3:	5f                   	pop    edi
100825c4:	5e                   	pop    esi
100825c5:	5d                   	pop    ebp
100825c6:	5b                   	pop    ebx
100825c7:	c2 08 00             	ret    0x8
100825ca:	83 ff 07             	cmp    edi,0x7
100825cd:	7c 0c                	jl     0x100825db
100825cf:	5f                   	pop    edi
100825d0:	5e                   	pop    esi
100825d1:	5d                   	pop    ebp
100825d2:	b8 07 00 00 00       	mov    eax,0x7
100825d7:	5b                   	pop    ebx
100825d8:	c2 08 00             	ret    0x8
100825db:	8b c6                	mov    eax,esi
100825dd:	5f                   	pop    edi
100825de:	5e                   	pop    esi
100825df:	5d                   	pop    ebp
100825e0:	5b                   	pop    ebx
100825e1:	c2 08 00             	ret    0x8
100825e4:	90                   	nop
100825e5:	90                   	nop
100825e6:	90                   	nop
100825e7:	90                   	nop
100825e8:	90                   	nop
100825e9:	90                   	nop
100825ea:	90                   	nop
100825eb:	90                   	nop
100825ec:	90                   	nop
100825ed:	90                   	nop
100825ee:	90                   	nop
100825ef:	90                   	nop
100825f0:	6a ff                	push   0xffffffff
100825f2:	68 f9 67 0b 10       	push   0x100b67f9
100825f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100825fd:	50                   	push   eax
100825fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10082605:	83 ec 28             	sub    esp,0x28
10082608:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
1008260c:	53                   	push   ebx
1008260d:	56                   	push   esi
1008260e:	8b f1                	mov    esi,ecx
10082610:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10082616:	33 db                	xor    ebx,ebx
10082618:	50                   	push   eax
10082619:	53                   	push   ebx
1008261a:	51                   	push   ecx
1008261b:	8b ce                	mov    ecx,esi
1008261d:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
10082621:	e8 aa e0 fc ff       	call   0x100506d0
10082626:	c7 06 c8 ce 0b 10    	mov    DWORD PTR [esi],0x100bcec8
1008262c:	89 35 10 43 12 10    	mov    DWORD PTR ds:0x10124310,esi
10082632:	68 6c 01 00 00       	push   0x16c
10082637:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
1008263b:	c7 46 48 09 00 00 00 	mov    DWORD PTR [esi+0x48],0x9
10082642:	e8 e2 12 02 00       	call   0x100a3929
10082647:	83 c4 04             	add    esp,0x4
1008264a:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
1008264e:	3b c3                	cmp    eax,ebx
10082650:	c6 44 24 38 01       	mov    BYTE PTR [esp+0x38],0x1
10082655:	74 0c                	je     0x10082663
10082657:	6a 03                	push   0x3
10082659:	56                   	push   esi
1008265a:	8b c8                	mov    ecx,eax
1008265c:	e8 0f 70 ff ff       	call   0x10079670
10082661:	eb 02                	jmp    0x10082665
10082663:	33 c0                	xor    eax,eax
10082665:	89 46 50             	mov    DWORD PTR [esi+0x50],eax
10082668:	8b 15 48 be 11 10    	mov    edx,DWORD PTR ds:0x1011be48
1008266e:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
10082674:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
10082679:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1008267d:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10082681:	8d 14 c9             	lea    edx,[ecx+ecx*8]
10082684:	57                   	push   edi
10082685:	6a 50                	push   0x50
10082687:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
1008268b:	8d 04 51             	lea    eax,[ecx+edx*2]
1008268e:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
10082692:	8d 14 81             	lea    edx,[ecx+eax*4]
10082695:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008269a:	f7 e2                	mul    edx
1008269c:	c1 ea 09             	shr    edx,0x9
1008269f:	2b ca                	sub    ecx,edx
100826a1:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
100826a5:	e8 7f 12 02 00       	call   0x100a3929
100826aa:	8b f8                	mov    edi,eax
100826ac:	83 c4 04             	add    esp,0x4
100826af:	89 7c 24 44          	mov    DWORD PTR [esp+0x44],edi
100826b3:	3b fb                	cmp    edi,ebx
100826b5:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
100826ba:	74 74                	je     0x10082730
100826bc:	8d 44 24 14          	lea    eax,[esp+0x14]
100826c0:	8b cf                	mov    ecx,edi
100826c2:	50                   	push   eax
100826c3:	53                   	push   ebx
100826c4:	56                   	push   esi
100826c5:	e8 b6 bc fe ff       	call   0x1006e380
100826ca:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100826cf:	68 ed 06 00 00       	push   0x6ed
100826d4:	50                   	push   eax
100826d5:	c6 44 24 44 03       	mov    BYTE PTR [esp+0x44],0x3
100826da:	8b 08                	mov    ecx,DWORD PTR [eax]
100826dc:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
100826e2:	83 c4 08             	add    esp,0x8
100826e5:	89 47 44             	mov    DWORD PTR [edi+0x44],eax
100826e8:	6a 01                	push   0x1
100826ea:	6a 01                	push   0x1
100826ec:	8d 4f 48             	lea    ecx,[edi+0x48]
100826ef:	c6 44 24 44 04       	mov    BYTE PTR [esp+0x44],0x4
100826f4:	e8 07 68 fc ff       	call   0x10048f00
100826f9:	6a 58                	push   0x58
100826fb:	c7 07 58 ce 0b 10    	mov    DWORD PTR [edi],0x100bce58
10082701:	89 5f 2c             	mov    DWORD PTR [edi+0x2c],ebx
10082704:	e8 20 12 02 00       	call   0x100a3929
10082709:	83 c4 04             	add    esp,0x4
1008270c:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10082710:	3b c3                	cmp    eax,ebx
10082712:	c6 44 24 3c 05       	mov    BYTE PTR [esp+0x3c],0x5
10082717:	74 10                	je     0x10082729
10082719:	53                   	push   ebx
1008271a:	6a 01                	push   0x1
1008271c:	57                   	push   edi
1008271d:	8b c8                	mov    ecx,eax
1008271f:	e8 7c 2d ff ff       	call   0x100754a0
10082724:	89 47 30             	mov    DWORD PTR [edi+0x30],eax
10082727:	eb 09                	jmp    0x10082732
10082729:	33 c0                	xor    eax,eax
1008272b:	89 47 30             	mov    DWORD PTR [edi+0x30],eax
1008272e:	eb 02                	jmp    0x10082732
10082730:	33 ff                	xor    edi,edi
10082732:	6a 58                	push   0x58
10082734:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
10082738:	89 7e 2c             	mov    DWORD PTR [esi+0x2c],edi
1008273b:	e8 e9 11 02 00       	call   0x100a3929
10082740:	83 c4 04             	add    esp,0x4
10082743:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
10082747:	3b c3                	cmp    eax,ebx
10082749:	c6 44 24 3c 06       	mov    BYTE PTR [esp+0x3c],0x6
1008274e:	74 10                	je     0x10082760
10082750:	8d 54 24 14          	lea    edx,[esp+0x14]
10082754:	8b c8                	mov    ecx,eax
10082756:	52                   	push   edx
10082757:	53                   	push   ebx
10082758:	56                   	push   esi
10082759:	e8 62 e6 ff ff       	call   0x10080dc0
1008275e:	eb 02                	jmp    0x10082762
10082760:	33 c0                	xor    eax,eax
10082762:	6a 70                	push   0x70
10082764:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
10082768:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
1008276b:	e8 b9 11 02 00       	call   0x100a3929
10082770:	83 c4 04             	add    esp,0x4
10082773:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
10082777:	3b c3                	cmp    eax,ebx
10082779:	c6 44 24 3c 07       	mov    BYTE PTR [esp+0x3c],0x7
1008277e:	74 10                	je     0x10082790
10082780:	8d 4c 24 14          	lea    ecx,[esp+0x14]
10082784:	51                   	push   ecx
10082785:	53                   	push   ebx
10082786:	56                   	push   esi
10082787:	8b c8                	mov    ecx,eax
10082789:	e8 92 ab fe ff       	call   0x1006d320
1008278e:	eb 02                	jmp    0x10082792
10082790:	33 c0                	xor    eax,eax
10082792:	6a 60                	push   0x60
10082794:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
10082798:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
1008279b:	e8 89 11 02 00       	call   0x100a3929
100827a0:	83 c4 04             	add    esp,0x4
100827a3:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
100827a7:	3b c3                	cmp    eax,ebx
100827a9:	c6 44 24 3c 08       	mov    BYTE PTR [esp+0x3c],0x8
100827ae:	74 10                	je     0x100827c0
100827b0:	8d 54 24 14          	lea    edx,[esp+0x14]
100827b4:	8b c8                	mov    ecx,eax
100827b6:	52                   	push   edx
100827b7:	53                   	push   ebx
100827b8:	56                   	push   esi
100827b9:	e8 12 ea ff ff       	call   0x100811d0
100827be:	eb 02                	jmp    0x100827c2
100827c0:	33 c0                	xor    eax,eax
100827c2:	68 00 01 00 00       	push   0x100
100827c7:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
100827cb:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
100827ce:	e8 56 11 02 00       	call   0x100a3929
100827d3:	83 c4 04             	add    esp,0x4
100827d6:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
100827da:	3b c3                	cmp    eax,ebx
100827dc:	c6 44 24 3c 09       	mov    BYTE PTR [esp+0x3c],0x9
100827e1:	74 10                	je     0x100827f3
100827e3:	8d 4c 24 14          	lea    ecx,[esp+0x14]
100827e7:	51                   	push   ecx
100827e8:	53                   	push   ebx
100827e9:	56                   	push   esi
100827ea:	8b c8                	mov    ecx,eax
100827ec:	e8 af ed ff ff       	call   0x100815a0
100827f1:	eb 02                	jmp    0x100827f5
100827f3:	33 c0                	xor    eax,eax
100827f5:	68 38 18 00 00       	push   0x1838
100827fa:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
100827fe:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
10082801:	e8 23 11 02 00       	call   0x100a3929
10082806:	83 c4 04             	add    esp,0x4
10082809:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
1008280d:	3b c3                	cmp    eax,ebx
1008280f:	c6 44 24 3c 0a       	mov    BYTE PTR [esp+0x3c],0xa
10082814:	74 10                	je     0x10082826
10082816:	8d 54 24 14          	lea    edx,[esp+0x14]
1008281a:	8b c8                	mov    ecx,eax
1008281c:	52                   	push   edx
1008281d:	53                   	push   ebx
1008281e:	56                   	push   esi
1008281f:	e8 4c 12 00 00       	call   0x10083a70
10082824:	eb 02                	jmp    0x10082828
10082826:	33 c0                	xor    eax,eax
10082828:	6a 2c                	push   0x2c
1008282a:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
1008282e:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10082831:	e8 f3 10 02 00       	call   0x100a3929
10082836:	8b f8                	mov    edi,eax
10082838:	83 c4 04             	add    esp,0x4
1008283b:	89 7c 24 44          	mov    DWORD PTR [esp+0x44],edi
1008283f:	3b fb                	cmp    edi,ebx
10082841:	c6 44 24 3c 0b       	mov    BYTE PTR [esp+0x3c],0xb
10082846:	74 13                	je     0x1008285b
10082848:	53                   	push   ebx
10082849:	6a 21                	push   0x21
1008284b:	56                   	push   esi
1008284c:	8b cf                	mov    ecx,edi
1008284e:	e8 2d bb fe ff       	call   0x1006e380
10082853:	c7 07 e8 cd 0b 10    	mov    DWORD PTR [edi],0x100bcde8
10082859:	eb 02                	jmp    0x1008285d
1008285b:	33 ff                	xor    edi,edi
1008285d:	89 7e 44             	mov    DWORD PTR [esi+0x44],edi
10082860:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
10082866:	6a 34                	push   0x34
10082868:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
1008286c:	8d 04 c9             	lea    eax,[ecx+ecx*8]
1008286f:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
10082873:	8d 14 41             	lea    edx,[ecx+eax*2]
10082876:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008287b:	8d 14 91             	lea    edx,[ecx+edx*4]
1008287e:	f7 e2                	mul    edx
10082880:	a1 48 be 11 10       	mov    eax,ds:0x1011be48
10082885:	c1 ea 09             	shr    edx,0x9
10082888:	2b ca                	sub    ecx,edx
1008288a:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
1008288e:	03 c8                	add    ecx,eax
10082890:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
10082895:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
10082899:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1008289d:	e8 87 10 02 00       	call   0x100a3929
100828a2:	83 c4 04             	add    esp,0x4
100828a5:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
100828a9:	3b c3                	cmp    eax,ebx
100828ab:	c6 44 24 3c 0c       	mov    BYTE PTR [esp+0x3c],0xc
100828b0:	5f                   	pop    edi
100828b1:	74 11                	je     0x100828c4
100828b3:	8d 4c 24 20          	lea    ecx,[esp+0x20]
100828b7:	51                   	push   ecx
100828b8:	6a 01                	push   0x1
100828ba:	56                   	push   esi
100828bb:	8b c8                	mov    ecx,eax
100828bd:	e8 3e 0c 00 00       	call   0x10083500
100828c2:	eb 02                	jmp    0x100828c6
100828c4:	33 c0                	xor    eax,eax
100828c6:	53                   	push   ebx
100828c7:	8b ce                	mov    ecx,esi
100828c9:	88 5c 24 3c          	mov    BYTE PTR [esp+0x3c],bl
100828cd:	89 46 4c             	mov    DWORD PTR [esi+0x4c],eax
100828d0:	c7 46 64 ff ff ff ff 	mov    DWORD PTR [esi+0x64],0xffffffff
100828d7:	c7 46 60 08 00 00 00 	mov    DWORD PTR [esi+0x60],0x8
100828de:	89 5e 54             	mov    DWORD PTR [esi+0x54],ebx
100828e1:	89 5e 58             	mov    DWORD PTR [esi+0x58],ebx
100828e4:	89 5e 5c             	mov    DWORD PTR [esi+0x5c],ebx
100828e7:	e8 04 06 00 00       	call   0x10082ef0
100828ec:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
100828f0:	8b c6                	mov    eax,esi
100828f2:	5e                   	pop    esi
100828f3:	5b                   	pop    ebx
100828f4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100828fb:	83 c4 34             	add    esp,0x34
100828fe:	c2 04 00             	ret    0x4
10082901:	90                   	nop
10082902:	90                   	nop
10082903:	90                   	nop
10082904:	90                   	nop
10082905:	90                   	nop
10082906:	90                   	nop
10082907:	90                   	nop
10082908:	90                   	nop
10082909:	90                   	nop
1008290a:	90                   	nop
1008290b:	90                   	nop
1008290c:	90                   	nop
1008290d:	90                   	nop
1008290e:	90                   	nop
1008290f:	90                   	nop
10082910:	56                   	push   esi
10082911:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
10082915:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10082918:	8b 0e                	mov    ecx,DWORD PTR [esi]
1008291a:	50                   	push   eax
1008291b:	51                   	push   ecx
1008291c:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10082922:	6a ff                	push   0xffffffff
10082924:	6a 00                	push   0x0
10082926:	68 fc c7 11 10       	push   0x1011c7fc
1008292b:	e8 c0 8b fc ff       	call   0x1004b4f0
10082930:	8b 06                	mov    eax,DWORD PTR [esi]
10082932:	8b 0d 10 c8 11 10    	mov    ecx,DWORD PTR ds:0x1011c810
10082938:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008293b:	03 c1                	add    eax,ecx
1008293d:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10082943:	52                   	push   edx
10082944:	50                   	push   eax
10082945:	6a ff                	push   0xffffffff
10082947:	6a 00                	push   0x0
10082949:	68 18 c8 11 10       	push   0x1011c818
1008294e:	e8 9d 8b fc ff       	call   0x1004b4f0
10082953:	5e                   	pop    esi
10082954:	c2 08 00             	ret    0x8
10082957:	90                   	nop
10082958:	90                   	nop
10082959:	90                   	nop
1008295a:	90                   	nop
1008295b:	90                   	nop
1008295c:	90                   	nop
1008295d:	90                   	nop
1008295e:	90                   	nop
1008295f:	90                   	nop
10082960:	56                   	push   esi
10082961:	8b f1                	mov    esi,ecx
10082963:	e8 18 00 00 00       	call   0x10082980
10082968:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1008296d:	74 09                	je     0x10082978
1008296f:	56                   	push   esi
10082970:	e8 a9 0f 02 00       	call   0x100a391e
10082975:	83 c4 04             	add    esp,0x4
10082978:	8b c6                	mov    eax,esi
1008297a:	5e                   	pop    esi
1008297b:	c2 04 00             	ret    0x4
1008297e:	90                   	nop
1008297f:	90                   	nop
10082980:	c7 01 c8 ce 0b 10    	mov    DWORD PTR [ecx],0x100bcec8
10082986:	c7 05 10 43 12 10 00 	mov    DWORD PTR ds:0x10124310,0x0
1008298d:	00 00 00 
10082990:	e9 8b bb fe ff       	jmp    0x1006e520
10082995:	90                   	nop
10082996:	90                   	nop
10082997:	90                   	nop
10082998:	90                   	nop
10082999:	90                   	nop
1008299a:	90                   	nop
1008299b:	90                   	nop
1008299c:	90                   	nop
1008299d:	90                   	nop
1008299e:	90                   	nop
1008299f:	90                   	nop
100829a0:	83 ec 30             	sub    esp,0x30
100829a3:	53                   	push   ebx
100829a4:	55                   	push   ebp
100829a5:	56                   	push   esi
100829a6:	8b f1                	mov    esi,ecx
100829a8:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
100829ae:	8b 1d 58 be 11 10    	mov    ebx,DWORD PTR ds:0x1011be58
100829b4:	57                   	push   edi
100829b5:	33 ff                	xor    edi,edi
100829b7:	8d 04 c9             	lea    eax,[ecx+ecx*8]
100829ba:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
100829be:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
100829c2:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
100829c6:	8d 14 41             	lea    edx,[ecx+eax*2]
100829c9:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
100829ce:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
100829d2:	8d 14 91             	lea    edx,[ecx+edx*4]
100829d5:	f7 e2                	mul    edx
100829d7:	a1 48 be 11 10       	mov    eax,ds:0x1011be48
100829dc:	c1 ea 09             	shr    edx,0x9
100829df:	03 c2                	add    eax,edx
100829e1:	03 d2                	add    edx,edx
100829e3:	2b ca                	sub    ecx,edx
100829e5:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
100829e9:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
100829ed:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
100829f1:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
100829f7:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
100829fb:	a1 4c be 11 10       	mov    eax,ds:0x1011be4c
10082a00:	8d 54 24 10          	lea    edx,[esp+0x10]
10082a04:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
10082a08:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
10082a0b:	52                   	push   edx
10082a0c:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10082a10:	e8 3b bc fe ff       	call   0x1006e650
10082a15:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
10082a18:	8d 44 24 10          	lea    eax,[esp+0x10]
10082a1c:	50                   	push   eax
10082a1d:	e8 2e bc fe ff       	call   0x1006e650
10082a22:	8d 4c 24 10          	lea    ecx,[esp+0x10]
10082a26:	51                   	push   ecx
10082a27:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10082a2a:	e8 21 bc fe ff       	call   0x1006e650
10082a2f:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10082a32:	8d 54 24 10          	lea    edx,[esp+0x10]
10082a36:	52                   	push   edx
10082a37:	e8 14 bc fe ff       	call   0x1006e650
10082a3c:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
10082a42:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10082a47:	8b 3d 1c a0 0d 10    	mov    edi,DWORD PTR ds:0x100da01c
10082a4d:	8d 14 09             	lea    edx,[ecx+ecx*1]
10082a50:	f7 e2                	mul    edx
10082a52:	8b da                	mov    ebx,edx
10082a54:	8d 14 3f             	lea    edx,[edi+edi*1]
10082a57:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10082a5c:	f7 e2                	mul    edx
10082a5e:	d1 eb                	shr    ebx,1
10082a60:	8b c3                	mov    eax,ebx
10082a62:	8b ea                	mov    ebp,edx
10082a64:	99                   	cdq
10082a65:	2b c2                	sub    eax,edx
10082a67:	8b 15 4c be 11 10    	mov    edx,DWORD PTR ds:0x1011be4c
10082a6d:	d1 e9                	shr    ecx,1
10082a6f:	d1 f8                	sar    eax,1
10082a71:	d1 ed                	shr    ebp,1
10082a73:	2b c8                	sub    ecx,eax
10082a75:	8b c5                	mov    eax,ebp
10082a77:	03 ca                	add    ecx,edx
10082a79:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
10082a7d:	8b 1d 48 be 11 10    	mov    ebx,DWORD PTR ds:0x1011be48
10082a83:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10082a87:	99                   	cdq
10082a88:	2b c2                	sub    eax,edx
10082a8a:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
10082a8d:	d1 ef                	shr    edi,1
10082a8f:	d1 f8                	sar    eax,1
10082a91:	2b f8                	sub    edi,eax
10082a93:	8d 44 24 10          	lea    eax,[esp+0x10]
10082a97:	03 fb                	add    edi,ebx
10082a99:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
10082a9d:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
10082aa1:	50                   	push   eax
10082aa2:	e8 a9 bb fe ff       	call   0x1006e650
10082aa7:	8d 4c 24 20          	lea    ecx,[esp+0x20]
10082aab:	51                   	push   ecx
10082aac:	8b 4e 40             	mov    ecx,DWORD PTR [esi+0x40]
10082aaf:	e8 9c bb fe ff       	call   0x1006e650
10082ab4:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
10082aba:	8b 1d 48 be 11 10    	mov    ebx,DWORD PTR ds:0x1011be48
10082ac0:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
10082ac7:	00 
10082ac8:	8d 14 c9             	lea    edx,[ecx+ecx*8]
10082acb:	8d 04 51             	lea    eax,[ecx+edx*2]
10082ace:	8d 14 81             	lea    edx,[ecx+eax*4]
10082ad1:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10082ad6:	f7 e2                	mul    edx
10082ad8:	c1 ea 09             	shr    edx,0x9
10082adb:	a1 58 be 11 10       	mov    eax,ds:0x1011be58
10082ae0:	2b ca                	sub    ecx,edx
10082ae2:	03 cb                	add    ecx,ebx
10082ae4:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
10082ae8:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
10082aec:	8d 4c 24 30          	lea    ecx,[esp+0x30]
10082af0:	51                   	push   ecx
10082af1:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
10082af4:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
10082af8:	e8 53 bb fe ff       	call   0x1006e650
10082afd:	8b 15 10 c8 11 10    	mov    edx,DWORD PTR ds:0x1011c810
10082b03:	a1 2c c8 11 10       	mov    eax,ds:0x1011c82c
10082b08:	8b 0d 14 c8 11 10    	mov    ecx,DWORD PTR ds:0x1011c814
10082b0e:	03 c2                	add    eax,edx
10082b10:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10082b14:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
10082b18:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
10082b1e:	99                   	cdq
10082b1f:	2b c2                	sub    eax,edx
10082b21:	8b 15 4c be 11 10    	mov    edx,DWORD PTR ds:0x1011be4c
10082b27:	d1 e9                	shr    ecx,1
10082b29:	d1 f8                	sar    eax,1
10082b2b:	2b c8                	sub    ecx,eax
10082b2d:	8d 44 24 10          	lea    eax,[esp+0x10]
10082b31:	03 ca                	add    ecx,edx
10082b33:	8b 15 48 be 11 10    	mov    edx,DWORD PTR ds:0x1011be48
10082b39:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10082b3d:	8b 4e 44             	mov    ecx,DWORD PTR [esi+0x44]
10082b40:	50                   	push   eax
10082b41:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10082b45:	e8 06 bb fe ff       	call   0x1006e650
10082b4a:	5f                   	pop    edi
10082b4b:	5e                   	pop    esi
10082b4c:	5d                   	pop    ebp
10082b4d:	5b                   	pop    ebx
10082b4e:	83 c4 30             	add    esp,0x30
10082b51:	c2 04 00             	ret    0x4
10082b54:	90                   	nop
10082b55:	90                   	nop
10082b56:	90                   	nop
10082b57:	90                   	nop
10082b58:	90                   	nop
10082b59:	90                   	nop
10082b5a:	90                   	nop
10082b5b:	90                   	nop
10082b5c:	90                   	nop
10082b5d:	90                   	nop
10082b5e:	90                   	nop
10082b5f:	90                   	nop
10082b60:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082b65:	6a 00                	push   0x0
10082b67:	6a 03                	push   0x3
10082b69:	6a 00                	push   0x0
10082b6b:	ff 50 40             	call   DWORD PTR [eax+0x40]
10082b6e:	83 c4 0c             	add    esp,0xc
10082b71:	c2 08 00             	ret    0x8
10082b74:	90                   	nop
10082b75:	90                   	nop
10082b76:	90                   	nop
10082b77:	90                   	nop
10082b78:	90                   	nop
10082b79:	90                   	nop
10082b7a:	90                   	nop
10082b7b:	90                   	nop
10082b7c:	90                   	nop
10082b7d:	90                   	nop
10082b7e:	90                   	nop
10082b7f:	90                   	nop
10082b80:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10082b84:	33 c0                	xor    eax,eax
10082b86:	83 f9 35             	cmp    ecx,0x35
10082b89:	75 0a                	jne    0x10082b95
10082b8b:	e8 20 e4 fc ff       	call   0x10050fb0
10082b90:	b8 01 00 00 00       	mov    eax,0x1
10082b95:	c2 04 00             	ret    0x4
10082b98:	90                   	nop
10082b99:	90                   	nop
10082b9a:	90                   	nop
10082b9b:	90                   	nop
10082b9c:	90                   	nop
10082b9d:	90                   	nop
10082b9e:	90                   	nop
10082b9f:	90                   	nop
10082ba0:	53                   	push   ebx
10082ba1:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
10082ba5:	56                   	push   esi
10082ba6:	8b f1                	mov    esi,ecx
10082ba8:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
10082bab:	83 f8 02             	cmp    eax,0x2
10082bae:	75 10                	jne    0x10082bc0
10082bb0:	83 fb 03             	cmp    ebx,0x3
10082bb3:	75 0b                	jne    0x10082bc0
10082bb5:	8b 4e 58             	mov    ecx,DWORD PTR [esi+0x58]
10082bb8:	85 c9                	test   ecx,ecx
10082bba:	0f 84 25 01 00 00    	je     0x10082ce5
10082bc0:	83 f8 04             	cmp    eax,0x4
10082bc3:	75 10                	jne    0x10082bd5
10082bc5:	83 fb 05             	cmp    ebx,0x5
10082bc8:	75 0b                	jne    0x10082bd5
10082bca:	8b 4e 5c             	mov    ecx,DWORD PTR [esi+0x5c]
10082bcd:	85 c9                	test   ecx,ecx
10082bcf:	0f 84 10 01 00 00    	je     0x10082ce5
10082bd5:	83 f8 01             	cmp    eax,0x1
10082bd8:	75 0a                	jne    0x10082be4
10082bda:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10082bdd:	6a 00                	push   0x0
10082bdf:	e8 2c 7f fe ff       	call   0x1006ab10
10082be4:	83 fb 05             	cmp    ebx,0x5
10082be7:	57                   	push   edi
10082be8:	0f 87 cc 00 00 00    	ja     0x10082cba
10082bee:	ff 24 9d ec 2c 08 10 	jmp    DWORD PTR [ebx*4+0x10082cec]
10082bf5:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082bfa:	68 ed 06 00 00       	push   0x6ed
10082bff:	8b 08                	mov    ecx,DWORD PTR [eax]
10082c01:	e9 81 00 00 00       	jmp    0x10082c87
10082c06:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082c0b:	68 ec 06 00 00       	push   0x6ec
10082c10:	50                   	push   eax
10082c11:	8b 08                	mov    ecx,DWORD PTR [eax]
10082c13:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10082c19:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082c1f:	83 c4 08             	add    esp,0x8
10082c22:	8b f8                	mov    edi,eax
10082c24:	8b 11                	mov    edx,DWORD PTR [ecx]
10082c26:	57                   	push   edi
10082c27:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10082c2d:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10082c30:	50                   	push   eax
10082c31:	e8 2a 6d ff ff       	call   0x10079960
10082c36:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082c3c:	57                   	push   edi
10082c3d:	8b 01                	mov    eax,DWORD PTR [ecx]
10082c3f:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10082c45:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10082c48:	6a 01                	push   0x1
10082c4a:	e8 c1 7e fe ff       	call   0x1006ab10
10082c4f:	eb 69                	jmp    0x10082cba
10082c51:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082c56:	68 f3 06 00 00       	push   0x6f3
10082c5b:	8b 08                	mov    ecx,DWORD PTR [eax]
10082c5d:	eb 28                	jmp    0x10082c87
10082c5f:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082c64:	68 f2 06 00 00       	push   0x6f2
10082c69:	8b 08                	mov    ecx,DWORD PTR [eax]
10082c6b:	eb 1a                	jmp    0x10082c87
10082c6d:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082c72:	68 f1 06 00 00       	push   0x6f1
10082c77:	8b 08                	mov    ecx,DWORD PTR [eax]
10082c79:	eb 0c                	jmp    0x10082c87
10082c7b:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082c80:	68 eb 06 00 00       	push   0x6eb
10082c85:	8b 08                	mov    ecx,DWORD PTR [eax]
10082c87:	50                   	push   eax
10082c88:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10082c8e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082c94:	83 c4 08             	add    esp,0x8
10082c97:	8b f8                	mov    edi,eax
10082c99:	8b 11                	mov    edx,DWORD PTR [ecx]
10082c9b:	57                   	push   edi
10082c9c:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10082ca2:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10082ca5:	50                   	push   eax
10082ca6:	e8 b5 6c ff ff       	call   0x10079960
10082cab:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082cb1:	57                   	push   edi
10082cb2:	8b 01                	mov    eax,DWORD PTR [ecx]
10082cb4:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10082cba:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
10082cbd:	5f                   	pop    edi
10082cbe:	83 f8 09             	cmp    eax,0x9
10082cc1:	74 0d                	je     0x10082cd0
10082cc3:	8b 4c 86 2c          	mov    ecx,DWORD PTR [esi+eax*4+0x2c]
10082cc7:	6a 03                	push   0x3
10082cc9:	6a 00                	push   0x0
10082ccb:	e8 b0 ba fe ff       	call   0x1006e780
10082cd0:	83 fb 09             	cmp    ebx,0x9
10082cd3:	74 10                	je     0x10082ce5
10082cd5:	8b 4c 9e 2c          	mov    ecx,DWORD PTR [esi+ebx*4+0x2c]
10082cd9:	6a 00                	push   0x0
10082cdb:	6a 03                	push   0x3
10082cdd:	e8 9e ba fe ff       	call   0x1006e780
10082ce2:	89 5e 48             	mov    DWORD PTR [esi+0x48],ebx
10082ce5:	5e                   	pop    esi
10082ce6:	5b                   	pop    ebx
10082ce7:	c2 04 00             	ret    0x4
10082cea:	8b ff                	mov    edi,edi
10082cec:	f5                   	cmc
10082ced:	2b 08                	sub    ecx,DWORD PTR [eax]
10082cef:	10 06                	adc    BYTE PTR [esi],al
10082cf1:	2c 08                	sub    al,0x8
10082cf3:	10 51 2c             	adc    BYTE PTR [ecx+0x2c],dl
10082cf6:	08 10                	or     BYTE PTR [eax],dl
10082cf8:	5f                   	pop    edi
10082cf9:	2c 08                	sub    al,0x8
10082cfb:	10 6d 2c             	adc    BYTE PTR [ebp+0x2c],ch
10082cfe:	08 10                	or     BYTE PTR [eax],dl
10082d00:	7b 2c                	jnp    0x10082d2e
10082d02:	08 10                	or     BYTE PTR [eax],dl
10082d04:	90                   	nop
10082d05:	90                   	nop
10082d06:	90                   	nop
10082d07:	90                   	nop
10082d08:	90                   	nop
10082d09:	90                   	nop
10082d0a:	90                   	nop
10082d0b:	90                   	nop
10082d0c:	90                   	nop
10082d0d:	90                   	nop
10082d0e:	90                   	nop
10082d0f:	90                   	nop
10082d10:	53                   	push   ebx
10082d11:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
10082d15:	56                   	push   esi
10082d16:	8b f1                	mov    esi,ecx
10082d18:	57                   	push   edi
10082d19:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
10082d1c:	3b c3                	cmp    eax,ebx
10082d1e:	74 08                	je     0x10082d28
10082d20:	5f                   	pop    edi
10082d21:	5e                   	pop    esi
10082d22:	33 c0                	xor    eax,eax
10082d24:	5b                   	pop    ebx
10082d25:	c2 08 00             	ret    0x8
10082d28:	48                   	dec    eax
10082d29:	83 f8 04             	cmp    eax,0x4
10082d2c:	0f 87 8d 01 00 00    	ja     0x10082ebf
10082d32:	ff 24 85 d8 2e 08 10 	jmp    DWORD PTR [eax*4+0x10082ed8]
10082d39:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10082d3d:	85 c0                	test   eax,eax
10082d3f:	0f 84 7a 01 00 00    	je     0x10082ebf
10082d45:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
10082d48:	85 c0                	test   eax,eax
10082d4a:	75 73                	jne    0x10082dbf
10082d4c:	83 7e 64 ff          	cmp    DWORD PTR [esi+0x64],0xffffffff
10082d50:	75 08                	jne    0x10082d5a
10082d52:	5f                   	pop    edi
10082d53:	5e                   	pop    esi
10082d54:	33 c0                	xor    eax,eax
10082d56:	5b                   	pop    ebx
10082d57:	c2 08 00             	ret    0x8
10082d5a:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
10082d5f:	8b 88 c8 81 01 00    	mov    ecx,DWORD PTR [eax+0x181c8]
10082d65:	85 c9                	test   ecx,ecx
10082d67:	75 08                	jne    0x10082d71
10082d69:	5f                   	pop    edi
10082d6a:	5e                   	pop    esi
10082d6b:	33 c0                	xor    eax,eax
10082d6d:	5b                   	pop    ebx
10082d6e:	c2 08 00             	ret    0x8
10082d71:	8b 11                	mov    edx,DWORD PTR [ecx]
10082d73:	ff 52 18             	call   DWORD PTR [edx+0x18]
10082d76:	39 46 64             	cmp    DWORD PTR [esi+0x64],eax
10082d79:	0f 84 40 01 00 00    	je     0x10082ebf
10082d7f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082d85:	6a 34                	push   0x34
10082d87:	8b 01                	mov    eax,DWORD PTR [ecx]
10082d89:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
10082d8f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082d95:	8b f8                	mov    edi,eax
10082d97:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
10082d9a:	8b 11                	mov    edx,DWORD PTR [ecx]
10082d9c:	50                   	push   eax
10082d9d:	57                   	push   edi
10082d9e:	ff 52 10             	call   DWORD PTR [edx+0x10]
10082da1:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082da7:	57                   	push   edi
10082da8:	8b 11                	mov    edx,DWORD PTR [ecx]
10082daa:	ff 92 94 01 00 00    	call   DWORD PTR [edx+0x194]
10082db0:	c7 46 54 01 00 00 00 	mov    DWORD PTR [esi+0x54],0x1
10082db7:	5f                   	pop    edi
10082db8:	5e                   	pop    esi
10082db9:	33 c0                	xor    eax,eax
10082dbb:	5b                   	pop    ebx
10082dbc:	c2 08 00             	ret    0x8
10082dbf:	8b 46 58             	mov    eax,DWORD PTR [esi+0x58]
10082dc2:	85 c0                	test   eax,eax
10082dc4:	0f 85 f5 00 00 00    	jne    0x10082ebf
10082dca:	5f                   	pop    edi
10082dcb:	5e                   	pop    esi
10082dcc:	33 c0                	xor    eax,eax
10082dce:	5b                   	pop    ebx
10082dcf:	c2 08 00             	ret    0x8
10082dd2:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10082dd6:	85 c0                	test   eax,eax
10082dd8:	0f 84 e1 00 00 00    	je     0x10082ebf
10082dde:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
10082de1:	85 c0                	test   eax,eax
10082de3:	75 76                	jne    0x10082e5b
10082de5:	83 7e 60 08          	cmp    DWORD PTR [esi+0x60],0x8
10082de9:	75 08                	jne    0x10082df3
10082deb:	5f                   	pop    edi
10082dec:	5e                   	pop    esi
10082ded:	33 c0                	xor    eax,eax
10082def:	5b                   	pop    ebx
10082df0:	c2 08 00             	ret    0x8
10082df3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082df9:	8d 44 24 14          	lea    eax,[esp+0x14]
10082dfd:	50                   	push   eax
10082dfe:	ff 51 28             	call   DWORD PTR [ecx+0x28]
10082e01:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
10082e07:	83 c4 04             	add    esp,0x4
10082e0a:	8b ba c8 81 01 00    	mov    edi,DWORD PTR [edx+0x181c8]
10082e10:	8b cf                	mov    ecx,edi
10082e12:	8b 07                	mov    eax,DWORD PTR [edi]
10082e14:	ff 50 18             	call   DWORD PTR [eax+0x18]
10082e17:	8b 17                	mov    edx,DWORD PTR [edi]
10082e19:	8b cf                	mov    ecx,edi
10082e1b:	ff 52 40             	call   DWORD PTR [edx+0x40]
10082e1e:	3b 46 60             	cmp    eax,DWORD PTR [esi+0x60]
10082e21:	74 38                	je     0x10082e5b
10082e23:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082e29:	6a 35                	push   0x35
10082e2b:	8b 01                	mov    eax,DWORD PTR [ecx]
10082e2d:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
10082e33:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082e39:	8b f8                	mov    edi,eax
10082e3b:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
10082e3e:	8b 11                	mov    edx,DWORD PTR [ecx]
10082e40:	50                   	push   eax
10082e41:	57                   	push   edi
10082e42:	ff 52 10             	call   DWORD PTR [edx+0x10]
10082e45:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082e4b:	57                   	push   edi
10082e4c:	8b 11                	mov    edx,DWORD PTR [ecx]
10082e4e:	ff 92 94 01 00 00    	call   DWORD PTR [edx+0x194]
10082e54:	c7 46 54 01 00 00 00 	mov    DWORD PTR [esi+0x54],0x1
10082e5b:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
10082e5e:	85 c0                	test   eax,eax
10082e60:	75 08                	jne    0x10082e6a
10082e62:	5f                   	pop    edi
10082e63:	5e                   	pop    esi
10082e64:	33 c0                	xor    eax,eax
10082e66:	5b                   	pop    ebx
10082e67:	c2 08 00             	ret    0x8
10082e6a:	83 7e 60 07          	cmp    DWORD PTR [esi+0x60],0x7
10082e6e:	75 4f                	jne    0x10082ebf
10082e70:	6a 05                	push   0x5
10082e72:	e8 99 df fc ff       	call   0x10050e10
10082e77:	83 c4 04             	add    esp,0x4
10082e7a:	e8 91 e0 fc ff       	call   0x10050f10
10082e7f:	eb 3e                	jmp    0x10082ebf
10082e81:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10082e85:	85 c0                	test   eax,eax
10082e87:	74 36                	je     0x10082ebf
10082e89:	8b 4e 40             	mov    ecx,DWORD PTR [esi+0x40]
10082e8c:	e8 ef 2c 00 00       	call   0x10085b80
10082e91:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082e97:	68 92 00 00 00       	push   0x92
10082e9c:	8b 01                	mov    eax,DWORD PTR [ecx]
10082e9e:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
10082ea4:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082eaa:	50                   	push   eax
10082eab:	8b 11                	mov    edx,DWORD PTR [ecx]
10082ead:	ff 92 94 01 00 00    	call   DWORD PTR [edx+0x194]
10082eb3:	eb 0a                	jmp    0x10082ebf
10082eb5:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10082eb8:	6a 00                	push   0x0
10082eba:	e8 51 7c fe ff       	call   0x1006ab10
10082ebf:	8b 4c 9e 2c          	mov    ecx,DWORD PTR [esi+ebx*4+0x2c]
10082ec3:	6a 03                	push   0x3
10082ec5:	6a 00                	push   0x0
10082ec7:	e8 b4 b8 fe ff       	call   0x1006e780
10082ecc:	5f                   	pop    edi
10082ecd:	5e                   	pop    esi
10082ece:	b8 01 00 00 00       	mov    eax,0x1
10082ed3:	5b                   	pop    ebx
10082ed4:	c2 08 00             	ret    0x8
10082ed7:	90                   	nop
10082ed8:	b5 2e                	mov    ch,0x2e
10082eda:	08 10                	or     BYTE PTR [eax],dl
10082edc:	39 2d 08 10 bf 2e    	cmp    DWORD PTR ds:0x2ebf1008,ebp
10082ee2:	08 10                	or     BYTE PTR [eax],dl
10082ee4:	d2 2d 08 10 81 2e    	shr    BYTE PTR ds:0x2e811008,cl
10082eea:	08 10                	or     BYTE PTR [eax],dl
10082eec:	90                   	nop
10082eed:	90                   	nop
10082eee:	90                   	nop
10082eef:	90                   	nop
10082ef0:	53                   	push   ebx
10082ef1:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
10082ef5:	56                   	push   esi
10082ef6:	83 fb 09             	cmp    ebx,0x9
10082ef9:	8b f1                	mov    esi,ecx
10082efb:	0f 84 e7 00 00 00    	je     0x10082fe8
10082f01:	83 fb 05             	cmp    ebx,0x5
10082f04:	57                   	push   edi
10082f05:	0f 87 cc 00 00 00    	ja     0x10082fd7
10082f0b:	ff 24 9d f0 2f 08 10 	jmp    DWORD PTR [ebx*4+0x10082ff0]
10082f12:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082f17:	68 ed 06 00 00       	push   0x6ed
10082f1c:	8b 08                	mov    ecx,DWORD PTR [eax]
10082f1e:	e9 81 00 00 00       	jmp    0x10082fa4
10082f23:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082f28:	68 ec 06 00 00       	push   0x6ec
10082f2d:	50                   	push   eax
10082f2e:	8b 08                	mov    ecx,DWORD PTR [eax]
10082f30:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10082f36:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082f3c:	83 c4 08             	add    esp,0x8
10082f3f:	8b f8                	mov    edi,eax
10082f41:	8b 11                	mov    edx,DWORD PTR [ecx]
10082f43:	57                   	push   edi
10082f44:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10082f4a:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10082f4d:	50                   	push   eax
10082f4e:	e8 0d 6a ff ff       	call   0x10079960
10082f53:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082f59:	57                   	push   edi
10082f5a:	8b 01                	mov    eax,DWORD PTR [ecx]
10082f5c:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10082f62:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10082f65:	6a 01                	push   0x1
10082f67:	e8 a4 7b fe ff       	call   0x1006ab10
10082f6c:	eb 69                	jmp    0x10082fd7
10082f6e:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082f73:	68 f3 06 00 00       	push   0x6f3
10082f78:	8b 08                	mov    ecx,DWORD PTR [eax]
10082f7a:	eb 28                	jmp    0x10082fa4
10082f7c:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082f81:	68 f2 06 00 00       	push   0x6f2
10082f86:	8b 08                	mov    ecx,DWORD PTR [eax]
10082f88:	eb 1a                	jmp    0x10082fa4
10082f8a:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082f8f:	68 f1 06 00 00       	push   0x6f1
10082f94:	8b 08                	mov    ecx,DWORD PTR [eax]
10082f96:	eb 0c                	jmp    0x10082fa4
10082f98:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10082f9d:	68 eb 06 00 00       	push   0x6eb
10082fa2:	8b 08                	mov    ecx,DWORD PTR [eax]
10082fa4:	50                   	push   eax
10082fa5:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10082fab:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082fb1:	83 c4 08             	add    esp,0x8
10082fb4:	8b f8                	mov    edi,eax
10082fb6:	8b 11                	mov    edx,DWORD PTR [ecx]
10082fb8:	57                   	push   edi
10082fb9:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10082fbf:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10082fc2:	50                   	push   eax
10082fc3:	e8 98 69 ff ff       	call   0x10079960
10082fc8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10082fce:	57                   	push   edi
10082fcf:	8b 01                	mov    eax,DWORD PTR [ecx]
10082fd1:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10082fd7:	8b 4c 9e 2c          	mov    ecx,DWORD PTR [esi+ebx*4+0x2c]
10082fdb:	6a 00                	push   0x0
10082fdd:	6a 03                	push   0x3
10082fdf:	e8 9c b7 fe ff       	call   0x1006e780
10082fe4:	89 5e 48             	mov    DWORD PTR [esi+0x48],ebx
10082fe7:	5f                   	pop    edi
10082fe8:	5e                   	pop    esi
10082fe9:	5b                   	pop    ebx
10082fea:	c2 04 00             	ret    0x4

*/
void ClassSelectScreen::GetNextAvailableSpecialty() {
    // TODO: Implement GetNextAvailableSpecialty
}

