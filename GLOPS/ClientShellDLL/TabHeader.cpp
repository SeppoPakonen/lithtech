#include "TabHeader.h"

// 0x10072670: TabHeader::AddTab
/*
10072670:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10072676:	6a ff                	push   0xffffffff
10072678:	68 63 62 0b 10       	push   0x100b6263
1007267d:	50                   	push   eax
1007267e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10072685:	83 ec 14             	sub    esp,0x14
10072688:	57                   	push   edi
10072689:	8b f9                	mov    edi,ecx
1007268b:	83 7f 58 08          	cmp    DWORD PTR [edi+0x58],0x8
1007268f:	7c 49                	jl     0x100726da
10072691:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10072697:	68 ec 07 00 00       	push   0x7ec
1007269c:	68 f8 d6 0d 10       	push   0x100dd6f8
100726a1:	8b 01                	mov    eax,DWORD PTR [ecx]
100726a3:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
100726a9:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100726ae:	6a 08                	push   0x8
100726b0:	68 30 d7 0d 10       	push   0x100dd730
100726b5:	68 7c 5d 0c 10       	push   0x100c5d7c
100726ba:	8b 08                	mov    ecx,DWORD PTR [eax]
100726bc:	50                   	push   eax
100726bd:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
100726c3:	83 c4 10             	add    esp,0x10
100726c6:	33 c0                	xor    eax,eax
100726c8:	5f                   	pop    edi
100726c9:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
100726cd:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100726d4:	83 c4 20             	add    esp,0x20
100726d7:	c2 08 00             	ret    0x8
100726da:	53                   	push   ebx
100726db:	55                   	push   ebp
100726dc:	56                   	push   esi
100726dd:	6a 7c                	push   0x7c
100726df:	e8 45 12 03 00       	call   0x100a3929
100726e4:	8b f0                	mov    esi,eax
100726e6:	83 c4 04             	add    esp,0x4
100726e9:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
100726ed:	33 db                	xor    ebx,ebx
100726ef:	3b f3                	cmp    esi,ebx
100726f1:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
100726f5:	74 49                	je     0x10072740
100726f7:	53                   	push   ebx
100726f8:	6a 01                	push   0x1
100726fa:	57                   	push   edi
100726fb:	8b ce                	mov    ecx,esi
100726fd:	e8 7e bc ff ff       	call   0x1006e380
10072702:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
10072706:	8d 6e 3c             	lea    ebp,[esi+0x3c]
10072709:	6a 3f                	push   0x3f
1007270b:	68 00 d0 10 10       	push   0x1010d000
10072710:	55                   	push   ebp
10072711:	c7 06 c0 be 0b 10    	mov    DWORD PTR [esi],0x100bbec0
10072717:	89 5e 34             	mov    DWORD PTR [esi+0x34],ebx
1007271a:	89 56 38             	mov    DWORD PTR [esi+0x38],edx
1007271d:	e8 fe 10 03 00       	call   0x100a3820
10072722:	88 5d 3f             	mov    BYTE PTR [ebp+0x3f],bl
10072725:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10072728:	83 c4 0c             	add    esp,0xc
1007272b:	24 fe                	and    al,0xfe
1007272d:	c7 46 2c fc ce 11 10 	mov    DWORD PTR [esi+0x2c],0x1011cefc
10072734:	c7 46 30 18 cf 11 10 	mov    DWORD PTR [esi+0x30],0x1011cf18
1007273b:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
1007273e:	eb 02                	jmp    0x10072742
10072740:	33 f6                	xor    esi,esi
10072742:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
10072746:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
1007274d:	ff 
1007274e:	3b c3                	cmp    eax,ebx
10072750:	75 05                	jne    0x10072757
10072752:	b8 00 d0 10 10       	mov    eax,0x1010d000
10072757:	8d 6e 3c             	lea    ebp,[esi+0x3c]
1007275a:	6a 3f                	push   0x3f
1007275c:	50                   	push   eax
1007275d:	55                   	push   ebp
1007275e:	e8 bd 10 03 00       	call   0x100a3820
10072763:	88 5d 3f             	mov    BYTE PTR [ebp+0x3f],bl
10072766:	8b 47 58             	mov    eax,DWORD PTR [edi+0x58]
10072769:	83 c4 0c             	add    esp,0xc
1007276c:	89 74 87 34          	mov    DWORD PTR [edi+eax*4+0x34],esi
10072770:	8b 4f 58             	mov    ecx,DWORD PTR [edi+0x58]
10072773:	41                   	inc    ecx
10072774:	8b c1                	mov    eax,ecx
10072776:	89 4f 58             	mov    DWORD PTR [edi+0x58],ecx
10072779:	83 f8 01             	cmp    eax,0x1
1007277c:	75 11                	jne    0x1007278f
1007277e:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
10072782:	8b 17                	mov    edx,DWORD PTR [edi]
10072784:	50                   	push   eax
10072785:	8b cf                	mov    ecx,edi
10072787:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007278d:	eb 0c                	jmp    0x1007279b
1007278f:	8b 4f 54             	mov    ecx,DWORD PTR [edi+0x54]
10072792:	3b cb                	cmp    ecx,ebx
10072794:	74 05                	je     0x1007279b
10072796:	e8 15 c3 ff ff       	call   0x1006eab0
1007279b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1007279f:	51                   	push   ecx
100727a0:	8b cf                	mov    ecx,edi
100727a2:	e8 19 bf ff ff       	call   0x1006e6c0
100727a7:	8b 17                	mov    edx,DWORD PTR [edi]
100727a9:	8d 44 24 14          	lea    eax,[esp+0x14]
100727ad:	50                   	push   eax
100727ae:	8b cf                	mov    ecx,edi
100727b0:	ff 52 54             	call   DWORD PTR [edx+0x54]
100727b3:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
100727b7:	5e                   	pop    esi
100727b8:	5d                   	pop    ebp
100727b9:	5b                   	pop    ebx
100727ba:	b8 01 00 00 00       	mov    eax,0x1
100727bf:	5f                   	pop    edi
100727c0:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100727c7:	83 c4 20             	add    esp,0x20
100727ca:	c2 08 00             	ret    0x8
100727cd:	90                   	nop
100727ce:	90                   	nop
100727cf:	90                   	nop
100727d0:	8b 41 54             	mov    eax,DWORD PTR [ecx+0x54]
100727d3:	85 c0                	test   eax,eax
100727d5:	74 04                	je     0x100727db
100727d7:	8b 40 38             	mov    eax,DWORD PTR [eax+0x38]
100727da:	c3                   	ret
100727db:	83 c8 ff             	or     eax,0xffffffff
100727de:	c3                   	ret
100727df:	90                   	nop
100727e0:	53                   	push   ebx
100727e1:	56                   	push   esi
100727e2:	8b 71 58             	mov    esi,DWORD PTR [ecx+0x58]
100727e5:	33 c0                	xor    eax,eax
100727e7:	57                   	push   edi
100727e8:	85 f6                	test   esi,esi
100727ea:	7e 16                	jle    0x10072802
100727ec:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
100727f0:	8d 51 34             	lea    edx,[ecx+0x34]
100727f3:	8b 1a                	mov    ebx,DWORD PTR [edx]
100727f5:	39 7b 38             	cmp    DWORD PTR [ebx+0x38],edi
100727f8:	74 10                	je     0x1007280a
100727fa:	40                   	inc    eax
100727fb:	83 c2 04             	add    edx,0x4
100727fe:	3b c6                	cmp    eax,esi
10072800:	7c f1                	jl     0x100727f3
10072802:	5f                   	pop    edi
10072803:	5e                   	pop    esi
10072804:	33 c0                	xor    eax,eax
10072806:	5b                   	pop    ebx
10072807:	c2 04 00             	ret    0x4
1007280a:	8b 44 81 34          	mov    eax,DWORD PTR [ecx+eax*4+0x34]
1007280e:	85 c0                	test   eax,eax
10072810:	74 f0                	je     0x10072802
10072812:	5f                   	pop    edi
10072813:	5e                   	pop    esi
10072814:	83 c0 3c             	add    eax,0x3c
10072817:	5b                   	pop    ebx
10072818:	c2 04 00             	ret    0x4
1007281b:	90                   	nop
1007281c:	90                   	nop
1007281d:	90                   	nop
1007281e:	90                   	nop
1007281f:	90                   	nop
10072820:	53                   	push   ebx
10072821:	55                   	push   ebp
10072822:	56                   	push   esi
10072823:	57                   	push   edi
10072824:	8b f9                	mov    edi,ecx
10072826:	33 c0                	xor    eax,eax
10072828:	8b 57 58             	mov    edx,DWORD PTR [edi+0x58]
1007282b:	85 d2                	test   edx,edx
1007282d:	7e 27                	jle    0x10072856
1007282f:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
10072833:	8d 4f 34             	lea    ecx,[edi+0x34]
10072836:	8b 31                	mov    esi,DWORD PTR [ecx]
10072838:	39 5e 38             	cmp    DWORD PTR [esi+0x38],ebx
1007283b:	74 11                	je     0x1007284e
1007283d:	40                   	inc    eax
1007283e:	83 c1 04             	add    ecx,0x4
10072841:	3b c2                	cmp    eax,edx
10072843:	7c f1                	jl     0x10072836
10072845:	5f                   	pop    edi
10072846:	5e                   	pop    esi
10072847:	5d                   	pop    ebp
10072848:	33 c0                	xor    eax,eax
1007284a:	5b                   	pop    ebx
1007284b:	c2 04 00             	ret    0x4
1007284e:	8b 74 87 34          	mov    esi,DWORD PTR [edi+eax*4+0x34]
10072852:	85 f6                	test   esi,esi
10072854:	75 09                	jne    0x1007285f
10072856:	5f                   	pop    edi
10072857:	5e                   	pop    esi
10072858:	5d                   	pop    ebp
10072859:	33 c0                	xor    eax,eax
1007285b:	5b                   	pop    ebx
1007285c:	c2 04 00             	ret    0x4
1007285f:	8b 47 54             	mov    eax,DWORD PTR [edi+0x54]
10072862:	85 c0                	test   eax,eax
10072864:	74 17                	je     0x1007287d
10072866:	8b 48 34             	mov    ecx,DWORD PTR [eax+0x34]
10072869:	c7 40 2c fc ce 11 10 	mov    DWORD PTR [eax+0x2c],0x1011cefc
10072870:	83 e1 fe             	and    ecx,0xfffffffe
10072873:	c7 40 30 18 cf 11 10 	mov    DWORD PTR [eax+0x30],0x1011cf18
1007287a:	89 48 34             	mov    DWORD PTR [eax+0x34],ecx
1007287d:	8b 6e 34             	mov    ebp,DWORD PTR [esi+0x34]
10072880:	8b ce                	mov    ecx,esi
10072882:	83 cd 01             	or     ebp,0x1
10072885:	c7 46 2c 34 cf 11 10 	mov    DWORD PTR [esi+0x2c],0x1011cf34
1007288c:	c7 46 30 50 cf 11 10 	mov    DWORD PTR [esi+0x30],0x1011cf50
10072893:	89 6e 34             	mov    DWORD PTR [esi+0x34],ebp
10072896:	e8 15 c2 ff ff       	call   0x1006eab0
1007289b:	8b 47 2c             	mov    eax,DWORD PTR [edi+0x2c]
1007289e:	53                   	push   ebx
1007289f:	50                   	push   eax
100728a0:	8b cf                	mov    ecx,edi
100728a2:	89 77 54             	mov    DWORD PTR [edi+0x54],esi
100728a5:	e8 76 c0 ff ff       	call   0x1006e920
100728aa:	5f                   	pop    edi
100728ab:	5e                   	pop    esi
100728ac:	5d                   	pop    ebp
100728ad:	b8 01 00 00 00       	mov    eax,0x1
100728b2:	5b                   	pop    ebx
100728b3:	c2 04 00             	ret    0x4
100728b6:	90                   	nop
100728b7:	90                   	nop
100728b8:	90                   	nop
100728b9:	90                   	nop
100728ba:	90                   	nop
100728bb:	90                   	nop
100728bc:	90                   	nop
100728bd:	90                   	nop
100728be:	90                   	nop
100728bf:	90                   	nop
100728c0:	a1 4c cf 11 10       	mov    eax,ds:0x1011cf4c
100728c5:	c3                   	ret
100728c6:	90                   	nop
100728c7:	90                   	nop
100728c8:	90                   	nop
100728c9:	90                   	nop
100728ca:	90                   	nop
100728cb:	90                   	nop
100728cc:	90                   	nop
100728cd:	90                   	nop
100728ce:	90                   	nop
100728cf:	90                   	nop
100728d0:	8b 51 58             	mov    edx,DWORD PTR [ecx+0x58]
100728d3:	33 c0                	xor    eax,eax
100728d5:	56                   	push   esi
100728d6:	85 d2                	test   edx,edx
100728d8:	57                   	push   edi
100728d9:	7e 16                	jle    0x100728f1
100728db:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
100728df:	83 c1 34             	add    ecx,0x34
100728e2:	8b 39                	mov    edi,DWORD PTR [ecx]
100728e4:	39 77 38             	cmp    DWORD PTR [edi+0x38],esi
100728e7:	74 0b                	je     0x100728f4
100728e9:	40                   	inc    eax
100728ea:	83 c1 04             	add    ecx,0x4
100728ed:	3b c2                	cmp    eax,edx
100728ef:	7c f1                	jl     0x100728e2
100728f1:	83 c8 ff             	or     eax,0xffffffff
100728f4:	5f                   	pop    edi
100728f5:	5e                   	pop    esi
100728f6:	c2 04 00             	ret    0x4
100728f9:	90                   	nop
100728fa:	90                   	nop
100728fb:	90                   	nop
100728fc:	90                   	nop
100728fd:	90                   	nop
100728fe:	90                   	nop
100728ff:	90                   	nop
10072900:	83 ec 24             	sub    esp,0x24
10072903:	55                   	push   ebp
10072904:	8b 69 58             	mov    ebp,DWORD PTR [ecx+0x58]
10072907:	85 ed                	test   ebp,ebp
10072909:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
1007290d:	0f 84 a1 00 00 00    	je     0x100729b4
10072913:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10072917:	53                   	push   ebx
10072918:	56                   	push   esi
10072919:	57                   	push   edi
1007291a:	8b 08                	mov    ecx,DWORD PTR [eax]
1007291c:	41                   	inc    ecx
1007291d:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
10072920:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
10072924:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
10072928:	33 db                	xor    ebx,ebx
1007292a:	8b 78 08             	mov    edi,DWORD PTR [eax+0x8]
1007292d:	8b f1                	mov    esi,ecx
1007292f:	83 ef 02             	sub    edi,0x2
10072932:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
10072935:	8b c7                	mov    eax,edi
10072937:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
1007293b:	99                   	cdq
1007293c:	f7 fd                	idiv   ebp
1007293e:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10072942:	8b e8                	mov    ebp,eax
10072944:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
10072948:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
1007294c:	8b 42 58             	mov    eax,DWORD PTR [edx+0x58]
1007294f:	48                   	dec    eax
10072950:	85 c0                	test   eax,eax
10072952:	7e 3f                	jle    0x10072993
10072954:	8b c2                	mov    eax,edx
10072956:	83 c0 34             	add    eax,0x34
10072959:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
1007295d:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
10072961:	8d 4c 24 14          	lea    ecx,[esp+0x14]
10072965:	51                   	push   ecx
10072966:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
1007296a:	8b 0a                	mov    ecx,DWORD PTR [edx]
1007296c:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
10072970:	e8 db bc ff ff       	call   0x1006e650
10072975:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
10072979:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1007297d:	83 c1 04             	add    ecx,0x4
10072980:	43                   	inc    ebx
10072981:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
10072985:	8b 48 58             	mov    ecx,DWORD PTR [eax+0x58]
10072988:	03 f5                	add    esi,ebp
1007298a:	49                   	dec    ecx
1007298b:	3b d9                	cmp    ebx,ecx
1007298d:	7c ce                	jl     0x1007295d
1007298f:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10072993:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10072997:	2b fe                	sub    edi,esi
10072999:	8d 54 24 14          	lea    edx,[esp+0x14]
1007299d:	03 f9                	add    edi,ecx
1007299f:	8b 4c 98 34          	mov    ecx,DWORD PTR [eax+ebx*4+0x34]
100729a3:	52                   	push   edx
100729a4:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
100729a8:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
100729ac:	e8 9f bc ff ff       	call   0x1006e650
100729b1:	5f                   	pop    edi
100729b2:	5e                   	pop    esi
100729b3:	5b                   	pop    ebx
100729b4:	5d                   	pop    ebp
100729b5:	83 c4 24             	add    esp,0x24
100729b8:	c2 04 00             	ret    0x4
100729bb:	90                   	nop
100729bc:	90                   	nop
100729bd:	90                   	nop
100729be:	90                   	nop
100729bf:	90                   	nop
100729c0:	56                   	push   esi
100729c1:	8b f1                	mov    esi,ecx
100729c3:	8b 06                	mov    eax,DWORD PTR [esi]
100729c5:	ff 50 78             	call   DWORD PTR [eax+0x78]
100729c8:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100729cc:	3b c1                	cmp    eax,ecx
100729ce:	74 0b                	je     0x100729db
100729d0:	8b 16                	mov    edx,DWORD PTR [esi]
100729d2:	51                   	push   ecx
100729d3:	8b ce                	mov    ecx,esi
100729d5:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
100729db:	b8 01 00 00 00       	mov    eax,0x1
100729e0:	5e                   	pop    esi
100729e1:	c2 08 00             	ret    0x8
100729e4:	90                   	nop
100729e5:	90                   	nop
100729e6:	90                   	nop
100729e7:	90                   	nop
100729e8:	90                   	nop
100729e9:	90                   	nop
100729ea:	90                   	nop
100729eb:	90                   	nop
100729ec:	90                   	nop
100729ed:	90                   	nop
100729ee:	90                   	nop
100729ef:	90                   	nop

*/
void TabHeader::AddTab() {
    // TODO: Implement AddTab
}

