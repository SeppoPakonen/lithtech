#include "GunClient.h"

// 0x10019b90: GunClient::OtherPlayerShoot
/*
10019b90:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10019b94:	56                   	push   esi
10019b95:	8b f1                	mov    esi,ecx
10019b97:	52                   	push   edx
10019b98:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10019b9e:	8b 01                	mov    eax,DWORD PTR [ecx]
10019ba0:	ff 50 44             	call   DWORD PTR [eax+0x44]
10019ba3:	25 ff 00 00 00       	and    eax,0xff
10019ba8:	3d ff 00 00 00       	cmp    eax,0xff
10019bad:	75 1a                	jne    0x10019bc9
10019baf:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10019bb4:	68 64 5f 0d 10       	push   0x100d5f64
10019bb9:	50                   	push   eax
10019bba:	8b 08                	mov    ecx,DWORD PTR [eax]
10019bbc:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
10019bc2:	83 c4 08             	add    esp,0x8
10019bc5:	5e                   	pop    esi
10019bc6:	c2 04 00             	ret    0x4
10019bc9:	8b 96 a0 08 00 00    	mov    edx,DWORD PTR [esi+0x8a0]
10019bcf:	81 c6 a0 08 00 00    	add    esi,0x8a0
10019bd5:	6a 00                	push   0x0
10019bd7:	6a 02                	push   0x2
10019bd9:	68 00 80 00 00       	push   0x8000
10019bde:	50                   	push   eax
10019bdf:	8b ce                	mov    ecx,esi
10019be1:	ff 52 54             	call   DWORD PTR [edx+0x54]
10019be4:	6a 00                	push   0x0
10019be6:	8b ce                	mov    ecx,esi
10019be8:	e8 a3 4c 06 00       	call   0x1007e890
10019bed:	5e                   	pop    esi
10019bee:	c2 04 00             	ret    0x4
10019bf1:	90                   	nop
10019bf2:	90                   	nop
10019bf3:	90                   	nop
10019bf4:	90                   	nop
10019bf5:	90                   	nop
10019bf6:	90                   	nop
10019bf7:	90                   	nop
10019bf8:	90                   	nop
10019bf9:	90                   	nop
10019bfa:	90                   	nop
10019bfb:	90                   	nop
10019bfc:	90                   	nop
10019bfd:	90                   	nop
10019bfe:	90                   	nop
10019bff:	90                   	nop

*/
void GunClient::OtherPlayerShoot() {
    // TODO: Implement OtherPlayerShoot
}

// 0x10019c00: GunClient::OtherPlayerShoot
/*
10019c00:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10019c04:	56                   	push   esi
10019c05:	8b f1                	mov    esi,ecx
10019c07:	52                   	push   edx
10019c08:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10019c0e:	8b 01                	mov    eax,DWORD PTR [ecx]
10019c10:	ff 50 44             	call   DWORD PTR [eax+0x44]
10019c13:	25 ff 00 00 00       	and    eax,0xff
10019c18:	3d ff 00 00 00       	cmp    eax,0xff
10019c1d:	75 1a                	jne    0x10019c39
10019c1f:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10019c24:	68 64 5f 0d 10       	push   0x100d5f64
10019c29:	50                   	push   eax
10019c2a:	8b 08                	mov    ecx,DWORD PTR [eax]
10019c2c:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
10019c32:	83 c4 08             	add    esp,0x8
10019c35:	5e                   	pop    esi
10019c36:	c2 04 00             	ret    0x4
10019c39:	8b 96 a0 08 00 00    	mov    edx,DWORD PTR [esi+0x8a0]
10019c3f:	81 c6 a0 08 00 00    	add    esi,0x8a0
10019c45:	68 00 80 00 00       	push   0x8000
10019c4a:	50                   	push   eax
10019c4b:	8b ce                	mov    ecx,esi
10019c4d:	ff 52 58             	call   DWORD PTR [edx+0x58]
10019c50:	6a 00                	push   0x0
10019c52:	8b ce                	mov    ecx,esi
10019c54:	e8 97 4c 06 00       	call   0x1007e8f0
10019c59:	5e                   	pop    esi
10019c5a:	c2 04 00             	ret    0x4
10019c5d:	90                   	nop
10019c5e:	90                   	nop
10019c5f:	90                   	nop

*/
void GunClient::OtherPlayerShoot() {
    // TODO: Implement OtherPlayerShoot
}

// 0x10019c60: GunClient::OtherPlayerShoot
/*
10019c60:	81 c1 a0 08 00 00    	add    ecx,0x8a0
10019c66:	e9 e5 4c 06 00       	jmp    0x1007e950
10019c6b:	90                   	nop
10019c6c:	90                   	nop
10019c6d:	90                   	nop
10019c6e:	90                   	nop
10019c6f:	90                   	nop
10019c70:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10019c74:	56                   	push   esi
10019c75:	8b f1                	mov    esi,ecx
10019c77:	52                   	push   edx
10019c78:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10019c7e:	8b 01                	mov    eax,DWORD PTR [ecx]
10019c80:	ff 50 44             	call   DWORD PTR [eax+0x44]
10019c83:	25 ff 00 00 00       	and    eax,0xff
10019c88:	3d ff 00 00 00       	cmp    eax,0xff
10019c8d:	75 1a                	jne    0x10019ca9
10019c8f:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10019c94:	68 64 5f 0d 10       	push   0x100d5f64
10019c99:	50                   	push   eax
10019c9a:	8b 08                	mov    ecx,DWORD PTR [eax]
10019c9c:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
10019ca2:	83 c4 08             	add    esp,0x8
10019ca5:	5e                   	pop    esi
10019ca6:	c2 04 00             	ret    0x4
10019ca9:	8b 96 a0 08 00 00    	mov    edx,DWORD PTR [esi+0x8a0]
10019caf:	81 c6 a0 08 00 00    	add    esi,0x8a0
10019cb5:	6a 00                	push   0x0
10019cb7:	6a 03                	push   0x3
10019cb9:	68 00 80 00 00       	push   0x8000
10019cbe:	50                   	push   eax
10019cbf:	8b ce                	mov    ecx,esi
10019cc1:	ff 52 54             	call   DWORD PTR [edx+0x54]
10019cc4:	6a 00                	push   0x0
10019cc6:	8b ce                	mov    ecx,esi
10019cc8:	e8 23 4c 06 00       	call   0x1007e8f0
10019ccd:	5e                   	pop    esi
10019cce:	c2 04 00             	ret    0x4
10019cd1:	90                   	nop
10019cd2:	90                   	nop
10019cd3:	90                   	nop
10019cd4:	90                   	nop
10019cd5:	90                   	nop
10019cd6:	90                   	nop
10019cd7:	90                   	nop
10019cd8:	90                   	nop
10019cd9:	90                   	nop
10019cda:	90                   	nop
10019cdb:	90                   	nop
10019cdc:	90                   	nop
10019cdd:	90                   	nop
10019cde:	90                   	nop
10019cdf:	90                   	nop
10019ce0:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10019ce4:	d9 02                	fld    DWORD PTR [edx]
10019ce6:	d8 19                	fcomp  DWORD PTR [ecx]
10019ce8:	df e0                	fnstsw ax
10019cea:	f6 c4 40             	test   ah,0x40
10019ced:	74 22                	je     0x10019d11
10019cef:	d9 42 04             	fld    DWORD PTR [edx+0x4]
10019cf2:	d8 59 04             	fcomp  DWORD PTR [ecx+0x4]
10019cf5:	df e0                	fnstsw ax
10019cf7:	f6 c4 40             	test   ah,0x40
10019cfa:	74 15                	je     0x10019d11
10019cfc:	d9 42 08             	fld    DWORD PTR [edx+0x8]
10019cff:	d8 59 08             	fcomp  DWORD PTR [ecx+0x8]
10019d02:	df e0                	fnstsw ax
10019d04:	f6 c4 40             	test   ah,0x40
10019d07:	74 08                	je     0x10019d11
10019d09:	b8 01 00 00 00       	mov    eax,0x1
10019d0e:	c2 04 00             	ret    0x4
10019d11:	33 c0                	xor    eax,eax
10019d13:	c2 04 00             	ret    0x4
10019d16:	90                   	nop
10019d17:	90                   	nop
10019d18:	90                   	nop
10019d19:	90                   	nop
10019d1a:	90                   	nop
10019d1b:	90                   	nop
10019d1c:	90                   	nop
10019d1d:	90                   	nop
10019d1e:	90                   	nop
10019d1f:	90                   	nop
10019d20:	8b c1                	mov    eax,ecx
10019d22:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10019d26:	d9 00                	fld    DWORD PTR [eax]
10019d28:	d8 21                	fsub   DWORD PTR [ecx]
10019d2a:	d9 18                	fstp   DWORD PTR [eax]
10019d2c:	d9 40 04             	fld    DWORD PTR [eax+0x4]
10019d2f:	d8 61 04             	fsub   DWORD PTR [ecx+0x4]
10019d32:	d9 58 04             	fstp   DWORD PTR [eax+0x4]
10019d35:	d9 40 08             	fld    DWORD PTR [eax+0x8]
10019d38:	d8 61 08             	fsub   DWORD PTR [ecx+0x8]
10019d3b:	d9 58 08             	fstp   DWORD PTR [eax+0x8]
10019d3e:	c2 04 00             	ret    0x4
10019d41:	90                   	nop
10019d42:	90                   	nop
10019d43:	90                   	nop
10019d44:	90                   	nop
10019d45:	90                   	nop
10019d46:	90                   	nop
10019d47:	90                   	nop
10019d48:	90                   	nop
10019d49:	90                   	nop
10019d4a:	90                   	nop
10019d4b:	90                   	nop
10019d4c:	90                   	nop
10019d4d:	90                   	nop
10019d4e:	90                   	nop
10019d4f:	90                   	nop

*/
void GunClient::OtherPlayerShoot() {
    // TODO: Implement OtherPlayerShoot
}

// 0x1007b8c0: GunClient::Init
/*
1007b8c0:	83 ec 40             	sub    esp,0x40
1007b8c3:	53                   	push   ebx
1007b8c4:	56                   	push   esi
1007b8c5:	8b f1                	mov    esi,ecx
1007b8c7:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007b8ca:	3d ff 00 00 00       	cmp    eax,0xff
1007b8cf:	0f 84 bd 09 00 00    	je     0x1007c292
1007b8d5:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
1007b8d8:	33 db                	xor    ebx,ebx
1007b8da:	3b cb                	cmp    ecx,ebx
1007b8dc:	75 04                	jne    0x1007b8e2
1007b8de:	8b c8                	mov    ecx,eax
1007b8e0:	eb 0c                	jmp    0x1007b8ee
1007b8e2:	83 f9 01             	cmp    ecx,0x1
1007b8e5:	0f 85 a7 09 00 00    	jne    0x1007c292
1007b8eb:	8d 48 40             	lea    ecx,[eax+0x40]
1007b8ee:	81 f9 ff 00 00 00    	cmp    ecx,0xff
1007b8f4:	0f 84 98 09 00 00    	je     0x1007c292
1007b8fa:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007b8fd:	3b d3                	cmp    edx,ebx
1007b8ff:	0f 84 8d 09 00 00    	je     0x1007c292
1007b905:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
1007b908:	f6 c5 80             	test   ch,0x80
1007b90b:	0f 85 81 09 00 00    	jne    0x1007c292
1007b911:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007b914:	89 9e 94 01 00 00    	mov    DWORD PTR [esi+0x194],ebx
1007b91a:	88 9e 98 01 00 00    	mov    BYTE PTR [esi+0x198],bl
1007b920:	57                   	push   edi
1007b921:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007b924:	8d be 94 00 00 00    	lea    edi,[esi+0x94]
1007b92a:	8d 04 48             	lea    eax,[eax+ecx*2]
1007b92d:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007b933:	8d 04 81             	lea    eax,[ecx+eax*4]
1007b936:	8b 88 64 01 00 00    	mov    ecx,DWORD PTR [eax+0x164]
1007b93c:	51                   	push   ecx
1007b93d:	66 8b 88 46 01 00 00 	mov    cx,WORD PTR [eax+0x146]
1007b944:	51                   	push   ecx
1007b945:	66 8b 88 44 01 00 00 	mov    cx,WORD PTR [eax+0x144]
1007b94c:	51                   	push   ecx
1007b94d:	8d 88 54 01 00 00    	lea    ecx,[eax+0x154]
1007b953:	05 48 01 00 00       	add    eax,0x148
1007b958:	51                   	push   ecx
1007b959:	50                   	push   eax
1007b95a:	52                   	push   edx
1007b95b:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
1007b95e:	8b cf                	mov    ecx,edi
1007b960:	52                   	push   edx
1007b961:	e8 fa 0e 02 00       	call   0x1009c860
1007b966:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007b969:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007b96c:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007b96f:	8d 14 48             	lea    edx,[eax+ecx*2]
1007b972:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007b977:	f7 04 90 00 00 01 00 	test   DWORD PTR [eax+edx*4],0x10000
1007b97e:	74 07                	je     0x1007b987
1007b980:	8b cf                	mov    ecx,edi
1007b982:	e8 59 1d 02 00       	call   0x1009d6e0
1007b987:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007b98a:	c7 44 24 0c 00 c0 a8 	mov    DWORD PTR [esp+0xc],0x44a8c000
1007b991:	44 
1007b992:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007b995:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007b998:	8d 14 48             	lea    edx,[eax+ecx*2]
1007b99b:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007b9a0:	8b 0c 90             	mov    ecx,DWORD PTR [eax+edx*4]
1007b9a3:	8d 04 90             	lea    eax,[eax+edx*4]
1007b9a6:	f7 c1 00 00 00 01    	test   ecx,0x1000000
1007b9ac:	75 06                	jne    0x1007b9b4
1007b9ae:	83 78 04 06          	cmp    DWORD PTR [eax+0x4],0x6
1007b9b2:	75 08                	jne    0x1007b9bc
1007b9b4:	c7 44 24 0c 00 00 7a 	mov    DWORD PTR [esp+0xc],0x447a0000
1007b9bb:	44 
1007b9bc:	8b 88 bc 00 00 00    	mov    ecx,DWORD PTR [eax+0xbc]
1007b9c2:	55                   	push   ebp
1007b9c3:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1007b9c7:	3b cb                	cmp    ecx,ebx
1007b9c9:	75 08                	jne    0x1007b9d3
1007b9cb:	d8 88 08 01 00 00    	fmul   DWORD PTR [eax+0x108]
1007b9d1:	eb 06                	jmp    0x1007b9d9
1007b9d3:	d8 88 04 01 00 00    	fmul   DWORD PTR [eax+0x104]
1007b9d9:	e8 56 84 02 00       	call   0x100a3e34
1007b9de:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007b9e4:	8b e8                	mov    ebp,eax
1007b9e6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007b9e9:	68 94 6b 0d 10       	push   0x100d6b94
1007b9ee:	8b 11                	mov    edx,DWORD PTR [ecx]
1007b9f0:	50                   	push   eax
1007b9f1:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007b9f4:	83 f8 ff             	cmp    eax,0xffffffff
1007b9f7:	89 86 b0 00 00 00    	mov    DWORD PTR [esi+0xb0],eax
1007b9fd:	74 5a                	je     0x1007ba59
1007b9ff:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
1007ba02:	8d 14 89             	lea    edx,[ecx+ecx*4]
1007ba05:	8d 14 d2             	lea    edx,[edx+edx*8]
1007ba08:	8d 0c 51             	lea    ecx,[ecx+edx*2]
1007ba0b:	8b 15 6c cf 10 10    	mov    edx,DWORD PTR ds:0x1010cf6c
1007ba11:	8d 0c 8a             	lea    ecx,[edx+ecx*4]
1007ba14:	39 99 bc 00 00 00    	cmp    DWORD PTR [ecx+0xbc],ebx
1007ba1a:	75 29                	jne    0x1007ba45
1007ba1c:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1007ba20:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007ba26:	50                   	push   eax
1007ba27:	d8 89 04 01 00 00    	fmul   DWORD PTR [ecx+0x104]
1007ba2d:	8b 1f                	mov    ebx,DWORD PTR [edi]
1007ba2f:	e8 00 84 02 00       	call   0x100a3e34
1007ba34:	50                   	push   eax
1007ba35:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
1007ba3b:	50                   	push   eax
1007ba3c:	8b cf                	mov    ecx,edi
1007ba3e:	ff 53 68             	call   DWORD PTR [ebx+0x68]
1007ba41:	33 db                	xor    ebx,ebx
1007ba43:	eb 14                	jmp    0x1007ba59
1007ba45:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
1007ba4b:	50                   	push   eax
1007ba4c:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
1007ba52:	55                   	push   ebp
1007ba53:	8b 11                	mov    edx,DWORD PTR [ecx]
1007ba55:	50                   	push   eax
1007ba56:	ff 52 68             	call   DWORD PTR [edx+0x68]
1007ba59:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007ba5f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007ba62:	68 68 db 0d 10       	push   0x100ddb68
1007ba67:	50                   	push   eax
1007ba68:	8b 11                	mov    edx,DWORD PTR [ecx]
1007ba6a:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007ba6d:	83 f8 ff             	cmp    eax,0xffffffff
1007ba70:	89 86 b4 00 00 00    	mov    DWORD PTR [esi+0xb4],eax
1007ba76:	74 14                	je     0x1007ba8c
1007ba78:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
1007ba7e:	50                   	push   eax
1007ba7f:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
1007ba85:	55                   	push   ebp
1007ba86:	8b 11                	mov    edx,DWORD PTR [ecx]
1007ba88:	50                   	push   eax
1007ba89:	ff 52 68             	call   DWORD PTR [edx+0x68]
1007ba8c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007ba92:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007ba95:	68 60 db 0d 10       	push   0x100ddb60
1007ba9a:	50                   	push   eax
1007ba9b:	8b 11                	mov    edx,DWORD PTR [ecx]
1007ba9d:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007baa0:	83 f8 ff             	cmp    eax,0xffffffff
1007baa3:	89 86 e0 00 00 00    	mov    DWORD PTR [esi+0xe0],eax
1007baa9:	74 14                	je     0x1007babf
1007baab:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
1007bab1:	50                   	push   eax
1007bab2:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
1007bab8:	55                   	push   ebp
1007bab9:	8b 11                	mov    edx,DWORD PTR [ecx]
1007babb:	50                   	push   eax
1007babc:	ff 52 68             	call   DWORD PTR [edx+0x68]
1007babf:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bac5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bac8:	68 50 bd 0d 10       	push   0x100dbd50
1007bacd:	50                   	push   eax
1007bace:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bad0:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bad3:	89 86 b8 00 00 00    	mov    DWORD PTR [esi+0xb8],eax
1007bad9:	8b 86 a8 00 00 00    	mov    eax,DWORD PTR [esi+0xa8]
1007badf:	83 f8 ff             	cmp    eax,0xffffffff
1007bae2:	74 39                	je     0x1007bb1d
1007bae4:	50                   	push   eax
1007bae5:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007bae8:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007baee:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007baf1:	8b 2f                	mov    ebp,DWORD PTR [edi]
1007baf3:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007baf6:	8d 14 48             	lea    edx,[eax+ecx*2]
1007baf9:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007bafe:	d9 84 90 14 01 00 00 	fld    DWORD PTR [eax+edx*4+0x114]
1007bb05:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
1007bb0b:	e8 24 83 02 00       	call   0x100a3e34
1007bb10:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1007bb16:	50                   	push   eax
1007bb17:	51                   	push   ecx
1007bb18:	8b cf                	mov    ecx,edi
1007bb1a:	ff 55 68             	call   DWORD PTR [ebp+0x68]
1007bb1d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bb23:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bb26:	68 74 6b 0d 10       	push   0x100d6b74
1007bb2b:	50                   	push   eax
1007bb2c:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bb2e:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bb31:	89 86 bc 00 00 00    	mov    DWORD PTR [esi+0xbc],eax
1007bb37:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bb3d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bb40:	68 58 db 0d 10       	push   0x100ddb58
1007bb45:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bb47:	50                   	push   eax
1007bb48:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bb4b:	83 f8 ff             	cmp    eax,0xffffffff
1007bb4e:	89 86 c0 00 00 00    	mov    DWORD PTR [esi+0xc0],eax
1007bb54:	74 3f                	je     0x1007bb95
1007bb56:	50                   	push   eax
1007bb57:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007bb5a:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007bb60:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007bb63:	8b 2f                	mov    ebp,DWORD PTR [edi]
1007bb65:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007bb68:	8d 14 48             	lea    edx,[eax+ecx*2]
1007bb6b:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007bb70:	d9 84 90 14 01 00 00 	fld    DWORD PTR [eax+edx*4+0x114]
1007bb77:	d8 05 e0 83 0b 10    	fadd   DWORD PTR ds:0x100b83e0
1007bb7d:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
1007bb83:	e8 ac 82 02 00       	call   0x100a3e34
1007bb88:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1007bb8e:	50                   	push   eax
1007bb8f:	51                   	push   ecx
1007bb90:	8b cf                	mov    ecx,edi
1007bb92:	ff 55 68             	call   DWORD PTR [ebp+0x68]
1007bb95:	8b 86 ac 00 00 00    	mov    eax,DWORD PTR [esi+0xac]
1007bb9b:	83 f8 ff             	cmp    eax,0xffffffff
1007bb9e:	74 3a                	je     0x1007bbda
1007bba0:	50                   	push   eax
1007bba1:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007bba4:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007bbaa:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007bbad:	8b 2f                	mov    ebp,DWORD PTR [edi]
1007bbaf:	8d 14 c9             	lea    edx,[ecx+ecx*8]
1007bbb2:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007bbb8:	8d 04 50             	lea    eax,[eax+edx*2]
1007bbbb:	d9 84 81 18 01 00 00 	fld    DWORD PTR [ecx+eax*4+0x118]
1007bbc2:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
1007bbc8:	e8 67 82 02 00       	call   0x100a3e34
1007bbcd:	8b 96 f8 00 00 00    	mov    edx,DWORD PTR [esi+0xf8]
1007bbd3:	50                   	push   eax
1007bbd4:	52                   	push   edx
1007bbd5:	8b cf                	mov    ecx,edi
1007bbd7:	ff 55 68             	call   DWORD PTR [ebp+0x68]
1007bbda:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bbe0:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007bbe3:	68 6c 6b 0d 10       	push   0x100d6b6c
1007bbe8:	52                   	push   edx
1007bbe9:	8b 01                	mov    eax,DWORD PTR [ecx]
1007bbeb:	ff 50 7c             	call   DWORD PTR [eax+0x7c]
1007bbee:	83 f8 ff             	cmp    eax,0xffffffff
1007bbf1:	89 86 c4 00 00 00    	mov    DWORD PTR [esi+0xc4],eax
1007bbf7:	74 39                	je     0x1007bc32
1007bbf9:	50                   	push   eax
1007bbfa:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007bbfd:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007bc03:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007bc06:	8b 2f                	mov    ebp,DWORD PTR [edi]
1007bc08:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007bc0b:	8d 14 48             	lea    edx,[eax+ecx*2]
1007bc0e:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007bc13:	d9 84 90 18 01 00 00 	fld    DWORD PTR [eax+edx*4+0x118]
1007bc1a:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
1007bc20:	e8 0f 82 02 00       	call   0x100a3e34
1007bc25:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1007bc2b:	50                   	push   eax
1007bc2c:	51                   	push   ecx
1007bc2d:	8b cf                	mov    ecx,edi
1007bc2f:	ff 55 68             	call   DWORD PTR [ebp+0x68]
1007bc32:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bc38:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bc3b:	68 48 db 0d 10       	push   0x100ddb48
1007bc40:	50                   	push   eax
1007bc41:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bc43:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bc46:	83 f8 ff             	cmp    eax,0xffffffff
1007bc49:	89 86 c8 00 00 00    	mov    DWORD PTR [esi+0xc8],eax
1007bc4f:	74 24                	je     0x1007bc75
1007bc51:	d9 46 2c             	fld    DWORD PTR [esi+0x2c]
1007bc54:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007bc5a:	50                   	push   eax
1007bc5b:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
1007bc61:	8b 2f                	mov    ebp,DWORD PTR [edi]
1007bc63:	e8 cc 81 02 00       	call   0x100a3e34
1007bc68:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1007bc6e:	50                   	push   eax
1007bc6f:	51                   	push   ecx
1007bc70:	8b cf                	mov    ecx,edi
1007bc72:	ff 55 68             	call   DWORD PTR [ebp+0x68]
1007bc75:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bc7b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bc7e:	68 38 db 0d 10       	push   0x100ddb38
1007bc83:	50                   	push   eax
1007bc84:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bc86:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bc89:	83 f8 ff             	cmp    eax,0xffffffff
1007bc8c:	89 86 d0 00 00 00    	mov    DWORD PTR [esi+0xd0],eax
1007bc92:	74 24                	je     0x1007bcb8
1007bc94:	d9 46 30             	fld    DWORD PTR [esi+0x30]
1007bc97:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007bc9d:	50                   	push   eax
1007bc9e:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
1007bca4:	8b 2f                	mov    ebp,DWORD PTR [edi]
1007bca6:	e8 89 81 02 00       	call   0x100a3e34
1007bcab:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1007bcb1:	50                   	push   eax
1007bcb2:	51                   	push   ecx
1007bcb3:	8b cf                	mov    ecx,edi
1007bcb5:	ff 55 68             	call   DWORD PTR [ebp+0x68]
1007bcb8:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007bcbb:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007bcbe:	8d 14 c9             	lea    edx,[ecx+ecx*8]
1007bcc1:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007bcc7:	8d 04 50             	lea    eax,[eax+edx*2]
1007bcca:	f7 04 81 00 00 80 00 	test   DWORD PTR [ecx+eax*4],0x800000
1007bcd1:	74 5d                	je     0x1007bd30
1007bcd3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bcd9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bcdc:	68 30 db 0d 10       	push   0x100ddb30
1007bce1:	50                   	push   eax
1007bce2:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bce4:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bce7:	83 f8 ff             	cmp    eax,0xffffffff
1007bcea:	89 86 ec 00 00 00    	mov    DWORD PTR [esi+0xec],eax
1007bcf0:	74 24                	je     0x1007bd16
1007bcf2:	d9 46 2c             	fld    DWORD PTR [esi+0x2c]
1007bcf5:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007bcfb:	50                   	push   eax
1007bcfc:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
1007bd02:	8b 2f                	mov    ebp,DWORD PTR [edi]
1007bd04:	e8 2b 81 02 00       	call   0x100a3e34
1007bd09:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1007bd0f:	50                   	push   eax
1007bd10:	51                   	push   ecx
1007bd11:	8b cf                	mov    ecx,edi
1007bd13:	ff 55 68             	call   DWORD PTR [ebp+0x68]
1007bd16:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bd1c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bd1f:	68 28 db 0d 10       	push   0x100ddb28
1007bd24:	50                   	push   eax
1007bd25:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bd27:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bd2a:	89 86 f0 00 00 00    	mov    DWORD PTR [esi+0xf0],eax
1007bd30:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007bd33:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007bd36:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007bd39:	8d 14 48             	lea    edx,[eax+ecx*2]
1007bd3c:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007bd41:	f6 04 90 10          	test   BYTE PTR [eax+edx*4],0x10
1007bd45:	74 6e                	je     0x1007bdb5
1007bd47:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bd4d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bd50:	68 30 db 0d 10       	push   0x100ddb30
1007bd55:	50                   	push   eax
1007bd56:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bd58:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bd5b:	83 f8 ff             	cmp    eax,0xffffffff
1007bd5e:	89 86 ec 00 00 00    	mov    DWORD PTR [esi+0xec],eax
1007bd64:	74 18                	je     0x1007bd7e
1007bd66:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
1007bd6c:	50                   	push   eax
1007bd6d:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
1007bd73:	68 dc 05 00 00       	push   0x5dc
1007bd78:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bd7a:	50                   	push   eax
1007bd7b:	ff 52 68             	call   DWORD PTR [edx+0x68]
1007bd7e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bd84:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bd87:	68 28 db 0d 10       	push   0x100ddb28
1007bd8c:	50                   	push   eax
1007bd8d:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bd8f:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bd92:	83 f8 ff             	cmp    eax,0xffffffff
1007bd95:	89 86 f0 00 00 00    	mov    DWORD PTR [esi+0xf0],eax
1007bd9b:	74 18                	je     0x1007bdb5
1007bd9d:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
1007bda3:	50                   	push   eax
1007bda4:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
1007bdaa:	68 c4 09 00 00       	push   0x9c4
1007bdaf:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bdb1:	50                   	push   eax
1007bdb2:	ff 52 68             	call   DWORD PTR [edx+0x68]
1007bdb5:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bdbb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bdbe:	68 18 db 0d 10       	push   0x100ddb18
1007bdc3:	50                   	push   eax
1007bdc4:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bdc6:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bdc9:	83 f8 ff             	cmp    eax,0xffffffff
1007bdcc:	89 86 cc 00 00 00    	mov    DWORD PTR [esi+0xcc],eax
1007bdd2:	74 24                	je     0x1007bdf8
1007bdd4:	d9 46 2c             	fld    DWORD PTR [esi+0x2c]
1007bdd7:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007bddd:	50                   	push   eax
1007bdde:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
1007bde4:	8b 2f                	mov    ebp,DWORD PTR [edi]
1007bde6:	e8 49 80 02 00       	call   0x100a3e34
1007bdeb:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1007bdf1:	50                   	push   eax
1007bdf2:	51                   	push   ecx
1007bdf3:	8b cf                	mov    ecx,edi
1007bdf5:	ff 55 68             	call   DWORD PTR [ebp+0x68]
1007bdf8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bdfe:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007be01:	68 08 db 0d 10       	push   0x100ddb08
1007be06:	50                   	push   eax
1007be07:	8b 11                	mov    edx,DWORD PTR [ecx]
1007be09:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007be0c:	83 f8 ff             	cmp    eax,0xffffffff
1007be0f:	89 86 d4 00 00 00    	mov    DWORD PTR [esi+0xd4],eax
1007be15:	74 24                	je     0x1007be3b
1007be17:	d9 46 30             	fld    DWORD PTR [esi+0x30]
1007be1a:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007be20:	50                   	push   eax
1007be21:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
1007be27:	8b 2f                	mov    ebp,DWORD PTR [edi]
1007be29:	e8 06 80 02 00       	call   0x100a3e34
1007be2e:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1007be34:	50                   	push   eax
1007be35:	51                   	push   ecx
1007be36:	8b cf                	mov    ecx,edi
1007be38:	ff 55 68             	call   DWORD PTR [ebp+0x68]
1007be3b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007be41:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007be44:	68 fc da 0d 10       	push   0x100ddafc
1007be49:	50                   	push   eax
1007be4a:	8b 11                	mov    edx,DWORD PTR [ecx]
1007be4c:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007be4f:	83 f8 ff             	cmp    eax,0xffffffff
1007be52:	89 86 d8 00 00 00    	mov    DWORD PTR [esi+0xd8],eax
1007be58:	74 39                	je     0x1007be93
1007be5a:	50                   	push   eax
1007be5b:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007be5e:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007be64:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007be67:	8b 2f                	mov    ebp,DWORD PTR [edi]
1007be69:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007be6c:	8d 14 48             	lea    edx,[eax+ecx*2]
1007be6f:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007be74:	d9 84 90 1c 01 00 00 	fld    DWORD PTR [eax+edx*4+0x11c]
1007be7b:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
1007be81:	e8 ae 7f 02 00       	call   0x100a3e34
1007be86:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1007be8c:	50                   	push   eax
1007be8d:	51                   	push   ecx
1007be8e:	8b cf                	mov    ecx,edi
1007be90:	ff 55 68             	call   DWORD PTR [ebp+0x68]
1007be93:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007be99:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007be9c:	68 f0 da 0d 10       	push   0x100ddaf0
1007bea1:	50                   	push   eax
1007bea2:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bea4:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bea7:	83 f8 ff             	cmp    eax,0xffffffff
1007beaa:	89 86 dc 00 00 00    	mov    DWORD PTR [esi+0xdc],eax
1007beb0:	74 39                	je     0x1007beeb
1007beb2:	50                   	push   eax
1007beb3:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007beb6:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
1007bebc:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007bebf:	8b 2f                	mov    ebp,DWORD PTR [edi]
1007bec1:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007bec4:	8d 14 48             	lea    edx,[eax+ecx*2]
1007bec7:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007becc:	d9 84 90 1c 01 00 00 	fld    DWORD PTR [eax+edx*4+0x11c]
1007bed3:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
1007bed9:	e8 56 7f 02 00       	call   0x100a3e34
1007bede:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1007bee4:	50                   	push   eax
1007bee5:	51                   	push   ecx
1007bee6:	8b cf                	mov    ecx,edi
1007bee8:	ff 55 68             	call   DWORD PTR [ebp+0x68]
1007beeb:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bef1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bef4:	68 e8 da 0d 10       	push   0x100ddae8
1007bef9:	50                   	push   eax
1007befa:	8b 11                	mov    edx,DWORD PTR [ecx]
1007befc:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007beff:	83 f8 ff             	cmp    eax,0xffffffff
1007bf02:	89 86 e4 00 00 00    	mov    DWORD PTR [esi+0xe4],eax
1007bf08:	74 18                	je     0x1007bf22
1007bf0a:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
1007bf10:	50                   	push   eax
1007bf11:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
1007bf17:	68 2c 01 00 00       	push   0x12c
1007bf1c:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bf1e:	50                   	push   eax
1007bf1f:	ff 52 68             	call   DWORD PTR [edx+0x68]
1007bf22:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bf28:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bf2b:	68 e0 da 0d 10       	push   0x100ddae0
1007bf30:	50                   	push   eax
1007bf31:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bf33:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007bf36:	83 f8 ff             	cmp    eax,0xffffffff
1007bf39:	89 86 e8 00 00 00    	mov    DWORD PTR [esi+0xe8],eax
1007bf3f:	74 18                	je     0x1007bf59
1007bf41:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
1007bf47:	50                   	push   eax
1007bf48:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
1007bf4e:	68 2c 01 00 00       	push   0x12c
1007bf53:	8b 11                	mov    edx,DWORD PTR [ecx]
1007bf55:	50                   	push   eax
1007bf56:	ff 52 68             	call   DWORD PTR [edx+0x68]
1007bf59:	8d 86 94 00 00 00    	lea    eax,[esi+0x94]
1007bf5f:	b9 19 00 00 00       	mov    ecx,0x19
1007bf64:	83 38 ff             	cmp    DWORD PTR [eax],0xffffffff
1007bf67:	75 08                	jne    0x1007bf71
1007bf69:	8b 96 94 00 00 00    	mov    edx,DWORD PTR [esi+0x94]
1007bf6f:	89 10                	mov    DWORD PTR [eax],edx
1007bf71:	83 c0 04             	add    eax,0x4
1007bf74:	49                   	dec    ecx
1007bf75:	75 ed                	jne    0x1007bf64
1007bf77:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007bf7a:	8d ae 90 01 00 00    	lea    ebp,[esi+0x190]
1007bf80:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007bf83:	c7 45 00 ff ff ff ff 	mov    DWORD PTR [ebp+0x0],0xffffffff
1007bf8a:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007bf8d:	8d 14 48             	lea    edx,[eax+ecx*2]
1007bf90:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007bf95:	8b 84 90 bc 00 00 00 	mov    eax,DWORD PTR [eax+edx*4+0xbc]
1007bf9c:	3b c3                	cmp    eax,ebx
1007bf9e:	74 7d                	je     0x1007c01d
1007bfa0:	83 f8 04             	cmp    eax,0x4
1007bfa3:	74 78                	je     0x1007c01d
1007bfa5:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
1007bfa8:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007bfab:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1007bfb0:	55                   	push   ebp
1007bfb1:	51                   	push   ecx
1007bfb2:	52                   	push   edx
1007bfb3:	ff 90 c4 03 00 00    	call   DWORD PTR [eax+0x3c4]
1007bfb9:	83 c4 0c             	add    esp,0xc
1007bfbc:	85 c0                	test   eax,eax
1007bfbe:	75 56                	jne    0x1007c016
1007bfc0:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1007bfc3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007bfc6:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1007bfca:	6a 3c                	push   0x3c
1007bfcc:	51                   	push   ecx
1007bfcd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007bfd3:	52                   	push   edx
1007bfd4:	50                   	push   eax
1007bfd5:	ff 91 c8 03 00 00    	call   DWORD PTR [ecx+0x3c8]
1007bfdb:	83 c4 10             	add    esp,0x10
1007bfde:	bf d4 da 0d 10       	mov    edi,0x100ddad4
1007bfe3:	8d 44 24 14          	lea    eax,[esp+0x14]
1007bfe7:	8a 10                	mov    dl,BYTE PTR [eax]
1007bfe9:	8a ca                	mov    cl,dl
1007bfeb:	3a 17                	cmp    dl,BYTE PTR [edi]
1007bfed:	75 1c                	jne    0x1007c00b
1007bfef:	3a cb                	cmp    cl,bl
1007bff1:	74 14                	je     0x1007c007
1007bff3:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007bff6:	8a ca                	mov    cl,dl
1007bff8:	3a 57 01             	cmp    dl,BYTE PTR [edi+0x1]
1007bffb:	75 0e                	jne    0x1007c00b
1007bffd:	83 c0 02             	add    eax,0x2
1007c000:	83 c7 02             	add    edi,0x2
1007c003:	3a cb                	cmp    cl,bl
1007c005:	75 e0                	jne    0x1007bfe7
1007c007:	33 c0                	xor    eax,eax
1007c009:	eb 05                	jmp    0x1007c010
1007c00b:	1b c0                	sbb    eax,eax
1007c00d:	83 d8 ff             	sbb    eax,0xffffffff
1007c010:	3b c3                	cmp    eax,ebx
1007c012:	75 91                	jne    0x1007bfa5
1007c014:	eb 07                	jmp    0x1007c01d
1007c016:	c7 45 00 ff ff ff ff 	mov    DWORD PTR [ebp+0x0],0xffffffff
1007c01d:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007c020:	33 ff                	xor    edi,edi
1007c022:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007c025:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007c028:	8d 14 48             	lea    edx,[eax+ecx*2]
1007c02b:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007c030:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
1007c036:	66 8b bc 90 46 01 00 	mov    di,WORD PTR [eax+edx*4+0x146]
1007c03d:	00 
1007c03e:	8d 04 90             	lea    eax,[eax+edx*4]
1007c041:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1007c045:	33 ff                	xor    edi,edi
1007c047:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
1007c04b:	66 8b b8 44 01 00 00 	mov    di,WORD PTR [eax+0x144]
1007c052:	51                   	push   ecx
1007c053:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007c056:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c058:	d9 1c 24             	fstp   DWORD PTR [esp]
1007c05b:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
1007c05f:	51                   	push   ecx
1007c060:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
1007c064:	d9 1c 24             	fstp   DWORD PTR [esp]
1007c067:	50                   	push   eax
1007c068:	ff 52 18             	call   DWORD PTR [edx+0x18]
1007c06b:	8a 46 7c             	mov    al,BYTE PTR [esi+0x7c]
1007c06e:	5d                   	pop    ebp
1007c06f:	a8 04                	test   al,0x4
1007c071:	74 09                	je     0x1007c07c
1007c073:	c6 86 33 01 00 00 01 	mov    BYTE PTR [esi+0x133],0x1
1007c07a:	eb 06                	jmp    0x1007c082
1007c07c:	88 9e 33 01 00 00    	mov    BYTE PTR [esi+0x133],bl
1007c082:	8a 86 33 01 00 00    	mov    al,BYTE PTR [esi+0x133]
1007c088:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
1007c08e:	3a c3                	cmp    al,bl
1007c090:	8d 86 e4 01 00 00    	lea    eax,[esi+0x1e4]
1007c096:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c098:	50                   	push   eax
1007c099:	74 07                	je     0x1007c0a2
1007c09b:	68 c8 da 0d 10       	push   0x100ddac8
1007c0a0:	eb 05                	jmp    0x1007c0a7
1007c0a2:	68 80 6d 0d 10       	push   0x100d6d80
1007c0a7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007c0aa:	50                   	push   eax
1007c0ab:	ff 12                	call   DWORD PTR [edx]
1007c0ad:	3b c3                	cmp    eax,ebx
1007c0af:	74 2e                	je     0x1007c0df
1007c0b1:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007c0b4:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1007c0ba:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007c0bd:	8b 3a                	mov    edi,DWORD PTR [edx]
1007c0bf:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007c0c2:	8d 04 48             	lea    eax,[eax+ecx*2]
1007c0c5:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007c0cb:	8d 44 81 08          	lea    eax,[ecx+eax*4+0x8]
1007c0cf:	50                   	push   eax
1007c0d0:	68 70 da 0d 10       	push   0x100dda70
1007c0d5:	52                   	push   edx
1007c0d6:	ff 97 9c 00 00 00    	call   DWORD PTR [edi+0x9c]
1007c0dc:	83 c4 0c             	add    esp,0xc
1007c0df:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007c0e2:	8b 3d 6c cf 10 10    	mov    edi,DWORD PTR ds:0x1010cf6c
1007c0e8:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1007c0ee:	8d 14 80             	lea    edx,[eax+eax*4]
1007c0f1:	83 c1 30             	add    ecx,0x30
1007c0f4:	8d 14 d2             	lea    edx,[edx+edx*8]
1007c0f7:	8d 04 50             	lea    eax,[eax+edx*2]
1007c0fa:	33 d2                	xor    edx,edx
1007c0fc:	66 8b 94 87 40 01 00 	mov    dx,WORD PTR [edi+eax*4+0x140]
1007c103:	00 
1007c104:	52                   	push   edx
1007c105:	51                   	push   ecx
1007c106:	81 c1 50 04 00 00    	add    ecx,0x450
1007c10c:	e8 4f a7 01 00       	call   0x10096860
1007c111:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1007c116:	6a 01                	push   0x1
1007c118:	83 c0 30             	add    eax,0x30
1007c11b:	50                   	push   eax
1007c11c:	8d 88 50 04 00 00    	lea    ecx,[eax+0x450]
1007c122:	e8 39 a7 01 00       	call   0x10096860
1007c127:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1007c12d:	6a 1d                	push   0x1d
1007c12f:	8d 41 30             	lea    eax,[ecx+0x30]
1007c132:	50                   	push   eax
1007c133:	8d 88 50 04 00 00    	lea    ecx,[eax+0x450]
1007c139:	e8 22 a7 01 00       	call   0x10096860
1007c13e:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007c141:	5f                   	pop    edi
1007c142:	3d ff 00 00 00       	cmp    eax,0xff
1007c147:	74 11                	je     0x1007c15a
1007c149:	8b 76 18             	mov    esi,DWORD PTR [esi+0x18]
1007c14c:	3b f3                	cmp    esi,ebx
1007c14e:	74 0f                	je     0x1007c15f
1007c150:	83 fe 01             	cmp    esi,0x1
1007c153:	75 05                	jne    0x1007c15a
1007c155:	83 c0 40             	add    eax,0x40
1007c158:	eb 05                	jmp    0x1007c15f
1007c15a:	b8 ff 00 00 00       	mov    eax,0xff
1007c15f:	3b 05 70 cf 10 10    	cmp    eax,DWORD PTR ds:0x1010cf70
1007c165:	72 04                	jb     0x1007c16b
1007c167:	33 c0                	xor    eax,eax
1007c169:	eb 12                	jmp    0x1007c17d
1007c16b:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007c16e:	8d 14 c9             	lea    edx,[ecx+ecx*8]
1007c171:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007c177:	8d 04 50             	lea    eax,[eax+edx*2]
1007c17a:	8d 04 81             	lea    eax,[ecx+eax*4]
1007c17d:	8b 80 c0 00 00 00    	mov    eax,DWORD PTR [eax+0xc0]
1007c183:	83 f8 08             	cmp    eax,0x8
1007c186:	0f 87 d3 00 00 00    	ja     0x1007c25f
1007c18c:	ff 24 85 98 c2 07 10 	jmp    DWORD PTR [eax*4+0x1007c298]
1007c193:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1007c199:	6a 20                	push   0x20
1007c19b:	8d 42 30             	lea    eax,[edx+0x30]
1007c19e:	50                   	push   eax
1007c19f:	8d 88 50 04 00 00    	lea    ecx,[eax+0x450]
1007c1a5:	e8 b6 a6 01 00       	call   0x10096860
1007c1aa:	5e                   	pop    esi
1007c1ab:	5b                   	pop    ebx
1007c1ac:	83 c4 40             	add    esp,0x40
1007c1af:	c3                   	ret
1007c1b0:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1007c1b5:	6a 22                	push   0x22
1007c1b7:	83 c0 30             	add    eax,0x30
1007c1ba:	50                   	push   eax
1007c1bb:	8d 88 50 04 00 00    	lea    ecx,[eax+0x450]
1007c1c1:	e8 9a a6 01 00       	call   0x10096860
1007c1c6:	5e                   	pop    esi
1007c1c7:	5b                   	pop    ebx
1007c1c8:	83 c4 40             	add    esp,0x40
1007c1cb:	c3                   	ret
1007c1cc:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1007c1d2:	6a 24                	push   0x24
1007c1d4:	8d 41 30             	lea    eax,[ecx+0x30]
1007c1d7:	50                   	push   eax
1007c1d8:	8d 88 50 04 00 00    	lea    ecx,[eax+0x450]
1007c1de:	e8 7d a6 01 00       	call   0x10096860
1007c1e3:	5e                   	pop    esi
1007c1e4:	5b                   	pop    ebx
1007c1e5:	83 c4 40             	add    esp,0x40
1007c1e8:	c3                   	ret
1007c1e9:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1007c1ef:	6a 26                	push   0x26
1007c1f1:	8d 42 30             	lea    eax,[edx+0x30]
1007c1f4:	50                   	push   eax
1007c1f5:	8d 88 50 04 00 00    	lea    ecx,[eax+0x450]
1007c1fb:	e8 60 a6 01 00       	call   0x10096860
1007c200:	5e                   	pop    esi
1007c201:	5b                   	pop    ebx
1007c202:	83 c4 40             	add    esp,0x40
1007c205:	c3                   	ret
1007c206:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1007c20b:	6a 28                	push   0x28
1007c20d:	83 c0 30             	add    eax,0x30
1007c210:	50                   	push   eax
1007c211:	8d 88 50 04 00 00    	lea    ecx,[eax+0x450]
1007c217:	e8 44 a6 01 00       	call   0x10096860
1007c21c:	5e                   	pop    esi
1007c21d:	5b                   	pop    ebx
1007c21e:	83 c4 40             	add    esp,0x40
1007c221:	c3                   	ret
1007c222:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1007c228:	68 b5 00 00 00       	push   0xb5
1007c22d:	8d 41 30             	lea    eax,[ecx+0x30]
1007c230:	50                   	push   eax
1007c231:	8d 88 50 04 00 00    	lea    ecx,[eax+0x450]
1007c237:	e8 24 a6 01 00       	call   0x10096860
1007c23c:	5e                   	pop    esi
1007c23d:	5b                   	pop    ebx
1007c23e:	83 c4 40             	add    esp,0x40
1007c241:	c3                   	ret
1007c242:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1007c248:	6a 2a                	push   0x2a
1007c24a:	8d 42 30             	lea    eax,[edx+0x30]
1007c24d:	50                   	push   eax
1007c24e:	8d 88 50 04 00 00    	lea    ecx,[eax+0x450]
1007c254:	e8 07 a6 01 00       	call   0x10096860
1007c259:	5e                   	pop    esi
1007c25a:	5b                   	pop    ebx
1007c25b:	83 c4 40             	add    esp,0x40
1007c25e:	c3                   	ret

*/
void GunClient::Init() {
    // TODO: Implement Init
}

// 0x1007c25f: GunClient::ClientInitGun
/*
1007c25f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c265:	68 23 01 00 00       	push   0x123
1007c26a:	68 3c da 0d 10       	push   0x100dda3c
1007c26f:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c271:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1007c277:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1007c27c:	68 10 da 0d 10       	push   0x100dda10
1007c281:	68 08 da 0d 10       	push   0x100dda08
1007c286:	50                   	push   eax
1007c287:	8b 08                	mov    ecx,DWORD PTR [eax]
1007c289:	ff 91 2c 01 00 00    	call   DWORD PTR [ecx+0x12c]
1007c28f:	83 c4 0c             	add    esp,0xc
1007c292:	5e                   	pop    esi
1007c293:	5b                   	pop    ebx
1007c294:	83 c4 40             	add    esp,0x40
1007c297:	c3                   	ret
1007c298:	93                   	xchg   ebx,eax
1007c299:	c1 07 10             	rol    DWORD PTR [edi],0x10
1007c29c:	b0 c1                	mov    al,0xc1
1007c29e:	07                   	pop    es
1007c29f:	10 cc                	adc    ah,cl
1007c2a1:	c1 07 10             	rol    DWORD PTR [edi],0x10
1007c2a4:	e9 c1 07 10 06       	jmp    0x1617ca6a
1007c2a9:	c2 07 10             	ret    0x1007
1007c2ac:	22 c2                	and    al,dl
1007c2ae:	07                   	pop    es
1007c2af:	10 42 c2             	adc    BYTE PTR [edx-0x3e],al
1007c2b2:	07                   	pop    es
1007c2b3:	10 92 c2 07 10 92    	adc    BYTE PTR [edx-0x6deff83e],dl
1007c2b9:	c2 07 10             	ret    0x1007
1007c2bc:	90                   	nop
1007c2bd:	90                   	nop
1007c2be:	90                   	nop
1007c2bf:	90                   	nop
1007c2c0:	56                   	push   esi
1007c2c1:	8b f1                	mov    esi,ecx
1007c2c3:	6a 00                	push   0x0
1007c2c5:	68 ff 00 00 00       	push   0xff
1007c2ca:	8b 06                	mov    eax,DWORD PTR [esi]
1007c2cc:	ff 50 58             	call   DWORD PTR [eax+0x58]
1007c2cf:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c2d5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007c2d8:	6a 00                	push   0x0
1007c2da:	6a 00                	push   0x0
1007c2dc:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c2de:	50                   	push   eax
1007c2df:	ff 92 cc 01 00 00    	call   DWORD PTR [edx+0x1cc]
1007c2e5:	5e                   	pop    esi
1007c2e6:	c3                   	ret
1007c2e7:	90                   	nop
1007c2e8:	90                   	nop
1007c2e9:	90                   	nop
1007c2ea:	90                   	nop
1007c2eb:	90                   	nop
1007c2ec:	90                   	nop
1007c2ed:	90                   	nop
1007c2ee:	90                   	nop
1007c2ef:	90                   	nop
1007c2f0:	56                   	push   esi
1007c2f1:	8b f1                	mov    esi,ecx
1007c2f3:	8b 06                	mov    eax,DWORD PTR [esi]
1007c2f5:	ff 10                	call   DWORD PTR [eax]
1007c2f7:	8b ce                	mov    ecx,esi
1007c2f9:	e8 52 d1 f8 ff       	call   0x10009450
1007c2fe:	8a 86 31 01 00 00    	mov    al,BYTE PTR [esi+0x131]
1007c304:	84 c0                	test   al,al
1007c306:	74 1e                	je     0x1007c326
1007c308:	6a 00                	push   0x0
1007c30a:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007c310:	e8 0b 1a 02 00       	call   0x1009dd20
1007c315:	c6 86 31 01 00 00 00 	mov    BYTE PTR [esi+0x131],0x0
1007c31c:	c7 86 94 01 00 00 00 	mov    DWORD PTR [esi+0x194],0x0
1007c323:	00 00 00 
1007c326:	5e                   	pop    esi
1007c327:	c3                   	ret
1007c328:	90                   	nop
1007c329:	90                   	nop
1007c32a:	90                   	nop
1007c32b:	90                   	nop
1007c32c:	90                   	nop
1007c32d:	90                   	nop
1007c32e:	90                   	nop
1007c32f:	90                   	nop
1007c330:	83 ec 0c             	sub    esp,0xc
1007c333:	53                   	push   ebx
1007c334:	56                   	push   esi
1007c335:	8b f1                	mov    esi,ecx
1007c337:	33 db                	xor    ebx,ebx
1007c339:	38 5e 1d             	cmp    BYTE PTR [esi+0x1d],bl
1007c33c:	0f 84 fb 02 00 00    	je     0x1007c63d
1007c342:	e8 59 d1 f8 ff       	call   0x100094a0
1007c347:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007c34a:	3b d3                	cmp    edx,ebx
1007c34c:	0f 84 eb 02 00 00    	je     0x1007c63d
1007c352:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007c355:	57                   	push   edi
1007c356:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007c359:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007c35c:	8d 04 48             	lea    eax,[eax+ecx*2]
1007c35f:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007c365:	f7 04 81 00 00 01 00 	test   DWORD PTR [ecx+eax*4],0x10000
1007c36c:	74 0d                	je     0x1007c37b
1007c36e:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007c374:	e8 17 0b 02 00       	call   0x1009ce90
1007c379:	eb 2e                	jmp    0x1007c3a9
1007c37b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c381:	8d 7c 24 0c          	lea    edi,[esp+0xc]
1007c385:	c7 44 24 0c 48 e1 92 	mov    DWORD PTR [esp+0xc],0x4192e148
1007c38c:	41 
1007c38d:	c7 44 24 10 00 00 a0 	mov    DWORD PTR [esp+0x10],0xc1a00000
1007c394:	c1 
1007c395:	c7 44 24 14 00 00 04 	mov    DWORD PTR [esp+0x14],0x42040000
1007c39c:	42 
1007c39d:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c39f:	6a 01                	push   0x1
1007c3a1:	57                   	push   edi
1007c3a2:	52                   	push   edx
1007c3a3:	ff 90 a8 01 00 00    	call   DWORD PTR [eax+0x1a8]
1007c3a9:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
1007c3ac:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c3ae:	ff 12                	call   DWORD PTR [edx]
1007c3b0:	83 f8 03             	cmp    eax,0x3
1007c3b3:	5f                   	pop    edi
1007c3b4:	0f 85 83 02 00 00    	jne    0x1007c63d
1007c3ba:	38 5e 28             	cmp    BYTE PTR [esi+0x28],bl
1007c3bd:	75 5d                	jne    0x1007c41c
1007c3bf:	38 9e fc 00 00 00    	cmp    BYTE PTR [esi+0xfc],bl
1007c3c5:	75 55                	jne    0x1007c41c
1007c3c7:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007c3ca:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007c3cd:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007c3d0:	8d 14 48             	lea    edx,[eax+ecx*2]
1007c3d3:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007c3d8:	f7 04 90 00 00 00 04 	test   DWORD PTR [eax+edx*4],0x4000000
1007c3df:	75 0b                	jne    0x1007c3ec
1007c3e1:	38 5e 36             	cmp    BYTE PTR [esi+0x36],bl
1007c3e4:	74 06                	je     0x1007c3ec
1007c3e6:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007c3e9:	40                   	inc    eax
1007c3ea:	eb 03                	jmp    0x1007c3ef
1007c3ec:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007c3ef:	3b c3                	cmp    eax,ebx
1007c3f1:	74 29                	je     0x1007c41c
1007c3f3:	38 9e 31 01 00 00    	cmp    BYTE PTR [esi+0x131],bl
1007c3f9:	75 21                	jne    0x1007c41c
1007c3fb:	c6 86 fc 00 00 00 01 	mov    BYTE PTR [esi+0xfc],0x1
1007c402:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c408:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c40a:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1007c410:	d9 1d 28 87 12 10    	fstp   DWORD PTR ds:0x10128728
1007c416:	89 1d 34 87 12 10    	mov    DWORD PTR ds:0x10128734,ebx
1007c41c:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007c41f:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007c422:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007c425:	8d 14 48             	lea    edx,[eax+ecx*2]
1007c428:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007c42d:	8b 8c 90 bc 00 00 00 	mov    ecx,DWORD PTR [eax+edx*4+0xbc]
1007c434:	8d 04 90             	lea    eax,[eax+edx*4]
1007c437:	3b cb                	cmp    ecx,ebx
1007c439:	0f 84 b9 00 00 00    	je     0x1007c4f8
1007c43f:	38 9e 32 01 00 00    	cmp    BYTE PTR [esi+0x132],bl
1007c445:	0f 84 ad 00 00 00    	je     0x1007c4f8
1007c44b:	8b 10                	mov    edx,DWORD PTR [eax]
1007c44d:	81 e2 00 00 00 04    	and    edx,0x4000000
1007c453:	75 0d                	jne    0x1007c462
1007c455:	38 5e 36             	cmp    BYTE PTR [esi+0x36],bl
1007c458:	74 08                	je     0x1007c462
1007c45a:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007c45d:	8d 48 01             	lea    ecx,[eax+0x1]
1007c460:	eb 05                	jmp    0x1007c467
1007c462:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007c465:	8b c8                	mov    ecx,eax
1007c467:	3b cb                	cmp    ecx,ebx
1007c469:	74 22                	je     0x1007c48d
1007c46b:	8a 8e 30 01 00 00    	mov    cl,BYTE PTR [esi+0x130]
1007c471:	3a cb                	cmp    cl,bl
1007c473:	75 0e                	jne    0x1007c483
1007c475:	3b d3                	cmp    edx,ebx
1007c477:	75 06                	jne    0x1007c47f
1007c479:	38 5e 36             	cmp    BYTE PTR [esi+0x36],bl
1007c47c:	74 01                	je     0x1007c47f
1007c47e:	40                   	inc    eax
1007c47f:	3b c3                	cmp    eax,ebx
1007c481:	75 0a                	jne    0x1007c48d
1007c483:	83 7e 48 01          	cmp    DWORD PTR [esi+0x48],0x1
1007c487:	75 6f                	jne    0x1007c4f8
1007c489:	3a cb                	cmp    cl,bl
1007c48b:	74 6b                	je     0x1007c4f8
1007c48d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c493:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c495:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1007c49b:	d9 56 20             	fst    DWORD PTR [esi+0x20]
1007c49e:	d8 5e 24             	fcomp  DWORD PTR [esi+0x24]
1007c4a1:	df e0                	fnstsw ax
1007c4a3:	f6 c4 01             	test   ah,0x1
1007c4a6:	75 07                	jne    0x1007c4af
1007c4a8:	8b 06                	mov    eax,DWORD PTR [esi]
1007c4aa:	8b ce                	mov    ecx,esi
1007c4ac:	ff 50 6c             	call   DWORD PTR [eax+0x6c]
1007c4af:	d9 46 20             	fld    DWORD PTR [esi+0x20]
1007c4b2:	d8 9e 38 01 00 00    	fcomp  DWORD PTR [esi+0x138]
1007c4b8:	df e0                	fnstsw ax
1007c4ba:	f6 c4 01             	test   ah,0x1
1007c4bd:	75 39                	jne    0x1007c4f8
1007c4bf:	8b 86 94 00 00 00    	mov    eax,DWORD PTR [esi+0x94]
1007c4c5:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c4cb:	50                   	push   eax
1007c4cc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007c4cf:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c4d1:	50                   	push   eax
1007c4d2:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007c4d8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c4de:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007c4e1:	53                   	push   ebx
1007c4e2:	50                   	push   eax
1007c4e3:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c4e5:	ff 92 88 00 00 00    	call   DWORD PTR [edx+0x88]
1007c4eb:	8b 16                	mov    edx,DWORD PTR [esi]
1007c4ed:	8b ce                	mov    ecx,esi
1007c4ef:	88 9e 32 01 00 00    	mov    BYTE PTR [esi+0x132],bl
1007c4f5:	ff 52 6c             	call   DWORD PTR [edx+0x6c]
1007c4f8:	83 be 34 01 00 00 01 	cmp    DWORD PTR [esi+0x134],0x1
1007c4ff:	75 40                	jne    0x1007c541
1007c501:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c507:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c509:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1007c50f:	d8 9e 38 01 00 00    	fcomp  DWORD PTR [esi+0x138]
1007c515:	df e0                	fnstsw ax
1007c517:	f6 c4 01             	test   ah,0x1
1007c51a:	75 25                	jne    0x1007c541
1007c51c:	8b 86 94 00 00 00    	mov    eax,DWORD PTR [esi+0x94]
1007c522:	c7 86 34 01 00 00 02 	mov    DWORD PTR [esi+0x134],0x2
1007c529:	00 00 00 
1007c52c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c532:	50                   	push   eax
1007c533:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007c536:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c538:	50                   	push   eax
1007c539:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007c53f:	eb 31                	jmp    0x1007c572
1007c541:	83 be 34 01 00 00 02 	cmp    DWORD PTR [esi+0x134],0x2
1007c548:	75 28                	jne    0x1007c572
1007c54a:	53                   	push   ebx
1007c54b:	8b ce                	mov    ecx,esi
1007c54d:	e8 0e dd f8 ff       	call   0x1000a260
1007c552:	89 9e 34 01 00 00    	mov    DWORD PTR [esi+0x134],ebx
1007c558:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c55e:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c560:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1007c566:	d9 1d 28 87 12 10    	fstp   DWORD PTR ds:0x10128728
1007c56c:	89 1d 34 87 12 10    	mov    DWORD PTR ds:0x10128734,ebx
1007c572:	8b 8e 94 01 00 00    	mov    ecx,DWORD PTR [esi+0x194]
1007c578:	3b cb                	cmp    ecx,ebx
1007c57a:	74 4f                	je     0x1007c5cb
1007c57c:	d9 46 20             	fld    DWORD PTR [esi+0x20]
1007c57f:	d8 9e 38 01 00 00    	fcomp  DWORD PTR [esi+0x138]
1007c585:	df e0                	fnstsw ax
1007c587:	f6 c4 01             	test   ah,0x1
1007c58a:	75 3f                	jne    0x1007c5cb
1007c58c:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
1007c590:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
1007c594:	df 6c 24 08          	fild   QWORD PTR [esp+0x8]
1007c598:	51                   	push   ecx
1007c599:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007c59f:	d9 1c 24             	fstp   DWORD PTR [esp]
1007c5a2:	e8 79 17 02 00       	call   0x1009dd20
1007c5a7:	8b 86 94 01 00 00    	mov    eax,DWORD PTR [esi+0x194]
1007c5ad:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
1007c5b1:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
1007c5b5:	89 9e 38 01 00 00    	mov    DWORD PTR [esi+0x138],ebx
1007c5bb:	df 6c 24 08          	fild   QWORD PTR [esp+0x8]
1007c5bf:	89 9e 94 01 00 00    	mov    DWORD PTR [esi+0x194],ebx
1007c5c5:	d9 9e 44 01 00 00    	fstp   DWORD PTR [esi+0x144]
1007c5cb:	d9 86 40 01 00 00    	fld    DWORD PTR [esi+0x140]
1007c5d1:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1007c5d7:	df e0                	fnstsw ax
1007c5d9:	f6 c4 40             	test   ah,0x40
1007c5dc:	75 5f                	jne    0x1007c63d
1007c5de:	d9 46 20             	fld    DWORD PTR [esi+0x20]
1007c5e1:	d8 9e 40 01 00 00    	fcomp  DWORD PTR [esi+0x140]
1007c5e7:	df e0                	fnstsw ax
1007c5e9:	f6 c4 01             	test   ah,0x1
1007c5ec:	75 4f                	jne    0x1007c63d
1007c5ee:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007c5f1:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007c5f4:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007c5f7:	8d 14 48             	lea    edx,[eax+ecx*2]
1007c5fa:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007c5ff:	f7 04 90 00 00 00 04 	test   DWORD PTR [eax+edx*4],0x4000000
1007c606:	75 0b                	jne    0x1007c613
1007c608:	38 5e 36             	cmp    BYTE PTR [esi+0x36],bl
1007c60b:	74 06                	je     0x1007c613
1007c60d:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007c610:	40                   	inc    eax
1007c611:	eb 03                	jmp    0x1007c616
1007c613:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007c616:	3b c3                	cmp    eax,ebx
1007c618:	74 11                	je     0x1007c62b
1007c61a:	d9 05 2c 87 12 10    	fld    DWORD PTR ds:0x1012872c
1007c620:	e8 0f 78 02 00       	call   0x100a3e34
1007c625:	89 86 94 01 00 00    	mov    DWORD PTR [esi+0x194],eax
1007c62b:	53                   	push   ebx
1007c62c:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007c632:	e8 e9 16 02 00       	call   0x1009dd20
1007c637:	89 9e 40 01 00 00    	mov    DWORD PTR [esi+0x140],ebx
1007c63d:	5e                   	pop    esi
1007c63e:	5b                   	pop    ebx
1007c63f:	83 c4 0c             	add    esp,0xc
1007c642:	c3                   	ret
1007c643:	90                   	nop
1007c644:	90                   	nop
1007c645:	90                   	nop
1007c646:	90                   	nop
1007c647:	90                   	nop
1007c648:	90                   	nop
1007c649:	90                   	nop
1007c64a:	90                   	nop
1007c64b:	90                   	nop
1007c64c:	90                   	nop
1007c64d:	90                   	nop
1007c64e:	90                   	nop
1007c64f:	90                   	nop
1007c650:	56                   	push   esi
1007c651:	57                   	push   edi
1007c652:	8b f1                	mov    esi,ecx
1007c654:	e8 57 db f8 ff       	call   0x1000a1b0
1007c659:	8b f8                	mov    edi,eax
1007c65b:	85 ff                	test   edi,edi
1007c65d:	74 30                	je     0x1007c68f
1007c65f:	8b 96 d0 00 00 00    	mov    edx,DWORD PTR [esi+0xd0]
1007c665:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c66b:	52                   	push   edx
1007c66c:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007c66f:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c671:	52                   	push   edx
1007c672:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
1007c678:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c67e:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007c681:	52                   	push   edx
1007c682:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c684:	ff 90 90 00 00 00    	call   DWORD PTR [eax+0x90]
1007c68a:	8b c7                	mov    eax,edi
1007c68c:	5f                   	pop    edi
1007c68d:	5e                   	pop    esi
1007c68e:	c3                   	ret
1007c68f:	8a 46 36             	mov    al,BYTE PTR [esi+0x36]
1007c692:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c698:	84 c0                	test   al,al
1007c69a:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c69c:	75 16                	jne    0x1007c6b4
1007c69e:	8b 96 ec 00 00 00    	mov    edx,DWORD PTR [esi+0xec]
1007c6a4:	52                   	push   edx
1007c6a5:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007c6a8:	52                   	push   edx
1007c6a9:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
1007c6af:	8b c7                	mov    eax,edi
1007c6b1:	5f                   	pop    edi
1007c6b2:	5e                   	pop    esi
1007c6b3:	c3                   	ret
1007c6b4:	8b 96 f0 00 00 00    	mov    edx,DWORD PTR [esi+0xf0]
1007c6ba:	52                   	push   edx
1007c6bb:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007c6be:	52                   	push   edx
1007c6bf:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
1007c6c5:	8b c7                	mov    eax,edi
1007c6c7:	5f                   	pop    edi
1007c6c8:	5e                   	pop    esi
1007c6c9:	c3                   	ret
1007c6ca:	90                   	nop
1007c6cb:	90                   	nop
1007c6cc:	90                   	nop
1007c6cd:	90                   	nop
1007c6ce:	90                   	nop
1007c6cf:	90                   	nop
1007c6d0:	56                   	push   esi
1007c6d1:	8b f1                	mov    esi,ecx
1007c6d3:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
1007c6d6:	85 c0                	test   eax,eax
1007c6d8:	74 33                	je     0x1007c70d
1007c6da:	83 f8 01             	cmp    eax,0x1
1007c6dd:	74 2e                	je     0x1007c70d
1007c6df:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007c6e2:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007c6e5:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007c6e8:	8d 14 48             	lea    edx,[eax+ecx*2]
1007c6eb:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007c6f0:	f7 04 90 00 00 00 04 	test   DWORD PTR [eax+edx*4],0x4000000
1007c6f7:	75 0d                	jne    0x1007c706
1007c6f9:	8a 46 36             	mov    al,BYTE PTR [esi+0x36]
1007c6fc:	84 c0                	test   al,al
1007c6fe:	74 06                	je     0x1007c706
1007c700:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007c703:	40                   	inc    eax
1007c704:	eb 03                	jmp    0x1007c709
1007c706:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007c709:	85 c0                	test   eax,eax
1007c70b:	75 0a                	jne    0x1007c717
1007c70d:	8a 86 30 01 00 00    	mov    al,BYTE PTR [esi+0x130]
1007c713:	84 c0                	test   al,al
1007c715:	75 42                	jne    0x1007c759
1007c717:	8b 86 94 01 00 00    	mov    eax,DWORD PTR [esi+0x194]
1007c71d:	85 c0                	test   eax,eax
1007c71f:	75 38                	jne    0x1007c759
1007c721:	8b 16                	mov    edx,DWORD PTR [esi]
1007c723:	6a 00                	push   0x0
1007c725:	8b ce                	mov    ecx,esi
1007c727:	ff 52 5c             	call   DWORD PTR [edx+0x5c]
1007c72a:	8a 86 30 01 00 00    	mov    al,BYTE PTR [esi+0x130]
1007c730:	84 c0                	test   al,al
1007c732:	75 07                	jne    0x1007c73b
1007c734:	c6 86 30 01 00 00 01 	mov    BYTE PTR [esi+0x130],0x1
1007c73b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c741:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c743:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1007c749:	d9 1d 28 87 12 10    	fstp   DWORD PTR ds:0x10128728
1007c74f:	c7 05 34 87 12 10 00 	mov    DWORD PTR ds:0x10128734,0x0
1007c756:	00 00 00 
1007c759:	5e                   	pop    esi
1007c75a:	c3                   	ret
1007c75b:	90                   	nop
1007c75c:	90                   	nop
1007c75d:	90                   	nop
1007c75e:	90                   	nop
1007c75f:	90                   	nop

*/
void GunClient::ClientInitGun() {
    // TODO: Implement ClientInitGun
}

// 0x1007c760: GunClient::PullTrigger
/*
1007c760:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c762:	c6 81 30 01 00 00 00 	mov    BYTE PTR [ecx+0x130],0x0
1007c769:	ff 60 6c             	jmp    DWORD PTR [eax+0x6c]
1007c76c:	90                   	nop
1007c76d:	90                   	nop
1007c76e:	90                   	nop
1007c76f:	90                   	nop
1007c770:	81 ec ac 00 00 00    	sub    esp,0xac
1007c776:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1007c77a:	53                   	push   ebx
1007c77b:	56                   	push   esi
1007c77c:	8b f1                	mov    esi,ecx
1007c77e:	50                   	push   eax
1007c77f:	e8 ec d1 f8 ff       	call   0x10009970
1007c784:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1007c788:	33 db                	xor    ebx,ebx
1007c78a:	3b c3                	cmp    eax,ebx
1007c78c:	0f 85 1d 07 00 00    	jne    0x1007ceaf
1007c792:	55                   	push   ebp
1007c793:	57                   	push   edi
1007c794:	53                   	push   ebx
1007c795:	53                   	push   ebx
1007c796:	53                   	push   ebx
1007c797:	8d 4c 24 54          	lea    ecx,[esp+0x54]
1007c79b:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
1007c79f:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
1007c7a3:	89 5c 24 44          	mov    DWORD PTR [esp+0x44],ebx
1007c7a7:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
1007c7ab:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
1007c7af:	c7 44 24 50 00 00 80 	mov    DWORD PTR [esp+0x50],0x3f800000
1007c7b6:	3f 
1007c7b7:	e8 94 18 f9 ff       	call   0x1000e050
1007c7bc:	8b 7e 14             	mov    edi,DWORD PTR [esi+0x14]
1007c7bf:	89 5c 24 54          	mov    DWORD PTR [esp+0x54],ebx
1007c7c3:	3b fb                	cmp    edi,ebx
1007c7c5:	89 5c 24 58          	mov    DWORD PTR [esp+0x58],ebx
1007c7c9:	c7 44 24 5c 00 00 80 	mov    DWORD PTR [esp+0x5c],0x3f800000
1007c7d0:	3f 
1007c7d1:	c7 44 24 60 00 00 80 	mov    DWORD PTR [esp+0x60],0x3f800000
1007c7d8:	3f 
1007c7d9:	89 5c 24 64          	mov    DWORD PTR [esp+0x64],ebx
1007c7dd:	89 5c 24 68          	mov    DWORD PTR [esp+0x68],ebx
1007c7e1:	89 5c 24 6c          	mov    DWORD PTR [esp+0x6c],ebx
1007c7e5:	89 5c 24 70          	mov    DWORD PTR [esp+0x70],ebx
1007c7e9:	89 5c 24 74          	mov    DWORD PTR [esp+0x74],ebx
1007c7ed:	74 0e                	je     0x1007c7fd
1007c7ef:	8b 17                	mov    edx,DWORD PTR [edi]
1007c7f1:	8b cf                	mov    ecx,edi
1007c7f3:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007c7f9:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
1007c7fd:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007c800:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007c803:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007c806:	8d 14 48             	lea    edx,[eax+ecx*2]
1007c809:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007c80e:	8b 0c 90             	mov    ecx,DWORD PTR [eax+edx*4]
1007c811:	f7 c1 00 00 00 04    	test   ecx,0x4000000
1007c817:	75 0b                	jne    0x1007c824
1007c819:	38 5e 36             	cmp    BYTE PTR [esi+0x36],bl
1007c81c:	74 06                	je     0x1007c824
1007c81e:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007c821:	40                   	inc    eax
1007c822:	eb 03                	jmp    0x1007c827
1007c824:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007c827:	3b c3                	cmp    eax,ebx
1007c829:	74 74                	je     0x1007c89f
1007c82b:	38 9e 32 01 00 00    	cmp    BYTE PTR [esi+0x132],bl
1007c831:	74 47                	je     0x1007c87a
1007c833:	39 5e 48             	cmp    DWORD PTR [esi+0x48],ebx
1007c836:	74 42                	je     0x1007c87a
1007c838:	38 5e 35             	cmp    BYTE PTR [esi+0x35],bl
1007c83b:	0f 85 ef 00 00 00    	jne    0x1007c930
1007c841:	8b 86 b8 00 00 00    	mov    eax,DWORD PTR [esi+0xb8]
1007c847:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c84d:	50                   	push   eax
1007c84e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007c851:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c853:	50                   	push   eax
1007c854:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007c85a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c860:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007c863:	6a 01                	push   0x1
1007c865:	50                   	push   eax
1007c866:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c868:	ff 92 88 00 00 00    	call   DWORD PTR [edx+0x88]
1007c86e:	8b 16                	mov    edx,DWORD PTR [esi]
1007c870:	8b ce                	mov    ecx,esi
1007c872:	ff 52 68             	call   DWORD PTR [edx+0x68]
1007c875:	e9 b6 00 00 00       	jmp    0x1007c930
1007c87a:	8b 96 b0 00 00 00    	mov    edx,DWORD PTR [esi+0xb0]
1007c880:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c886:	52                   	push   edx
1007c887:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007c88a:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c88c:	52                   	push   edx
1007c88d:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
1007c893:	c6 86 32 01 00 00 01 	mov    BYTE PTR [esi+0x132],0x1
1007c89a:	e9 91 00 00 00       	jmp    0x1007c930
1007c89f:	f7 c1 00 00 20 00    	test   ecx,0x200000
1007c8a5:	74 28                	je     0x1007c8cf
1007c8a7:	f7 c1 00 00 00 01    	test   ecx,0x1000000
1007c8ad:	75 20                	jne    0x1007c8cf
1007c8af:	38 5e 35             	cmp    BYTE PTR [esi+0x35],bl
1007c8b2:	75 3a                	jne    0x1007c8ee
1007c8b4:	8b 96 b0 00 00 00    	mov    edx,DWORD PTR [esi+0xb0]
1007c8ba:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c8c0:	52                   	push   edx
1007c8c1:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007c8c4:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c8c6:	52                   	push   edx
1007c8c7:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
1007c8cd:	eb 1f                	jmp    0x1007c8ee
1007c8cf:	8b 96 b4 00 00 00    	mov    edx,DWORD PTR [esi+0xb4]
1007c8d5:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c8db:	52                   	push   edx
1007c8dc:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007c8df:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c8e1:	52                   	push   edx
1007c8e2:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
1007c8e8:	88 9e 32 01 00 00    	mov    BYTE PTR [esi+0x132],bl
1007c8ee:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c8f4:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007c8f7:	53                   	push   ebx
1007c8f8:	52                   	push   edx
1007c8f9:	8b 01                	mov    eax,DWORD PTR [ecx]
1007c8fb:	ff 90 88 00 00 00    	call   DWORD PTR [eax+0x88]
1007c901:	6a 01                	push   0x1
1007c903:	8b ce                	mov    ecx,esi
1007c905:	e8 26 18 00 00       	call   0x1007e130
1007c90a:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007c90d:	88 9e fc 00 00 00    	mov    BYTE PTR [esi+0xfc],bl
1007c913:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007c916:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007c919:	8d 14 48             	lea    edx,[eax+ecx*2]
1007c91c:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007c921:	39 9c 90 bc 00 00 00 	cmp    DWORD PTR [eax+edx*4+0xbc],ebx
1007c928:	75 06                	jne    0x1007c930
1007c92a:	88 9e 32 01 00 00    	mov    BYTE PTR [esi+0x132],bl
1007c930:	8b 17                	mov    edx,DWORD PTR [edi]
1007c932:	8d 44 24 14          	lea    eax,[esp+0x14]
1007c936:	50                   	push   eax
1007c937:	8b cf                	mov    ecx,edi
1007c939:	ff 52 50             	call   DWORD PTR [edx+0x50]
1007c93c:	8b 17                	mov    edx,DWORD PTR [edi]
1007c93e:	8d 44 24 20          	lea    eax,[esp+0x20]
1007c942:	50                   	push   eax
1007c943:	8b cf                	mov    ecx,edi
1007c945:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
1007c948:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
1007c94b:	bd 01 00 00 00       	mov    ebp,0x1
1007c950:	3b c5                	cmp    eax,ebp
1007c952:	75 66                	jne    0x1007c9ba
1007c954:	38 5e 34             	cmp    BYTE PTR [esi+0x34],bl
1007c957:	0f 84 c7 00 00 00    	je     0x1007ca24
1007c95d:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1007c963:	8d 44 24 10          	lea    eax,[esp+0x10]
1007c967:	50                   	push   eax
1007c968:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c96a:	ff 52 40             	call   DWORD PTR [edx+0x40]
1007c96d:	85 c0                	test   eax,eax
1007c96f:	75 3b                	jne    0x1007c9ac
1007c971:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1007c975:	8d 44 24 20          	lea    eax,[esp+0x20]
1007c979:	50                   	push   eax
1007c97a:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c97c:	ff 52 5c             	call   DWORD PTR [edx+0x5c]
1007c97f:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1007c983:	8d 44 24 14          	lea    eax,[esp+0x14]
1007c987:	50                   	push   eax
1007c988:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c98a:	ff 52 58             	call   DWORD PTR [edx+0x58]
1007c98d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c993:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1007c997:	55                   	push   ebp
1007c998:	53                   	push   ebx
1007c999:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c99b:	50                   	push   eax
1007c99c:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
1007c9a2:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1007c9a6:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c9a8:	ff 12                	call   DWORD PTR [edx]
1007c9aa:	eb 78                	jmp    0x1007ca24
1007c9ac:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1007c9b1:	68 bc db 0d 10       	push   0x100ddbbc
1007c9b6:	8b 08                	mov    ecx,DWORD PTR [eax]
1007c9b8:	eb 60                	jmp    0x1007ca1a
1007c9ba:	38 5e 35             	cmp    BYTE PTR [esi+0x35],bl
1007c9bd:	75 65                	jne    0x1007ca24
1007c9bf:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1007c9c5:	8d 44 24 10          	lea    eax,[esp+0x10]
1007c9c9:	50                   	push   eax
1007c9ca:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c9cc:	ff 52 40             	call   DWORD PTR [edx+0x40]
1007c9cf:	85 c0                	test   eax,eax
1007c9d1:	75 3b                	jne    0x1007ca0e
1007c9d3:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1007c9d7:	8d 44 24 20          	lea    eax,[esp+0x20]
1007c9db:	50                   	push   eax
1007c9dc:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c9de:	ff 52 5c             	call   DWORD PTR [edx+0x5c]
1007c9e1:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1007c9e5:	8d 44 24 14          	lea    eax,[esp+0x14]
1007c9e9:	50                   	push   eax
1007c9ea:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c9ec:	ff 52 58             	call   DWORD PTR [edx+0x58]
1007c9ef:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007c9f5:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1007c9f9:	55                   	push   ebp
1007c9fa:	53                   	push   ebx
1007c9fb:	8b 11                	mov    edx,DWORD PTR [ecx]
1007c9fd:	50                   	push   eax
1007c9fe:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
1007ca04:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1007ca08:	8b 11                	mov    edx,DWORD PTR [ecx]
1007ca0a:	ff 12                	call   DWORD PTR [edx]
1007ca0c:	eb 16                	jmp    0x1007ca24
1007ca0e:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1007ca13:	68 74 db 0d 10       	push   0x100ddb74
1007ca18:	8b 08                	mov    ecx,DWORD PTR [eax]
1007ca1a:	50                   	push   eax
1007ca1b:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
1007ca21:	83 c4 08             	add    esp,0x8
1007ca24:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007ca27:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007ca2a:	8d 14 c9             	lea    edx,[ecx+ecx*8]
1007ca2d:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007ca33:	8d 04 50             	lea    eax,[eax+edx*2]
1007ca36:	8b 44 81 04          	mov    eax,DWORD PTR [ecx+eax*4+0x4]
1007ca3a:	83 f8 03             	cmp    eax,0x3
1007ca3d:	0f 85 81 00 00 00    	jne    0x1007cac4
1007ca43:	8b 54 24 60          	mov    edx,DWORD PTR [esp+0x60]
1007ca47:	55                   	push   ebp
1007ca48:	53                   	push   ebx
1007ca49:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1007ca4d:	52                   	push   edx
1007ca4e:	50                   	push   eax
1007ca4f:	8b ce                	mov    ecx,esi
1007ca51:	e8 3a e3 f8 ff       	call   0x1000ad90
1007ca56:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007ca59:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007ca5c:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007ca5f:	8d 14 48             	lea    edx,[eax+ecx*2]
1007ca62:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007ca67:	8b 84 90 2c 01 00 00 	mov    eax,DWORD PTR [eax+edx*4+0x12c]
1007ca6e:	3b c3                	cmp    eax,ebx
1007ca70:	76 49                	jbe    0x1007cabb
1007ca72:	8b f8                	mov    edi,eax
1007ca74:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1007ca78:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1007ca7c:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1007ca80:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
1007ca84:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1007ca88:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
1007ca8c:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1007ca90:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
1007ca94:	8d 4c 24 30          	lea    ecx,[esp+0x30]
1007ca98:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
1007ca9c:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1007caa0:	51                   	push   ecx
1007caa1:	8b ce                	mov    ecx,esi
1007caa3:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
1007caa7:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
1007caab:	89 6c 24 6c          	mov    DWORD PTR [esp+0x6c],ebp
1007caaf:	89 5c 24 68          	mov    DWORD PTR [esp+0x68],ebx
1007cab3:	e8 e8 06 00 00       	call   0x1007d1a0
1007cab8:	4f                   	dec    edi
1007cab9:	75 b9                	jne    0x1007ca74
1007cabb:	8b ce                	mov    ecx,esi
1007cabd:	e8 9e e1 f8 ff       	call   0x1000ac60
1007cac2:	eb 4e                	jmp    0x1007cb12
1007cac4:	83 f8 06             	cmp    eax,0x6
1007cac7:	75 09                	jne    0x1007cad2
1007cac9:	8b ce                	mov    ecx,esi
1007cacb:	e8 90 e1 f8 ff       	call   0x1000ac60
1007cad0:	eb 40                	jmp    0x1007cb12
1007cad2:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1007cad6:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1007cada:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1007cade:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
1007cae2:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1007cae6:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
1007caea:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1007caee:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
1007caf2:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1007caf6:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1007cafa:	8d 54 24 30          	lea    edx,[esp+0x30]
1007cafe:	89 4c 24 44          	mov    DWORD PTR [esp+0x44],ecx
1007cb02:	52                   	push   edx
1007cb03:	8b ce                	mov    ecx,esi
1007cb05:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
1007cb09:	89 6c 24 6c          	mov    DWORD PTR [esp+0x6c],ebp
1007cb0d:	e8 8e 06 00 00       	call   0x1007d1a0
1007cb12:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007cb15:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007cb18:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007cb1b:	8d 14 48             	lea    edx,[eax+ecx*2]
1007cb1e:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007cb23:	8b 8c 90 bc 00 00 00 	mov    ecx,DWORD PTR [eax+edx*4+0xbc]
1007cb2a:	8d 04 90             	lea    eax,[eax+edx*4]
1007cb2d:	3b cb                	cmp    ecx,ebx
1007cb2f:	75 0c                	jne    0x1007cb3d
1007cb31:	8b 88 08 01 00 00    	mov    ecx,DWORD PTR [eax+0x108]
1007cb37:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1007cb3b:	eb 0a                	jmp    0x1007cb47
1007cb3d:	8b 90 04 01 00 00    	mov    edx,DWORD PTR [eax+0x104]
1007cb43:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1007cb47:	68 00 00 d0 40       	push   0x40d00000
1007cb4c:	8b ce                	mov    ecx,esi
1007cb4e:	e8 4d e0 f8 ff       	call   0x1000aba0
1007cb53:	d9 c0                	fld    st(0)
1007cb55:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
1007cb5b:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1007cb61:	53                   	push   ebx
1007cb62:	53                   	push   ebx
1007cb63:	51                   	push   ecx
1007cb64:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
1007cb6a:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1007cb6e:	8d 84 24 bc 00 00 00 	lea    eax,[esp+0xbc]
1007cb75:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x0
1007cb7c:	00 00 00 00 
1007cb80:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x0
1007cb87:	00 00 00 00 
1007cb8b:	d9 e0                	fchs
1007cb8d:	d9 9c 24 bc 00 00 00 	fstp   DWORD PTR [esp+0xbc]
1007cb94:	d8 0d d8 cb 0b 10    	fmul   DWORD PTR ds:0x100bcbd8
1007cb9a:	d9 1c 24             	fstp   DWORD PTR [esp]
1007cb9d:	50                   	push   eax
1007cb9e:	51                   	push   ecx
1007cb9f:	8d 8a e0 82 01 00    	lea    ecx,[edx+0x182e0]
1007cba5:	e8 96 1e f9 ff       	call   0x1000ea40
1007cbaa:	8a 86 31 01 00 00    	mov    al,BYTE PTR [esi+0x131]
1007cbb0:	8b 15 6c cf 10 10    	mov    edx,DWORD PTR ds:0x1010cf6c
1007cbb6:	3a c3                	cmp    al,bl
1007cbb8:	74 36                	je     0x1007cbf0
1007cbba:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007cbbd:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007cbc0:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007cbc3:	8d 0c 48             	lea    ecx,[eax+ecx*2]
1007cbc6:	c1 e1 02             	shl    ecx,0x2
1007cbc9:	f7 04 11 00 00 10 00 	test   DWORD PTR [ecx+edx*1],0x100000
1007cbd0:	74 1e                	je     0x1007cbf0
1007cbd2:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1007cbd6:	dc c0                	fadd   st(0),st
1007cbd8:	d8 46 20             	fadd   DWORD PTR [esi+0x20]
1007cbdb:	d9 9e 40 01 00 00    	fstp   DWORD PTR [esi+0x140]
1007cbe1:	8b 15 6c cf 10 10    	mov    edx,DWORD PTR ds:0x1010cf6c
1007cbe7:	d9 84 11 04 01 00 00 	fld    DWORD PTR [ecx+edx*1+0x104]
1007cbee:	eb 29                	jmp    0x1007cc19
1007cbf0:	8a 46 35             	mov    al,BYTE PTR [esi+0x35]
1007cbf3:	3a c3                	cmp    al,bl
1007cbf5:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007cbf8:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007cbfb:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007cbfe:	8d 0c 48             	lea    ecx,[eax+ecx*2]
1007cc01:	74 09                	je     0x1007cc0c
1007cc03:	d9 84 8a 08 01 00 00 	fld    DWORD PTR [edx+ecx*4+0x108]
1007cc0a:	eb 07                	jmp    0x1007cc13
1007cc0c:	d9 84 8a 04 01 00 00 	fld    DWORD PTR [edx+ecx*4+0x104]
1007cc13:	d8 0d d4 cb 0b 10    	fmul   DWORD PTR ds:0x100bcbd4
1007cc19:	d8 46 20             	fadd   DWORD PTR [esi+0x20]
1007cc1c:	8a 8e 33 01 00 00    	mov    cl,BYTE PTR [esi+0x133]
1007cc22:	55                   	push   ebp
1007cc23:	3a cb                	cmp    cl,bl
1007cc25:	53                   	push   ebx
1007cc26:	d9 9e 38 01 00 00    	fstp   DWORD PTR [esi+0x138]
1007cc2c:	74 0f                	je     0x1007cc3d
1007cc2e:	6a 0a                	push   0xa
1007cc30:	50                   	push   eax
1007cc31:	e8 da 05 fc ff       	call   0x1003d210
1007cc36:	83 c4 10             	add    esp,0x10
1007cc39:	8b c5                	mov    eax,ebp
1007cc3b:	eb 27                	jmp    0x1007cc64
1007cc3d:	6a ff                	push   0xffffffff
1007cc3f:	50                   	push   eax
1007cc40:	e8 cb 05 fc ff       	call   0x1003d210
1007cc45:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007cc48:	83 c4 10             	add    esp,0x10
1007cc4b:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007cc4e:	8d 14 c9             	lea    edx,[ecx+ecx*8]
1007cc51:	8d 0c 50             	lea    ecx,[eax+edx*2]
1007cc54:	8b 15 6c cf 10 10    	mov    edx,DWORD PTR ds:0x1010cf6c
1007cc5a:	33 c0                	xor    eax,eax
1007cc5c:	66 8b 84 8a 40 01 00 	mov    ax,WORD PTR [edx+ecx*4+0x140]
1007cc63:	00 
1007cc64:	38 9e 31 01 00 00    	cmp    BYTE PTR [esi+0x131],bl
1007cc6a:	0f 85 0a 02 00 00    	jne    0x1007ce7a
1007cc70:	8b 8e e4 01 00 00    	mov    ecx,DWORD PTR [esi+0x1e4]
1007cc76:	89 44 24 7c          	mov    DWORD PTR [esp+0x7c],eax
1007cc7a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007cc7d:	8d 54 24 78          	lea    edx,[esp+0x78]
1007cc81:	89 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],eax
1007cc88:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1007cc8d:	89 8c 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],ecx
1007cc94:	52                   	push   edx
1007cc95:	8d 48 30             	lea    ecx,[eax+0x30]
1007cc98:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0x3f800000
1007cc9f:	00 00 80 3f 
1007cca3:	c7 84 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],0xffffffff
1007ccaa:	ff ff ff ff 
1007ccae:	c7 84 24 ac 00 00 00 	mov    DWORD PTR [esp+0xac],0x2
1007ccb5:	02 00 00 00 
1007ccb9:	89 9c 24 b0 00 00 00 	mov    DWORD PTR [esp+0xb0],ebx
1007ccc0:	c7 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],0x0
1007ccc7:	00 00 00 00 
1007cccb:	c7 84 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],0x0
1007ccd2:	00 00 00 00 
1007ccd6:	c7 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],0x0
1007ccdd:	00 00 00 00 
1007cce1:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0x0
1007cce8:	00 00 00 00 
1007ccec:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x0
1007ccf3:	00 00 00 00 
1007ccf7:	c7 84 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],0x0
1007ccfe:	00 00 00 00 
1007cd02:	c7 44 24 7c 0b 00 00 	mov    DWORD PTR [esp+0x7c],0xb
1007cd09:	00 
1007cd0a:	e8 21 a6 fa ff       	call   0x10027330
1007cd0f:	38 9e 33 01 00 00    	cmp    BYTE PTR [esi+0x133],bl
1007cd15:	0f 85 5f 01 00 00    	jne    0x1007ce7a
1007cd1b:	8b 7e 14             	mov    edi,DWORD PTR [esi+0x14]
1007cd1e:	bd 07 00 00 00       	mov    ebp,0x7
1007cd23:	8b 4f 74             	mov    ecx,DWORD PTR [edi+0x74]
1007cd26:	3b cb                	cmp    ecx,ebx
1007cd28:	74 34                	je     0x1007cd5e
1007cd2a:	8b 11                	mov    edx,DWORD PTR [ecx]
1007cd2c:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
1007cd2f:	84 c0                	test   al,al
1007cd31:	74 2b                	je     0x1007cd5e
1007cd33:	8b 47 74             	mov    eax,DWORD PTR [edi+0x74]
1007cd36:	3b c3                	cmp    eax,ebx
1007cd38:	74 24                	je     0x1007cd5e
1007cd3a:	39 68 4c             	cmp    DWORD PTR [eax+0x4c],ebp
1007cd3d:	75 1f                	jne    0x1007cd5e
1007cd3f:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
1007cd42:	81 f9 ff 00 00 00    	cmp    ecx,0xff
1007cd48:	74 14                	je     0x1007cd5e
1007cd4a:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
1007cd4d:	3b c3                	cmp    eax,ebx
1007cd4f:	74 08                	je     0x1007cd59
1007cd51:	83 f8 01             	cmp    eax,0x1
1007cd54:	75 08                	jne    0x1007cd5e
1007cd56:	83 c1 40             	add    ecx,0x40
1007cd59:	83 f9 46             	cmp    ecx,0x46
1007cd5c:	74 76                	je     0x1007cdd4
1007cd5e:	8b 4f 78             	mov    ecx,DWORD PTR [edi+0x78]
1007cd61:	3b cb                	cmp    ecx,ebx
1007cd63:	74 34                	je     0x1007cd99
1007cd65:	8b 01                	mov    eax,DWORD PTR [ecx]
1007cd67:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
1007cd6a:	84 c0                	test   al,al
1007cd6c:	74 2b                	je     0x1007cd99
1007cd6e:	8b 47 78             	mov    eax,DWORD PTR [edi+0x78]
1007cd71:	3b c3                	cmp    eax,ebx
1007cd73:	74 24                	je     0x1007cd99
1007cd75:	39 68 4c             	cmp    DWORD PTR [eax+0x4c],ebp
1007cd78:	75 1f                	jne    0x1007cd99
1007cd7a:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
1007cd7d:	81 f9 ff 00 00 00    	cmp    ecx,0xff
1007cd83:	74 14                	je     0x1007cd99
1007cd85:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
1007cd88:	3b c3                	cmp    eax,ebx
1007cd8a:	74 08                	je     0x1007cd94
1007cd8c:	83 f8 01             	cmp    eax,0x1
1007cd8f:	75 08                	jne    0x1007cd99
1007cd91:	83 c1 40             	add    ecx,0x40
1007cd94:	83 f9 46             	cmp    ecx,0x46
1007cd97:	74 3b                	je     0x1007cdd4
1007cd99:	8b 4f 7c             	mov    ecx,DWORD PTR [edi+0x7c]
1007cd9c:	3b cb                	cmp    ecx,ebx
1007cd9e:	74 52                	je     0x1007cdf2
1007cda0:	8b 11                	mov    edx,DWORD PTR [ecx]
1007cda2:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
1007cda5:	84 c0                	test   al,al
1007cda7:	74 49                	je     0x1007cdf2
1007cda9:	8b 47 7c             	mov    eax,DWORD PTR [edi+0x7c]
1007cdac:	3b c3                	cmp    eax,ebx
1007cdae:	74 42                	je     0x1007cdf2
1007cdb0:	39 68 4c             	cmp    DWORD PTR [eax+0x4c],ebp
1007cdb3:	75 3d                	jne    0x1007cdf2
1007cdb5:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
1007cdb8:	81 f9 ff 00 00 00    	cmp    ecx,0xff
1007cdbe:	74 32                	je     0x1007cdf2
1007cdc0:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
1007cdc3:	3b c3                	cmp    eax,ebx
1007cdc5:	74 08                	je     0x1007cdcf
1007cdc7:	83 f8 01             	cmp    eax,0x1
1007cdca:	75 26                	jne    0x1007cdf2
1007cdcc:	83 c1 40             	add    ecx,0x40
1007cdcf:	83 f9 46             	cmp    ecx,0x46
1007cdd2:	75 1e                	jne    0x1007cdf2
1007cdd4:	53                   	push   ebx
1007cdd5:	68 cd cc 4c 3d       	push   0x3d4ccccd
1007cdda:	53                   	push   ebx
1007cddb:	68 be 00 00 00       	push   0xbe
1007cde0:	68 08 ff 08 ff       	push   0xff08ff08
1007cde5:	e8 56 36 fe ff       	call   0x10060440
1007cdea:	83 c4 14             	add    esp,0x14
1007cded:	e9 88 00 00 00       	jmp    0x1007ce7a
1007cdf2:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1007cdf7:	39 98 18 82 01 00    	cmp    DWORD PTR [eax+0x18218],ebx
1007cdfd:	74 7b                	je     0x1007ce7a
1007cdff:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1007ce03:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1007ce07:	89 8c 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],ecx
1007ce0e:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1007ce12:	89 8c 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],ecx
1007ce19:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1007ce1d:	89 94 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],edx
1007ce24:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1007ce28:	89 8c 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],ecx
1007ce2f:	8d 4c 24 78          	lea    ecx,[esp+0x78]
1007ce33:	89 94 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],edx
1007ce3a:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1007ce3e:	51                   	push   ecx
1007ce3f:	8d 48 30             	lea    ecx,[eax+0x30]
1007ce42:	c7 84 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],0xffffffff
1007ce49:	ff ff ff ff 
1007ce4d:	89 9c 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],ebx
1007ce54:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x1d
1007ce5b:	1d 00 00 00 
1007ce5f:	c7 44 24 7c 02 00 00 	mov    DWORD PTR [esp+0x7c],0x2
1007ce66:	00 
1007ce67:	89 9c 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],ebx
1007ce6e:	89 94 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],edx
1007ce75:	e8 b6 a4 fa ff       	call   0x10027330
1007ce7a:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007ce7d:	5f                   	pop    edi
1007ce7e:	5d                   	pop    ebp
1007ce7f:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007ce82:	8d 14 c9             	lea    edx,[ecx+ecx*8]
1007ce85:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007ce8b:	8d 04 50             	lea    eax,[eax+edx*2]
1007ce8e:	f7 04 81 00 00 00 01 	test   DWORD PTR [ecx+eax*4],0x1000000
1007ce95:	0f 85 ea 00 00 00    	jne    0x1007cf85
1007ce9b:	6a 01                	push   0x1
1007ce9d:	8b ce                	mov    ecx,esi
1007ce9f:	e8 2c 13 00 00       	call   0x1007e1d0
1007cea4:	5e                   	pop    esi
1007cea5:	5b                   	pop    ebx
1007cea6:	81 c4 ac 00 00 00    	add    esp,0xac
1007ceac:	c2 04 00             	ret    0x4
1007ceaf:	83 f8 01             	cmp    eax,0x1
1007ceb2:	0f 85 88 00 00 00    	jne    0x1007cf40
1007ceb8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007cebe:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007cec1:	53                   	push   ebx
1007cec2:	50                   	push   eax
1007cec3:	8b 11                	mov    edx,DWORD PTR [ecx]
1007cec5:	ff 92 88 00 00 00    	call   DWORD PTR [edx+0x88]
1007cecb:	8b 86 e0 00 00 00    	mov    eax,DWORD PTR [esi+0xe0]
1007ced1:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007ced7:	50                   	push   eax
1007ced8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007cedb:	8b 11                	mov    edx,DWORD PTR [ecx]
1007cedd:	50                   	push   eax
1007cede:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007cee4:	8b 16                	mov    edx,DWORD PTR [esi]
1007cee6:	8b ce                	mov    ecx,esi
1007cee8:	88 9e 32 01 00 00    	mov    BYTE PTR [esi+0x132],bl
1007ceee:	ff 52 6c             	call   DWORD PTR [edx+0x6c]
1007cef1:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007cef4:	6a 01                	push   0x1
1007cef6:	53                   	push   ebx
1007cef7:	6a 07                	push   0x7
1007cef9:	50                   	push   eax
1007cefa:	e8 11 03 fc ff       	call   0x1003d210
1007ceff:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1007cf05:	83 c4 10             	add    esp,0x10
1007cf08:	8d 44 24 08          	lea    eax,[esp+0x8]
1007cf0c:	8b 11                	mov    edx,DWORD PTR [ecx]
1007cf0e:	50                   	push   eax
1007cf0f:	ff 52 40             	call   DWORD PTR [edx+0x40]
1007cf12:	85 c0                	test   eax,eax
1007cf14:	75 6f                	jne    0x1007cf85
1007cf16:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007cf1c:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1007cf20:	6a 01                	push   0x1
1007cf22:	6a 02                	push   0x2
1007cf24:	8b 11                	mov    edx,DWORD PTR [ecx]
1007cf26:	50                   	push   eax
1007cf27:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
1007cf2d:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1007cf31:	8b 11                	mov    edx,DWORD PTR [ecx]
1007cf33:	ff 12                	call   DWORD PTR [edx]
1007cf35:	5e                   	pop    esi
1007cf36:	5b                   	pop    ebx
1007cf37:	81 c4 ac 00 00 00    	add    esp,0xac
1007cf3d:	c2 04 00             	ret    0x4
1007cf40:	83 f8 02             	cmp    eax,0x2
1007cf43:	75 40                	jne    0x1007cf85
1007cf45:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1007cf4b:	8d 54 24 08          	lea    edx,[esp+0x8]
1007cf4f:	52                   	push   edx
1007cf50:	8b 01                	mov    eax,DWORD PTR [ecx]
1007cf52:	ff 50 40             	call   DWORD PTR [eax+0x40]
1007cf55:	85 c0                	test   eax,eax
1007cf57:	75 2c                	jne    0x1007cf85
1007cf59:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1007cf5d:	8b 56 4c             	mov    edx,DWORD PTR [esi+0x4c]
1007cf60:	52                   	push   edx
1007cf61:	8b 01                	mov    eax,DWORD PTR [ecx]
1007cf63:	ff 50 40             	call   DWORD PTR [eax+0x40]
1007cf66:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007cf6c:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1007cf70:	6a 01                	push   0x1
1007cf72:	6a 2b                	push   0x2b
1007cf74:	8b 01                	mov    eax,DWORD PTR [ecx]
1007cf76:	52                   	push   edx
1007cf77:	ff 90 9c 01 00 00    	call   DWORD PTR [eax+0x19c]
1007cf7d:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1007cf81:	8b 01                	mov    eax,DWORD PTR [ecx]
1007cf83:	ff 10                	call   DWORD PTR [eax]
1007cf85:	5e                   	pop    esi
1007cf86:	5b                   	pop    ebx
1007cf87:	81 c4 ac 00 00 00    	add    esp,0xac
1007cf8d:	c2 04 00             	ret    0x4
1007cf90:	83 ec 0c             	sub    esp,0xc
1007cf93:	53                   	push   ebx
1007cf94:	56                   	push   esi
1007cf95:	8d 44 24 10          	lea    eax,[esp+0x10]
1007cf99:	57                   	push   edi
1007cf9a:	8b f1                	mov    esi,ecx
1007cf9c:	50                   	push   eax
1007cf9d:	e8 7e cc f8 ff       	call   0x10009c20
1007cfa2:	8b f8                	mov    edi,eax
1007cfa4:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1007cfa8:	33 db                	xor    ebx,ebx
1007cfaa:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1007cfae:	3b c3                	cmp    eax,ebx
1007cfb0:	0f 84 d7 01 00 00    	je     0x1007d18d
1007cfb6:	83 f8 05             	cmp    eax,0x5
1007cfb9:	0f 85 8a 00 00 00    	jne    0x1007d049
1007cfbf:	38 9e 31 01 00 00    	cmp    BYTE PTR [esi+0x131],bl
1007cfc5:	75 5b                	jne    0x1007d022
1007cfc7:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
1007cfcb:	8b 86 e4 00 00 00    	mov    eax,DWORD PTR [esi+0xe4]
1007cfd1:	c6 86 31 01 00 00 01 	mov    BYTE PTR [esi+0x131],0x1
1007cfd8:	88 9e fc 00 00 00    	mov    BYTE PTR [esi+0xfc],bl
1007cfde:	89 9e 48 01 00 00    	mov    DWORD PTR [esi+0x148],ebx
1007cfe4:	d9 9e 44 01 00 00    	fstp   DWORD PTR [esi+0x144]
1007cfea:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007cff0:	50                   	push   eax
1007cff1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007cff4:	8b 11                	mov    edx,DWORD PTR [ecx]
1007cff6:	50                   	push   eax
1007cff7:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007cffd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d003:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d005:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1007d00b:	d8 05 fc 84 0b 10    	fadd   DWORD PTR ds:0x100b84fc
1007d011:	89 be 94 01 00 00    	mov    DWORD PTR [esi+0x194],edi
1007d017:	d9 9e 38 01 00 00    	fstp   DWORD PTR [esi+0x138]
1007d01d:	e9 10 01 00 00       	jmp    0x1007d132
1007d022:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
1007d026:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007d02c:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1007d030:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1007d034:	50                   	push   eax
1007d035:	e8 e6 0c 02 00       	call   0x1009dd20
1007d03a:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1007d03e:	89 8e 44 01 00 00    	mov    DWORD PTR [esi+0x144],ecx
1007d044:	e9 e9 00 00 00       	jmp    0x1007d132
1007d049:	83 f8 06             	cmp    eax,0x6
1007d04c:	75 43                	jne    0x1007d091
1007d04e:	53                   	push   ebx
1007d04f:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007d055:	e8 c6 0c 02 00       	call   0x1009dd20
1007d05a:	8b 86 e8 00 00 00    	mov    eax,DWORD PTR [esi+0xe8]
1007d060:	88 9e 31 01 00 00    	mov    BYTE PTR [esi+0x131],bl
1007d066:	c6 86 fc 00 00 00 01 	mov    BYTE PTR [esi+0xfc],0x1
1007d06d:	89 9e 94 01 00 00    	mov    DWORD PTR [esi+0x194],ebx
1007d073:	89 9e 44 01 00 00    	mov    DWORD PTR [esi+0x144],ebx
1007d079:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d07f:	50                   	push   eax
1007d080:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007d083:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d085:	50                   	push   eax
1007d086:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007d08c:	e9 a1 00 00 00       	jmp    0x1007d132
1007d091:	83 f8 03             	cmp    eax,0x3
1007d094:	75 27                	jne    0x1007d0bd
1007d096:	53                   	push   ebx
1007d097:	6a 2d                	push   0x2d
1007d099:	e8 a2 03 fc ff       	call   0x1003d440
1007d09e:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1007d0a4:	83 c4 08             	add    esp,0x8
1007d0a7:	83 c1 30             	add    ecx,0x30
1007d0aa:	53                   	push   ebx
1007d0ab:	53                   	push   ebx
1007d0ac:	6a 01                	push   0x1
1007d0ae:	6a 01                	push   0x1
1007d0b0:	e8 5b 0e fb ff       	call   0x1002df10
1007d0b5:	88 9e fc 00 00 00    	mov    BYTE PTR [esi+0xfc],bl
1007d0bb:	eb 75                	jmp    0x1007d132
1007d0bd:	83 f8 04             	cmp    eax,0x4
1007d0c0:	75 1b                	jne    0x1007d0dd
1007d0c2:	53                   	push   ebx
1007d0c3:	6a 2e                	push   0x2e
1007d0c5:	e8 76 03 fc ff       	call   0x1003d440
1007d0ca:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1007d0d0:	83 c4 08             	add    esp,0x8
1007d0d3:	53                   	push   ebx
1007d0d4:	53                   	push   ebx
1007d0d5:	53                   	push   ebx
1007d0d6:	6a 01                	push   0x1
1007d0d8:	8d 4a 30             	lea    ecx,[edx+0x30]
1007d0db:	eb 49                	jmp    0x1007d126
1007d0dd:	83 f8 01             	cmp    eax,0x1
1007d0e0:	75 26                	jne    0x1007d108
1007d0e2:	53                   	push   ebx
1007d0e3:	6a 2d                	push   0x2d
1007d0e5:	e8 56 03 fc ff       	call   0x1003d440
1007d0ea:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1007d0ef:	83 c4 08             	add    esp,0x8
1007d0f2:	53                   	push   ebx
1007d0f3:	53                   	push   ebx
1007d0f4:	6a 01                	push   0x1
1007d0f6:	6a 02                	push   0x2
1007d0f8:	8d 48 30             	lea    ecx,[eax+0x30]
1007d0fb:	e8 10 0e fb ff       	call   0x1002df10
1007d100:	88 9e fc 00 00 00    	mov    BYTE PTR [esi+0xfc],bl
1007d106:	eb 2a                	jmp    0x1007d132
1007d108:	83 f8 02             	cmp    eax,0x2
1007d10b:	75 25                	jne    0x1007d132
1007d10d:	53                   	push   ebx
1007d10e:	6a 2e                	push   0x2e
1007d110:	e8 2b 03 fc ff       	call   0x1003d440
1007d115:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1007d11b:	83 c4 08             	add    esp,0x8
1007d11e:	83 c1 30             	add    ecx,0x30
1007d121:	53                   	push   ebx
1007d122:	53                   	push   ebx
1007d123:	53                   	push   ebx
1007d124:	6a 02                	push   0x2
1007d126:	e8 e5 0d fb ff       	call   0x1002df10
1007d12b:	c6 86 fc 00 00 00 01 	mov    BYTE PTR [esi+0xfc],0x1
1007d132:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1007d138:	8d 44 24 0c          	lea    eax,[esp+0xc]
1007d13c:	50                   	push   eax
1007d13d:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d13f:	ff 52 40             	call   DWORD PTR [edx+0x40]
1007d142:	85 c0                	test   eax,eax
1007d144:	75 2d                	jne    0x1007d173
1007d146:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1007d14a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1007d14e:	50                   	push   eax
1007d14f:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d151:	ff 52 40             	call   DWORD PTR [edx+0x40]
1007d154:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d15a:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1007d15e:	6a 01                	push   0x1
1007d160:	6a 14                	push   0x14
1007d162:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d164:	50                   	push   eax
1007d165:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
1007d16b:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1007d16f:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d171:	ff 12                	call   DWORD PTR [edx]
1007d173:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d179:	8b 01                	mov    eax,DWORD PTR [ecx]
1007d17b:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1007d181:	d9 1d 28 87 12 10    	fstp   DWORD PTR ds:0x10128728
1007d187:	89 1d 34 87 12 10    	mov    DWORD PTR ds:0x10128734,ebx
1007d18d:	5f                   	pop    edi
1007d18e:	5e                   	pop    esi
1007d18f:	5b                   	pop    ebx
1007d190:	83 c4 0c             	add    esp,0xc
1007d193:	c3                   	ret
1007d194:	90                   	nop
1007d195:	90                   	nop
1007d196:	90                   	nop
1007d197:	90                   	nop
1007d198:	90                   	nop
1007d199:	90                   	nop
1007d19a:	90                   	nop
1007d19b:	90                   	nop
1007d19c:	90                   	nop
1007d19d:	90                   	nop
1007d19e:	90                   	nop
1007d19f:	90                   	nop
1007d1a0:	83 ec 68             	sub    esp,0x68
1007d1a3:	53                   	push   ebx
1007d1a4:	56                   	push   esi
1007d1a5:	8b 74 24 74          	mov    esi,DWORD PTR [esp+0x74]
1007d1a9:	8b d9                	mov    ebx,ecx
1007d1ab:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
1007d1af:	83 7e 34 08          	cmp    DWORD PTR [esi+0x34],0x8
1007d1b3:	0f 84 32 06 00 00    	je     0x1007d7eb
1007d1b9:	55                   	push   ebp
1007d1ba:	57                   	push   edi
1007d1bb:	56                   	push   esi
1007d1bc:	8b cb                	mov    ecx,ebx
1007d1be:	e8 7d d2 f8 ff       	call   0x1000a440
1007d1c3:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1007d1c6:	83 f8 08             	cmp    eax,0x8
1007d1c9:	0f 84 cf 05 00 00    	je     0x1007d79e
1007d1cf:	83 f8 03             	cmp    eax,0x3
1007d1d2:	0f 85 a8 00 00 00    	jne    0x1007d280
1007d1d8:	c6 83 98 01 00 00 01 	mov    BYTE PTR [ebx+0x198],0x1
1007d1df:	8b 06                	mov    eax,DWORD PTR [esi]
1007d1e1:	89 83 9c 01 00 00    	mov    DWORD PTR [ebx+0x19c],eax
1007d1e7:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1007d1ea:	89 8b a0 01 00 00    	mov    DWORD PTR [ebx+0x1a0],ecx
1007d1f0:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1007d1f3:	89 93 a4 01 00 00    	mov    DWORD PTR [ebx+0x1a4],edx
1007d1f9:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007d1fc:	89 83 a8 01 00 00    	mov    DWORD PTR [ebx+0x1a8],eax
1007d202:	8b 4e 10             	mov    ecx,DWORD PTR [esi+0x10]
1007d205:	89 8b ac 01 00 00    	mov    DWORD PTR [ebx+0x1ac],ecx
1007d20b:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
1007d20e:	89 93 b0 01 00 00    	mov    DWORD PTR [ebx+0x1b0],edx
1007d214:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
1007d217:	89 83 b4 01 00 00    	mov    DWORD PTR [ebx+0x1b4],eax
1007d21d:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
1007d220:	89 8b b8 01 00 00    	mov    DWORD PTR [ebx+0x1b8],ecx
1007d226:	8b 56 20             	mov    edx,DWORD PTR [esi+0x20]
1007d229:	89 93 bc 01 00 00    	mov    DWORD PTR [ebx+0x1bc],edx
1007d22f:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
1007d232:	89 83 c0 01 00 00    	mov    DWORD PTR [ebx+0x1c0],eax
1007d238:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
1007d23b:	89 8b c4 01 00 00    	mov    DWORD PTR [ebx+0x1c4],ecx
1007d241:	8b 56 2c             	mov    edx,DWORD PTR [esi+0x2c]
1007d244:	89 93 c8 01 00 00    	mov    DWORD PTR [ebx+0x1c8],edx
1007d24a:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
1007d24d:	89 83 cc 01 00 00    	mov    DWORD PTR [ebx+0x1cc],eax
1007d253:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1007d256:	89 8b d0 01 00 00    	mov    DWORD PTR [ebx+0x1d0],ecx
1007d25c:	8b 56 38             	mov    edx,DWORD PTR [esi+0x38]
1007d25f:	89 93 d4 01 00 00    	mov    DWORD PTR [ebx+0x1d4],edx
1007d265:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
1007d268:	89 83 d8 01 00 00    	mov    DWORD PTR [ebx+0x1d8],eax
1007d26e:	8b 4e 40             	mov    ecx,DWORD PTR [esi+0x40]
1007d271:	89 8b dc 01 00 00    	mov    DWORD PTR [ebx+0x1dc],ecx
1007d277:	8b 56 44             	mov    edx,DWORD PTR [esi+0x44]
1007d27a:	89 93 e0 01 00 00    	mov    DWORD PTR [ebx+0x1e0],edx
1007d280:	83 7e 34 04          	cmp    DWORD PTR [esi+0x34],0x4
1007d284:	75 24                	jne    0x1007d2aa
1007d286:	c6 83 98 01 00 00 00 	mov    BYTE PTR [ebx+0x198],0x0
1007d28d:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1007d293:	8d 83 9c 01 00 00    	lea    eax,[ebx+0x19c]
1007d299:	53                   	push   ebx
1007d29a:	50                   	push   eax
1007d29b:	83 c1 30             	add    ecx,0x30
1007d29e:	e8 7d ca fa ff       	call   0x10029d20
1007d2a3:	53                   	push   ebx
1007d2a4:	56                   	push   esi
1007d2a5:	e9 27 05 00 00       	jmp    0x1007d7d1
1007d2aa:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
1007d2ad:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d2b3:	8d 6e 3c             	lea    ebp,[esi+0x3c]
1007d2b6:	50                   	push   eax
1007d2b7:	ff 91 20 03 00 00    	call   DWORD PTR [ecx+0x320]
1007d2bd:	83 c4 04             	add    esp,0x4
1007d2c0:	89 44 24 7c          	mov    DWORD PTR [esp+0x7c],eax
1007d2c4:	a8 40                	test   al,0x40
1007d2c6:	74 6d                	je     0x1007d335
1007d2c8:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1007d2ce:	8d 44 24 34          	lea    eax,[esp+0x34]
1007d2d2:	50                   	push   eax
1007d2d3:	8d 44 24 2c          	lea    eax,[esp+0x2c]
1007d2d7:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d2d9:	bf 01 00 00 00       	mov    edi,0x1
1007d2de:	50                   	push   eax
1007d2df:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1007d2e2:	57                   	push   edi
1007d2e3:	55                   	push   ebp
1007d2e4:	50                   	push   eax
1007d2e5:	ff 52 18             	call   DWORD PTR [edx+0x18]
1007d2e8:	85 c0                	test   eax,eax
1007d2ea:	0f 85 ef 04 00 00    	jne    0x1007d7df
1007d2f0:	39 7c 24 28          	cmp    DWORD PTR [esp+0x28],edi
1007d2f4:	0f 85 e5 04 00 00    	jne    0x1007d7df
1007d2fa:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1007d2fd:	85 c0                	test   eax,eax
1007d2ff:	0f 84 da 04 00 00    	je     0x1007d7df
1007d305:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d30b:	50                   	push   eax
1007d30c:	ff 91 20 03 00 00    	call   DWORD PTR [ecx+0x320]
1007d312:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d318:	83 c4 04             	add    esp,0x4
1007d31b:	89 44 24 7c          	mov    DWORD PTR [esp+0x7c],eax
1007d31f:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1007d322:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d324:	50                   	push   eax
1007d325:	ff 92 ac 01 00 00    	call   DWORD PTR [edx+0x1ac]
1007d32b:	a8 01                	test   al,0x1
1007d32d:	0f 84 ac 04 00 00    	je     0x1007d7df
1007d333:	eb 05                	jmp    0x1007d33a
1007d335:	bf 01 00 00 00       	mov    edi,0x1
1007d33a:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1007d340:	8d 44 24 2c          	lea    eax,[esp+0x2c]
1007d344:	50                   	push   eax
1007d345:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1007d348:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d34a:	57                   	push   edi
1007d34b:	50                   	push   eax
1007d34c:	ff 52 0c             	call   DWORD PTR [edx+0xc]
1007d34f:	39 7e 34             	cmp    DWORD PTR [esi+0x34],edi
1007d352:	0f 85 87 04 00 00    	jne    0x1007d7df
1007d358:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1007d35c:	f6 c4 40             	test   ah,0x40
1007d35f:	0f 84 7a 04 00 00    	je     0x1007d7df
1007d365:	f6 44 24 7c 04       	test   BYTE PTR [esp+0x7c],0x4
1007d36a:	0f 85 6f 04 00 00    	jne    0x1007d7df
1007d370:	d9 46 0c             	fld    DWORD PTR [esi+0xc]
1007d373:	d8 0d f4 83 0b 10    	fmul   DWORD PTR ds:0x100b83f4
1007d379:	d9 46 10             	fld    DWORD PTR [esi+0x10]
1007d37c:	d8 0d f4 83 0b 10    	fmul   DWORD PTR ds:0x100b83f4
1007d382:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007d385:	8b 0e                	mov    ecx,DWORD PTR [esi]
1007d387:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
1007d38b:	89 4c 24 50          	mov    DWORD PTR [esp+0x50],ecx
1007d38f:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
1007d393:	d9 46 14             	fld    DWORD PTR [esi+0x14]
1007d396:	d8 0d f4 83 0b 10    	fmul   DWORD PTR ds:0x100b83f4
1007d39c:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1007d39f:	33 d2                	xor    edx,edx
1007d3a1:	89 4c 24 58          	mov    DWORD PTR [esp+0x58],ecx
1007d3a5:	c7 44 24 6c 05 00 00 	mov    DWORD PTR [esp+0x6c],0x5
1007d3ac:	00 
1007d3ad:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
1007d3b1:	89 54 24 70          	mov    DWORD PTR [esp+0x70],edx
1007d3b5:	89 54 24 74          	mov    DWORD PTR [esp+0x74],edx
1007d3b9:	d8 06                	fadd   DWORD PTR [esi]
1007d3bb:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1007d3bf:	d8 46 04             	fadd   DWORD PTR [esi+0x4]
1007d3c2:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
1007d3c6:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
1007d3ca:	d8 46 08             	fadd   DWORD PTR [esi+0x8]
1007d3cd:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
1007d3d1:	89 44 24 60          	mov    DWORD PTR [esp+0x60],eax
1007d3d5:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1007d3d8:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
1007d3dc:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
1007d3e0:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
1007d3e4:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
1007d3e7:	89 4c 24 64          	mov    DWORD PTR [esp+0x64],ecx
1007d3eb:	d9 5c 24 5c          	fstp   DWORD PTR [esp+0x5c]
1007d3ef:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007d3f2:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007d3f5:	8d 04 48             	lea    eax,[eax+ecx*2]
1007d3f8:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007d3fe:	83 7c 81 04 03       	cmp    DWORD PTR [ecx+eax*4+0x4],0x3
1007d403:	75 0d                	jne    0x1007d412
1007d405:	89 7c 24 6c          	mov    DWORD PTR [esp+0x6c],edi
1007d409:	66 89 15 d2 41 12 10 	mov    WORD PTR ds:0x101241d2,dx
1007d410:	eb 08                	jmp    0x1007d41a
1007d412:	c7 44 24 6c 08 00 00 	mov    DWORD PTR [esp+0x6c],0x8
1007d419:	00 
1007d41a:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1007d41f:	8d 54 24 50          	lea    edx,[esp+0x50]
1007d423:	52                   	push   edx
1007d424:	c7 44 24 74 b0 41 12 	mov    DWORD PTR [esp+0x74],0x101241b0
1007d42b:	10 
1007d42c:	c7 44 24 78 08 00 00 	mov    DWORD PTR [esp+0x78],0x8
1007d433:	00 
1007d434:	ff 90 38 01 00 00    	call   DWORD PTR [eax+0x138]
1007d43a:	83 c4 04             	add    esp,0x4
1007d43d:	85 c0                	test   eax,eax
1007d43f:	0f 84 9a 03 00 00    	je     0x1007d7df
1007d445:	8b 44 24 74          	mov    eax,DWORD PTR [esp+0x74]
1007d449:	85 c0                	test   eax,eax
1007d44b:	0f 86 8e 03 00 00    	jbe    0x1007d7df
1007d451:	8b 6c 24 70          	mov    ebp,DWORD PTR [esp+0x70]
1007d455:	33 d2                	xor    edx,edx
1007d457:	85 c0                	test   eax,eax
1007d459:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
1007d45d:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1007d461:	c6 44 24 7c 01       	mov    BYTE PTR [esp+0x7c],0x1
1007d466:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1007d46a:	0f 8e 6f 03 00 00    	jle    0x1007d7df
1007d470:	c7 44 24 14 03 00 00 	mov    DWORD PTR [esp+0x14],0x3
1007d477:	00 
1007d478:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1007d47c:	8a 44 24 7c          	mov    al,BYTE PTR [esp+0x7c]
1007d480:	84 c0                	test   al,al
1007d482:	0f 84 0d 03 00 00    	je     0x1007d795
1007d488:	33 c9                	xor    ecx,ecx
1007d48a:	8d 45 22             	lea    eax,[ebp+0x22]
1007d48d:	33 ff                	xor    edi,edi
1007d48f:	66 8b 38             	mov    di,WORD PTR [eax]
1007d492:	3b fa                	cmp    edi,edx
1007d494:	74 0c                	je     0x1007d4a2
1007d496:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
1007d49a:	41                   	inc    ecx
1007d49b:	83 c0 2c             	add    eax,0x2c
1007d49e:	3b cf                	cmp    ecx,edi
1007d4a0:	7c eb                	jl     0x1007d48d
1007d4a2:	d9 46 14             	fld    DWORD PTR [esi+0x14]
1007d4a5:	8d 04 89             	lea    eax,[ecx+ecx*4]
1007d4a8:	8d 04 41             	lea    eax,[ecx+eax*2]
1007d4ab:	d8 4c 85 14          	fmul   DWORD PTR [ebp+eax*4+0x14]
1007d4af:	d9 46 10             	fld    DWORD PTR [esi+0x10]
1007d4b2:	d8 4c 85 10          	fmul   DWORD PTR [ebp+eax*4+0x10]
1007d4b6:	8d 7c 85 00          	lea    edi,[ebp+eax*4+0x0]
1007d4ba:	de c1                	faddp  st(1),st
1007d4bc:	d9 47 0c             	fld    DWORD PTR [edi+0xc]
1007d4bf:	d8 4e 0c             	fmul   DWORD PTR [esi+0xc]
1007d4c2:	de c1                	faddp  st(1),st
1007d4c4:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1007d4ca:	df e0                	fnstsw ax
1007d4cc:	f6 c4 41             	test   ah,0x41
1007d4cf:	75 1c                	jne    0x1007d4ed
1007d4d1:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1007d4d5:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1007d4d9:	42                   	inc    edx
1007d4da:	41                   	inc    ecx
1007d4db:	40                   	inc    eax
1007d4dc:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1007d4e0:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1007d4e4:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1007d4e8:	e9 96 02 00 00       	jmp    0x1007d783
1007d4ed:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
1007d4f0:	8d 14 80             	lea    edx,[eax+eax*4]
1007d4f3:	8d 14 d2             	lea    edx,[edx+edx*8]
1007d4f6:	8d 04 50             	lea    eax,[eax+edx*2]
1007d4f9:	8b 15 6c cf 10 10    	mov    edx,DWORD PTR ds:0x1010cf6c
1007d4ff:	83 7c 82 04 03       	cmp    DWORD PTR [edx+eax*4+0x4],0x3
1007d504:	75 50                	jne    0x1007d556
1007d506:	8b 07                	mov    eax,DWORD PTR [edi]
1007d508:	53                   	push   ebx
1007d509:	89 06                	mov    DWORD PTR [esi],eax
1007d50b:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1007d50e:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
1007d511:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
1007d514:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
1007d517:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1007d51a:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
1007d51d:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
1007d520:	89 4e 1c             	mov    DWORD PTR [esi+0x1c],ecx
1007d523:	8b 57 14             	mov    edx,DWORD PTR [edi+0x14]
1007d526:	89 56 20             	mov    DWORD PTR [esi+0x20],edx
1007d529:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
1007d52c:	89 46 44             	mov    DWORD PTR [esi+0x44],eax
1007d52f:	c7 46 40 ff ff ff ff 	mov    DWORD PTR [esi+0x40],0xffffffff
1007d536:	c7 46 34 01 00 00 00 	mov    DWORD PTR [esi+0x34],0x1
1007d53d:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1007d543:	56                   	push   esi
1007d544:	83 c1 30             	add    ecx,0x30
1007d547:	e8 d4 c7 fa ff       	call   0x10029d20
1007d54c:	c6 44 24 7c 00       	mov    BYTE PTR [esp+0x7c],0x0
1007d551:	e9 29 02 00 00       	jmp    0x1007d77f
1007d556:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1007d55a:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1007d55e:	3b d0                	cmp    edx,eax
1007d560:	0f 8d d7 00 00 00    	jge    0x1007d63d
1007d566:	33 c9                	xor    ecx,ecx
1007d568:	8d 45 22             	lea    eax,[ebp+0x22]
1007d56b:	33 db                	xor    ebx,ebx
1007d56d:	66 8b 18             	mov    bx,WORD PTR [eax]
1007d570:	3b da                	cmp    ebx,edx
1007d572:	74 0c                	je     0x1007d580
1007d574:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
1007d578:	41                   	inc    ecx
1007d579:	83 c0 2c             	add    eax,0x2c
1007d57c:	3b cb                	cmp    ecx,ebx
1007d57e:	7c eb                	jl     0x1007d56b
1007d580:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1007d584:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1007d588:	3b c2                	cmp    eax,edx
1007d58a:	0f 8d ad 00 00 00    	jge    0x1007d63d
1007d590:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1007d594:	33 c0                	xor    eax,eax
1007d596:	8d 5a 02             	lea    ebx,[edx+0x2]
1007d599:	8d 55 22             	lea    edx,[ebp+0x22]
1007d59c:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
1007d5a0:	33 ed                	xor    ebp,ebp
1007d5a2:	66 8b 2a             	mov    bp,WORD PTR [edx]
1007d5a5:	3b eb                	cmp    ebp,ebx
1007d5a7:	74 0c                	je     0x1007d5b5
1007d5a9:	8b 6c 24 1c          	mov    ebp,DWORD PTR [esp+0x1c]
1007d5ad:	40                   	inc    eax
1007d5ae:	83 c2 2c             	add    edx,0x2c
1007d5b1:	3b c5                	cmp    eax,ebp
1007d5b3:	7c eb                	jl     0x1007d5a0
1007d5b5:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
1007d5b9:	8d 14 89             	lea    edx,[ecx+ecx*4]
1007d5bc:	8d 1c 80             	lea    ebx,[eax+eax*4]
1007d5bf:	8d 14 51             	lea    edx,[ecx+edx*2]
1007d5c2:	8d 04 58             	lea    eax,[eax+ebx*2]
1007d5c5:	d9 44 95 08          	fld    DWORD PTR [ebp+edx*4+0x8]
1007d5c9:	d8 64 85 08          	fsub   DWORD PTR [ebp+eax*4+0x8]
1007d5cd:	d9 44 95 04          	fld    DWORD PTR [ebp+edx*4+0x4]
1007d5d1:	8d 54 95 00          	lea    edx,[ebp+edx*4+0x0]
1007d5d5:	8d 44 85 00          	lea    eax,[ebp+eax*4+0x0]
1007d5d9:	d8 60 04             	fsub   DWORD PTR [eax+0x4]
1007d5dc:	d9 02                	fld    DWORD PTR [edx]
1007d5de:	d8 20                	fsub   DWORD PTR [eax]
1007d5e0:	d9 c1                	fld    st(1)
1007d5e2:	d8 ca                	fmul   st,st(2)
1007d5e4:	d9 c3                	fld    st(3)
1007d5e6:	d8 cc                	fmul   st,st(4)
1007d5e8:	de c1                	faddp  st(1),st
1007d5ea:	d9 c1                	fld    st(1)
1007d5ec:	d8 ca                	fmul   st,st(2)
1007d5ee:	de c1                	faddp  st(1),st
1007d5f0:	d9 fa                	fsqrt
1007d5f2:	dd db                	fstp   st(3)
1007d5f4:	dd d8                	fstp   st(0)
1007d5f6:	dd d8                	fstp   st(0)
1007d5f8:	d8 1d d0 83 0b 10    	fcomp  DWORD PTR ds:0x100b83d0
1007d5fe:	df e0                	fnstsw ax
1007d600:	f6 c4 01             	test   ah,0x1
1007d603:	74 38                	je     0x1007d63d
1007d605:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1007d609:	33 c9                	xor    ecx,ecx
1007d60b:	8d 45 22             	lea    eax,[ebp+0x22]
1007d60e:	33 db                	xor    ebx,ebx
1007d610:	66 8b 18             	mov    bx,WORD PTR [eax]
1007d613:	3b da                	cmp    ebx,edx
1007d615:	74 0c                	je     0x1007d623
1007d617:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
1007d61b:	41                   	inc    ecx
1007d61c:	83 c0 2c             	add    eax,0x2c
1007d61f:	3b cb                	cmp    ecx,ebx
1007d621:	7c eb                	jl     0x1007d60e
1007d623:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
1007d627:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
1007d62b:	83 c3 02             	add    ebx,0x2
1007d62e:	83 c2 02             	add    edx,0x2
1007d631:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1007d635:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
1007d639:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1007d63d:	8d 14 89             	lea    edx,[ecx+ecx*4]
1007d640:	8b 5f 24             	mov    ebx,DWORD PTR [edi+0x24]
1007d643:	8d 04 51             	lea    eax,[ecx+edx*2]
1007d646:	d9 44 85 08          	fld    DWORD PTR [ebp+eax*4+0x8]
1007d64a:	d8 67 08             	fsub   DWORD PTR [edi+0x8]
1007d64d:	d9 44 85 04          	fld    DWORD PTR [ebp+eax*4+0x4]
1007d651:	8d 6c 85 00          	lea    ebp,[ebp+eax*4+0x0]
1007d655:	d8 67 04             	fsub   DWORD PTR [edi+0x4]
1007d658:	d9 45 00             	fld    DWORD PTR [ebp+0x0]
1007d65b:	d8 27                	fsub   DWORD PTR [edi]
1007d65d:	d9 c0                	fld    st(0)
1007d65f:	d8 c9                	fmul   st,st(1)
1007d661:	d9 c2                	fld    st(2)
1007d663:	d8 cb                	fmul   st,st(3)
1007d665:	8b 45 24             	mov    eax,DWORD PTR [ebp+0x24]
1007d668:	50                   	push   eax
1007d669:	53                   	push   ebx
1007d66a:	de c1                	faddp  st(1),st
1007d66c:	d9 c3                	fld    st(3)
1007d66e:	d8 cc                	fmul   st,st(4)
1007d670:	51                   	push   ecx
1007d671:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
1007d675:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
1007d679:	de c1                	faddp  st(1),st
1007d67b:	d9 fa                	fsqrt
1007d67d:	dd db                	fstp   st(3)
1007d67f:	dd d8                	fstp   st(0)
1007d681:	dd d8                	fstp   st(0)
1007d683:	d9 1c 24             	fstp   DWORD PTR [esp]
1007d686:	56                   	push   esi
1007d687:	e8 e4 d2 f8 ff       	call   0x1000a970
1007d68c:	8b 0f                	mov    ecx,DWORD PTR [edi]
1007d68e:	89 0e                	mov    DWORD PTR [esi],ecx
1007d690:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1007d693:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
1007d696:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
1007d699:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1007d69c:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
1007d69f:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
1007d6a2:	8b 57 10             	mov    edx,DWORD PTR [edi+0x10]
1007d6a5:	89 56 1c             	mov    DWORD PTR [esi+0x1c],edx
1007d6a8:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
1007d6ab:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
1007d6ae:	89 5e 44             	mov    DWORD PTR [esi+0x44],ebx
1007d6b1:	d9 46 2c             	fld    DWORD PTR [esi+0x2c]
1007d6b4:	c7 46 40 ff ff ff ff 	mov    DWORD PTR [esi+0x40],0xffffffff
1007d6bb:	d8 1d 60 cb 0b 10    	fcomp  DWORD PTR ds:0x100bcb60
1007d6c1:	df e0                	fnstsw ax
1007d6c3:	f6 c4 01             	test   ah,0x1
1007d6c6:	74 19                	je     0x1007d6e1
1007d6c8:	d9 46 28             	fld    DWORD PTR [esi+0x28]
1007d6cb:	d8 1d 44 a1 0b 10    	fcomp  DWORD PTR ds:0x100ba144
1007d6d1:	df e0                	fnstsw ax
1007d6d3:	f6 c4 01             	test   ah,0x1
1007d6d6:	74 09                	je     0x1007d6e1
1007d6d8:	c7 46 34 05 00 00 00 	mov    DWORD PTR [esi+0x34],0x5
1007d6df:	eb 07                	jmp    0x1007d6e8
1007d6e1:	c7 46 34 01 00 00 00 	mov    DWORD PTR [esi+0x34],0x1
1007d6e8:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
1007d6ec:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1007d6f2:	57                   	push   edi
1007d6f3:	56                   	push   esi
1007d6f4:	83 c1 30             	add    ecx,0x30
1007d6f7:	e8 24 c6 fa ff       	call   0x10029d20
1007d6fc:	d9 46 2c             	fld    DWORD PTR [esi+0x2c]
1007d6ff:	d8 1d 60 cb 0b 10    	fcomp  DWORD PTR ds:0x100bcb60
1007d705:	df e0                	fnstsw ax
1007d707:	f6 c4 01             	test   ah,0x1
1007d70a:	75 43                	jne    0x1007d74f
1007d70c:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1007d70f:	bb 02 00 00 00       	mov    ebx,0x2
1007d714:	89 16                	mov    DWORD PTR [esi],edx
1007d716:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
1007d719:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1007d71c:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1007d71f:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
1007d722:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
1007d725:	89 56 18             	mov    DWORD PTR [esi+0x18],edx
1007d728:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1007d72b:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
1007d72f:	89 46 1c             	mov    DWORD PTR [esi+0x1c],eax
1007d732:	8b 4d 14             	mov    ecx,DWORD PTR [ebp+0x14]
1007d735:	57                   	push   edi
1007d736:	89 4e 20             	mov    DWORD PTR [esi+0x20],ecx
1007d739:	89 56 44             	mov    DWORD PTR [esi+0x44],edx
1007d73c:	89 5e 34             	mov    DWORD PTR [esi+0x34],ebx
1007d73f:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1007d744:	56                   	push   esi
1007d745:	8d 48 30             	lea    ecx,[eax+0x30]
1007d748:	e8 d3 c5 fa ff       	call   0x10029d20
1007d74d:	eb 0a                	jmp    0x1007d759
1007d74f:	c6 44 24 7c 00       	mov    BYTE PTR [esp+0x7c],0x0
1007d754:	bb 02 00 00 00       	mov    ebx,0x2
1007d759:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1007d75d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1007d761:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1007d765:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
1007d769:	03 d3                	add    edx,ebx
1007d76b:	03 cb                	add    ecx,ebx
1007d76d:	03 c3                	add    eax,ebx
1007d76f:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
1007d773:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1007d777:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1007d77b:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1007d77f:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1007d783:	3b 54 24 1c          	cmp    edx,DWORD PTR [esp+0x1c]
1007d787:	0f 8c ef fc ff ff    	jl     0x1007d47c
1007d78d:	8a 44 24 7c          	mov    al,BYTE PTR [esp+0x7c]
1007d791:	84 c0                	test   al,al
1007d793:	75 4a                	jne    0x1007d7df
1007d795:	c7 46 34 08 00 00 00 	mov    DWORD PTR [esi+0x34],0x8
1007d79c:	eb 41                	jmp    0x1007d7df
1007d79e:	8a 83 98 01 00 00    	mov    al,BYTE PTR [ebx+0x198]
1007d7a4:	84 c0                	test   al,al
1007d7a6:	74 37                	je     0x1007d7df
1007d7a8:	c6 83 98 01 00 00 00 	mov    BYTE PTR [ebx+0x198],0x0
1007d7af:	d9 46 28             	fld    DWORD PTR [esi+0x28]
1007d7b2:	d8 1d 44 a1 0b 10    	fcomp  DWORD PTR ds:0x100ba144
1007d7b8:	df e0                	fnstsw ax
1007d7ba:	f6 c4 01             	test   ah,0x1
1007d7bd:	74 0a                	je     0x1007d7c9
1007d7bf:	c7 83 d0 01 00 00 06 	mov    DWORD PTR [ebx+0x1d0],0x6
1007d7c6:	00 00 00 
1007d7c9:	8d 8b 9c 01 00 00    	lea    ecx,[ebx+0x19c]
1007d7cf:	53                   	push   ebx
1007d7d0:	51                   	push   ecx
1007d7d1:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1007d7d7:	8d 4a 30             	lea    ecx,[edx+0x30]
1007d7da:	e8 41 c5 fa ff       	call   0x10029d20
1007d7df:	83 7e 34 08          	cmp    DWORD PTR [esi+0x34],0x8
1007d7e3:	0f 85 d2 f9 ff ff    	jne    0x1007d1bb
1007d7e9:	5f                   	pop    edi
1007d7ea:	5d                   	pop    ebp
1007d7eb:	5e                   	pop    esi
1007d7ec:	5b                   	pop    ebx
1007d7ed:	83 c4 68             	add    esp,0x68
1007d7f0:	c2 04 00             	ret    0x4
1007d7f3:	90                   	nop
1007d7f4:	90                   	nop
1007d7f5:	90                   	nop
1007d7f6:	90                   	nop
1007d7f7:	90                   	nop
1007d7f8:	90                   	nop
1007d7f9:	90                   	nop
1007d7fa:	90                   	nop
1007d7fb:	90                   	nop
1007d7fc:	90                   	nop
1007d7fd:	90                   	nop
1007d7fe:	90                   	nop
1007d7ff:	90                   	nop
1007d800:	51                   	push   ecx
1007d801:	8d 44 24 03          	lea    eax,[esp+0x3]
1007d805:	56                   	push   esi
1007d806:	8b f1                	mov    esi,ecx
1007d808:	50                   	push   eax
1007d809:	e8 52 c5 f8 ff       	call   0x10009d60
1007d80e:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
1007d812:	84 c0                	test   al,al
1007d814:	0f 84 ce 01 00 00    	je     0x1007d9e8
1007d81a:	8b 56 7c             	mov    edx,DWORD PTR [esi+0x7c]
1007d81d:	f6 c2 18             	test   dl,0x18
1007d820:	0f 84 fa 00 00 00    	je     0x1007d920
1007d826:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007d829:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007d82c:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007d82f:	8d 04 48             	lea    eax,[eax+ecx*2]
1007d832:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007d838:	f7 04 81 00 00 00 04 	test   DWORD PTR [ecx+eax*4],0x4000000
1007d83f:	75 0d                	jne    0x1007d84e
1007d841:	8a 46 36             	mov    al,BYTE PTR [esi+0x36]
1007d844:	84 c0                	test   al,al
1007d846:	74 06                	je     0x1007d84e
1007d848:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007d84b:	40                   	inc    eax
1007d84c:	eb 03                	jmp    0x1007d851
1007d84e:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007d851:	85 c0                	test   eax,eax
1007d853:	74 4e                	je     0x1007d8a3
1007d855:	f6 c2 10             	test   dl,0x10
1007d858:	74 36                	je     0x1007d890
1007d85a:	8a 46 29             	mov    al,BYTE PTR [esi+0x29]
1007d85d:	84 c0                	test   al,al
1007d85f:	74 2f                	je     0x1007d890
1007d861:	8b 86 ec 00 00 00    	mov    eax,DWORD PTR [esi+0xec]
1007d867:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d86d:	50                   	push   eax
1007d86e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007d871:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d873:	50                   	push   eax
1007d874:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007d87a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d880:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d882:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1007d888:	d8 05 04 84 0b 10    	fadd   DWORD PTR ds:0x100b8404
1007d88e:	eb 4c                	jmp    0x1007d8dc
1007d890:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d896:	8b 96 cc 00 00 00    	mov    edx,DWORD PTR [esi+0xcc]
1007d89c:	8b 01                	mov    eax,DWORD PTR [ecx]
1007d89e:	e9 ef 00 00 00       	jmp    0x1007d992
1007d8a3:	f6 c2 10             	test   dl,0x10
1007d8a6:	74 49                	je     0x1007d8f1
1007d8a8:	8a 46 29             	mov    al,BYTE PTR [esi+0x29]
1007d8ab:	84 c0                	test   al,al
1007d8ad:	74 42                	je     0x1007d8f1
1007d8af:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
1007d8b5:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d8bb:	50                   	push   eax
1007d8bc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007d8bf:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d8c1:	50                   	push   eax
1007d8c2:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007d8c8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d8ce:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d8d0:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1007d8d6:	d8 05 d0 83 0b 10    	fadd   DWORD PTR ds:0x100b83d0
1007d8dc:	d9 9e 38 01 00 00    	fstp   DWORD PTR [esi+0x138]
1007d8e2:	c7 86 34 01 00 00 01 	mov    DWORD PTR [esi+0x134],0x1
1007d8e9:	00 00 00 
1007d8ec:	e9 c3 00 00 00       	jmp    0x1007d9b4
1007d8f1:	8b 96 d4 00 00 00    	mov    edx,DWORD PTR [esi+0xd4]
1007d8f7:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d8fd:	52                   	push   edx
1007d8fe:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007d901:	8b 01                	mov    eax,DWORD PTR [ecx]
1007d903:	52                   	push   edx
1007d904:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
1007d90a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d910:	8b 01                	mov    eax,DWORD PTR [ecx]
1007d912:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1007d918:	d8 46 30             	fadd   DWORD PTR [esi+0x30]
1007d91b:	e9 8e 00 00 00       	jmp    0x1007d9ae
1007d920:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007d923:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007d926:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007d929:	8d 14 48             	lea    edx,[eax+ecx*2]
1007d92c:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007d931:	8b 0c 90             	mov    ecx,DWORD PTR [eax+edx*4]
1007d934:	f7 c1 00 00 00 04    	test   ecx,0x4000000
1007d93a:	75 0d                	jne    0x1007d949
1007d93c:	8a 46 36             	mov    al,BYTE PTR [esi+0x36]
1007d93f:	84 c0                	test   al,al
1007d941:	74 06                	je     0x1007d949
1007d943:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007d946:	40                   	inc    eax
1007d947:	eb 03                	jmp    0x1007d94c
1007d949:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007d94c:	85 c0                	test   eax,eax
1007d94e:	75 34                	jne    0x1007d984
1007d950:	f7 c1 00 00 c0 00    	test   ecx,0xc00000
1007d956:	75 2c                	jne    0x1007d984
1007d958:	8b 86 d0 00 00 00    	mov    eax,DWORD PTR [esi+0xd0]
1007d95e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d964:	50                   	push   eax
1007d965:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007d968:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d96a:	50                   	push   eax
1007d96b:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007d971:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d977:	8b 11                	mov    edx,DWORD PTR [ecx]
1007d979:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1007d97f:	d8 46 30             	fadd   DWORD PTR [esi+0x30]
1007d982:	eb 2a                	jmp    0x1007d9ae
1007d984:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d98a:	8b 96 c8 00 00 00    	mov    edx,DWORD PTR [esi+0xc8]
1007d990:	8b 01                	mov    eax,DWORD PTR [ecx]
1007d992:	52                   	push   edx
1007d993:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007d996:	52                   	push   edx
1007d997:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
1007d99d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007d9a3:	8b 01                	mov    eax,DWORD PTR [ecx]
1007d9a5:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1007d9ab:	d8 46 2c             	fadd   DWORD PTR [esi+0x2c]
1007d9ae:	d9 9e 38 01 00 00    	fstp   DWORD PTR [esi+0x138]
1007d9b4:	8a 86 31 01 00 00    	mov    al,BYTE PTR [esi+0x131]
1007d9ba:	84 c0                	test   al,al
1007d9bc:	74 1e                	je     0x1007d9dc
1007d9be:	6a 00                	push   0x0
1007d9c0:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007d9c6:	e8 55 03 02 00       	call   0x1009dd20
1007d9cb:	c6 86 31 01 00 00 00 	mov    BYTE PTR [esi+0x131],0x0
1007d9d2:	c7 86 94 01 00 00 00 	mov    DWORD PTR [esi+0x194],0x0
1007d9d9:	00 00 00 
1007d9dc:	c6 86 fc 00 00 00 00 	mov    BYTE PTR [esi+0xfc],0x0
1007d9e3:	b0 01                	mov    al,0x1
1007d9e5:	5e                   	pop    esi
1007d9e6:	59                   	pop    ecx
1007d9e7:	c3                   	ret
1007d9e8:	32 c0                	xor    al,al
1007d9ea:	5e                   	pop    esi
1007d9eb:	59                   	pop    ecx
1007d9ec:	c3                   	ret
1007d9ed:	90                   	nop
1007d9ee:	90                   	nop
1007d9ef:	90                   	nop
1007d9f0:	83 ec 18             	sub    esp,0x18
1007d9f3:	56                   	push   esi
1007d9f4:	8b f1                	mov    esi,ecx
1007d9f6:	57                   	push   edi
1007d9f7:	8b 7e 48             	mov    edi,DWORD PTR [esi+0x48]
1007d9fa:	e8 71 c4 f8 ff       	call   0x10009e70
1007d9ff:	d9 54 24 0c          	fst    DWORD PTR [esp+0xc]
1007da03:	d8 1d 00 85 0b 10    	fcomp  DWORD PTR ds:0x100b8500
1007da09:	df e0                	fnstsw ax
1007da0b:	f6 c4 40             	test   ah,0x40
1007da0e:	0f 85 39 01 00 00    	jne    0x1007db4d
1007da14:	39 7e 48             	cmp    DWORD PTR [esi+0x48],edi
1007da17:	0f 84 30 01 00 00    	je     0x1007db4d
1007da1d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007da23:	8b 01                	mov    eax,DWORD PTR [ecx]
1007da25:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1007da2b:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1007da31:	c7 05 34 87 12 10 00 	mov    DWORD PTR ds:0x10128734,0x0
1007da38:	00 00 00 
1007da3b:	d9 1d 28 87 12 10    	fstp   DWORD PTR ds:0x10128728
1007da41:	8b 11                	mov    edx,DWORD PTR [ecx]
1007da43:	8d 44 24 08          	lea    eax,[esp+0x8]
1007da47:	50                   	push   eax
1007da48:	ff 52 40             	call   DWORD PTR [edx+0x40]
1007da4b:	85 c0                	test   eax,eax
1007da4d:	75 2f                	jne    0x1007da7e
1007da4f:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1007da53:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
1007da56:	50                   	push   eax
1007da57:	8b 11                	mov    edx,DWORD PTR [ecx]
1007da59:	ff 52 40             	call   DWORD PTR [edx+0x40]
1007da5c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007da62:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1007da66:	68 81 00 00 00       	push   0x81
1007da6b:	6a 23                	push   0x23
1007da6d:	8b 11                	mov    edx,DWORD PTR [ecx]
1007da6f:	50                   	push   eax
1007da70:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
1007da76:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1007da7a:	8b 11                	mov    edx,DWORD PTR [ecx]
1007da7c:	ff 12                	call   DWORD PTR [edx]
1007da7e:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007da81:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007da84:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007da87:	8d 14 48             	lea    edx,[eax+ecx*2]
1007da8a:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007da90:	f7 04 91 00 00 02 00 	test   DWORD PTR [ecx+edx*4],0x20000
1007da97:	0f 84 89 00 00 00    	je     0x1007db26
1007da9d:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
1007daa0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007daa6:	85 c0                	test   eax,eax
1007daa8:	8b 11                	mov    edx,DWORD PTR [ecx]
1007daaa:	75 08                	jne    0x1007dab4
1007daac:	8b 86 dc 00 00 00    	mov    eax,DWORD PTR [esi+0xdc]
1007dab2:	eb 06                	jmp    0x1007daba
1007dab4:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
1007daba:	50                   	push   eax
1007dabb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007dabe:	50                   	push   eax
1007dabf:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007dac5:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1007dac9:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
1007dacf:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
1007dad5:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1007dadc:	00 
1007dadd:	51                   	push   ecx
1007dade:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
1007dae5:	00 
1007dae6:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
1007daec:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
1007daf3:	00 
1007daf4:	c7 44 24 20 00 00 80 	mov    DWORD PTR [esp+0x20],0x3f800000
1007dafb:	3f 
1007dafc:	8b 11                	mov    edx,DWORD PTR [ecx]
1007dafe:	8d 44 24 14          	lea    eax,[esp+0x14]
1007db02:	d9 1c 24             	fstp   DWORD PTR [esp]
1007db05:	50                   	push   eax
1007db06:	ff 52 04             	call   DWORD PTR [edx+0x4]
1007db09:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
1007db0f:	8d 44 24 10          	lea    eax,[esp+0x10]
1007db13:	81 c6 50 01 00 00    	add    esi,0x150
1007db19:	50                   	push   eax
1007db1a:	8b 11                	mov    edx,DWORD PTR [ecx]
1007db1c:	56                   	push   esi
1007db1d:	ff 52 20             	call   DWORD PTR [edx+0x20]
1007db20:	5f                   	pop    edi
1007db21:	5e                   	pop    esi
1007db22:	83 c4 18             	add    esp,0x18
1007db25:	c3                   	ret
1007db26:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
1007db29:	6a 01                	push   0x1
1007db2b:	85 c9                	test   ecx,ecx
1007db2d:	6a 00                	push   0x0
1007db2f:	75 11                	jne    0x1007db42
1007db31:	6a 06                	push   0x6
1007db33:	50                   	push   eax
1007db34:	e8 d7 f6 fb ff       	call   0x1003d210
1007db39:	83 c4 10             	add    esp,0x10
1007db3c:	5f                   	pop    edi
1007db3d:	5e                   	pop    esi
1007db3e:	83 c4 18             	add    esp,0x18
1007db41:	c3                   	ret
1007db42:	6a 05                	push   0x5
1007db44:	50                   	push   eax
1007db45:	e8 c6 f6 fb ff       	call   0x1003d210
1007db4a:	83 c4 10             	add    esp,0x10
1007db4d:	5f                   	pop    edi
1007db4e:	5e                   	pop    esi
1007db4f:	83 c4 18             	add    esp,0x18
1007db52:	c3                   	ret
1007db53:	90                   	nop
1007db54:	90                   	nop
1007db55:	90                   	nop
1007db56:	90                   	nop
1007db57:	90                   	nop
1007db58:	90                   	nop
1007db59:	90                   	nop
1007db5a:	90                   	nop
1007db5b:	90                   	nop
1007db5c:	90                   	nop
1007db5d:	90                   	nop
1007db5e:	90                   	nop
1007db5f:	90                   	nop
1007db60:	83 ec 08             	sub    esp,0x8
1007db63:	56                   	push   esi
1007db64:	8b f1                	mov    esi,ecx
1007db66:	8a 86 31 01 00 00    	mov    al,BYTE PTR [esi+0x131]
1007db6c:	84 c0                	test   al,al
1007db6e:	0f 84 f3 00 00 00    	je     0x1007dc67
1007db74:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
1007db77:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
1007db7e:	00 
1007db7f:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1007db83:	df 6c 24 04          	fild   QWORD PTR [esp+0x4]
1007db87:	d8 9e 44 01 00 00    	fcomp  DWORD PTR [esi+0x144]
1007db8d:	df e0                	fnstsw ax
1007db8f:	f6 c4 41             	test   ah,0x41
1007db92:	0f 85 cf 00 00 00    	jne    0x1007dc67
1007db98:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007db9e:	8b 11                	mov    edx,DWORD PTR [ecx]
1007dba0:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1007dba6:	d9 5e 20             	fstp   DWORD PTR [esi+0x20]
1007dba9:	d9 86 48 01 00 00    	fld    DWORD PTR [esi+0x148]
1007dbaf:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1007dbb5:	df e0                	fnstsw ax
1007dbb7:	f6 c4 40             	test   ah,0x40
1007dbba:	74 33                	je     0x1007dbef
1007dbbc:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
1007dbbf:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
1007dbc2:	3b c1                	cmp    eax,ecx
1007dbc4:	74 29                	je     0x1007dbef
1007dbc6:	8b 8e 44 01 00 00    	mov    ecx,DWORD PTR [esi+0x144]
1007dbcc:	8b 16                	mov    edx,DWORD PTR [esi]
1007dbce:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
1007dbd2:	8b ce                	mov    ecx,esi
1007dbd4:	ff 52 24             	call   DWORD PTR [edx+0x24]
1007dbd7:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1007dbdb:	8b c8                	mov    ecx,eax
1007dbdd:	89 86 44 01 00 00    	mov    DWORD PTR [esi+0x144],eax
1007dbe3:	51                   	push   ecx
1007dbe4:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007dbea:	e8 31 01 02 00       	call   0x1009dd20
1007dbef:	d9 86 48 01 00 00    	fld    DWORD PTR [esi+0x148]
1007dbf5:	d8 05 c8 83 0b 10    	fadd   DWORD PTR ds:0x100b83c8
1007dbfb:	d8 5e 20             	fcomp  DWORD PTR [esi+0x20]
1007dbfe:	df e0                	fnstsw ax
1007dc00:	f6 c4 41             	test   ah,0x41
1007dc03:	75 59                	jne    0x1007dc5e
1007dc05:	d9 46 20             	fld    DWORD PTR [esi+0x20]
1007dc08:	d8 a6 48 01 00 00    	fsub   DWORD PTR [esi+0x148]
1007dc0e:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
1007dc11:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
1007dc18:	00 
1007dc19:	89 54 24 04          	mov    DWORD PTR [esp+0x4],edx
1007dc1d:	d8 0d 00 84 0b 10    	fmul   DWORD PTR ds:0x100b8400
1007dc23:	d8 86 44 01 00 00    	fadd   DWORD PTR [esi+0x144]
1007dc29:	d9 96 44 01 00 00    	fst    DWORD PTR [esi+0x144]
1007dc2f:	df 6c 24 04          	fild   QWORD PTR [esp+0x4]
1007dc33:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1007dc37:	d8 5c 24 04          	fcomp  DWORD PTR [esp+0x4]
1007dc3b:	df e0                	fnstsw ax
1007dc3d:	f6 c4 01             	test   ah,0x1
1007dc40:	75 0a                	jne    0x1007dc4c
1007dc42:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1007dc46:	89 86 44 01 00 00    	mov    DWORD PTR [esi+0x144],eax
1007dc4c:	8b 8e 44 01 00 00    	mov    ecx,DWORD PTR [esi+0x144]
1007dc52:	51                   	push   ecx
1007dc53:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007dc59:	e8 c2 00 02 00       	call   0x1009dd20
1007dc5e:	8b 56 20             	mov    edx,DWORD PTR [esi+0x20]
1007dc61:	89 96 48 01 00 00    	mov    DWORD PTR [esi+0x148],edx
1007dc67:	5e                   	pop    esi
1007dc68:	83 c4 08             	add    esp,0x8
1007dc6b:	c3                   	ret
1007dc6c:	90                   	nop
1007dc6d:	90                   	nop
1007dc6e:	90                   	nop
1007dc6f:	90                   	nop
1007dc70:	83 ec 08             	sub    esp,0x8
1007dc73:	56                   	push   esi
1007dc74:	8b f1                	mov    esi,ecx
1007dc76:	8a 86 31 01 00 00    	mov    al,BYTE PTR [esi+0x131]
1007dc7c:	84 c0                	test   al,al
1007dc7e:	0f 84 bb 00 00 00    	je     0x1007dd3f
1007dc84:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1007dc87:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
1007dc8e:	00 
1007dc8f:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1007dc93:	df 6c 24 04          	fild   QWORD PTR [esp+0x4]
1007dc97:	d8 9e 44 01 00 00    	fcomp  DWORD PTR [esi+0x144]
1007dc9d:	df e0                	fnstsw ax
1007dc9f:	f6 c4 01             	test   ah,0x1
1007dca2:	0f 84 97 00 00 00    	je     0x1007dd3f
1007dca8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007dcae:	8b 11                	mov    edx,DWORD PTR [ecx]
1007dcb0:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1007dcb6:	d9 56 20             	fst    DWORD PTR [esi+0x20]
1007dcb9:	d9 86 48 01 00 00    	fld    DWORD PTR [esi+0x148]
1007dcbf:	d8 05 c8 83 0b 10    	fadd   DWORD PTR ds:0x100b83c8
1007dcc5:	d9 c1                	fld    st(1)
1007dcc7:	de d9                	fcompp
1007dcc9:	df e0                	fnstsw ax
1007dccb:	f6 c4 01             	test   ah,0x1
1007dcce:	74 64                	je     0x1007dd34
1007dcd0:	d8 a6 48 01 00 00    	fsub   DWORD PTR [esi+0x148]
1007dcd6:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1007dcd9:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
1007dce0:	00 
1007dce1:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1007dce5:	d8 0d 00 84 0b 10    	fmul   DWORD PTR ds:0x100b8400
1007dceb:	d8 ae 44 01 00 00    	fsubr  DWORD PTR [esi+0x144]
1007dcf1:	d9 96 44 01 00 00    	fst    DWORD PTR [esi+0x144]
1007dcf7:	df 6c 24 04          	fild   QWORD PTR [esp+0x4]
1007dcfb:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1007dcff:	d8 5c 24 04          	fcomp  DWORD PTR [esp+0x4]
1007dd03:	df e0                	fnstsw ax
1007dd05:	f6 c4 41             	test   ah,0x41
1007dd08:	74 0a                	je     0x1007dd14
1007dd0a:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1007dd0e:	89 8e 44 01 00 00    	mov    DWORD PTR [esi+0x144],ecx
1007dd14:	8b 96 44 01 00 00    	mov    edx,DWORD PTR [esi+0x144]
1007dd1a:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007dd20:	52                   	push   edx
1007dd21:	e8 fa ff 01 00       	call   0x1009dd20
1007dd26:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
1007dd29:	89 86 48 01 00 00    	mov    DWORD PTR [esi+0x148],eax
1007dd2f:	5e                   	pop    esi
1007dd30:	83 c4 08             	add    esp,0x8
1007dd33:	c3                   	ret
1007dd34:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
1007dd37:	dd d8                	fstp   st(0)
1007dd39:	89 86 48 01 00 00    	mov    DWORD PTR [esi+0x148],eax
1007dd3f:	5e                   	pop    esi
1007dd40:	83 c4 08             	add    esp,0x8
1007dd43:	c3                   	ret
1007dd44:	90                   	nop
1007dd45:	90                   	nop
1007dd46:	90                   	nop
1007dd47:	90                   	nop
1007dd48:	90                   	nop
1007dd49:	90                   	nop
1007dd4a:	90                   	nop
1007dd4b:	90                   	nop
1007dd4c:	90                   	nop
1007dd4d:	90                   	nop
1007dd4e:	90                   	nop
1007dd4f:	90                   	nop
1007dd50:	51                   	push   ecx
1007dd51:	8d 44 24 00          	lea    eax,[esp+0x0]
1007dd55:	50                   	push   eax
1007dd56:	e8 05 d4 f8 ff       	call   0x1000b160
1007dd5b:	8b 44 24 00          	mov    eax,DWORD PTR [esp+0x0]
1007dd5f:	85 c0                	test   eax,eax
1007dd61:	0f 84 a7 00 00 00    	je     0x1007de0e
1007dd67:	83 f8 03             	cmp    eax,0x3
1007dd6a:	75 16                	jne    0x1007dd82
1007dd6c:	6a 00                	push   0x0
1007dd6e:	6a 2d                	push   0x2d
1007dd70:	e8 cb f6 fb ff       	call   0x1003d440
1007dd75:	83 c4 08             	add    esp,0x8
1007dd78:	6a 00                	push   0x0
1007dd7a:	6a 00                	push   0x0
1007dd7c:	6a 01                	push   0x1
1007dd7e:	6a 01                	push   0x1
1007dd80:	eb 60                	jmp    0x1007dde2
1007dd82:	83 f8 04             	cmp    eax,0x4
1007dd85:	75 1f                	jne    0x1007dda6
1007dd87:	6a 00                	push   0x0
1007dd89:	6a 2e                	push   0x2e
1007dd8b:	e8 b0 f6 fb ff       	call   0x1003d440
1007dd90:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1007dd96:	83 c4 08             	add    esp,0x8
1007dd99:	6a 00                	push   0x0
1007dd9b:	6a 00                	push   0x0
1007dd9d:	6a 00                	push   0x0
1007dd9f:	6a 01                	push   0x1
1007dda1:	8d 4a 30             	lea    ecx,[edx+0x30]
1007dda4:	eb 45                	jmp    0x1007ddeb
1007dda6:	83 f8 01             	cmp    eax,0x1
1007dda9:	75 1e                	jne    0x1007ddc9
1007ddab:	6a 00                	push   0x0
1007ddad:	6a 2d                	push   0x2d
1007ddaf:	e8 8c f6 fb ff       	call   0x1003d440
1007ddb4:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1007ddb9:	83 c4 08             	add    esp,0x8
1007ddbc:	6a 00                	push   0x0
1007ddbe:	6a 00                	push   0x0
1007ddc0:	6a 01                	push   0x1
1007ddc2:	6a 02                	push   0x2
1007ddc4:	8d 48 30             	lea    ecx,[eax+0x30]
1007ddc7:	eb 22                	jmp    0x1007ddeb
1007ddc9:	83 f8 02             	cmp    eax,0x2
1007ddcc:	75 22                	jne    0x1007ddf0
1007ddce:	6a 00                	push   0x0
1007ddd0:	6a 2e                	push   0x2e
1007ddd2:	e8 69 f6 fb ff       	call   0x1003d440
1007ddd7:	83 c4 08             	add    esp,0x8
1007ddda:	6a 00                	push   0x0
1007dddc:	6a 00                	push   0x0
1007ddde:	6a 00                	push   0x0
1007dde0:	6a 02                	push   0x2
1007dde2:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1007dde8:	83 c1 30             	add    ecx,0x30
1007ddeb:	e8 20 01 fb ff       	call   0x1002df10
1007ddf0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007ddf6:	8b 11                	mov    edx,DWORD PTR [ecx]
1007ddf8:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1007ddfe:	d9 1d 28 87 12 10    	fstp   DWORD PTR ds:0x10128728
1007de04:	c7 05 34 87 12 10 00 	mov    DWORD PTR ds:0x10128734,0x0
1007de0b:	00 00 00 
1007de0e:	59                   	pop    ecx
1007de0f:	c3                   	ret
1007de10:	83 ec 08             	sub    esp,0x8
1007de13:	53                   	push   ebx
1007de14:	55                   	push   ebp
1007de15:	56                   	push   esi
1007de16:	8b f1                	mov    esi,ecx
1007de18:	57                   	push   edi
1007de19:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007de1f:	e8 dc f4 01 00       	call   0x1009d300
1007de24:	8d 44 24 13          	lea    eax,[esp+0x13]
1007de28:	8b ce                	mov    ecx,esi
1007de2a:	50                   	push   eax
1007de2b:	e8 10 c2 f8 ff       	call   0x1000a040
1007de30:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
1007de34:	33 db                	xor    ebx,ebx
1007de36:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1007de3a:	3a c3                	cmp    al,bl
1007de3c:	89 9e 3c 01 00 00    	mov    DWORD PTR [esi+0x13c],ebx
1007de42:	88 9e 32 01 00 00    	mov    BYTE PTR [esi+0x132],bl
1007de48:	88 5e 35             	mov    BYTE PTR [esi+0x35],bl
1007de4b:	89 9e 34 01 00 00    	mov    DWORD PTR [esi+0x134],ebx
1007de51:	88 9e 98 01 00 00    	mov    BYTE PTR [esi+0x198],bl
1007de57:	c6 86 e9 01 00 00 01 	mov    BYTE PTR [esi+0x1e9],0x1
1007de5e:	89 9e 40 01 00 00    	mov    DWORD PTR [esi+0x140],ebx
1007de64:	89 9e 94 01 00 00    	mov    DWORD PTR [esi+0x194],ebx
1007de6a:	74 10                	je     0x1007de7c
1007de6c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007de72:	8b 86 bc 00 00 00    	mov    eax,DWORD PTR [esi+0xbc]
1007de78:	8b 11                	mov    edx,DWORD PTR [ecx]
1007de7a:	eb 6e                	jmp    0x1007deea
1007de7c:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007de7f:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007de82:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007de85:	8d 14 48             	lea    edx,[eax+ecx*2]
1007de88:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007de8d:	8b 0c 90             	mov    ecx,DWORD PTR [eax+edx*4]
1007de90:	f7 c1 00 00 00 04    	test   ecx,0x4000000
1007de96:	75 0b                	jne    0x1007dea3
1007de98:	38 5e 36             	cmp    BYTE PTR [esi+0x36],bl
1007de9b:	74 06                	je     0x1007dea3
1007de9d:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007dea0:	40                   	inc    eax
1007dea1:	eb 03                	jmp    0x1007dea6
1007dea3:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007dea6:	3b c3                	cmp    eax,ebx
1007dea8:	75 32                	jne    0x1007dedc
1007deaa:	f7 c1 00 00 20 00    	test   ecx,0x200000
1007deb0:	75 2a                	jne    0x1007dedc
1007deb2:	6a 01                	push   0x1
1007deb4:	8b ce                	mov    ecx,esi
1007deb6:	e8 75 02 00 00       	call   0x1007e130
1007debb:	8b 86 c0 00 00 00    	mov    eax,DWORD PTR [esi+0xc0]
1007dec1:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007dec7:	50                   	push   eax
1007dec8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007decb:	8b 11                	mov    edx,DWORD PTR [ecx]
1007decd:	50                   	push   eax
1007dece:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007ded4:	88 9e fc 00 00 00    	mov    BYTE PTR [esi+0xfc],bl
1007deda:	eb 21                	jmp    0x1007defd
1007dedc:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007dee2:	8b 86 a8 00 00 00    	mov    eax,DWORD PTR [esi+0xa8]
1007dee8:	8b 11                	mov    edx,DWORD PTR [ecx]
1007deea:	50                   	push   eax
1007deeb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007deee:	50                   	push   eax
1007deef:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007def5:	53                   	push   ebx
1007def6:	8b ce                	mov    ecx,esi
1007def8:	e8 33 02 00 00       	call   0x1007e130
1007defd:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007df00:	8b 0d 70 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf70
1007df06:	3b c1                	cmp    eax,ecx
1007df08:	0f 83 d2 00 00 00    	jae    0x1007dfe0
1007df0e:	8b 2d 6c cf 10 10    	mov    ebp,DWORD PTR ds:0x1010cf6c
1007df14:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007df17:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007df1a:	8d 14 48             	lea    edx,[eax+ecx*2]
1007df1d:	8d 7c 95 00          	lea    edi,[ebp+edx*4+0x0]
1007df21:	3b fb                	cmp    edi,ebx
1007df23:	0f 84 b7 00 00 00    	je     0x1007dfe0
1007df29:	f6 46 7c 08          	test   BYTE PTR [esi+0x7c],0x8
1007df2d:	74 08                	je     0x1007df37
1007df2f:	8a 97 29 01 00 00    	mov    dl,BYTE PTR [edi+0x129]
1007df35:	eb 06                	jmp    0x1007df3d
1007df37:	8a 97 28 01 00 00    	mov    dl,BYTE PTR [edi+0x128]
1007df3d:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007df40:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007df43:	8d 04 48             	lea    eax,[eax+ecx*2]
1007df46:	8b 84 85 c0 00 00 00 	mov    eax,DWORD PTR [ebp+eax*4+0xc0]
1007df4d:	83 f8 08             	cmp    eax,0x8
1007df50:	77 31                	ja     0x1007df83
1007df52:	ff 24 85 ec df 07 10 	jmp    DWORD PTR [eax*4+0x1007dfec]
1007df59:	b8 01 00 00 00       	mov    eax,0x1
1007df5e:	eb 25                	jmp    0x1007df85
1007df60:	b8 03 00 00 00       	mov    eax,0x3
1007df65:	eb 1e                	jmp    0x1007df85
1007df67:	b8 04 00 00 00       	mov    eax,0x4
1007df6c:	eb 17                	jmp    0x1007df85
1007df6e:	b8 05 00 00 00       	mov    eax,0x5
1007df73:	eb 10                	jmp    0x1007df85
1007df75:	b8 06 00 00 00       	mov    eax,0x6
1007df7a:	eb 09                	jmp    0x1007df85
1007df7c:	b8 07 00 00 00       	mov    eax,0x7
1007df81:	eb 02                	jmp    0x1007df85
1007df83:	33 c0                	xor    eax,eax
1007df85:	81 e2 ff 00 00 00    	and    edx,0xff
1007df8b:	81 c7 c4 00 00 00    	add    edi,0xc4
1007df91:	52                   	push   edx
1007df92:	57                   	push   edi
1007df93:	50                   	push   eax
1007df94:	e8 d7 26 fe ff       	call   0x10060670
1007df99:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
1007df9c:	51                   	push   ecx
1007df9d:	e8 7e 28 fe ff       	call   0x10060820
1007dfa2:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007dfa5:	83 c4 10             	add    esp,0x10
1007dfa8:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007dfab:	8d 14 c9             	lea    edx,[ecx+ecx*8]
1007dfae:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
1007dfb4:	8d 04 50             	lea    eax,[eax+edx*2]
1007dfb7:	f7 04 81 00 00 00 04 	test   DWORD PTR [ecx+eax*4],0x4000000
1007dfbe:	75 0b                	jne    0x1007dfcb
1007dfc0:	38 5e 36             	cmp    BYTE PTR [esi+0x36],bl
1007dfc3:	74 06                	je     0x1007dfcb
1007dfc5:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007dfc8:	40                   	inc    eax
1007dfc9:	eb 03                	jmp    0x1007dfce
1007dfcb:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007dfce:	50                   	push   eax
1007dfcf:	e8 dc 27 fe ff       	call   0x100607b0
1007dfd4:	8b 56 50             	mov    edx,DWORD PTR [esi+0x50]
1007dfd7:	52                   	push   edx
1007dfd8:	e8 33 28 fe ff       	call   0x10060810
1007dfdd:	83 c4 08             	add    esp,0x8
1007dfe0:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1007dfe4:	5f                   	pop    edi
1007dfe5:	5e                   	pop    esi
1007dfe6:	5d                   	pop    ebp
1007dfe7:	5b                   	pop    ebx
1007dfe8:	83 c4 08             	add    esp,0x8
1007dfeb:	c3                   	ret
1007dfec:	83 df 07             	sbb    edi,0x7
1007dfef:	10 59 df             	adc    BYTE PTR [ecx-0x21],bl
1007dff2:	07                   	pop    es
1007dff3:	10 59 df             	adc    BYTE PTR [ecx-0x21],bl
1007dff6:	07                   	pop    es
1007dff7:	10 60 df             	adc    BYTE PTR [eax-0x21],ah
1007dffa:	07                   	pop    es
1007dffb:	10 67 df             	adc    BYTE PTR [edi-0x21],ah
1007dffe:	07                   	pop    es
1007dfff:	10 67 df             	adc    BYTE PTR [edi-0x21],ah
1007e002:	07                   	pop    es
1007e003:	10 6e df             	adc    BYTE PTR [esi-0x21],ch
1007e006:	07                   	pop    es
1007e007:	10 75 df             	adc    BYTE PTR [ebp-0x21],dh
1007e00a:	07                   	pop    es
1007e00b:	10 7c df 07          	adc    BYTE PTR [edi+ebx*8+0x7],bh
1007e00f:	10 51 56             	adc    BYTE PTR [ecx+0x56],dl
1007e012:	8b f1                	mov    esi,ecx
1007e014:	e8 17 c1 f8 ff       	call   0x1000a130
1007e019:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007e01c:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
1007e020:	8d 0c 80             	lea    ecx,[eax+eax*4]
1007e023:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
1007e026:	8d 14 48             	lea    edx,[eax+ecx*2]
1007e029:	a1 6c cf 10 10       	mov    eax,ds:0x1010cf6c
1007e02e:	8b 0c 90             	mov    ecx,DWORD PTR [eax+edx*4]
1007e031:	f7 c1 00 00 00 04    	test   ecx,0x4000000
1007e037:	75 0d                	jne    0x1007e046
1007e039:	8a 46 36             	mov    al,BYTE PTR [esi+0x36]
1007e03c:	84 c0                	test   al,al
1007e03e:	74 06                	je     0x1007e046
1007e040:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007e043:	40                   	inc    eax
1007e044:	eb 03                	jmp    0x1007e049
1007e046:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007e049:	85 c0                	test   eax,eax
1007e04b:	75 18                	jne    0x1007e065
1007e04d:	f7 c1 00 00 20 00    	test   ecx,0x200000
1007e053:	75 10                	jne    0x1007e065
1007e055:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007e05b:	8b 86 c4 00 00 00    	mov    eax,DWORD PTR [esi+0xc4]
1007e061:	8b 11                	mov    edx,DWORD PTR [ecx]
1007e063:	eb 0e                	jmp    0x1007e073
1007e065:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007e06b:	8b 86 ac 00 00 00    	mov    eax,DWORD PTR [esi+0xac]
1007e071:	8b 11                	mov    edx,DWORD PTR [ecx]
1007e073:	50                   	push   eax
1007e074:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007e077:	50                   	push   eax
1007e078:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007e07e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007e084:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1007e087:	6a 00                	push   0x0
1007e089:	50                   	push   eax
1007e08a:	8b 11                	mov    edx,DWORD PTR [ecx]
1007e08c:	ff 92 88 00 00 00    	call   DWORD PTR [edx+0x88]
1007e092:	8a 86 31 01 00 00    	mov    al,BYTE PTR [esi+0x131]
1007e098:	84 c0                	test   al,al
1007e09a:	74 14                	je     0x1007e0b0
1007e09c:	6a 00                	push   0x0
1007e09e:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007e0a4:	e8 77 fc 01 00       	call   0x1009dd20
1007e0a9:	c6 86 31 01 00 00 00 	mov    BYTE PTR [esi+0x131],0x0
1007e0b0:	8a 46 35             	mov    al,BYTE PTR [esi+0x35]
1007e0b3:	84 c0                	test   al,al
1007e0b5:	74 07                	je     0x1007e0be
1007e0b7:	8b 16                	mov    edx,DWORD PTR [esi]
1007e0b9:	8b ce                	mov    ecx,esi
1007e0bb:	ff 52 6c             	call   DWORD PTR [edx+0x6c]
1007e0be:	e8 cd 26 fe ff       	call   0x10060790
1007e0c3:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
1007e0c7:	c7 86 40 01 00 00 00 	mov    DWORD PTR [esi+0x140],0x0
1007e0ce:	00 00 00 
1007e0d1:	c7 86 94 01 00 00 00 	mov    DWORD PTR [esi+0x194],0x0
1007e0d8:	00 00 00 
1007e0db:	5e                   	pop    esi
1007e0dc:	59                   	pop    ecx
1007e0dd:	c3                   	ret
1007e0de:	90                   	nop
1007e0df:	90                   	nop
1007e0e0:	56                   	push   esi
1007e0e1:	8b f1                	mov    esi,ecx
1007e0e3:	8d 8e 94 00 00 00    	lea    ecx,[esi+0x94]
1007e0e9:	e8 a2 f5 01 00       	call   0x1009d690
1007e0ee:	d9 86 3c 01 00 00    	fld    DWORD PTR [esi+0x13c]
1007e0f4:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1007e0fa:	df e0                	fnstsw ax
1007e0fc:	f6 c4 41             	test   ah,0x41
1007e0ff:	75 20                	jne    0x1007e121
1007e101:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007e104:	c7 86 3c 01 00 00 00 	mov    DWORD PTR [esi+0x13c],0x0
1007e10b:	00 00 00 
1007e10e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007e114:	6a 00                	push   0x0
1007e116:	6a 00                	push   0x0
1007e118:	52                   	push   edx
1007e119:	8b 01                	mov    eax,DWORD PTR [ecx]
1007e11b:	ff 90 cc 01 00 00    	call   DWORD PTR [eax+0x1cc]
1007e121:	5e                   	pop    esi
1007e122:	c3                   	ret
1007e123:	90                   	nop
1007e124:	90                   	nop
1007e125:	90                   	nop
1007e126:	90                   	nop
1007e127:	90                   	nop
1007e128:	90                   	nop
1007e129:	90                   	nop
1007e12a:	90                   	nop
1007e12b:	90                   	nop
1007e12c:	90                   	nop
1007e12d:	90                   	nop
1007e12e:	90                   	nop
1007e12f:	90                   	nop

*/
void GunClient::PullTrigger() {
    // TODO: Implement PullTrigger
}

// 0x1009c450: GunClient::OtherPlayerShoot
/*
1009c450:	57                   	push   edi
1009c451:	8b f9                	mov    edi,ecx
1009c453:	83 3f 00             	cmp    DWORD PTR [edi],0x0
1009c456:	74 57                	je     0x1009c4af
1009c458:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1009c45e:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1009c462:	52                   	push   edx
1009c463:	8b 01                	mov    eax,DWORD PTR [ecx]
1009c465:	ff 50 44             	call   DWORD PTR [eax+0x44]
1009c468:	25 ff 00 00 00       	and    eax,0xff
1009c46d:	3d ff 00 00 00       	cmp    eax,0xff
1009c472:	75 1a                	jne    0x1009c48e
1009c474:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1009c479:	68 64 5f 0d 10       	push   0x100d5f64
1009c47e:	50                   	push   eax
1009c47f:	8b 08                	mov    ecx,DWORD PTR [eax]
1009c481:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
1009c487:	83 c4 08             	add    esp,0x8
1009c48a:	5f                   	pop    edi
1009c48b:	c2 04 00             	ret    0x4
1009c48e:	8b 57 20             	mov    edx,DWORD PTR [edi+0x20]
1009c491:	56                   	push   esi
1009c492:	8d 77 20             	lea    esi,[edi+0x20]
1009c495:	6a 00                	push   0x0
1009c497:	6a 02                	push   0x2
1009c499:	68 00 80 00 00       	push   0x8000
1009c49e:	50                   	push   eax
1009c49f:	8b ce                	mov    ecx,esi
1009c4a1:	ff 52 54             	call   DWORD PTR [edx+0x54]
1009c4a4:	8b 07                	mov    eax,DWORD PTR [edi]
1009c4a6:	8b ce                	mov    ecx,esi
1009c4a8:	50                   	push   eax
1009c4a9:	e8 e2 23 fe ff       	call   0x1007e890
1009c4ae:	5e                   	pop    esi
1009c4af:	5f                   	pop    edi
1009c4b0:	c2 04 00             	ret    0x4
1009c4b3:	90                   	nop
1009c4b4:	90                   	nop
1009c4b5:	90                   	nop
1009c4b6:	90                   	nop
1009c4b7:	90                   	nop
1009c4b8:	90                   	nop
1009c4b9:	90                   	nop
1009c4ba:	90                   	nop
1009c4bb:	90                   	nop
1009c4bc:	90                   	nop
1009c4bd:	90                   	nop
1009c4be:	90                   	nop
1009c4bf:	90                   	nop

*/
void GunClient::OtherPlayerShoot() {
    // TODO: Implement OtherPlayerShoot
}

// 0x1009c4c0: GunClient::OtherPlayerShoot
/*
1009c4c0:	57                   	push   edi
1009c4c1:	8b f9                	mov    edi,ecx
1009c4c3:	83 3f 00             	cmp    DWORD PTR [edi],0x0
1009c4c6:	74 53                	je     0x1009c51b
1009c4c8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1009c4ce:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1009c4d2:	52                   	push   edx
1009c4d3:	8b 01                	mov    eax,DWORD PTR [ecx]
1009c4d5:	ff 50 44             	call   DWORD PTR [eax+0x44]
1009c4d8:	25 ff 00 00 00       	and    eax,0xff
1009c4dd:	3d ff 00 00 00       	cmp    eax,0xff
1009c4e2:	75 1a                	jne    0x1009c4fe
1009c4e4:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1009c4e9:	68 64 5f 0d 10       	push   0x100d5f64
1009c4ee:	50                   	push   eax
1009c4ef:	8b 08                	mov    ecx,DWORD PTR [eax]
1009c4f1:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
1009c4f7:	83 c4 08             	add    esp,0x8
1009c4fa:	5f                   	pop    edi
1009c4fb:	c2 04 00             	ret    0x4
1009c4fe:	8b 57 20             	mov    edx,DWORD PTR [edi+0x20]
1009c501:	56                   	push   esi
1009c502:	8d 77 20             	lea    esi,[edi+0x20]
1009c505:	68 00 80 00 00       	push   0x8000
1009c50a:	50                   	push   eax
1009c50b:	8b ce                	mov    ecx,esi
1009c50d:	ff 52 58             	call   DWORD PTR [edx+0x58]
1009c510:	8b 07                	mov    eax,DWORD PTR [edi]
1009c512:	8b ce                	mov    ecx,esi
1009c514:	50                   	push   eax
1009c515:	e8 d6 23 fe ff       	call   0x1007e8f0
1009c51a:	5e                   	pop    esi
1009c51b:	5f                   	pop    edi
1009c51c:	c2 04 00             	ret    0x4
1009c51f:	90                   	nop

*/
void GunClient::OtherPlayerShoot() {
    // TODO: Implement OtherPlayerShoot
}

// 0x1009c520: GunClient::OtherPlayerShoot
/*
1009c520:	83 c1 20             	add    ecx,0x20
1009c523:	e9 28 24 fe ff       	jmp    0x1007e950
1009c528:	90                   	nop
1009c529:	90                   	nop
1009c52a:	90                   	nop
1009c52b:	90                   	nop
1009c52c:	90                   	nop
1009c52d:	90                   	nop
1009c52e:	90                   	nop
1009c52f:	90                   	nop
1009c530:	57                   	push   edi
1009c531:	8b f9                	mov    edi,ecx
1009c533:	83 3f 00             	cmp    DWORD PTR [edi],0x0
1009c536:	74 57                	je     0x1009c58f
1009c538:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1009c53e:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1009c542:	52                   	push   edx
1009c543:	8b 01                	mov    eax,DWORD PTR [ecx]
1009c545:	ff 50 44             	call   DWORD PTR [eax+0x44]
1009c548:	25 ff 00 00 00       	and    eax,0xff
1009c54d:	3d ff 00 00 00       	cmp    eax,0xff
1009c552:	75 1a                	jne    0x1009c56e
1009c554:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1009c559:	68 64 5f 0d 10       	push   0x100d5f64
1009c55e:	50                   	push   eax
1009c55f:	8b 08                	mov    ecx,DWORD PTR [eax]
1009c561:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
1009c567:	83 c4 08             	add    esp,0x8
1009c56a:	5f                   	pop    edi
1009c56b:	c2 04 00             	ret    0x4
1009c56e:	8b 57 20             	mov    edx,DWORD PTR [edi+0x20]
1009c571:	56                   	push   esi
1009c572:	8d 77 20             	lea    esi,[edi+0x20]
1009c575:	6a 00                	push   0x0
1009c577:	6a 03                	push   0x3
1009c579:	68 00 80 00 00       	push   0x8000
1009c57e:	50                   	push   eax
1009c57f:	8b ce                	mov    ecx,esi
1009c581:	ff 52 54             	call   DWORD PTR [edx+0x54]
1009c584:	8b 07                	mov    eax,DWORD PTR [edi]
1009c586:	8b ce                	mov    ecx,esi
1009c588:	50                   	push   eax
1009c589:	e8 62 23 fe ff       	call   0x1007e8f0
1009c58e:	5e                   	pop    esi
1009c58f:	5f                   	pop    edi
1009c590:	c2 04 00             	ret    0x4
1009c593:	90                   	nop
1009c594:	90                   	nop
1009c595:	90                   	nop
1009c596:	90                   	nop
1009c597:	90                   	nop
1009c598:	90                   	nop
1009c599:	90                   	nop
1009c59a:	90                   	nop
1009c59b:	90                   	nop
1009c59c:	90                   	nop
1009c59d:	90                   	nop
1009c59e:	90                   	nop
1009c59f:	90                   	nop
1009c5a0:	56                   	push   esi
1009c5a1:	68 d0 bd 09 10       	push   0x1009bdd0
1009c5a6:	68 70 bd 09 10       	push   0x1009bd70
1009c5ab:	8b f1                	mov    esi,ecx
1009c5ad:	6a 10                	push   0x10
1009c5af:	68 0c 02 00 00       	push   0x20c
1009c5b4:	56                   	push   esi
1009c5b5:	e8 48 89 00 00       	call   0x100a4f02
1009c5ba:	8b c6                	mov    eax,esi
1009c5bc:	5e                   	pop    esi
1009c5bd:	c3                   	ret
1009c5be:	90                   	nop
1009c5bf:	90                   	nop
1009c5c0:	6a ff                	push   0xffffffff
1009c5c2:	68 56 70 0b 10       	push   0x100b7056
1009c5c7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1009c5cd:	50                   	push   eax
1009c5ce:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1009c5d5:	51                   	push   ecx
1009c5d6:	53                   	push   ebx
1009c5d7:	8b d9                	mov    ebx,ecx
1009c5d9:	56                   	push   esi
1009c5da:	57                   	push   edi
1009c5db:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
1009c5df:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
1009c5e6:	00 
1009c5e7:	8b f3                	mov    esi,ebx
1009c5e9:	bf 10 00 00 00       	mov    edi,0x10
1009c5ee:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
1009c5f1:	85 c0                	test   eax,eax
1009c5f3:	74 07                	je     0x1009c5fc
1009c5f5:	8b ce                	mov    ecx,esi
1009c5f7:	e8 44 f8 ff ff       	call   0x1009be40
1009c5fc:	81 c6 0c 02 00 00    	add    esi,0x20c
1009c602:	4f                   	dec    edi
1009c603:	75 e9                	jne    0x1009c5ee
1009c605:	68 d0 bd 09 10       	push   0x1009bdd0
1009c60a:	6a 10                	push   0x10
1009c60c:	68 0c 02 00 00       	push   0x20c
1009c611:	53                   	push   ebx
1009c612:	c7 44 24 28 ff ff ff 	mov    DWORD PTR [esp+0x28],0xffffffff
1009c619:	ff 
1009c61a:	e8 65 89 00 00       	call   0x100a4f84
1009c61f:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1009c623:	5f                   	pop    edi
1009c624:	5e                   	pop    esi
1009c625:	5b                   	pop    ebx
1009c626:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1009c62d:	83 c4 10             	add    esp,0x10
1009c630:	c3                   	ret
1009c631:	90                   	nop
1009c632:	90                   	nop
1009c633:	90                   	nop
1009c634:	90                   	nop
1009c635:	90                   	nop
1009c636:	90                   	nop
1009c637:	90                   	nop
1009c638:	90                   	nop
1009c639:	90                   	nop
1009c63a:	90                   	nop
1009c63b:	90                   	nop
1009c63c:	90                   	nop
1009c63d:	90                   	nop
1009c63e:	90                   	nop
1009c63f:	90                   	nop
1009c640:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1009c644:	3c 10                	cmp    al,0x10
1009c646:	73 21                	jae    0x1009c669
1009c648:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1009c64c:	25 ff 00 00 00       	and    eax,0xff
1009c651:	52                   	push   edx
1009c652:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1009c656:	52                   	push   edx
1009c657:	8b d0                	mov    edx,eax
1009c659:	c1 e2 06             	shl    edx,0x6
1009c65c:	03 d0                	add    edx,eax
1009c65e:	8d 04 50             	lea    eax,[eax+edx*2]
1009c661:	8d 0c 81             	lea    ecx,[ecx+eax*4]
1009c664:	e8 67 fa ff ff       	call   0x1009c0d0
1009c669:	c2 0c 00             	ret    0xc
1009c66c:	90                   	nop
1009c66d:	90                   	nop
1009c66e:	90                   	nop
1009c66f:	90                   	nop
1009c670:	56                   	push   esi
1009c671:	57                   	push   edi
1009c672:	8b f1                	mov    esi,ecx
1009c674:	bf 10 00 00 00       	mov    edi,0x10
1009c679:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
1009c67c:	85 c0                	test   eax,eax
1009c67e:	74 07                	je     0x1009c687
1009c680:	8b ce                	mov    ecx,esi
1009c682:	e8 89 fa ff ff       	call   0x1009c110
1009c687:	81 c6 0c 02 00 00    	add    esi,0x20c
1009c68d:	4f                   	dec    edi
1009c68e:	75 e9                	jne    0x1009c679
1009c690:	5f                   	pop    edi
1009c691:	5e                   	pop    esi
1009c692:	c3                   	ret
1009c693:	90                   	nop
1009c694:	90                   	nop
1009c695:	90                   	nop
1009c696:	90                   	nop
1009c697:	90                   	nop
1009c698:	90                   	nop
1009c699:	90                   	nop
1009c69a:	90                   	nop
1009c69b:	90                   	nop
1009c69c:	90                   	nop
1009c69d:	90                   	nop
1009c69e:	90                   	nop
1009c69f:	90                   	nop
1009c6a0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1009c6a4:	3c 10                	cmp    al,0x10
1009c6a6:	73 26                	jae    0x1009c6ce
1009c6a8:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1009c6ac:	25 ff 00 00 00       	and    eax,0xff
1009c6b1:	52                   	push   edx
1009c6b2:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1009c6b6:	52                   	push   edx
1009c6b7:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1009c6bb:	52                   	push   edx
1009c6bc:	8b d0                	mov    edx,eax
1009c6be:	c1 e2 06             	shl    edx,0x6
1009c6c1:	03 d0                	add    edx,eax
1009c6c3:	8d 04 50             	lea    eax,[eax+edx*2]
1009c6c6:	8d 0c 81             	lea    ecx,[ecx+eax*4]
1009c6c9:	e8 62 f8 ff ff       	call   0x1009bf30
1009c6ce:	c2 10 00             	ret    0x10
1009c6d1:	90                   	nop
1009c6d2:	90                   	nop
1009c6d3:	90                   	nop
1009c6d4:	90                   	nop
1009c6d5:	90                   	nop
1009c6d6:	90                   	nop
1009c6d7:	90                   	nop
1009c6d8:	90                   	nop
1009c6d9:	90                   	nop
1009c6da:	90                   	nop
1009c6db:	90                   	nop
1009c6dc:	90                   	nop
1009c6dd:	90                   	nop
1009c6de:	90                   	nop
1009c6df:	90                   	nop
1009c6e0:	56                   	push   esi
1009c6e1:	57                   	push   edi
1009c6e2:	8b f1                	mov    esi,ecx
1009c6e4:	bf 10 00 00 00       	mov    edi,0x10
1009c6e9:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
1009c6ec:	85 c0                	test   eax,eax
1009c6ee:	74 07                	je     0x1009c6f7
1009c6f0:	8b ce                	mov    ecx,esi
1009c6f2:	e8 49 f7 ff ff       	call   0x1009be40
1009c6f7:	81 c6 0c 02 00 00    	add    esi,0x20c
1009c6fd:	4f                   	dec    edi
1009c6fe:	75 e9                	jne    0x1009c6e9
1009c700:	5f                   	pop    edi
1009c701:	5e                   	pop    esi
1009c702:	c3                   	ret
1009c703:	90                   	nop
1009c704:	90                   	nop
1009c705:	90                   	nop
1009c706:	90                   	nop
1009c707:	90                   	nop
1009c708:	90                   	nop
1009c709:	90                   	nop
1009c70a:	90                   	nop
1009c70b:	90                   	nop
1009c70c:	90                   	nop
1009c70d:	90                   	nop
1009c70e:	90                   	nop
1009c70f:	90                   	nop
1009c710:	8b c1                	mov    eax,ecx
1009c712:	33 c9                	xor    ecx,ecx
1009c714:	89 48 64             	mov    DWORD PTR [eax+0x64],ecx
1009c717:	c6 40 68 01          	mov    BYTE PTR [eax+0x68],0x1
1009c71b:	89 88 8c 00 00 00    	mov    DWORD PTR [eax+0x8c],ecx
1009c721:	88 88 90 00 00 00    	mov    BYTE PTR [eax+0x90],cl
1009c727:	89 88 94 00 00 00    	mov    DWORD PTR [eax+0x94],ecx
1009c72d:	c3                   	ret
1009c72e:	90                   	nop
1009c72f:	90                   	nop

*/
void GunClient::OtherPlayerShoot() {
    // TODO: Implement OtherPlayerShoot
}

