#include "PlayerDamage.h"

// 0x10095850: PlayerDamage::ApplyDecalToActor
/*
10095850:	81 ec 88 00 00 00    	sub    esp,0x88
10095856:	53                   	push   ebx
10095857:	55                   	push   ebp
10095858:	8b ac 24 94 00 00 00 	mov    ebp,DWORD PTR [esp+0x94]
1009585f:	8b d9                	mov    ebx,ecx
10095861:	56                   	push   esi
10095862:	57                   	push   edi
10095863:	85 ed                	test   ebp,ebp
10095865:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
10095869:	0f 84 6a 08 00 00    	je     0x100960d9
1009586f:	8b b4 24 a0 00 00 00 	mov    esi,DWORD PTR [esp+0xa0]
10095876:	85 f6                	test   esi,esi
10095878:	0f 84 5b 08 00 00    	je     0x100960d9
1009587e:	8b 4b 24             	mov    ecx,DWORD PTR [ebx+0x24]
10095881:	8a 45 04             	mov    al,BYTE PTR [ebp+0x4]
10095884:	33 ff                	xor    edi,edi
10095886:	66 8b 7d 08          	mov    di,WORD PTR [ebp+0x8]
1009588a:	c1 e7 04             	shl    edi,0x4
1009588d:	03 f9                	add    edi,ecx
1009588f:	a8 08                	test   al,0x8
10095891:	89 7c 24 5c          	mov    DWORD PTR [esp+0x5c],edi
10095895:	74 12                	je     0x100958a9
10095897:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
1009589a:	33 c0                	xor    eax,eax
1009589c:	66 8b 47 06          	mov    ax,WORD PTR [edi+0x6]
100958a0:	8d 04 40             	lea    eax,[eax+eax*2]
100958a3:	8d 54 81 f4          	lea    edx,[ecx+eax*4-0xc]
100958a7:	eb 0f                	jmp    0x100958b8
100958a9:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
100958ac:	33 c0                	xor    eax,eax
100958ae:	66 8b 45 0a          	mov    ax,WORD PTR [ebp+0xa]
100958b2:	8d 04 40             	lea    eax,[eax+eax*2]
100958b5:	8d 14 81             	lea    edx,[ecx+eax*4]
100958b8:	8b ce                	mov    ecx,esi
100958ba:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
100958be:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x0
100958c5:	00 00 00 00 
100958c9:	e8 f2 25 f8 ff       	call   0x10017ec0
100958ce:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
100958d2:	8b 84 24 a4 00 00 00 	mov    eax,DWORD PTR [esp+0xa4]
100958d9:	85 c0                	test   eax,eax
100958db:	74 0b                	je     0x100958e8
100958dd:	8b 0f                	mov    ecx,DWORD PTR [edi]
100958df:	89 44 24 6c          	mov    DWORD PTR [esp+0x6c],eax
100958e3:	83 f9 0f             	cmp    ecx,0xf
100958e6:	74 08                	je     0x100958f0
100958e8:	c7 44 24 6c ec ed 0d 	mov    DWORD PTR [esp+0x6c],0x100dedec
100958ef:	10 
100958f0:	8b 06                	mov    eax,DWORD PTR [esi]
100958f2:	8b ce                	mov    ecx,esi
100958f4:	ff 50 18             	call   DWORD PTR [eax+0x18]
100958f7:	50                   	push   eax
100958f8:	b9 10 59 11 10       	mov    ecx,0x10115910
100958fd:	e8 5e 9d f8 ff       	call   0x1001f660
10095902:	85 c0                	test   eax,eax
10095904:	75 04                	jne    0x1009590a
10095906:	33 ff                	xor    edi,edi
10095908:	eb 05                	jmp    0x1009590f
1009590a:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
1009590d:	8b 39                	mov    edi,DWORD PTR [ecx]
1009590f:	8b 16                	mov    edx,DWORD PTR [esi]
10095911:	8b ce                	mov    ecx,esi
10095913:	ff 52 40             	call   DWORD PTR [edx+0x40]
10095916:	8d 0c bf             	lea    ecx,[edi+edi*4]
10095919:	c7 44 24 14 00 00 80 	mov    DWORD PTR [esp+0x14],0x3f800000
10095920:	3f 
10095921:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
10095927:	8d 14 cf             	lea    edx,[edi+ecx*8]
1009592a:	8b 4b 0c             	mov    ecx,DWORD PTR [ebx+0xc]
1009592d:	8d 04 90             	lea    eax,[eax+edx*4]
10095930:	33 d2                	xor    edx,edx
10095932:	8a 14 08             	mov    dl,BYTE PTR [eax+ecx*1]
10095935:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10095938:	8b c2                	mov    eax,edx
1009593a:	8d 04 80             	lea    eax,[eax+eax*4]
1009593d:	8d 04 c1             	lea    eax,[ecx+eax*8]
10095940:	85 c0                	test   eax,eax
10095942:	0f 84 ef 02 00 00    	je     0x10095c37
10095948:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
1009594b:	f6 c1 80             	test   cl,0x80
1009594e:	dd d8                	fstp   st(0)
10095950:	0f 84 85 00 00 00    	je     0x100959db
10095956:	8b 16                	mov    edx,DWORD PTR [esi]
10095958:	8b ce                	mov    ecx,esi
1009595a:	c7 44 24 28 5c 8f c2 	mov    DWORD PTR [esp+0x28],0x3ec28f5c
10095961:	3e 
10095962:	c7 44 24 14 5c 8f c2 	mov    DWORD PTR [esp+0x14],0x3ec28f5c
10095969:	3e 
1009596a:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
10095971:	00 
10095972:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
10095979:	00 
1009597a:	ff 52 18             	call   DWORD PTR [edx+0x18]
1009597d:	50                   	push   eax
1009597e:	b9 10 59 11 10       	mov    ecx,0x10115910
10095983:	e8 d8 9c f8 ff       	call   0x1001f660
10095988:	85 c0                	test   eax,eax
1009598a:	75 04                	jne    0x10095990
1009598c:	33 ff                	xor    edi,edi
1009598e:	eb 05                	jmp    0x10095995
10095990:	8b 40 3c             	mov    eax,DWORD PTR [eax+0x3c]
10095993:	8b 38                	mov    edi,DWORD PTR [eax]
10095995:	8b 16                	mov    edx,DWORD PTR [esi]
10095997:	8b ce                	mov    ecx,esi
10095999:	ff 52 40             	call   DWORD PTR [edx+0x40]
1009599c:	8d 0c bf             	lea    ecx,[edi+edi*4]
1009599f:	c7 44 24 38 00 00 fe 	mov    DWORD PTR [esp+0x38],0x42fe0000
100959a6:	42 
100959a7:	8d 14 cf             	lea    edx,[edi+ecx*8]
100959aa:	8b 4b 0c             	mov    ecx,DWORD PTR [ebx+0xc]
100959ad:	8d 04 90             	lea    eax,[eax+edx*4]
100959b0:	33 d2                	xor    edx,edx
100959b2:	8a 54 08 5c          	mov    dl,BYTE PTR [eax+ecx*1+0x5c]
100959b6:	8b 84 24 94 00 00 00 	mov    eax,DWORD PTR [esp+0x94]
100959bd:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
100959c1:	0c 20                	or     al,0x20
100959c3:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
100959c7:	89 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],eax
100959ce:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
100959d2:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
100959d6:	e9 5c 02 00 00       	jmp    0x10095c37
100959db:	f6 c1 01             	test   cl,0x1
100959de:	74 75                	je     0x10095a55
100959e0:	8b 06                	mov    eax,DWORD PTR [esi]
100959e2:	8b ce                	mov    ecx,esi
100959e4:	c7 44 24 28 00 00 80 	mov    DWORD PTR [esp+0x28],0x3f800000
100959eb:	3f 
100959ec:	c7 44 24 14 00 00 80 	mov    DWORD PTR [esp+0x14],0x3f800000
100959f3:	3f 
100959f4:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
100959fb:	00 
100959fc:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
10095a03:	00 
10095a04:	ff 50 18             	call   DWORD PTR [eax+0x18]
10095a07:	50                   	push   eax
10095a08:	b9 10 59 11 10       	mov    ecx,0x10115910
10095a0d:	e8 4e 9c f8 ff       	call   0x1001f660
10095a12:	85 c0                	test   eax,eax
10095a14:	75 04                	jne    0x10095a1a
10095a16:	33 ff                	xor    edi,edi
10095a18:	eb 05                	jmp    0x10095a1f
10095a1a:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
10095a1d:	8b 39                	mov    edi,DWORD PTR [ecx]
10095a1f:	8b 16                	mov    edx,DWORD PTR [esi]
10095a21:	8b ce                	mov    ecx,esi
10095a23:	ff 52 40             	call   DWORD PTR [edx+0x40]
10095a26:	8d 0c bf             	lea    ecx,[edi+edi*4]
10095a29:	c7 44 24 38 00 00 fe 	mov    DWORD PTR [esp+0x38],0x42fe0000
10095a30:	42 
10095a31:	8d 14 cf             	lea    edx,[edi+ecx*8]
10095a34:	8b 4b 0c             	mov    ecx,DWORD PTR [ebx+0xc]
10095a37:	8d 04 90             	lea    eax,[eax+edx*4]
10095a3a:	33 d2                	xor    edx,edx
10095a3c:	8a 54 08 5c          	mov    dl,BYTE PTR [eax+ecx*1+0x5c]
10095a40:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10095a44:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095a48:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
10095a4c:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
10095a50:	e9 e2 01 00 00       	jmp    0x10095c37
10095a55:	66 8b 4d 0c          	mov    cx,WORD PTR [ebp+0xc]
10095a59:	66 3b 48 04          	cmp    cx,WORD PTR [eax+0x4]
10095a5d:	72 71                	jb     0x10095ad0
10095a5f:	66 3b 48 08          	cmp    cx,WORD PTR [eax+0x8]
10095a63:	73 6b                	jae    0x10095ad0
10095a65:	66 8b 4d 0e          	mov    cx,WORD PTR [ebp+0xe]
10095a69:	66 3b 48 06          	cmp    cx,WORD PTR [eax+0x6]
10095a6d:	72 61                	jb     0x10095ad0
10095a6f:	66 3b 48 0a          	cmp    cx,WORD PTR [eax+0xa]
10095a73:	73 5b                	jae    0x10095ad0
10095a75:	33 c9                	xor    ecx,ecx
10095a77:	33 d2                	xor    edx,edx
10095a79:	66 8b 48 04          	mov    cx,WORD PTR [eax+0x4]
10095a7d:	66 8b 50 06          	mov    dx,WORD PTR [eax+0x6]
10095a81:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10095a85:	33 c9                	xor    ecx,ecx
10095a87:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095a8b:	66 8b 48 08          	mov    cx,WORD PTR [eax+0x8]
10095a8f:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10095a93:	33 d2                	xor    edx,edx
10095a95:	c7 44 24 14 00 00 80 	mov    DWORD PTR [esp+0x14],0x3f800000
10095a9c:	3f 
10095a9d:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
10095aa1:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095aa5:	66 8b 50 0a          	mov    dx,WORD PTR [eax+0xa]
10095aa9:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10095aad:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
10095ab1:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095ab5:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10095ab9:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
10095abd:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095ac1:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
10095ac5:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
10095acb:	e9 67 01 00 00       	jmp    0x10095c37
10095ad0:	66 8b 4d 0c          	mov    cx,WORD PTR [ebp+0xc]
10095ad4:	66 3b 48 0c          	cmp    cx,WORD PTR [eax+0xc]
10095ad8:	72 71                	jb     0x10095b4b
10095ada:	66 3b 48 10          	cmp    cx,WORD PTR [eax+0x10]
10095ade:	73 6b                	jae    0x10095b4b
10095ae0:	66 8b 4d 0e          	mov    cx,WORD PTR [ebp+0xe]
10095ae4:	66 3b 48 0e          	cmp    cx,WORD PTR [eax+0xe]
10095ae8:	72 61                	jb     0x10095b4b
10095aea:	66 3b 48 12          	cmp    cx,WORD PTR [eax+0x12]
10095aee:	73 5b                	jae    0x10095b4b
10095af0:	33 c9                	xor    ecx,ecx
10095af2:	33 d2                	xor    edx,edx
10095af4:	66 8b 48 0c          	mov    cx,WORD PTR [eax+0xc]
10095af8:	66 8b 50 0e          	mov    dx,WORD PTR [eax+0xe]
10095afc:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10095b00:	33 c9                	xor    ecx,ecx
10095b02:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095b06:	66 8b 48 10          	mov    cx,WORD PTR [eax+0x10]
10095b0a:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10095b0e:	33 d2                	xor    edx,edx
10095b10:	c7 44 24 14 c3 f5 68 	mov    DWORD PTR [esp+0x14],0x3f68f5c3
10095b17:	3f 
10095b18:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
10095b1c:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095b20:	66 8b 50 12          	mov    dx,WORD PTR [eax+0x12]
10095b24:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10095b28:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
10095b2c:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095b30:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10095b34:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
10095b38:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095b3c:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
10095b40:	d9 05 b0 d8 0b 10    	fld    DWORD PTR ds:0x100bd8b0
10095b46:	e9 ec 00 00 00       	jmp    0x10095c37
10095b4b:	66 8b 4d 0c          	mov    cx,WORD PTR [ebp+0xc]
10095b4f:	66 3b 48 14          	cmp    cx,WORD PTR [eax+0x14]
10095b53:	72 5c                	jb     0x10095bb1
10095b55:	66 3b 48 18          	cmp    cx,WORD PTR [eax+0x18]
10095b59:	73 56                	jae    0x10095bb1
10095b5b:	66 8b 4d 0e          	mov    cx,WORD PTR [ebp+0xe]
10095b5f:	66 3b 48 16          	cmp    cx,WORD PTR [eax+0x16]
10095b63:	72 4c                	jb     0x10095bb1
10095b65:	66 3b 48 1a          	cmp    cx,WORD PTR [eax+0x1a]
10095b69:	73 46                	jae    0x10095bb1
10095b6b:	33 c9                	xor    ecx,ecx
10095b6d:	33 d2                	xor    edx,edx
10095b6f:	66 8b 48 14          	mov    cx,WORD PTR [eax+0x14]
10095b73:	66 8b 50 16          	mov    dx,WORD PTR [eax+0x16]
10095b77:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10095b7b:	33 c9                	xor    ecx,ecx
10095b7d:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095b81:	66 8b 48 18          	mov    cx,WORD PTR [eax+0x18]
10095b85:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10095b89:	33 d2                	xor    edx,edx
10095b8b:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
10095b8f:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095b93:	66 8b 50 1a          	mov    dx,WORD PTR [eax+0x1a]
10095b97:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10095b9b:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
10095b9f:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095ba3:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10095ba7:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
10095bab:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095baf:	eb 74                	jmp    0x10095c25
10095bb1:	66 8b 4d 0c          	mov    cx,WORD PTR [ebp+0xc]
10095bb5:	66 3b 48 1c          	cmp    cx,WORD PTR [eax+0x1c]
10095bb9:	0f 82 1a 05 00 00    	jb     0x100960d9
10095bbf:	66 3b 48 20          	cmp    cx,WORD PTR [eax+0x20]
10095bc3:	0f 83 10 05 00 00    	jae    0x100960d9
10095bc9:	66 8b 4d 0e          	mov    cx,WORD PTR [ebp+0xe]
10095bcd:	66 3b 48 1e          	cmp    cx,WORD PTR [eax+0x1e]
10095bd1:	0f 82 02 05 00 00    	jb     0x100960d9
10095bd7:	66 3b 48 22          	cmp    cx,WORD PTR [eax+0x22]
10095bdb:	0f 83 f8 04 00 00    	jae    0x100960d9
10095be1:	33 c9                	xor    ecx,ecx
10095be3:	33 d2                	xor    edx,edx
10095be5:	66 8b 48 1c          	mov    cx,WORD PTR [eax+0x1c]
10095be9:	66 8b 50 1e          	mov    dx,WORD PTR [eax+0x1e]
10095bed:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10095bf1:	33 c9                	xor    ecx,ecx
10095bf3:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095bf7:	66 8b 48 20          	mov    cx,WORD PTR [eax+0x20]
10095bfb:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10095bff:	33 d2                	xor    edx,edx
10095c01:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
10095c05:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095c09:	66 8b 50 22          	mov    dx,WORD PTR [eax+0x22]
10095c0d:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10095c11:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
10095c15:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095c19:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10095c1d:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
10095c21:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095c25:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
10095c29:	d9 05 d0 84 0b 10    	fld    DWORD PTR ds:0x100b84d0
10095c2f:	c7 44 24 14 66 66 66 	mov    DWORD PTR [esp+0x14],0x3f666666
10095c36:	3f 
10095c37:	8b 5c 24 3c          	mov    ebx,DWORD PTR [esp+0x3c]
10095c3b:	33 c0                	xor    eax,eax
10095c3d:	66 8b 43 0a          	mov    ax,WORD PTR [ebx+0xa]
10095c41:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10095c45:	8a 45 04             	mov    al,BYTE PTR [ebp+0x4]
10095c48:	a8 10                	test   al,0x10
10095c4a:	74 17                	je     0x10095c63
10095c4c:	33 c0                	xor    eax,eax
10095c4e:	33 ff                	xor    edi,edi
10095c50:	66 8b 43 08          	mov    ax,WORD PTR [ebx+0x8]
10095c54:	66 8b 7b 04          	mov    di,WORD PTR [ebx+0x4]
10095c58:	33 c9                	xor    ecx,ecx
10095c5a:	2b f8                	sub    edi,eax
10095c5c:	66 8b 0b             	mov    cx,WORD PTR [ebx]
10095c5f:	03 f9                	add    edi,ecx
10095c61:	eb 06                	jmp    0x10095c69
10095c63:	33 ff                	xor    edi,edi
10095c65:	66 8b 7b 08          	mov    di,WORD PTR [ebx+0x8]
10095c69:	33 c0                	xor    eax,eax
10095c6b:	33 c9                	xor    ecx,ecx
10095c6d:	66 8b 45 0c          	mov    ax,WORD PTR [ebp+0xc]
10095c71:	66 8b 0b             	mov    cx,WORD PTR [ebx]
10095c74:	8b d0                	mov    edx,eax
10095c76:	89 4c 24 64          	mov    DWORD PTR [esp+0x64],ecx
10095c7a:	2b d7                	sub    edx,edi
10095c7c:	2b c7                	sub    eax,edi
10095c7e:	03 d1                	add    edx,ecx
10095c80:	33 c9                	xor    ecx,ecx
10095c82:	66 8b 4d 0e          	mov    cx,WORD PTR [ebp+0xe]
10095c86:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10095c8a:	33 d2                	xor    edx,edx
10095c8c:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
10095c90:	66 8b 53 02          	mov    dx,WORD PTR [ebx+0x2]
10095c94:	8b d9                	mov    ebx,ecx
10095c96:	2b 5c 24 28          	sub    ebx,DWORD PTR [esp+0x28]
10095c9a:	89 54 24 60          	mov    DWORD PTR [esp+0x60],edx
10095c9e:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095ca2:	03 da                	add    ebx,edx
10095ca4:	33 d2                	xor    edx,edx
10095ca6:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
10095caa:	8b 5c 24 3c          	mov    ebx,DWORD PTR [esp+0x3c]
10095cae:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10095cb2:	66 8b 53 04          	mov    dx,WORD PTR [ebx+0x4]
10095cb6:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095cba:	03 c2                	add    eax,edx
10095cbc:	89 54 24 54          	mov    DWORD PTR [esp+0x54],edx
10095cc0:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10095cc4:	33 c0                	xor    eax,eax
10095cc6:	66 8b 43 06          	mov    ax,WORD PTR [ebx+0x6]
10095cca:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
10095cce:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095cd2:	89 44 24 58          	mov    DWORD PTR [esp+0x58],eax
10095cd6:	2b c7                	sub    eax,edi
10095cd8:	03 c1                	add    eax,ecx
10095cda:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10095cde:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10095ce2:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10095ce6:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
10095cea:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
10095cee:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10095cf4:	df e0                	fnstsw ax
10095cf6:	f6 c4 01             	test   ah,0x1
10095cf9:	74 08                	je     0x10095d03
10095cfb:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
10095d02:	00 
10095d03:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10095d07:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10095d0d:	df e0                	fnstsw ax
10095d0f:	f6 c4 01             	test   ah,0x1
10095d12:	74 08                	je     0x10095d1c
10095d14:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
10095d1b:	00 
10095d1c:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
10095d1f:	a8 40                	test   al,0x40
10095d21:	74 12                	je     0x10095d35
10095d23:	d8 0d ac d8 0b 10    	fmul   DWORD PTR ds:0x100bd8ac
10095d29:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10095d2d:	d8 0d ac d8 0b 10    	fmul   DWORD PTR ds:0x100bd8ac
10095d33:	eb 14                	jmp    0x10095d49
10095d35:	a8 20                	test   al,0x20
10095d37:	74 14                	je     0x10095d4d
10095d39:	d8 0d 30 86 0b 10    	fmul   DWORD PTR ds:0x100b8630
10095d3f:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10095d43:	d8 0d 30 86 0b 10    	fmul   DWORD PTR ds:0x100b8630
10095d49:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
10095d4d:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10095d51:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
10095d55:	a8 81                	test   al,0x81
10095d57:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
10095d5d:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
10095d61:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
10095d65:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
10095d69:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
10095d6f:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
10095d73:	d8 4c 24 3c          	fmul   DWORD PTR [esp+0x3c]
10095d77:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
10095d7b:	d8 e1                	fsub   st,st(1)
10095d7d:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
10095d81:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10095d85:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
10095d89:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
10095d8d:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
10095d91:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
10095d95:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
10095d99:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
10095d9d:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
10095da1:	d8 64 24 3c          	fsub   DWORD PTR [esp+0x3c]
10095da5:	d8 44 24 20          	fadd   DWORD PTR [esp+0x20]
10095da9:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10095dad:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10095db1:	d8 64 24 28          	fsub   DWORD PTR [esp+0x28]
10095db5:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
10095db9:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
10095dbd:	db 44 24 64          	fild   DWORD PTR [esp+0x64]
10095dc1:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
10095dc5:	db 44 24 60          	fild   DWORD PTR [esp+0x60]
10095dc9:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
10095dcd:	db 44 24 54          	fild   DWORD PTR [esp+0x54]
10095dd1:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
10095dd5:	db 44 24 58          	fild   DWORD PTR [esp+0x58]
10095dd9:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
10095ddd:	75 1b                	jne    0x10095dfa
10095ddf:	d9 05 5c 8b 0b 10    	fld    DWORD PTR ds:0x100b8b5c
10095de5:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0x1
10095dec:	01 00 00 00 
10095df0:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x44000000
10095df7:	44 
10095df8:	eb 51                	jmp    0x10095e4b
10095dfa:	8b 06                	mov    eax,DWORD PTR [esi]
10095dfc:	33 ff                	xor    edi,edi
10095dfe:	8b ce                	mov    ecx,esi
10095e00:	89 bc 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],edi
10095e07:	ff 50 18             	call   DWORD PTR [eax+0x18]
10095e0a:	50                   	push   eax
10095e0b:	b9 10 59 11 10       	mov    ecx,0x10115910
10095e10:	e8 4b 98 f8 ff       	call   0x1001f660
10095e15:	3b c7                	cmp    eax,edi
10095e17:	74 05                	je     0x10095e1e
10095e19:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
10095e1c:	8b 39                	mov    edi,DWORD PTR [ecx]
10095e1e:	8b 16                	mov    edx,DWORD PTR [esi]
10095e20:	8b ce                	mov    ecx,esi
10095e22:	ff 52 40             	call   DWORD PTR [edx+0x40]
10095e25:	8d 0c bf             	lea    ecx,[edi+edi*4]
10095e28:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x43000000
10095e2f:	43 
10095e30:	8d 14 cf             	lea    edx,[edi+ecx*8]
10095e33:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
10095e37:	8d 04 90             	lea    eax,[eax+edx*4]
10095e3a:	8b 51 0c             	mov    edx,DWORD PTR [ecx+0xc]
10095e3d:	33 c9                	xor    ecx,ecx
10095e3f:	8a 4c 10 5c          	mov    cl,BYTE PTR [eax+edx*1+0x5c]
10095e43:	89 4c 24 50          	mov    DWORD PTR [esp+0x50],ecx
10095e47:	db 44 24 50          	fild   DWORD PTR [esp+0x50]
10095e4b:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
10095e4f:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10095e55:	df e0                	fnstsw ax
10095e57:	f6 c4 41             	test   ah,0x41
10095e5a:	75 3d                	jne    0x10095e99
10095e5c:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10095e60:	d8 5c 24 30          	fcomp  DWORD PTR [esp+0x30]
10095e64:	df e0                	fnstsw ax
10095e66:	f6 c4 01             	test   ah,0x1
10095e69:	74 2e                	je     0x10095e99
10095e6b:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
10095e6f:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
10095e73:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
10095e77:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
10095e7b:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
10095e7f:	de f9                	fdivp  st(1),st
10095e81:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
10095e85:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
10095e89:	d8 64 24 44          	fsub   DWORD PTR [esp+0x44]
10095e8d:	d8 c9                	fmul   st,st(1)
10095e8f:	d8 44 24 44          	fadd   DWORD PTR [esp+0x44]
10095e93:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
10095e97:	dd d8                	fstp   st(0)
10095e99:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10095e9d:	d8 25 c0 83 0b 10    	fsub   DWORD PTR ds:0x100b83c0
10095ea3:	d8 5c 24 38          	fcomp  DWORD PTR [esp+0x38]
10095ea7:	df e0                	fnstsw ax
10095ea9:	f6 c4 41             	test   ah,0x41
10095eac:	75 3d                	jne    0x10095eeb
10095eae:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
10095eb2:	d8 5c 24 38          	fcomp  DWORD PTR [esp+0x38]
10095eb6:	df e0                	fnstsw ax
10095eb8:	f6 c4 41             	test   ah,0x41
10095ebb:	75 2e                	jne    0x10095eeb
10095ebd:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
10095ec1:	d8 64 24 38          	fsub   DWORD PTR [esp+0x38]
10095ec5:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
10095ec9:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
10095ecd:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
10095ed1:	de f9                	fdivp  st(1),st
10095ed3:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10095ed7:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
10095edb:	d8 64 24 44          	fsub   DWORD PTR [esp+0x44]
10095edf:	d8 c9                	fmul   st,st(1)
10095ee1:	d8 6c 24 4c          	fsubr  DWORD PTR [esp+0x4c]
10095ee5:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
10095ee9:	dd d8                	fstp   st(0)
10095eeb:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
10095eef:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10095ef5:	df e0                	fnstsw ax
10095ef7:	f6 c4 41             	test   ah,0x41
10095efa:	75 3d                	jne    0x10095f39
10095efc:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
10095f00:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
10095f04:	df e0                	fnstsw ax
10095f06:	f6 c4 01             	test   ah,0x1
10095f09:	74 2e                	je     0x10095f39
10095f0b:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
10095f0f:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
10095f13:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10095f17:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
10095f1b:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
10095f1f:	de f9                	fdivp  st(1),st
10095f21:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
10095f25:	d9 44 24 48          	fld    DWORD PTR [esp+0x48]
10095f29:	d8 64 24 40          	fsub   DWORD PTR [esp+0x40]
10095f2d:	d8 c9                	fmul   st,st(1)
10095f2f:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
10095f33:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
10095f37:	dd d8                	fstp   st(0)
10095f39:	d9 c0                	fld    st(0)
10095f3b:	d8 25 c0 83 0b 10    	fsub   DWORD PTR ds:0x100b83c0
10095f41:	d8 5c 24 34          	fcomp  DWORD PTR [esp+0x34]
10095f45:	df e0                	fnstsw ax
10095f47:	f6 c4 41             	test   ah,0x41
10095f4a:	75 3d                	jne    0x10095f89
10095f4c:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10095f50:	d8 5c 24 34          	fcomp  DWORD PTR [esp+0x34]
10095f54:	df e0                	fnstsw ax
10095f56:	f6 c4 41             	test   ah,0x41
10095f59:	75 2e                	jne    0x10095f89
10095f5b:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10095f5f:	d8 64 24 34          	fsub   DWORD PTR [esp+0x34]
10095f63:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10095f67:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
10095f6b:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
10095f6f:	de f9                	fdivp  st(1),st
10095f71:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
10095f75:	d9 44 24 48          	fld    DWORD PTR [esp+0x48]
10095f79:	d8 64 24 40          	fsub   DWORD PTR [esp+0x40]
10095f7d:	d8 c9                	fmul   st,st(1)
10095f7f:	d8 6c 24 48          	fsubr  DWORD PTR [esp+0x48]
10095f83:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
10095f87:	dd d8                	fstp   st(0)
10095f89:	f6 45 04 10          	test   BYTE PTR [ebp+0x4],0x10
10095f8d:	74 10                	je     0x10095f9f
10095f8f:	8b 84 24 94 00 00 00 	mov    eax,DWORD PTR [esp+0x94]
10095f96:	0c 08                	or     al,0x8
10095f98:	89 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],eax
10095f9f:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
10095fa3:	d8 f1                	fdiv   st,st(1)
10095fa5:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
10095fa9:	8b 00                	mov    eax,DWORD PTR [eax]
10095fab:	83 f8 0f             	cmp    eax,0xf
10095fae:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10095fb2:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10095fb6:	d8 74 24 14          	fdiv   DWORD PTR [esp+0x14]
10095fba:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
10095fbe:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10095fc2:	d8 f1                	fdiv   st,st(1)
10095fc4:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10095fc8:	dd d8                	fstp   st(0)
10095fca:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
10095fce:	d8 74 24 14          	fdiv   DWORD PTR [esp+0x14]
10095fd2:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
10095fd6:	75 10                	jne    0x10095fe8
10095fd8:	d9 05 30 8b 0b 10    	fld    DWORD PTR ds:0x100b8b30
10095fde:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x42000000
10095fe5:	42 
10095fe6:	eb 23                	jmp    0x1009600b
10095fe8:	83 f8 0e             	cmp    eax,0xe
10095feb:	75 10                	jne    0x10095ffd
10095fed:	d9 05 5c 8b 0b 10    	fld    DWORD PTR ds:0x100b8b5c
10095ff3:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x42000000
10095ffa:	42 
10095ffb:	eb 0e                	jmp    0x1009600b
10095ffd:	d9 05 a8 d8 0b 10    	fld    DWORD PTR ds:0x100bd8a8
10096003:	c7 44 24 14 00 00 80 	mov    DWORD PTR [esp+0x14],0x43800000
1009600a:	43 
1009600b:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
1009600f:	d8 f1                	fdiv   st,st(1)
10096011:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10096015:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10096019:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1009601d:	89 8c 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],ecx
10096024:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10096028:	89 84 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],eax
1009602f:	89 94 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],edx
10096036:	89 8c 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],ecx
1009603d:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
10096041:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
10096045:	d8 74 24 14          	fdiv   DWORD PTR [esp+0x14]
10096049:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
1009604d:	89 54 24 70          	mov    DWORD PTR [esp+0x70],edx
10096051:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
10096055:	d9 44 24 48          	fld    DWORD PTR [esp+0x48]
10096059:	d8 f1                	fdiv   st,st(1)
1009605b:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
1009605f:	89 44 24 74          	mov    DWORD PTR [esp+0x74],eax
10096063:	8d 44 24 68          	lea    eax,[esp+0x68]
10096067:	50                   	push   eax
10096068:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
1009606c:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
10096070:	dd d8                	fstp   st(0)
10096072:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
10096076:	d8 74 24 18          	fdiv   DWORD PTR [esp+0x18]
1009607a:	89 4c 24 7c          	mov    DWORD PTR [esp+0x7c],ecx
1009607e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10096084:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
10096088:	8b 54 24 50          	mov    edx,DWORD PTR [esp+0x50]
1009608c:	89 94 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],edx
10096093:	ff 91 3c 01 00 00    	call   DWORD PTR [ecx+0x13c]
10096099:	83 c4 04             	add    esp,0x4
1009609c:	3d ff 00 00 00       	cmp    eax,0xff
100960a1:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
100960a4:	75 42                	jne    0x100960e8
100960a6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100960ac:	68 0c 04 00 00       	push   0x40c
100960b1:	68 b4 ed 0d 10       	push   0x100dedb4
100960b6:	8b 11                	mov    edx,DWORD PTR [ecx]
100960b8:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
100960be:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100960c3:	68 70 ed 0d 10       	push   0x100ded70
100960c8:	68 c4 6c 0d 10       	push   0x100d6cc4
100960cd:	50                   	push   eax
100960ce:	8b 08                	mov    ecx,DWORD PTR [eax]
100960d0:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
100960d6:	83 c4 0c             	add    esp,0xc
100960d9:	5f                   	pop    edi
100960da:	5e                   	pop    esi
100960db:	5d                   	pop    ebp
100960dc:	32 c0                	xor    al,al
100960de:	5b                   	pop    ebx
100960df:	81 c4 88 00 00 00    	add    esp,0x88
100960e5:	c2 0c 00             	ret    0xc
100960e8:	5f                   	pop    edi
100960e9:	5e                   	pop    esi
100960ea:	5d                   	pop    ebp
100960eb:	b0 01                	mov    al,0x1
100960ed:	5b                   	pop    ebx
100960ee:	81 c4 88 00 00 00    	add    esp,0x88
100960f4:	c2 0c 00             	ret    0xc
100960f7:	90                   	nop
100960f8:	90                   	nop
100960f9:	90                   	nop
100960fa:	90                   	nop
100960fb:	90                   	nop
100960fc:	90                   	nop
100960fd:	90                   	nop
100960fe:	90                   	nop
100960ff:	90                   	nop
10096100:	51                   	push   ecx
10096101:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10096105:	53                   	push   ebx
10096106:	55                   	push   ebp
10096107:	56                   	push   esi
10096108:	8b f1                	mov    esi,ecx
1009610a:	57                   	push   edi
1009610b:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1009610f:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
10096113:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
10096119:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
1009611d:	85 ff                	test   edi,edi
1009611f:	c7 01 00 00 00 00    	mov    DWORD PTR [ecx],0x0
10096125:	0f 84 75 01 00 00    	je     0x100962a0
1009612b:	8b 17                	mov    edx,DWORD PTR [edi]
1009612d:	8b cf                	mov    ecx,edi
1009612f:	ff 12                	call   DWORD PTR [edx]
10096131:	83 f8 03             	cmp    eax,0x3
10096134:	74 1a                	je     0x10096150
10096136:	8b 07                	mov    eax,DWORD PTR [edi]
10096138:	8b cf                	mov    ecx,edi
1009613a:	ff 10                	call   DWORD PTR [eax]
1009613c:	83 f8 0a             	cmp    eax,0xa
1009613f:	74 0f                	je     0x10096150
10096141:	8b 17                	mov    edx,DWORD PTR [edi]
10096143:	8b cf                	mov    ecx,edi
10096145:	ff 12                	call   DWORD PTR [edx]
10096147:	83 f8 07             	cmp    eax,0x7
1009614a:	0f 85 50 01 00 00    	jne    0x100962a0
10096150:	8b 07                	mov    eax,DWORD PTR [edi]
10096152:	8b cf                	mov    ecx,edi
10096154:	ff 50 18             	call   DWORD PTR [eax+0x18]
10096157:	50                   	push   eax
10096158:	b9 10 59 11 10       	mov    ecx,0x10115910
1009615d:	e8 fe 94 f8 ff       	call   0x1001f660
10096162:	85 c0                	test   eax,eax
10096164:	74 05                	je     0x1009616b
10096166:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
10096169:	8b 01                	mov    eax,DWORD PTR [ecx]
1009616b:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
1009616e:	8d 14 80             	lea    edx,[eax+eax*4]
10096171:	8d 04 d0             	lea    eax,[eax+edx*8]
10096174:	8b 17                	mov    edx,DWORD PTR [edi]
10096176:	8d 2c 81             	lea    ebp,[ecx+eax*4]
10096179:	8b cf                	mov    ecx,edi
1009617b:	ff 52 40             	call   DWORD PTR [edx+0x40]
1009617e:	8b d8                	mov    ebx,eax
10096180:	83 fb 05             	cmp    ebx,0x5
10096183:	0f 8f 17 01 00 00    	jg     0x100962a0
10096189:	80 7c 2b 5c 80       	cmp    BYTE PTR [ebx+ebp*1+0x5c],0x80
1009618e:	0f 86 0c 01 00 00    	jbe    0x100962a0
10096194:	66 83 7c 9d 08 00    	cmp    WORD PTR [ebp+ebx*4+0x8],0x0
1009619a:	75 0c                	jne    0x100961a8
1009619c:	66 83 7c 9d 0a 00    	cmp    WORD PTR [ebp+ebx*4+0xa],0x0
100961a2:	0f 84 f8 00 00 00    	je     0x100962a0
100961a8:	57                   	push   edi
100961a9:	8b ce                	mov    ecx,esi
100961ab:	e8 30 f2 ff ff       	call   0x100953e0
100961b0:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100961b4:	57                   	push   edi
100961b5:	8b f0                	mov    esi,eax
100961b7:	e8 24 f2 ff ff       	call   0x100953e0
100961bc:	85 f6                	test   esi,esi
100961be:	8b f8                	mov    edi,eax
100961c0:	0f 84 da 00 00 00    	je     0x100962a0
100961c6:	85 ff                	test   edi,edi
100961c8:	0f 84 d2 00 00 00    	je     0x100962a0
100961ce:	b9 81 00 00 00       	mov    ecx,0x81
100961d3:	b8 08 00 00 00       	mov    eax,0x8
100961d8:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
100961db:	66 89 46 08          	mov    WORD PTR [esi+0x8],ax
100961df:	66 8b 54 9d 40       	mov    dx,WORD PTR [ebp+ebx*4+0x40]
100961e4:	66 89 56 0a          	mov    WORD PTR [esi+0xa],dx
100961e8:	66 8b 54 9d 08       	mov    dx,WORD PTR [ebp+ebx*4+0x8]
100961ed:	66 89 56 0c          	mov    WORD PTR [esi+0xc],dx
100961f1:	66 8b 54 9d 0a       	mov    dx,WORD PTR [ebp+ebx*4+0xa]
100961f6:	66 89 56 0e          	mov    WORD PTR [esi+0xe],dx
100961fa:	89 4f 04             	mov    DWORD PTR [edi+0x4],ecx
100961fd:	66 89 47 08          	mov    WORD PTR [edi+0x8],ax
10096201:	66 8b 46 0a          	mov    ax,WORD PTR [esi+0xa]
10096205:	66 89 47 0a          	mov    WORD PTR [edi+0xa],ax
10096209:	66 8b 4c 9d 24       	mov    cx,WORD PTR [ebp+ebx*4+0x24]
1009620e:	66 89 4f 0c          	mov    WORD PTR [edi+0xc],cx
10096212:	66 8b 54 9d 26       	mov    dx,WORD PTR [ebp+ebx*4+0x26]
10096217:	66 89 57 0e          	mov    WORD PTR [edi+0xe],dx
1009621b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10096221:	8b 01                	mov    eax,DWORD PTR [ecx]
10096223:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
10096229:	8b 6c 24 18          	mov    ebp,DWORD PTR [esp+0x18]
1009622d:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
10096231:	d9 17                	fst    DWORD PTR [edi]
10096233:	d9 1e                	fstp   DWORD PTR [esi]
10096235:	6a 00                	push   0x0
10096237:	55                   	push   ebp
10096238:	56                   	push   esi
10096239:	8b cb                	mov    ecx,ebx
1009623b:	e8 10 f6 ff ff       	call   0x10095850
10096240:	84 c0                	test   al,al
10096242:	74 28                	je     0x1009626c
10096244:	6a 00                	push   0x0
10096246:	55                   	push   ebp
10096247:	57                   	push   edi
10096248:	8b cb                	mov    ecx,ebx
1009624a:	e8 01 f6 ff ff       	call   0x10095850
1009624f:	84 c0                	test   al,al
10096251:	74 19                	je     0x1009626c
10096253:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
10096257:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1009625b:	b8 01 00 00 00       	mov    eax,0x1
10096260:	89 31                	mov    DWORD PTR [ecx],esi
10096262:	89 3a                	mov    DWORD PTR [edx],edi
10096264:	5f                   	pop    edi
10096265:	5e                   	pop    esi
10096266:	5d                   	pop    ebp
10096267:	5b                   	pop    ebx
10096268:	59                   	pop    ecx
10096269:	c2 0c 00             	ret    0xc
1009626c:	8b 7d 64             	mov    edi,DWORD PTR [ebp+0x64]
1009626f:	8d 75 5c             	lea    esi,[ebp+0x5c]
10096272:	57                   	push   edi
10096273:	8b ce                	mov    ecx,esi
10096275:	e8 36 64 f7 ff       	call   0x1000c6b0
1009627a:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
1009627d:	8d 6b 10             	lea    ebp,[ebx+0x10]
10096280:	57                   	push   edi
10096281:	50                   	push   eax
10096282:	8b cd                	mov    ecx,ebp
10096284:	e8 a7 63 f7 ff       	call   0x1000c630
10096289:	8b 7e 08             	mov    edi,DWORD PTR [esi+0x8]
1009628c:	8b ce                	mov    ecx,esi
1009628e:	57                   	push   edi
1009628f:	e8 1c 64 f7 ff       	call   0x1000c6b0
10096294:	8b 4b 18             	mov    ecx,DWORD PTR [ebx+0x18]
10096297:	57                   	push   edi
10096298:	51                   	push   ecx
10096299:	8b cd                	mov    ecx,ebp
1009629b:	e8 90 63 f7 ff       	call   0x1000c630
100962a0:	5f                   	pop    edi
100962a1:	5e                   	pop    esi
100962a2:	5d                   	pop    ebp
100962a3:	33 c0                	xor    eax,eax
100962a5:	5b                   	pop    ebx
100962a6:	59                   	pop    ecx
100962a7:	c2 0c 00             	ret    0xc
100962aa:	90                   	nop
100962ab:	90                   	nop
100962ac:	90                   	nop
100962ad:	90                   	nop
100962ae:	90                   	nop
100962af:	90                   	nop
100962b0:	53                   	push   ebx
100962b1:	56                   	push   esi
100962b2:	57                   	push   edi
100962b3:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
100962b7:	85 ff                	test   edi,edi
100962b9:	8b d9                	mov    ebx,ecx
100962bb:	74 52                	je     0x1009630f
100962bd:	8b 77 60             	mov    esi,DWORD PTR [edi+0x60]
100962c0:	85 f6                	test   esi,esi
100962c2:	74 4b                	je     0x1009630f
100962c4:	55                   	push   ebp
100962c5:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
100962c8:	f6 40 04 80          	test   BYTE PTR [eax+0x4],0x80
100962cc:	74 3a                	je     0x10096308
100962ce:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100962d4:	8b 50 10             	mov    edx,DWORD PTR [eax+0x10]
100962d7:	8b 07                	mov    eax,DWORD PTR [edi]
100962d9:	52                   	push   edx
100962da:	8d a9 40 01 00 00    	lea    ebp,[ecx+0x140]
100962e0:	8b cf                	mov    ecx,edi
100962e2:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
100962e5:	50                   	push   eax
100962e6:	ff 55 00             	call   DWORD PTR [ebp+0x0]
100962e9:	8b 2e                	mov    ebp,DWORD PTR [esi]
100962eb:	83 c4 08             	add    esp,0x8
100962ee:	8d 4f 5c             	lea    ecx,[edi+0x5c]
100962f1:	56                   	push   esi
100962f2:	e8 b9 63 f7 ff       	call   0x1000c6b0
100962f7:	8b 4b 18             	mov    ecx,DWORD PTR [ebx+0x18]
100962fa:	56                   	push   esi
100962fb:	51                   	push   ecx
100962fc:	8d 4b 10             	lea    ecx,[ebx+0x10]
100962ff:	e8 2c 63 f7 ff       	call   0x1000c630
10096304:	8b f5                	mov    esi,ebp
10096306:	eb 02                	jmp    0x1009630a
10096308:	8b 36                	mov    esi,DWORD PTR [esi]
1009630a:	85 f6                	test   esi,esi
1009630c:	75 b7                	jne    0x100962c5
1009630e:	5d                   	pop    ebp
1009630f:	5f                   	pop    edi
10096310:	5e                   	pop    esi
10096311:	5b                   	pop    ebx
10096312:	c2 04 00             	ret    0x4
10096315:	90                   	nop
10096316:	90                   	nop
10096317:	90                   	nop
10096318:	90                   	nop
10096319:	90                   	nop
1009631a:	90                   	nop
1009631b:	90                   	nop
1009631c:	90                   	nop
1009631d:	90                   	nop
1009631e:	90                   	nop
1009631f:	90                   	nop
10096320:	53                   	push   ebx
10096321:	55                   	push   ebp
10096322:	56                   	push   esi
10096323:	57                   	push   edi
10096324:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
10096328:	8b e9                	mov    ebp,ecx
1009632a:	85 ff                	test   edi,edi
1009632c:	0f 84 d3 00 00 00    	je     0x10096405
10096332:	8b 07                	mov    eax,DWORD PTR [edi]
10096334:	8b cf                	mov    ecx,edi
10096336:	ff 10                	call   DWORD PTR [eax]
10096338:	85 c0                	test   eax,eax
1009633a:	0f 84 c5 00 00 00    	je     0x10096405
10096340:	8b 17                	mov    edx,DWORD PTR [edi]
10096342:	8b cf                	mov    ecx,edi
10096344:	ff 12                	call   DWORD PTR [edx]
10096346:	83 f8 01             	cmp    eax,0x1
10096349:	0f 84 b6 00 00 00    	je     0x10096405
1009634f:	8b 07                	mov    eax,DWORD PTR [edi]
10096351:	8b cf                	mov    ecx,edi
10096353:	ff 10                	call   DWORD PTR [eax]
10096355:	83 f8 08             	cmp    eax,0x8
10096358:	0f 84 a7 00 00 00    	je     0x10096405
1009635e:	8b 17                	mov    edx,DWORD PTR [edi]
10096360:	8b cf                	mov    ecx,edi
10096362:	ff 52 18             	call   DWORD PTR [edx+0x18]
10096365:	50                   	push   eax
10096366:	b9 10 59 11 10       	mov    ecx,0x10115910
1009636b:	e8 f0 92 f8 ff       	call   0x1001f660
10096370:	85 c0                	test   eax,eax
10096372:	74 05                	je     0x10096379
10096374:	8b 40 3c             	mov    eax,DWORD PTR [eax+0x3c]
10096377:	8b 00                	mov    eax,DWORD PTR [eax]
10096379:	8d 0c 80             	lea    ecx,[eax+eax*4]
1009637c:	8d 14 c8             	lea    edx,[eax+ecx*8]
1009637f:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10096382:	8d 0c 90             	lea    ecx,[eax+edx*4]
10096385:	8b 17                	mov    edx,DWORD PTR [edi]
10096387:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
1009638b:	8b cf                	mov    ecx,edi
1009638d:	ff 52 40             	call   DWORD PTR [edx+0x40]
10096390:	8b d8                	mov    ebx,eax
10096392:	83 fb 05             	cmp    ebx,0x5
10096395:	7f 6e                	jg     0x10096405
10096397:	57                   	push   edi
10096398:	8b cd                	mov    ecx,ebp
1009639a:	e8 41 f0 ff ff       	call   0x100953e0
1009639f:	8b f0                	mov    esi,eax
100963a1:	33 c0                	xor    eax,eax
100963a3:	3b f0                	cmp    esi,eax
100963a5:	74 5e                	je     0x10096405
100963a7:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
100963aa:	66 89 46 0a          	mov    WORD PTR [esi+0xa],ax
100963ae:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100963b2:	66 c7 46 08 0c 00    	mov    WORD PTR [esi+0x8],0xc
100963b8:	66 8b 4c 98 64       	mov    cx,WORD PTR [eax+ebx*4+0x64]
100963bd:	66 89 4e 0c          	mov    WORD PTR [esi+0xc],cx
100963c1:	66 8b 54 98 66       	mov    dx,WORD PTR [eax+ebx*4+0x66]
100963c6:	66 89 56 0e          	mov    WORD PTR [esi+0xe],dx
100963ca:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100963d0:	8b 01                	mov    eax,DWORD PTR [ecx]
100963d2:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
100963d8:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
100963dc:	d9 1e                	fstp   DWORD PTR [esi]
100963de:	51                   	push   ecx
100963df:	57                   	push   edi
100963e0:	56                   	push   esi
100963e1:	8b cd                	mov    ecx,ebp
100963e3:	e8 68 f4 ff ff       	call   0x10095850
100963e8:	84 c0                	test   al,al
100963ea:	75 22                	jne    0x1009640e
100963ec:	8b 77 64             	mov    esi,DWORD PTR [edi+0x64]
100963ef:	8d 4f 5c             	lea    ecx,[edi+0x5c]
100963f2:	56                   	push   esi
100963f3:	e8 b8 62 f7 ff       	call   0x1000c6b0
100963f8:	8b 55 18             	mov    edx,DWORD PTR [ebp+0x18]
100963fb:	56                   	push   esi
100963fc:	52                   	push   edx
100963fd:	8d 4d 10             	lea    ecx,[ebp+0x10]
10096400:	e8 2b 62 f7 ff       	call   0x1000c630
10096405:	5f                   	pop    edi
10096406:	5e                   	pop    esi
10096407:	5d                   	pop    ebp
10096408:	33 c0                	xor    eax,eax
1009640a:	5b                   	pop    ebx
1009640b:	c2 08 00             	ret    0x8
1009640e:	56                   	push   esi
1009640f:	8b cf                	mov    ecx,edi
10096411:	e8 5a 31 f8 ff       	call   0x10019570
10096416:	5f                   	pop    edi
10096417:	5e                   	pop    esi
10096418:	5d                   	pop    ebp
10096419:	b8 01 00 00 00       	mov    eax,0x1
1009641e:	5b                   	pop    ebx
1009641f:	c2 08 00             	ret    0x8
10096422:	90                   	nop
10096423:	90                   	nop
10096424:	90                   	nop
10096425:	90                   	nop
10096426:	90                   	nop
10096427:	90                   	nop
10096428:	90                   	nop
10096429:	90                   	nop
1009642a:	90                   	nop
1009642b:	90                   	nop
1009642c:	90                   	nop
1009642d:	90                   	nop
1009642e:	90                   	nop
1009642f:	90                   	nop
10096430:	55                   	push   ebp
10096431:	56                   	push   esi
10096432:	57                   	push   edi
10096433:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10096437:	85 ff                	test   edi,edi
10096439:	8b e9                	mov    ebp,ecx
1009643b:	74 55                	je     0x10096492
1009643d:	8b 77 60             	mov    esi,DWORD PTR [edi+0x60]
10096440:	85 f6                	test   esi,esi
10096442:	74 4e                	je     0x10096492
10096444:	b8 0c 00 00 00       	mov    eax,0xc
10096449:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1009644c:	66 39 41 08          	cmp    WORD PTR [ecx+0x8],ax
10096450:	74 08                	je     0x1009645a
10096452:	8b 36                	mov    esi,DWORD PTR [esi]
10096454:	85 f6                	test   esi,esi
10096456:	74 3a                	je     0x10096492
10096458:	eb ef                	jmp    0x10096449
1009645a:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1009645d:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10096463:	53                   	push   ebx
10096464:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
10096467:	8d 9a 40 01 00 00    	lea    ebx,[edx+0x140]
1009646d:	8b 17                	mov    edx,DWORD PTR [edi]
1009646f:	51                   	push   ecx
10096470:	8b cf                	mov    ecx,edi
10096472:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
10096475:	50                   	push   eax
10096476:	ff 13                	call   DWORD PTR [ebx]
10096478:	83 c4 08             	add    esp,0x8
1009647b:	8d 4f 5c             	lea    ecx,[edi+0x5c]
1009647e:	56                   	push   esi
1009647f:	e8 2c 62 f7 ff       	call   0x1000c6b0
10096484:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
10096487:	56                   	push   esi
10096488:	50                   	push   eax
10096489:	8d 4d 10             	lea    ecx,[ebp+0x10]
1009648c:	e8 9f 61 f7 ff       	call   0x1000c630
10096491:	5b                   	pop    ebx
10096492:	5f                   	pop    edi
10096493:	5e                   	pop    esi
10096494:	5d                   	pop    ebp
10096495:	c2 04 00             	ret    0x4
10096498:	90                   	nop
10096499:	90                   	nop
1009649a:	90                   	nop
1009649b:	90                   	nop
1009649c:	90                   	nop
1009649d:	90                   	nop
1009649e:	90                   	nop
1009649f:	90                   	nop
100964a0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
100964a4:	83 f8 ff             	cmp    eax,0xffffffff
100964a7:	74 1d                	je     0x100964c6
100964a9:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
100964ad:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
100964b4:	2b c8                	sub    ecx,eax
100964b6:	8b 02                	mov    eax,DWORD PTR [edx]
100964b8:	c1 e1 05             	shl    ecx,0x5
100964bb:	8d 44 01 04          	lea    eax,[ecx+eax*1+0x4]
100964bf:	8b 08                	mov    ecx,DWORD PTR [eax]
100964c1:	80 c9 80             	or     cl,0x80
100964c4:	89 08                	mov    DWORD PTR [eax],ecx
100964c6:	c2 08 00             	ret    0x8
100964c9:	90                   	nop
100964ca:	90                   	nop
100964cb:	90                   	nop
100964cc:	90                   	nop
100964cd:	90                   	nop
100964ce:	90                   	nop
100964cf:	90                   	nop
100964d0:	53                   	push   ebx
100964d1:	56                   	push   esi
100964d2:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
100964d6:	57                   	push   edi
100964d7:	33 ff                	xor    edi,edi
100964d9:	8b d9                	mov    ebx,ecx
100964db:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100964de:	2d c8 00 00 00       	sub    eax,0xc8
100964e3:	74 2c                	je     0x10096511
100964e5:	55                   	push   ebp
100964e6:	33 ed                	xor    ebp,ebp
100964e8:	8b 0e                	mov    ecx,DWORD PTR [esi]
100964ea:	f6 44 29 04 80       	test   BYTE PTR [ecx+ebp*1+0x4],0x80
100964ef:	74 0b                	je     0x100964fc
100964f1:	6a 01                	push   0x1
100964f3:	57                   	push   edi
100964f4:	56                   	push   esi
100964f5:	8b cb                	mov    ecx,ebx
100964f7:	e8 84 03 00 00       	call   0x10096880
100964fc:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100964ff:	47                   	inc    edi
10096500:	81 ea c8 00 00 00    	sub    edx,0xc8
10096506:	81 c5 e0 00 00 00    	add    ebp,0xe0
1009650c:	3b fa                	cmp    edi,edx
1009650e:	72 d8                	jb     0x100964e8
10096510:	5d                   	pop    ebp
10096511:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10096515:	8b cb                	mov    ecx,ebx
10096517:	50                   	push   eax
10096518:	56                   	push   esi
10096519:	e8 12 00 00 00       	call   0x10096530
1009651e:	56                   	push   esi
1009651f:	8b cb                	mov    ecx,ebx
10096521:	e8 fa 00 00 00       	call   0x10096620
10096526:	5f                   	pop    edi
10096527:	5e                   	pop    esi
10096528:	b0 01                	mov    al,0x1
1009652a:	5b                   	pop    ebx
1009652b:	c2 08 00             	ret    0x8
1009652e:	90                   	nop
1009652f:	90                   	nop
10096530:	81 ec 28 03 00 00    	sub    esp,0x328
10096536:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1009653c:	57                   	push   edi
1009653d:	8b f9                	mov    edi,ecx
1009653f:	8d 44 24 04          	lea    eax,[esp+0x4]
10096543:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
10096547:	50                   	push   eax
10096548:	51                   	push   ecx
10096549:	c7 44 24 0c c8 00 00 	mov    DWORD PTR [esp+0xc],0xc8
10096550:	00 
10096551:	ff 92 dc 03 00 00    	call   DWORD PTR [edx+0x3dc]
10096557:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1009655b:	83 c4 08             	add    esp,0x8
1009655e:	85 c0                	test   eax,eax
10096560:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
10096567:	00 
10096568:	0f 86 a8 00 00 00    	jbe    0x10096616
1009656e:	53                   	push   ebx
1009656f:	8b 9c 24 38 03 00 00 	mov    ebx,DWORD PTR [esp+0x338]
10096576:	55                   	push   ebp
10096577:	8b ac 24 38 03 00 00 	mov    ebp,DWORD PTR [esp+0x338]
1009657e:	56                   	push   esi
1009657f:	8d 74 24 18          	lea    esi,[esp+0x18]
10096583:	8b 06                	mov    eax,DWORD PTR [esi]
10096585:	8b cb                	mov    ecx,ebx
10096587:	50                   	push   eax
10096588:	e8 53 aa f7 ff       	call   0x10010fe0
1009658d:	0f bf 40 64          	movsx  eax,WORD PTR [eax+0x64]
10096591:	83 f8 ff             	cmp    eax,0xffffffff
10096594:	74 0b                	je     0x100965a1
10096596:	6a 00                	push   0x0
10096598:	50                   	push   eax
10096599:	55                   	push   ebp
1009659a:	8b cf                	mov    ecx,edi
1009659c:	e8 df 02 00 00       	call   0x10096880
100965a1:	8b 0e                	mov    ecx,DWORD PTR [esi]
100965a3:	51                   	push   ecx
100965a4:	8b cb                	mov    ecx,ebx
100965a6:	e8 35 aa f7 ff       	call   0x10010fe0
100965ab:	0f bf 40 66          	movsx  eax,WORD PTR [eax+0x66]
100965af:	83 f8 ff             	cmp    eax,0xffffffff
100965b2:	74 0b                	je     0x100965bf
100965b4:	6a 00                	push   0x0
100965b6:	50                   	push   eax
100965b7:	55                   	push   ebp
100965b8:	8b cf                	mov    ecx,edi
100965ba:	e8 c1 02 00 00       	call   0x10096880
100965bf:	8b 16                	mov    edx,DWORD PTR [esi]
100965c1:	8b cb                	mov    ecx,ebx
100965c3:	52                   	push   edx
100965c4:	e8 17 aa f7 ff       	call   0x10010fe0
100965c9:	0f bf 40 68          	movsx  eax,WORD PTR [eax+0x68]
100965cd:	83 f8 ff             	cmp    eax,0xffffffff
100965d0:	74 0b                	je     0x100965dd
100965d2:	6a 00                	push   0x0
100965d4:	50                   	push   eax
100965d5:	55                   	push   ebp
100965d6:	8b cf                	mov    ecx,edi
100965d8:	e8 a3 02 00 00       	call   0x10096880
100965dd:	8b 06                	mov    eax,DWORD PTR [esi]
100965df:	8b cb                	mov    ecx,ebx
100965e1:	50                   	push   eax
100965e2:	e8 f9 a9 f7 ff       	call   0x10010fe0
100965e7:	0f bf 40 6a          	movsx  eax,WORD PTR [eax+0x6a]
100965eb:	83 f8 ff             	cmp    eax,0xffffffff
100965ee:	74 0b                	je     0x100965fb
100965f0:	6a 00                	push   0x0
100965f2:	50                   	push   eax
100965f3:	55                   	push   ebp
100965f4:	8b cf                	mov    ecx,edi
100965f6:	e8 85 02 00 00       	call   0x10096880
100965fb:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100965ff:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10096603:	40                   	inc    eax
10096604:	83 c6 04             	add    esi,0x4
10096607:	3b c1                	cmp    eax,ecx
10096609:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1009660d:	0f 82 70 ff ff ff    	jb     0x10096583
10096613:	5e                   	pop    esi
10096614:	5d                   	pop    ebp
10096615:	5b                   	pop    ebx
10096616:	5f                   	pop    edi
10096617:	81 c4 28 03 00 00    	add    esp,0x328
1009661d:	c2 08 00             	ret    0x8
10096620:	53                   	push   ebx
10096621:	55                   	push   ebp
10096622:	56                   	push   esi
10096623:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
10096627:	57                   	push   edi
10096628:	33 ed                	xor    ebp,ebp
1009662a:	8b f9                	mov    edi,ecx
1009662c:	33 db                	xor    ebx,ebx
1009662e:	3b 2d 70 cf 10 10    	cmp    ebp,DWORD PTR ds:0x1010cf70
10096634:	73 25                	jae    0x1009665b
10096636:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1009663b:	8d 0c 03             	lea    ecx,[ebx+eax*1]
1009663e:	85 c9                	test   ecx,ecx
10096640:	74 19                	je     0x1009665b
10096642:	33 c0                	xor    eax,eax
10096644:	66 8b 81 42 01 00 00 	mov    ax,WORD PTR [ecx+0x142]
1009664b:	83 f8 ff             	cmp    eax,0xffffffff
1009664e:	74 0b                	je     0x1009665b
10096650:	6a 00                	push   0x0
10096652:	50                   	push   eax
10096653:	56                   	push   esi
10096654:	8b cf                	mov    ecx,edi
10096656:	e8 25 02 00 00       	call   0x10096880
1009665b:	81 c3 6c 01 00 00    	add    ebx,0x16c
10096661:	45                   	inc    ebp
10096662:	81 fb 94 59 00 00    	cmp    ebx,0x5994
10096668:	7e c4                	jle    0x1009662e
1009666a:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1009666d:	85 c0                	test   eax,eax
1009666f:	76 20                	jbe    0x10096691
10096671:	33 db                	xor    ebx,ebx
10096673:	8b e8                	mov    ebp,eax
10096675:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10096678:	8b 04 0b             	mov    eax,DWORD PTR [ebx+ecx*1]
1009667b:	83 f8 ff             	cmp    eax,0xffffffff
1009667e:	74 0b                	je     0x1009668b
10096680:	6a 00                	push   0x0
10096682:	50                   	push   eax
10096683:	56                   	push   esi
10096684:	8b cf                	mov    ecx,edi
10096686:	e8 f5 01 00 00       	call   0x10096880
1009668b:	83 c3 10             	add    ebx,0x10
1009668e:	4d                   	dec    ebp
1009668f:	75 e4                	jne    0x10096675
10096691:	6a 00                	push   0x0
10096693:	68 8b 00 00 00       	push   0x8b
10096698:	56                   	push   esi
10096699:	8b cf                	mov    ecx,edi
1009669b:	e8 e0 01 00 00       	call   0x10096880
100966a0:	6a 00                	push   0x0
100966a2:	68 68 01 00 00       	push   0x168
100966a7:	56                   	push   esi
100966a8:	8b cf                	mov    ecx,edi
100966aa:	e8 d1 01 00 00       	call   0x10096880
100966af:	6a 00                	push   0x0
100966b1:	68 a8 00 00 00       	push   0xa8
100966b6:	56                   	push   esi
100966b7:	8b cf                	mov    ecx,edi
100966b9:	e8 c2 01 00 00       	call   0x10096880
100966be:	6a 00                	push   0x0
100966c0:	68 a9 00 00 00       	push   0xa9
100966c5:	56                   	push   esi
100966c6:	8b cf                	mov    ecx,edi
100966c8:	e8 b3 01 00 00       	call   0x10096880
100966cd:	6a 00                	push   0x0
100966cf:	6a 1d                	push   0x1d
100966d1:	56                   	push   esi
100966d2:	8b cf                	mov    ecx,edi
100966d4:	e8 a7 01 00 00       	call   0x10096880
100966d9:	6a 00                	push   0x0
100966db:	6a 1e                	push   0x1e
100966dd:	56                   	push   esi
100966de:	8b cf                	mov    ecx,edi
100966e0:	e8 9b 01 00 00       	call   0x10096880
100966e5:	6a 00                	push   0x0
100966e7:	68 5e 01 00 00       	push   0x15e
100966ec:	56                   	push   esi
100966ed:	8b cf                	mov    ecx,edi
100966ef:	e8 8c 01 00 00       	call   0x10096880
100966f4:	6a 00                	push   0x0
100966f6:	68 aa 00 00 00       	push   0xaa
100966fb:	56                   	push   esi
100966fc:	8b cf                	mov    ecx,edi
100966fe:	e8 7d 01 00 00       	call   0x10096880
10096703:	6a 00                	push   0x0
10096705:	6a 19                	push   0x19
10096707:	56                   	push   esi
10096708:	8b cf                	mov    ecx,edi
1009670a:	e8 71 01 00 00       	call   0x10096880
1009670f:	6a 00                	push   0x0
10096711:	6a 1a                	push   0x1a
10096713:	56                   	push   esi
10096714:	8b cf                	mov    ecx,edi
10096716:	e8 65 01 00 00       	call   0x10096880
1009671b:	6a 00                	push   0x0
1009671d:	68 c4 00 00 00       	push   0xc4
10096722:	56                   	push   esi
10096723:	8b cf                	mov    ecx,edi
10096725:	e8 56 01 00 00       	call   0x10096880
1009672a:	6a 00                	push   0x0
1009672c:	6a 01                	push   0x1
1009672e:	56                   	push   esi
1009672f:	8b cf                	mov    ecx,edi
10096731:	e8 4a 01 00 00       	call   0x10096880
10096736:	6a 00                	push   0x0
10096738:	68 49 01 00 00       	push   0x149
1009673d:	56                   	push   esi
1009673e:	8b cf                	mov    ecx,edi
10096740:	e8 3b 01 00 00       	call   0x10096880
10096745:	6a 00                	push   0x0
10096747:	68 4a 01 00 00       	push   0x14a
1009674c:	56                   	push   esi
1009674d:	8b cf                	mov    ecx,edi
1009674f:	e8 2c 01 00 00       	call   0x10096880
10096754:	6a 00                	push   0x0
10096756:	68 4b 01 00 00       	push   0x14b
1009675b:	56                   	push   esi
1009675c:	8b cf                	mov    ecx,edi
1009675e:	e8 1d 01 00 00       	call   0x10096880
10096763:	6a 00                	push   0x0
10096765:	68 4c 01 00 00       	push   0x14c
1009676a:	56                   	push   esi
1009676b:	8b cf                	mov    ecx,edi
1009676d:	e8 0e 01 00 00       	call   0x10096880
10096772:	6a 00                	push   0x0
10096774:	68 4d 01 00 00       	push   0x14d
10096779:	56                   	push   esi
1009677a:	8b cf                	mov    ecx,edi
1009677c:	e8 ff 00 00 00       	call   0x10096880
10096781:	6a 00                	push   0x0
10096783:	68 4e 01 00 00       	push   0x14e
10096788:	56                   	push   esi
10096789:	8b cf                	mov    ecx,edi
1009678b:	e8 f0 00 00 00       	call   0x10096880
10096790:	6a 00                	push   0x0
10096792:	68 4f 01 00 00       	push   0x14f
10096797:	56                   	push   esi
10096798:	8b cf                	mov    ecx,edi
1009679a:	e8 e1 00 00 00       	call   0x10096880
1009679f:	6a 00                	push   0x0
100967a1:	68 50 01 00 00       	push   0x150
100967a6:	56                   	push   esi
100967a7:	8b cf                	mov    ecx,edi
100967a9:	e8 d2 00 00 00       	call   0x10096880
100967ae:	6a 00                	push   0x0
100967b0:	68 51 01 00 00       	push   0x151
100967b5:	56                   	push   esi
100967b6:	8b cf                	mov    ecx,edi
100967b8:	e8 c3 00 00 00       	call   0x10096880
100967bd:	6a 00                	push   0x0
100967bf:	68 8a 01 00 00       	push   0x18a
100967c4:	56                   	push   esi
100967c5:	8b cf                	mov    ecx,edi
100967c7:	e8 b4 00 00 00       	call   0x10096880
100967cc:	68 89 01 00 00       	push   0x189
100967d1:	56                   	push   esi
100967d2:	8b cf                	mov    ecx,edi
100967d4:	e8 87 00 00 00       	call   0x10096860
100967d9:	68 84 01 00 00       	push   0x184
100967de:	56                   	push   esi
100967df:	8b cf                	mov    ecx,edi
100967e1:	e8 7a 00 00 00       	call   0x10096860
100967e6:	68 60 01 00 00       	push   0x160
100967eb:	56                   	push   esi
100967ec:	8b cf                	mov    ecx,edi
100967ee:	e8 6d 00 00 00       	call   0x10096860
100967f3:	68 61 01 00 00       	push   0x161
100967f8:	56                   	push   esi
100967f9:	8b cf                	mov    ecx,edi
100967fb:	e8 60 00 00 00       	call   0x10096860
10096800:	68 7f 01 00 00       	push   0x17f
10096805:	56                   	push   esi
10096806:	8b cf                	mov    ecx,edi
10096808:	e8 53 00 00 00       	call   0x10096860
1009680d:	6a 3e                	push   0x3e
1009680f:	56                   	push   esi
10096810:	8b cf                	mov    ecx,edi
10096812:	e8 49 00 00 00       	call   0x10096860
10096817:	6a 3f                	push   0x3f
10096819:	56                   	push   esi
1009681a:	8b cf                	mov    ecx,edi
1009681c:	e8 3f 00 00 00       	call   0x10096860
10096821:	6a 40                	push   0x40
10096823:	56                   	push   esi
10096824:	8b cf                	mov    ecx,edi
10096826:	e8 35 00 00 00       	call   0x10096860
1009682b:	6a 41                	push   0x41
1009682d:	56                   	push   esi
1009682e:	8b cf                	mov    ecx,edi
10096830:	e8 2b 00 00 00       	call   0x10096860
10096835:	6a 42                	push   0x42
10096837:	56                   	push   esi
10096838:	8b cf                	mov    ecx,edi
1009683a:	e8 21 00 00 00       	call   0x10096860
1009683f:	68 b7 00 00 00       	push   0xb7
10096844:	56                   	push   esi
10096845:	8b cf                	mov    ecx,edi
10096847:	e8 14 00 00 00       	call   0x10096860
1009684c:	6a 43                	push   0x43
1009684e:	56                   	push   esi
1009684f:	8b cf                	mov    ecx,edi
10096851:	e8 0a 00 00 00       	call   0x10096860
10096856:	5f                   	pop    edi
10096857:	5e                   	pop    esi
10096858:	5d                   	pop    ebp
10096859:	5b                   	pop    ebx
1009685a:	c2 04 00             	ret    0x4
1009685d:	90                   	nop
1009685e:	90                   	nop
1009685f:	90                   	nop
10096860:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10096864:	83 f8 ff             	cmp    eax,0xffffffff
10096867:	74 0d                	je     0x10096876
10096869:	6a 00                	push   0x0
1009686b:	50                   	push   eax
1009686c:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10096870:	50                   	push   eax
10096871:	e8 0a 00 00 00       	call   0x10096880
10096876:	c2 08 00             	ret    0x8
10096879:	90                   	nop
1009687a:	90                   	nop
1009687b:	90                   	nop
1009687c:	90                   	nop
1009687d:	90                   	nop
1009687e:	90                   	nop
1009687f:	90                   	nop

*/
void PlayerDamage::ApplyDecalToActor() {
    // TODO: Implement ApplyDecalToActor
}

