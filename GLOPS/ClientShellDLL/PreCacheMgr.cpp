#include "PreCacheMgr.h"

// 0x10096880: PreCacheMgr::PreCacheSpriteFX
/*
10096880:	81 ec 88 06 00 00    	sub    esp,0x688
10096886:	8b 84 24 90 06 00 00 	mov    eax,DWORD PTR [esp+0x690]
1009688d:	53                   	push   ebx
1009688e:	55                   	push   ebp
1009688f:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
10096893:	8d 2c c5 00 00 00 00 	lea    ebp,[eax*8+0x0]
1009689a:	33 db                	xor    ebx,ebx
1009689c:	2b e8                	sub    ebp,eax
1009689e:	8b 84 24 94 06 00 00 	mov    eax,DWORD PTR [esp+0x694]
100968a5:	c1 e5 05             	shl    ebp,0x5
100968a8:	8b 08                	mov    ecx,DWORD PTR [eax]
100968aa:	8a 84 24 9c 06 00 00 	mov    al,BYTE PTR [esp+0x69c]
100968b1:	03 e9                	add    ebp,ecx
100968b3:	56                   	push   esi
100968b4:	3a c3                	cmp    al,bl
100968b6:	57                   	push   edi
100968b7:	75 10                	jne    0x100968c9
100968b9:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
100968bc:	a8 80                	test   al,0x80
100968be:	0f 85 93 03 00 00    	jne    0x10096c57
100968c4:	0c 80                	or     al,0x80
100968c6:	89 45 04             	mov    DWORD PTR [ebp+0x4],eax
100968c9:	68 00 00 80 3f       	push   0x3f800000
100968ce:	be 01 00 00 00       	mov    esi,0x1
100968d3:	68 00 00 80 3f       	push   0x3f800000
100968d8:	68 00 00 80 3f       	push   0x3f800000
100968dd:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
100968e1:	66 89 5c 24 20       	mov    WORD PTR [esp+0x20],bx
100968e6:	66 89 5c 24 22       	mov    WORD PTR [esp+0x22],bx
100968eb:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
100968ef:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
100968f3:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
100968f7:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
100968fe:	00 
100968ff:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
10096906:	00 
10096907:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
1009690e:	00 
1009690f:	e8 ac 4a f7 ff       	call   0x1000b3c0
10096914:	68 00 00 80 3f       	push   0x3f800000
10096919:	53                   	push   ebx
1009691a:	53                   	push   ebx
1009691b:	53                   	push   ebx
1009691c:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
10096920:	e8 6b 04 f7 ff       	call   0x10006d90
10096925:	8d 84 24 10 01 00 00 	lea    eax,[esp+0x110]
1009692c:	b9 0a 00 00 00       	mov    ecx,0xa
10096931:	88 18                	mov    BYTE PTR [eax],bl
10096933:	05 80 00 00 00       	add    eax,0x80
10096938:	49                   	dec    ecx
10096939:	75 f6                	jne    0x10096931
1009693b:	66 89 5c 24 14       	mov    WORD PTR [esp+0x14],bx
10096940:	66 89 5c 24 16       	mov    WORD PTR [esp+0x16],bx
10096945:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
10096949:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
1009694d:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
10096951:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
10096958:	00 
10096959:	c7 44 24 28 00 00 00 	mov    DWORD PTR [esp+0x28],0x0
10096960:	00 
10096961:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
10096968:	00 
10096969:	c7 44 24 30 00 00 80 	mov    DWORD PTR [esp+0x30],0x3f800000
10096970:	3f 
10096971:	c7 44 24 34 00 00 80 	mov    DWORD PTR [esp+0x34],0x3f800000
10096978:	3f 
10096979:	c7 44 24 38 00 00 80 	mov    DWORD PTR [esp+0x38],0x3f800000
10096980:	3f 
10096981:	c7 44 24 3c 00 00 00 	mov    DWORD PTR [esp+0x3c],0x0
10096988:	00 
10096989:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
10096990:	00 
10096991:	c7 44 24 44 00 00 00 	mov    DWORD PTR [esp+0x44],0x0
10096998:	00 
10096999:	c7 44 24 48 00 00 80 	mov    DWORD PTR [esp+0x48],0x3f800000
100969a0:	3f 
100969a1:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
100969a5:	88 5c 24 50          	mov    BYTE PTR [esp+0x50],bl
100969a9:	88 9c 24 90 00 00 00 	mov    BYTE PTR [esp+0x90],bl
100969b0:	8d 84 24 10 01 00 00 	lea    eax,[esp+0x110]
100969b7:	b9 0a 00 00 00       	mov    ecx,0xa
100969bc:	88 18                	mov    BYTE PTR [eax],bl
100969be:	05 80 00 00 00       	add    eax,0x80
100969c3:	49                   	dec    ecx
100969c4:	75 f6                	jne    0x100969bc
100969c6:	88 9c 24 10 06 00 00 	mov    BYTE PTR [esp+0x610],bl
100969cd:	c7 84 24 90 06 00 00 	mov    DWORD PTR [esp+0x690],0x0
100969d4:	00 00 00 00 
100969d8:	c7 84 24 94 06 00 00 	mov    DWORD PTR [esp+0x694],0x0
100969df:	00 00 00 00 
100969e3:	8a 45 08             	mov    al,BYTE PTR [ebp+0x8]
100969e6:	a8 10                	test   al,0x10
100969e8:	0f 85 ce 00 00 00    	jne    0x10096abc
100969ee:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
100969f1:	f6 c4 10             	test   ah,0x10
100969f4:	0f 85 c2 00 00 00    	jne    0x10096abc
100969fa:	8d 7d 0c             	lea    edi,[ebp+0xc]
100969fd:	83 c9 ff             	or     ecx,0xffffffff
10096a00:	33 c0                	xor    eax,eax
10096a02:	8d 94 24 90 00 00 00 	lea    edx,[esp+0x90]
10096a09:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
10096a0b:	f7 d1                	not    ecx
10096a0d:	2b f9                	sub    edi,ecx
10096a0f:	8b c1                	mov    eax,ecx
10096a11:	8b f7                	mov    esi,edi
10096a13:	8b fa                	mov    edi,edx
10096a15:	c1 e9 02             	shr    ecx,0x2
10096a18:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10096a1a:	8b c8                	mov    ecx,eax
10096a1c:	83 e1 03             	and    ecx,0x3
10096a1f:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
10096a21:	f6 45 04 20          	test   BYTE PTR [ebp+0x4],0x20
10096a25:	74 30                	je     0x10096a57
10096a27:	8d 7d 48             	lea    edi,[ebp+0x48]
10096a2a:	83 c9 ff             	or     ecx,0xffffffff
10096a2d:	33 c0                	xor    eax,eax
10096a2f:	66 c7 44 24 14 01 00 	mov    WORD PTR [esp+0x14],0x1
10096a36:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
10096a38:	f7 d1                	not    ecx
10096a3a:	2b f9                	sub    edi,ecx
10096a3c:	8d 94 24 10 01 00 00 	lea    edx,[esp+0x110]
10096a43:	8b c1                	mov    eax,ecx
10096a45:	8b f7                	mov    esi,edi
10096a47:	8b fa                	mov    edi,edx
10096a49:	c1 e9 02             	shr    ecx,0x2
10096a4c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10096a4e:	8b c8                	mov    ecx,eax
10096a50:	83 e1 03             	and    ecx,0x3
10096a53:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
10096a55:	eb 07                	jmp    0x10096a5e
10096a57:	66 c7 44 24 14 03 00 	mov    WORD PTR [esp+0x14],0x3
10096a5e:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10096a64:	8d 4c 24 14          	lea    ecx,[esp+0x14]
10096a68:	51                   	push   ecx
10096a69:	ff 92 ec 02 00 00    	call   DWORD PTR [edx+0x2ec]
10096a6f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10096a75:	83 c4 04             	add    esp,0x4
10096a78:	3b c3                	cmp    eax,ebx
10096a7a:	74 0b                	je     0x10096a87
10096a7c:	8b 11                	mov    edx,DWORD PTR [ecx]
10096a7e:	50                   	push   eax
10096a7f:	ff 92 e0 00 00 00    	call   DWORD PTR [edx+0xe0]
10096a85:	eb 35                	jmp    0x10096abc
10096a87:	8b 01                	mov    eax,DWORD PTR [ecx]
10096a89:	68 ac 00 00 00       	push   0xac
10096a8e:	68 94 ee 0d 10       	push   0x100dee94
10096a93:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10096a99:	8b 94 24 a0 06 00 00 	mov    edx,DWORD PTR [esp+0x6a0]
10096aa0:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10096aa5:	52                   	push   edx
10096aa6:	68 48 ee 0d 10       	push   0x100dee48
10096aab:	8b 08                	mov    ecx,DWORD PTR [eax]
10096aad:	68 fc 3c 0d 10       	push   0x100d3cfc
10096ab2:	50                   	push   eax
10096ab3:	ff 91 2c 01 00 00    	call   DWORD PTR [ecx+0x12c]
10096ab9:	83 c4 10             	add    esp,0x10
10096abc:	68 00 00 80 3f       	push   0x3f800000
10096ac1:	53                   	push   ebx
10096ac2:	53                   	push   ebx
10096ac3:	53                   	push   ebx
10096ac4:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
10096ac8:	66 89 5c 24 24       	mov    WORD PTR [esp+0x24],bx
10096acd:	66 89 5c 24 26       	mov    WORD PTR [esp+0x26],bx
10096ad2:	c7 44 24 28 01 00 00 	mov    DWORD PTR [esp+0x28],0x1
10096ad9:	00 
10096ada:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
10096ade:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
10096ae2:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
10096ae9:	00 
10096aea:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
10096af1:	00 
10096af2:	c7 44 24 3c 00 00 00 	mov    DWORD PTR [esp+0x3c],0x0
10096af9:	00 
10096afa:	c7 44 24 40 00 00 80 	mov    DWORD PTR [esp+0x40],0x3f800000
10096b01:	3f 
10096b02:	c7 44 24 44 00 00 80 	mov    DWORD PTR [esp+0x44],0x3f800000
10096b09:	3f 
10096b0a:	c7 44 24 48 00 00 80 	mov    DWORD PTR [esp+0x48],0x3f800000
10096b11:	3f 
10096b12:	e8 79 02 f7 ff       	call   0x10006d90
10096b17:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
10096b1b:	88 5c 24 50          	mov    BYTE PTR [esp+0x50],bl
10096b1f:	88 9c 24 90 00 00 00 	mov    BYTE PTR [esp+0x90],bl
10096b26:	8d 84 24 10 01 00 00 	lea    eax,[esp+0x110]
10096b2d:	b9 0a 00 00 00       	mov    ecx,0xa
10096b32:	88 18                	mov    BYTE PTR [eax],bl
10096b34:	05 80 00 00 00       	add    eax,0x80
10096b39:	49                   	dec    ecx
10096b3a:	75 f6                	jne    0x10096b32
10096b3c:	88 9c 24 10 06 00 00 	mov    BYTE PTR [esp+0x610],bl
10096b43:	c7 84 24 90 06 00 00 	mov    DWORD PTR [esp+0x690],0x0
10096b4a:	00 00 00 00 
10096b4e:	c7 84 24 94 06 00 00 	mov    DWORD PTR [esp+0x694],0x0
10096b55:	00 00 00 00 
10096b59:	8a 45 08             	mov    al,BYTE PTR [ebp+0x8]
10096b5c:	a8 10                	test   al,0x10
10096b5e:	75 5b                	jne    0x10096bbb
10096b60:	8d 7d 0c             	lea    edi,[ebp+0xc]
10096b63:	83 c9 ff             	or     ecx,0xffffffff
10096b66:	33 c0                	xor    eax,eax
10096b68:	8d 94 24 90 00 00 00 	lea    edx,[esp+0x90]
10096b6f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
10096b71:	f7 d1                	not    ecx
10096b73:	2b f9                	sub    edi,ecx
10096b75:	8b c1                	mov    eax,ecx
10096b77:	8b f7                	mov    esi,edi
10096b79:	8b fa                	mov    edi,edx
10096b7b:	c1 e9 02             	shr    ecx,0x2
10096b7e:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10096b80:	8b c8                	mov    ecx,eax
10096b82:	83 e1 03             	and    ecx,0x3
10096b85:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
10096b87:	f6 45 04 18          	test   BYTE PTR [ebp+0x4],0x18
10096b8b:	74 2e                	je     0x10096bbb
10096b8d:	8d 7d 48             	lea    edi,[ebp+0x48]
10096b90:	83 c9 ff             	or     ecx,0xffffffff
10096b93:	33 c0                	xor    eax,eax
10096b95:	66 c7 44 24 14 03 00 	mov    WORD PTR [esp+0x14],0x3
10096b9c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
10096b9e:	f7 d1                	not    ecx
10096ba0:	2b f9                	sub    edi,ecx
10096ba2:	8d 94 24 90 00 00 00 	lea    edx,[esp+0x90]
10096ba9:	8b c1                	mov    eax,ecx
10096bab:	8b f7                	mov    esi,edi
10096bad:	8b fa                	mov    edi,edx
10096baf:	c1 e9 02             	shr    ecx,0x2
10096bb2:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10096bb4:	8b c8                	mov    ecx,eax
10096bb6:	83 e1 03             	and    ecx,0x3
10096bb9:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
10096bbb:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10096bc1:	8d 4c 24 14          	lea    ecx,[esp+0x14]
10096bc5:	51                   	push   ecx
10096bc6:	ff 92 ec 02 00 00    	call   DWORD PTR [edx+0x2ec]
10096bcc:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10096bd2:	83 c4 04             	add    esp,0x4
10096bd5:	3b c3                	cmp    eax,ebx
10096bd7:	74 0b                	je     0x10096be4
10096bd9:	8b 11                	mov    edx,DWORD PTR [ecx]
10096bdb:	50                   	push   eax
10096bdc:	ff 92 e0 00 00 00    	call   DWORD PTR [edx+0xe0]
10096be2:	eb 35                	jmp    0x10096c19
10096be4:	8b 01                	mov    eax,DWORD PTR [ecx]
10096be6:	68 c3 00 00 00       	push   0xc3
10096beb:	68 94 ee 0d 10       	push   0x100dee94
10096bf0:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10096bf6:	8b 94 24 a0 06 00 00 	mov    edx,DWORD PTR [esp+0x6a0]
10096bfd:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10096c02:	52                   	push   edx
10096c03:	68 10 ee 0d 10       	push   0x100dee10
10096c08:	8b 08                	mov    ecx,DWORD PTR [eax]
10096c0a:	68 fc 3c 0d 10       	push   0x100d3cfc
10096c0f:	50                   	push   eax
10096c10:	ff 91 2c 01 00 00    	call   DWORD PTR [ecx+0x12c]
10096c16:	83 c4 10             	add    esp,0x10
10096c19:	f6 45 04 06          	test   BYTE PTR [ebp+0x4],0x6
10096c1d:	74 38                	je     0x10096c57
10096c1f:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10096c23:	81 c5 b0 00 00 00    	add    ebp,0xb0
10096c29:	be 04 00 00 00       	mov    esi,0x4
10096c2e:	66 8b 45 00          	mov    ax,WORD PTR [ebp+0x0]
10096c32:	66 3d ff ff          	cmp    ax,0xffff
10096c36:	74 19                	je     0x10096c51
10096c38:	0f bf c0             	movsx  eax,ax
10096c3b:	83 f8 ff             	cmp    eax,0xffffffff
10096c3e:	74 11                	je     0x10096c51
10096c40:	53                   	push   ebx
10096c41:	50                   	push   eax
10096c42:	8b 84 24 a4 06 00 00 	mov    eax,DWORD PTR [esp+0x6a4]
10096c49:	8b cf                	mov    ecx,edi
10096c4b:	50                   	push   eax
10096c4c:	e8 2f fc ff ff       	call   0x10096880
10096c51:	83 c5 02             	add    ebp,0x2
10096c54:	4e                   	dec    esi
10096c55:	75 d7                	jne    0x10096c2e
10096c57:	5f                   	pop    edi
10096c58:	5e                   	pop    esi
10096c59:	5d                   	pop    ebp
10096c5a:	5b                   	pop    ebx
10096c5b:	81 c4 88 06 00 00    	add    esp,0x688
10096c61:	c2 0c 00             	ret    0xc
10096c64:	90                   	nop
10096c65:	90                   	nop
10096c66:	90                   	nop
10096c67:	90                   	nop
10096c68:	90                   	nop
10096c69:	90                   	nop
10096c6a:	90                   	nop
10096c6b:	90                   	nop
10096c6c:	90                   	nop
10096c6d:	90                   	nop
10096c6e:	90                   	nop
10096c6f:	90                   	nop
10096c70:	56                   	push   esi
10096c71:	8b f1                	mov    esi,ecx
10096c73:	e8 b8 8d f7 ff       	call   0x1000fa30
10096c78:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10096c7c:	c7 06 b4 d8 0b 10    	mov    DWORD PTR [esi],0x100bd8b4
10096c82:	8b 08                	mov    ecx,DWORD PTR [eax]
10096c84:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
10096c87:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
10096c8a:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10096c8e:	89 56 1c             	mov    DWORD PTR [esi+0x1c],edx
10096c91:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
10096c94:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10096c98:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
10096c9b:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10096c9f:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
10096ca2:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10096ca6:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
10096ca9:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
10096cac:	89 4e 14             	mov    DWORD PTR [esi+0x14],ecx
10096caf:	c7 46 38 00 00 00 00 	mov    DWORD PTR [esi+0x38],0x0
10096cb6:	8b c6                	mov    eax,esi
10096cb8:	5e                   	pop    esi
10096cb9:	c2 14 00             	ret    0x14
10096cbc:	90                   	nop
10096cbd:	90                   	nop
10096cbe:	90                   	nop
10096cbf:	90                   	nop
10096cc0:	56                   	push   esi
10096cc1:	8b f1                	mov    esi,ecx
10096cc3:	e8 18 00 00 00       	call   0x10096ce0
10096cc8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
10096ccd:	74 09                	je     0x10096cd8
10096ccf:	56                   	push   esi
10096cd0:	e8 49 cc 00 00       	call   0x100a391e
10096cd5:	83 c4 04             	add    esp,0x4
10096cd8:	8b c6                	mov    eax,esi
10096cda:	5e                   	pop    esi
10096cdb:	c2 04 00             	ret    0x4
10096cde:	90                   	nop
10096cdf:	90                   	nop
10096ce0:	c7 01 c4 85 0b 10    	mov    DWORD PTR [ecx],0x100b85c4
10096ce6:	c3                   	ret
10096ce7:	90                   	nop
10096ce8:	90                   	nop
10096ce9:	90                   	nop
10096cea:	90                   	nop
10096ceb:	90                   	nop
10096cec:	90                   	nop
10096ced:	90                   	nop
10096cee:	90                   	nop
10096cef:	90                   	nop
10096cf0:	e9 9b 8d f7 ff       	jmp    0x1000fa90
10096cf5:	90                   	nop
10096cf6:	90                   	nop
10096cf7:	90                   	nop
10096cf8:	90                   	nop
10096cf9:	90                   	nop
10096cfa:	90                   	nop
10096cfb:	90                   	nop
10096cfc:	90                   	nop
10096cfd:	90                   	nop
10096cfe:	90                   	nop
10096cff:	90                   	nop
10096d00:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10096d04:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10096d08:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
10096d0b:	89 51 2c             	mov    DWORD PTR [ecx+0x2c],edx
10096d0e:	e8 9d 8d f7 ff       	call   0x1000fab0
10096d13:	c2 08 00             	ret    0x8
10096d16:	90                   	nop
10096d17:	90                   	nop
10096d18:	90                   	nop
10096d19:	90                   	nop
10096d1a:	90                   	nop
10096d1b:	90                   	nop
10096d1c:	90                   	nop
10096d1d:	90                   	nop
10096d1e:	90                   	nop
10096d1f:	90                   	nop
10096d20:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10096d24:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10096d28:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
10096d2b:	89 51 2c             	mov    DWORD PTR [ecx+0x2c],edx
10096d2e:	e8 cd 8d f7 ff       	call   0x1000fb00
10096d33:	c2 08 00             	ret    0x8
10096d36:	90                   	nop
10096d37:	90                   	nop
10096d38:	90                   	nop
10096d39:	90                   	nop
10096d3a:	90                   	nop
10096d3b:	90                   	nop
10096d3c:	90                   	nop
10096d3d:	90                   	nop
10096d3e:	90                   	nop
10096d3f:	90                   	nop
10096d40:	83 ec 14             	sub    esp,0x14
10096d43:	56                   	push   esi
10096d44:	8b f1                	mov    esi,ecx
10096d46:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
10096d49:	85 c0                	test   eax,eax
10096d4b:	74 7c                	je     0x10096dc9
10096d4d:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10096d50:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
10096d54:	e8 f7 8d f7 ff       	call   0x1000fb50
10096d59:	83 7e 24 03          	cmp    DWORD PTR [esi+0x24],0x3
10096d5d:	74 6a                	je     0x10096dc9
10096d5f:	8b 56 38             	mov    edx,DWORD PTR [esi+0x38]
10096d62:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10096d67:	8d 4c 24 08          	lea    ecx,[esp+0x8]
10096d6b:	57                   	push   edi
10096d6c:	51                   	push   ecx
10096d6d:	52                   	push   edx
10096d6e:	ff 90 f4 02 00 00    	call   DWORD PTR [eax+0x2f4]
10096d74:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10096d7a:	83 c4 08             	add    esp,0x8
10096d7d:	8b 39                	mov    edi,DWORD PTR [ecx]
10096d7f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10096d85:	8b 11                	mov    edx,DWORD PTR [ecx]
10096d87:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
10096d8d:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
10096d91:	51                   	push   ecx
10096d92:	8d 46 18             	lea    eax,[esi+0x18]
10096d95:	8d 4c 24 10          	lea    ecx,[esp+0x10]
10096d99:	d8 4e 04             	fmul   DWORD PTR [esi+0x4]
10096d9c:	d8 0d 28 85 0b 10    	fmul   DWORD PTR ds:0x100b8528
10096da2:	d9 1c 24             	fstp   DWORD PTR [esp]
10096da5:	50                   	push   eax
10096da6:	51                   	push   ecx
10096da7:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10096dad:	ff 57 34             	call   DWORD PTR [edi+0x34]
10096db0:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
10096db3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10096db9:	8d 54 24 0c          	lea    edx,[esp+0xc]
10096dbd:	52                   	push   edx
10096dbe:	50                   	push   eax
10096dbf:	ff 91 f8 02 00 00    	call   DWORD PTR [ecx+0x2f8]
10096dc5:	83 c4 08             	add    esp,0x8
10096dc8:	5f                   	pop    edi
10096dc9:	5e                   	pop    esi
10096dca:	83 c4 14             	add    esp,0x14
10096dcd:	c3                   	ret
10096dce:	90                   	nop
10096dcf:	90                   	nop
10096dd0:	56                   	push   esi
10096dd1:	8b f1                	mov    esi,ecx
10096dd3:	e8 28 56 f7 ff       	call   0x1000c400
10096dd8:	8b c6                	mov    eax,esi
10096dda:	5e                   	pop    esi
10096ddb:	c3                   	ret
10096ddc:	90                   	nop
10096ddd:	90                   	nop
10096dde:	90                   	nop
10096ddf:	90                   	nop
10096de0:	6a ff                	push   0xffffffff
10096de2:	68 38 6e 0b 10       	push   0x100b6e38
10096de7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10096ded:	50                   	push   eax
10096dee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10096df5:	51                   	push   ecx
10096df6:	56                   	push   esi
10096df7:	57                   	push   edi
10096df8:	8b f9                	mov    edi,ecx
10096dfa:	89 7c 24 08          	mov    DWORD PTR [esp+0x8],edi
10096dfe:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
10096e01:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
10096e08:	00 
10096e09:	85 f6                	test   esi,esi
10096e0b:	74 12                	je     0x10096e1f
10096e0d:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10096e10:	50                   	push   eax
10096e11:	e8 08 cb 00 00       	call   0x100a391e
10096e16:	8b 36                	mov    esi,DWORD PTR [esi]
10096e18:	83 c4 04             	add    esp,0x4
10096e1b:	85 f6                	test   esi,esi
10096e1d:	75 ee                	jne    0x10096e0d
10096e1f:	8b cf                	mov    ecx,edi
10096e21:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
10096e28:	ff 
10096e29:	e8 e2 55 f7 ff       	call   0x1000c410
10096e2e:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10096e32:	5f                   	pop    edi
10096e33:	5e                   	pop    esi
10096e34:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10096e3b:	83 c4 10             	add    esp,0x10
10096e3e:	c3                   	ret
10096e3f:	90                   	nop
10096e40:	56                   	push   esi
10096e41:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
10096e44:	85 f6                	test   esi,esi
10096e46:	74 0e                	je     0x10096e56
10096e48:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10096e4b:	e8 f0 fe ff ff       	call   0x10096d40
10096e50:	8b 36                	mov    esi,DWORD PTR [esi]
10096e52:	85 f6                	test   esi,esi
10096e54:	75 f2                	jne    0x10096e48
10096e56:	5e                   	pop    esi
10096e57:	c3                   	ret
10096e58:	90                   	nop
10096e59:	90                   	nop
10096e5a:	90                   	nop
10096e5b:	90                   	nop
10096e5c:	90                   	nop
10096e5d:	90                   	nop
10096e5e:	90                   	nop
10096e5f:	90                   	nop
10096e60:	6a ff                	push   0xffffffff
10096e62:	68 5b 6e 0b 10       	push   0x100b6e5b
10096e67:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10096e6d:	50                   	push   eax
10096e6e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10096e75:	51                   	push   ecx
10096e76:	56                   	push   esi
10096e77:	57                   	push   edi
10096e78:	8b f9                	mov    edi,ecx
10096e7a:	6a 3c                	push   0x3c
10096e7c:	e8 a8 ca 00 00       	call   0x100a3929
10096e81:	83 c4 04             	add    esp,0x4
10096e84:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
10096e88:	33 f6                	xor    esi,esi
10096e8a:	3b c6                	cmp    eax,esi
10096e8c:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
10096e90:	74 22                	je     0x10096eb4
10096e92:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
10096e96:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
10096e9a:	51                   	push   ecx
10096e9b:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
10096e9f:	52                   	push   edx
10096ea0:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
10096ea4:	51                   	push   ecx
10096ea5:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
10096ea9:	52                   	push   edx
10096eaa:	51                   	push   ecx
10096eab:	8b c8                	mov    ecx,eax
10096ead:	e8 be fd ff ff       	call   0x10096c70
10096eb2:	8b f0                	mov    esi,eax
10096eb4:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
10096eb7:	8b cf                	mov    ecx,edi
10096eb9:	50                   	push   eax
10096eba:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
10096ec1:	ff 
10096ec2:	e8 49 56 f7 ff       	call   0x1000c510
10096ec7:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10096ecb:	89 70 08             	mov    DWORD PTR [eax+0x8],esi
10096ece:	5f                   	pop    edi
10096ecf:	5e                   	pop    esi
10096ed0:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10096ed7:	83 c4 10             	add    esp,0x10
10096eda:	c2 14 00             	ret    0x14
10096edd:	90                   	nop
10096ede:	90                   	nop
10096edf:	90                   	nop
10096ee0:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10096ee3:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10096ee7:	85 c0                	test   eax,eax
10096ee9:	74 16                	je     0x10096f01
10096eeb:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
10096eee:	39 4a 38             	cmp    DWORD PTR [edx+0x38],ecx
10096ef1:	74 04                	je     0x10096ef7
10096ef3:	8b 00                	mov    eax,DWORD PTR [eax]
10096ef5:	eb f0                	jmp    0x10096ee7
10096ef7:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
10096efa:	c7 40 38 00 00 00 00 	mov    DWORD PTR [eax+0x38],0x0
10096f01:	c2 04 00             	ret    0x4
10096f04:	90                   	nop
10096f05:	90                   	nop
10096f06:	90                   	nop
10096f07:	90                   	nop
10096f08:	90                   	nop
10096f09:	90                   	nop
10096f0a:	90                   	nop
10096f0b:	90                   	nop
10096f0c:	90                   	nop
10096f0d:	90                   	nop
10096f0e:	90                   	nop
10096f0f:	90                   	nop
10096f10:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10096f14:	56                   	push   esi
10096f15:	25 ff 00 00 00       	and    eax,0xff
10096f1a:	50                   	push   eax
10096f1b:	e8 10 58 f7 ff       	call   0x1000c730
10096f20:	85 c0                	test   eax,eax
10096f22:	74 05                	je     0x10096f29
10096f24:	8b 70 08             	mov    esi,DWORD PTR [eax+0x8]
10096f27:	eb 02                	jmp    0x10096f2b
10096f29:	33 f6                	xor    esi,esi
10096f2b:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10096f2f:	85 c0                	test   eax,eax
10096f31:	74 03                	je     0x10096f36
10096f33:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
10096f36:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
10096f3a:	d8 1d 00 85 0b 10    	fcomp  DWORD PTR ds:0x100b8500
10096f40:	df e0                	fnstsw ax
10096f42:	f6 c4 40             	test   ah,0x40
10096f45:	74 0b                	je     0x10096f52
10096f47:	8b 16                	mov    edx,DWORD PTR [esi]
10096f49:	8b ce                	mov    ecx,esi
10096f4b:	ff 52 04             	call   DWORD PTR [edx+0x4]
10096f4e:	5e                   	pop    esi
10096f4f:	c2 10 00             	ret    0x10
10096f52:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10096f58:	8b 01                	mov    eax,DWORD PTR [ecx]
10096f5a:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
10096f60:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10096f64:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10096f68:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10096f6c:	8b 16                	mov    edx,DWORD PTR [esi]
10096f6e:	50                   	push   eax
10096f6f:	51                   	push   ecx
10096f70:	8b ce                	mov    ecx,esi
10096f72:	ff 52 10             	call   DWORD PTR [edx+0x10]
10096f75:	5e                   	pop    esi
10096f76:	c2 10 00             	ret    0x10
10096f79:	90                   	nop
10096f7a:	90                   	nop
10096f7b:	90                   	nop
10096f7c:	90                   	nop
10096f7d:	90                   	nop
10096f7e:	90                   	nop
10096f7f:	90                   	nop
10096f80:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10096f84:	56                   	push   esi
10096f85:	25 ff 00 00 00       	and    eax,0xff
10096f8a:	50                   	push   eax
10096f8b:	e8 a0 57 f7 ff       	call   0x1000c730
10096f90:	85 c0                	test   eax,eax
10096f92:	74 05                	je     0x10096f99
10096f94:	8b 70 08             	mov    esi,DWORD PTR [eax+0x8]
10096f97:	eb 02                	jmp    0x10096f9b
10096f99:	33 f6                	xor    esi,esi
10096f9b:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10096f9f:	85 c0                	test   eax,eax
10096fa1:	74 03                	je     0x10096fa6
10096fa3:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
10096fa6:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10096fac:	8b 11                	mov    edx,DWORD PTR [ecx]
10096fae:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
10096fb4:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10096fb8:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10096fbc:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10096fc0:	8b 06                	mov    eax,DWORD PTR [esi]
10096fc2:	51                   	push   ecx
10096fc3:	52                   	push   edx
10096fc4:	8b ce                	mov    ecx,esi
10096fc6:	ff 50 14             	call   DWORD PTR [eax+0x14]
10096fc9:	5e                   	pop    esi
10096fca:	c2 10 00             	ret    0x10
10096fcd:	90                   	nop
10096fce:	90                   	nop
10096fcf:	90                   	nop
10096fd0:	8b c1                	mov    eax,ecx
10096fd2:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10096fd6:	c7 00 cc d8 0b 10    	mov    DWORD PTR [eax],0x100bd8cc
10096fdc:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
10096fdf:	c7 40 0c 00 00 00 00 	mov    DWORD PTR [eax+0xc],0x0
10096fe6:	c2 04 00             	ret    0x4
10096fe9:	90                   	nop
10096fea:	90                   	nop
10096feb:	90                   	nop
10096fec:	90                   	nop
10096fed:	90                   	nop
10096fee:	90                   	nop
10096fef:	90                   	nop
10096ff0:	56                   	push   esi
10096ff1:	8b f1                	mov    esi,ecx
10096ff3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10096ff6:	c7 06 cc d8 0b 10    	mov    DWORD PTR [esi],0x100bd8cc
10096ffc:	50                   	push   eax
10096ffd:	e8 1c c9 00 00       	call   0x100a391e
10097002:	8a 44 24 0c          	mov    al,BYTE PTR [esp+0xc]
10097006:	83 c4 04             	add    esp,0x4
10097009:	a8 01                	test   al,0x1
1009700b:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
10097012:	74 09                	je     0x1009701d
10097014:	56                   	push   esi
10097015:	e8 04 c9 00 00       	call   0x100a391e
1009701a:	83 c4 04             	add    esp,0x4
1009701d:	8b c6                	mov    eax,esi
1009701f:	5e                   	pop    esi
10097020:	c2 04 00             	ret    0x4
10097023:	90                   	nop
10097024:	90                   	nop
10097025:	90                   	nop
10097026:	90                   	nop
10097027:	90                   	nop
10097028:	90                   	nop
10097029:	90                   	nop
1009702a:	90                   	nop
1009702b:	90                   	nop
1009702c:	90                   	nop
1009702d:	90                   	nop
1009702e:	90                   	nop
1009702f:	90                   	nop
10097030:	53                   	push   ebx
10097031:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
10097035:	56                   	push   esi
10097036:	57                   	push   edi
10097037:	33 ff                	xor    edi,edi
10097039:	8b f1                	mov    esi,ecx
1009703b:	3b df                	cmp    ebx,edi
1009703d:	74 55                	je     0x10097094
1009703f:	6a 40                	push   0x40
10097041:	e8 e3 c8 00 00       	call   0x100a3929
10097046:	83 c4 04             	add    esp,0x4
10097049:	3b c7                	cmp    eax,edi
1009704b:	74 2c                	je     0x10097079
1009704d:	c7 40 3c ff ff ff ff 	mov    DWORD PTR [eax+0x3c],0xffffffff
10097054:	89 78 20             	mov    DWORD PTR [eax+0x20],edi
10097057:	66 89 78 24          	mov    WORD PTR [eax+0x24],di
1009705b:	66 89 78 26          	mov    WORD PTR [eax+0x26],di
1009705f:	89 78 28             	mov    DWORD PTR [eax+0x28],edi
10097062:	66 89 78 2c          	mov    WORD PTR [eax+0x2c],di
10097066:	66 89 78 2e          	mov    WORD PTR [eax+0x2e],di
1009706a:	89 78 30             	mov    DWORD PTR [eax+0x30],edi
1009706d:	89 78 34             	mov    DWORD PTR [eax+0x34],edi
10097070:	c7 40 38 00 00 80 3f 	mov    DWORD PTR [eax+0x38],0x3f800000
10097077:	eb 02                	jmp    0x1009707b
10097079:	33 c0                	xor    eax,eax
1009707b:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1009707e:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
10097084:	50                   	push   eax
10097085:	53                   	push   ebx
10097086:	8b 11                	mov    edx,DWORD PTR [ecx]
10097088:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
1009708b:	89 5e 0c             	mov    DWORD PTR [esi+0xc],ebx
1009708e:	5f                   	pop    edi
1009708f:	5e                   	pop    esi
10097090:	5b                   	pop    ebx
10097091:	c2 04 00             	ret    0x4
10097094:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10097097:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
1009709d:	52                   	push   edx
1009709e:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
100970a1:	8b 01                	mov    eax,DWORD PTR [ecx]
100970a3:	52                   	push   edx
100970a4:	ff 50 40             	call   DWORD PTR [eax+0x40]
100970a7:	89 7e 0c             	mov    DWORD PTR [esi+0xc],edi
100970aa:	5f                   	pop    edi
100970ab:	5e                   	pop    esi
100970ac:	5b                   	pop    ebx
100970ad:	c2 04 00             	ret    0x4
100970b0:	6a ff                	push   0xffffffff
100970b2:	68 78 6e 0b 10       	push   0x100b6e78
100970b7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100970bd:	50                   	push   eax
100970be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100970c5:	51                   	push   ecx
100970c6:	56                   	push   esi
100970c7:	57                   	push   edi
100970c8:	8b f9                	mov    edi,ecx
100970ca:	89 7c 24 08          	mov    DWORD PTR [esp+0x8],edi
100970ce:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100970d1:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
100970d8:	00 
100970d9:	85 f6                	test   esi,esi
100970db:	74 12                	je     0x100970ef
100970dd:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
100970e0:	50                   	push   eax
100970e1:	e8 38 c8 00 00       	call   0x100a391e
100970e6:	8b 36                	mov    esi,DWORD PTR [esi]
100970e8:	83 c4 04             	add    esp,0x4
100970eb:	85 f6                	test   esi,esi
100970ed:	75 ee                	jne    0x100970dd
100970ef:	8b cf                	mov    ecx,edi
100970f1:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
100970f8:	ff 
100970f9:	e8 12 53 f7 ff       	call   0x1000c410
100970fe:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10097102:	5f                   	pop    edi
10097103:	5e                   	pop    esi
10097104:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1009710b:	83 c4 10             	add    esp,0x10
1009710e:	c3                   	ret
1009710f:	90                   	nop
10097110:	6a ff                	push   0xffffffff
10097112:	68 9b 6e 0b 10       	push   0x100b6e9b
10097117:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1009711d:	50                   	push   eax
1009711e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10097125:	51                   	push   ecx
10097126:	56                   	push   esi
10097127:	57                   	push   edi
10097128:	8b f1                	mov    esi,ecx
1009712a:	6a 10                	push   0x10
1009712c:	e8 f8 c7 00 00       	call   0x100a3929
10097131:	83 c4 04             	add    esp,0x4
10097134:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
10097138:	33 ff                	xor    edi,edi
1009713a:	3b c7                	cmp    eax,edi
1009713c:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
10097140:	74 10                	je     0x10097152
10097142:	8b 0d fc 7e 12 10    	mov    ecx,DWORD PTR ds:0x10127efc
10097148:	51                   	push   ecx
10097149:	8b c8                	mov    ecx,eax
1009714b:	e8 80 fe ff ff       	call   0x10096fd0
10097150:	8b f8                	mov    edi,eax
10097152:	8b 15 fc 7e 12 10    	mov    edx,DWORD PTR ds:0x10127efc
10097158:	8b ce                	mov    ecx,esi
1009715a:	42                   	inc    edx
1009715b:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
10097162:	ff 
10097163:	89 15 fc 7e 12 10    	mov    DWORD PTR ds:0x10127efc,edx
10097169:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1009716c:	50                   	push   eax
1009716d:	e8 9e 53 f7 ff       	call   0x1000c510
10097172:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10097176:	89 78 08             	mov    DWORD PTR [eax+0x8],edi
10097179:	5f                   	pop    edi
1009717a:	5e                   	pop    esi
1009717b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10097182:	83 c4 10             	add    esp,0x10
10097185:	c3                   	ret
10097186:	90                   	nop
10097187:	90                   	nop
10097188:	90                   	nop
10097189:	90                   	nop
1009718a:	90                   	nop
1009718b:	90                   	nop
1009718c:	90                   	nop
1009718d:	90                   	nop
1009718e:	90                   	nop
1009718f:	90                   	nop
10097190:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10097193:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10097197:	85 c0                	test   eax,eax
10097199:	74 16                	je     0x100971b1
1009719b:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
1009719e:	39 4a 0c             	cmp    DWORD PTR [edx+0xc],ecx
100971a1:	74 04                	je     0x100971a7
100971a3:	8b 00                	mov    eax,DWORD PTR [eax]
100971a5:	eb f0                	jmp    0x10097197
100971a7:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
100971aa:	6a 00                	push   0x0
100971ac:	e8 7f fe ff ff       	call   0x10097030
100971b1:	c2 04 00             	ret    0x4
100971b4:	90                   	nop
100971b5:	90                   	nop
100971b6:	90                   	nop
100971b7:	90                   	nop
100971b8:	90                   	nop
100971b9:	90                   	nop
100971ba:	90                   	nop
100971bb:	90                   	nop
100971bc:	90                   	nop
100971bd:	90                   	nop
100971be:	90                   	nop
100971bf:	90                   	nop
100971c0:	8b c1                	mov    eax,ecx
100971c2:	56                   	push   esi
100971c3:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
100971c7:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100971ca:	33 c9                	xor    ecx,ecx
100971cc:	85 c0                	test   eax,eax
100971ce:	74 10                	je     0x100971e0
100971d0:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
100971d3:	39 72 08             	cmp    DWORD PTR [edx+0x8],esi
100971d6:	75 02                	jne    0x100971da
100971d8:	8b ca                	mov    ecx,edx
100971da:	8b 00                	mov    eax,DWORD PTR [eax]
100971dc:	85 c9                	test   ecx,ecx
100971de:	74 ec                	je     0x100971cc
100971e0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100971e4:	50                   	push   eax
100971e5:	e8 46 fe ff ff       	call   0x10097030
100971ea:	5e                   	pop    esi
100971eb:	c2 08 00             	ret    0x8
100971ee:	90                   	nop
100971ef:	90                   	nop
100971f0:	56                   	push   esi
100971f1:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
100971f4:	85 f6                	test   esi,esi
100971f6:	74 0e                	je     0x10097206
100971f8:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
100971fb:	e8 20 39 fd ff       	call   0x1006ab20
10097200:	8b 36                	mov    esi,DWORD PTR [esi]
10097202:	85 f6                	test   esi,esi
10097204:	75 f2                	jne    0x100971f8
10097206:	5e                   	pop    esi
10097207:	c3                   	ret
10097208:	90                   	nop
10097209:	90                   	nop
1009720a:	90                   	nop
1009720b:	90                   	nop
1009720c:	90                   	nop
1009720d:	90                   	nop
1009720e:	90                   	nop
1009720f:	90                   	nop
10097210:	6a ff                	push   0xffffffff
10097212:	68 c3 6e 0b 10       	push   0x100b6ec3
10097217:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1009721d:	50                   	push   eax
1009721e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10097225:	51                   	push   ecx
10097226:	53                   	push   ebx
10097227:	56                   	push   esi
10097228:	57                   	push   edi
10097229:	68 10 c4 00 10       	push   0x1000c410
1009722e:	68 00 c4 00 10       	push   0x1000c400
10097233:	8b f9                	mov    edi,ecx
10097235:	6a 02                	push   0x2
10097237:	6a 0c                	push   0xc
10097239:	57                   	push   edi
1009723a:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
1009723e:	e8 bf dc 00 00       	call   0x100a4f02
10097243:	6a 20                	push   0x20
10097245:	8d 4f 0c             	lea    ecx,[edi+0xc]
10097248:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
1009724f:	00 
10097250:	e8 0b 52 f7 ff       	call   0x1000c460
10097255:	8b 77 10             	mov    esi,DWORD PTR [edi+0x10]
10097258:	bb 20 00 00 00       	mov    ebx,0x20
1009725d:	6a 04                	push   0x4
1009725f:	e8 c5 c6 00 00       	call   0x100a3929
10097264:	83 c4 04             	add    esp,0x4
10097267:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1009726a:	8b 36                	mov    esi,DWORD PTR [esi]
1009726c:	4b                   	dec    ebx
1009726d:	75 ee                	jne    0x1009725d
1009726f:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10097273:	8b c7                	mov    eax,edi
10097275:	5f                   	pop    edi
10097276:	5e                   	pop    esi
10097277:	5b                   	pop    ebx
10097278:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1009727f:	83 c4 10             	add    esp,0x10
10097282:	c3                   	ret
10097283:	90                   	nop
10097284:	90                   	nop
10097285:	90                   	nop
10097286:	90                   	nop
10097287:	90                   	nop
10097288:	90                   	nop
10097289:	90                   	nop
1009728a:	90                   	nop
1009728b:	90                   	nop
1009728c:	90                   	nop
1009728d:	90                   	nop
1009728e:	90                   	nop
1009728f:	90                   	nop
10097290:	6a ff                	push   0xffffffff
10097292:	68 e3 6e 0b 10       	push   0x100b6ee3
10097297:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1009729d:	50                   	push   eax
1009729e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100972a5:	51                   	push   ecx
100972a6:	53                   	push   ebx
100972a7:	55                   	push   ebp
100972a8:	8b e9                	mov    ebp,ecx
100972aa:	56                   	push   esi
100972ab:	57                   	push   edi
100972ac:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
100972b0:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
100972b7:	00 
100972b8:	8d 7d 04             	lea    edi,[ebp+0x4]
100972bb:	bb 02 00 00 00       	mov    ebx,0x2
100972c0:	8b 37                	mov    esi,DWORD PTR [edi]
100972c2:	85 f6                	test   esi,esi
100972c4:	74 16                	je     0x100972dc
100972c6:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
100972c9:	85 c0                	test   eax,eax
100972cb:	74 09                	je     0x100972d6
100972cd:	50                   	push   eax
100972ce:	e8 4b c6 00 00       	call   0x100a391e
100972d3:	83 c4 04             	add    esp,0x4
100972d6:	8b 36                	mov    esi,DWORD PTR [esi]
100972d8:	85 f6                	test   esi,esi
100972da:	75 ea                	jne    0x100972c6
100972dc:	83 c7 0c             	add    edi,0xc
100972df:	4b                   	dec    ebx
100972e0:	75 de                	jne    0x100972c0
100972e2:	68 10 c4 00 10       	push   0x1000c410
100972e7:	6a 02                	push   0x2
100972e9:	6a 0c                	push   0xc
100972eb:	55                   	push   ebp
100972ec:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
100972f3:	ff 
100972f4:	e8 8b dc 00 00       	call   0x100a4f84
100972f9:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
100972fd:	5f                   	pop    edi
100972fe:	5e                   	pop    esi
100972ff:	5d                   	pop    ebp
10097300:	5b                   	pop    ebx
10097301:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10097308:	83 c4 10             	add    esp,0x10
1009730b:	c3                   	ret
1009730c:	90                   	nop
1009730d:	90                   	nop
1009730e:	90                   	nop
1009730f:	90                   	nop
10097310:	53                   	push   ebx
10097311:	8b d9                	mov    ebx,ecx
10097313:	56                   	push   esi
10097314:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
10097317:	85 f6                	test   esi,esi
10097319:	74 29                	je     0x10097344
1009731b:	57                   	push   edi
1009731c:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1009731f:	8b 3e                	mov    edi,DWORD PTR [esi]
10097321:	85 c0                	test   eax,eax
10097323:	74 18                	je     0x1009733d
10097325:	83 38 00             	cmp    DWORD PTR [eax],0x0
10097328:	75 13                	jne    0x1009733d
1009732a:	56                   	push   esi
1009732b:	8b cb                	mov    ecx,ebx
1009732d:	e8 7e 53 f7 ff       	call   0x1000c6b0
10097332:	56                   	push   esi
10097333:	6a 00                	push   0x0
10097335:	8d 4b 0c             	lea    ecx,[ebx+0xc]
10097338:	e8 f3 52 f7 ff       	call   0x1000c630
1009733d:	85 ff                	test   edi,edi
1009733f:	8b f7                	mov    esi,edi
10097341:	75 d9                	jne    0x1009731c
10097343:	5f                   	pop    edi
10097344:	5e                   	pop    esi
10097345:	5b                   	pop    ebx
10097346:	c2 04 00             	ret    0x4
10097349:	90                   	nop
1009734a:	90                   	nop
1009734b:	90                   	nop
1009734c:	90                   	nop
1009734d:	90                   	nop
1009734e:	90                   	nop
1009734f:	90                   	nop

*/
void PreCacheMgr::PreCacheSpriteFX() {
    // TODO: Implement PreCacheSpriteFX
}

