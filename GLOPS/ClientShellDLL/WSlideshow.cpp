#include "WSlideshow.h"

// 0x1003eae0: WSlideshow::LoadSlides
/*
1003eae0:	83 ec 4c             	sub    esp,0x4c
1003eae3:	53                   	push   ebx
1003eae4:	56                   	push   esi
1003eae5:	8b f1                	mov    esi,ecx
1003eae7:	33 db                	xor    ebx,ebx
1003eae9:	57                   	push   edi
1003eaea:	c7 44 24 0c ec 9d 0d 	mov    DWORD PTR [esp+0xc],0x100d9dec
1003eaf1:	10 
1003eaf2:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1003eaf5:	c7 44 24 10 d0 9d 0d 	mov    DWORD PTR [esp+0x10],0x100d9dd0
1003eafc:	10 
1003eafd:	3b c3                	cmp    eax,ebx
1003eaff:	c7 44 24 14 b4 9d 0d 	mov    DWORD PTR [esp+0x14],0x100d9db4
1003eb06:	10 
1003eb07:	c7 44 24 18 98 9d 0d 	mov    DWORD PTR [esp+0x18],0x100d9d98
1003eb0e:	10 
1003eb0f:	c7 44 24 1c 7c 9d 0d 	mov    DWORD PTR [esp+0x1c],0x100d9d7c
1003eb16:	10 
1003eb17:	c7 44 24 20 60 9d 0d 	mov    DWORD PTR [esp+0x20],0x100d9d60
1003eb1e:	10 
1003eb1f:	c7 44 24 24 44 9d 0d 	mov    DWORD PTR [esp+0x24],0x100d9d44
1003eb26:	10 
1003eb27:	c7 44 24 28 28 9d 0d 	mov    DWORD PTR [esp+0x28],0x100d9d28
1003eb2e:	10 
1003eb2f:	c7 44 24 2c 0c 9d 0d 	mov    DWORD PTR [esp+0x2c],0x100d9d0c
1003eb36:	10 
1003eb37:	c7 44 24 30 f0 9c 0d 	mov    DWORD PTR [esp+0x30],0x100d9cf0
1003eb3e:	10 
1003eb3f:	c7 44 24 34 d4 9c 0d 	mov    DWORD PTR [esp+0x34],0x100d9cd4
1003eb46:	10 
1003eb47:	c7 44 24 38 b8 9c 0d 	mov    DWORD PTR [esp+0x38],0x100d9cb8
1003eb4e:	10 
1003eb4f:	c7 44 24 3c 9c 9c 0d 	mov    DWORD PTR [esp+0x3c],0x100d9c9c
1003eb56:	10 
1003eb57:	c7 44 24 40 80 9c 0d 	mov    DWORD PTR [esp+0x40],0x100d9c80
1003eb5e:	10 
1003eb5f:	c7 44 24 44 64 9c 0d 	mov    DWORD PTR [esp+0x44],0x100d9c64
1003eb66:	10 
1003eb67:	c7 44 24 48 48 9c 0d 	mov    DWORD PTR [esp+0x48],0x100d9c48
1003eb6e:	10 
1003eb6f:	c7 44 24 4c 2c 9c 0d 	mov    DWORD PTR [esp+0x4c],0x100d9c2c
1003eb76:	10 
1003eb77:	c7 44 24 50 10 9c 0d 	mov    DWORD PTR [esp+0x50],0x100d9c10
1003eb7e:	10 
1003eb7f:	c7 44 24 54 f4 9b 0d 	mov    DWORD PTR [esp+0x54],0x100d9bf4
1003eb86:	10 
1003eb87:	74 09                	je     0x1003eb92
1003eb89:	50                   	push   eax
1003eb8a:	e8 8f 4d 06 00       	call   0x100a391e
1003eb8f:	83 c4 04             	add    esp,0x4
1003eb92:	6a 4c                	push   0x4c
1003eb94:	c7 46 34 13 00 00 00 	mov    DWORD PTR [esi+0x34],0x13
1003eb9b:	89 5e 38             	mov    DWORD PTR [esi+0x38],ebx
1003eb9e:	c7 46 30 ff ff ff ff 	mov    DWORD PTR [esi+0x30],0xffffffff
1003eba5:	89 5e 2c             	mov    DWORD PTR [esi+0x2c],ebx
1003eba8:	e8 7c 4d 06 00       	call   0x100a3929
1003ebad:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1003ebb0:	8b f8                	mov    edi,eax
1003ebb2:	c1 e1 02             	shl    ecx,0x2
1003ebb5:	8b d1                	mov    edx,ecx
1003ebb7:	33 c0                	xor    eax,eax
1003ebb9:	c1 e9 02             	shr    ecx,0x2
1003ebbc:	89 7e 38             	mov    DWORD PTR [esi+0x38],edi
1003ebbf:	83 c4 04             	add    esp,0x4
1003ebc2:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1003ebc4:	8b ca                	mov    ecx,edx
1003ebc6:	83 e1 03             	and    ecx,0x3
1003ebc9:	f3 aa                	rep stos BYTE PTR es:[edi],al
1003ebcb:	39 5e 34             	cmp    DWORD PTR [esi+0x34],ebx
1003ebce:	7e 5c                	jle    0x1003ec2c
1003ebd0:	55                   	push   ebp
1003ebd1:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1003ebd7:	8b 6e 38             	mov    ebp,DWORD PTR [esi+0x38]
1003ebda:	8d 04 9d 00 00 00 00 	lea    eax,[ebx*4+0x0]
1003ebe1:	8b 11                	mov    edx,DWORD PTR [ecx]
1003ebe3:	8b 7c 04 10          	mov    edi,DWORD PTR [esp+eax*1+0x10]
1003ebe7:	03 c5                	add    eax,ebp
1003ebe9:	57                   	push   edi
1003ebea:	50                   	push   eax
1003ebeb:	ff 52 08             	call   DWORD PTR [edx+0x8]
1003ebee:	85 c0                	test   eax,eax
1003ebf0:	74 31                	je     0x1003ec23
1003ebf2:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003ebf8:	6a 5f                	push   0x5f
1003ebfa:	68 bc 9b 0d 10       	push   0x100d9bbc
1003ebff:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ec01:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003ec07:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1003ec0c:	57                   	push   edi
1003ec0d:	68 88 9b 0d 10       	push   0x100d9b88
1003ec12:	68 7c 5d 0c 10       	push   0x100c5d7c
1003ec17:	8b 08                	mov    ecx,DWORD PTR [eax]
1003ec19:	50                   	push   eax
1003ec1a:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1003ec20:	83 c4 10             	add    esp,0x10
1003ec23:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1003ec26:	43                   	inc    ebx
1003ec27:	3b d8                	cmp    ebx,eax
1003ec29:	7c a6                	jl     0x1003ebd1
1003ec2b:	5d                   	pop    ebp
1003ec2c:	e8 ab 64 06 00       	call   0x100a50dc
1003ec31:	99                   	cdq
1003ec32:	f7 7e 34             	idiv   DWORD PTR [esi+0x34]
1003ec35:	89 56 30             	mov    DWORD PTR [esi+0x30],edx
1003ec38:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1003ec3e:	8b 11                	mov    edx,DWORD PTR [ecx]
1003ec40:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1003ec46:	d8 05 74 8c 0d 10    	fadd   DWORD PTR ds:0x100d8c74
1003ec4c:	5f                   	pop    edi
1003ec4d:	d8 05 70 8c 0d 10    	fadd   DWORD PTR ds:0x100d8c70
1003ec53:	d9 5e 2c             	fstp   DWORD PTR [esi+0x2c]
1003ec56:	5e                   	pop    esi
1003ec57:	5b                   	pop    ebx
1003ec58:	83 c4 4c             	add    esp,0x4c
1003ec5b:	c3                   	ret
1003ec5c:	90                   	nop
1003ec5d:	90                   	nop
1003ec5e:	90                   	nop
1003ec5f:	90                   	nop
1003ec60:	53                   	push   ebx
1003ec61:	8b d9                	mov    ebx,ecx
1003ec63:	56                   	push   esi
1003ec64:	57                   	push   edi
1003ec65:	83 7b 30 ff          	cmp    DWORD PTR [ebx+0x30],0xffffffff
1003ec69:	0f 84 eb 00 00 00    	je     0x1003ed5a
1003ec6f:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1003ec75:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ec77:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1003ec7d:	d8 53 2c             	fcom   DWORD PTR [ebx+0x2c]
1003ec80:	df e0                	fnstsw ax
1003ec82:	f6 c4 01             	test   ah,0x1
1003ec85:	75 1c                	jne    0x1003eca3
1003ec87:	8b 43 30             	mov    eax,DWORD PTR [ebx+0x30]
1003ec8a:	40                   	inc    eax
1003ec8b:	99                   	cdq
1003ec8c:	f7 7b 34             	idiv   DWORD PTR [ebx+0x34]
1003ec8f:	89 53 30             	mov    DWORD PTR [ebx+0x30],edx
1003ec92:	d9 05 74 8c 0d 10    	fld    DWORD PTR ds:0x100d8c74
1003ec98:	d8 05 70 8c 0d 10    	fadd   DWORD PTR ds:0x100d8c70
1003ec9e:	d8 c1                	fadd   st,st(1)
1003eca0:	d9 5b 2c             	fstp   DWORD PTR [ebx+0x2c]
1003eca3:	d9 43 2c             	fld    DWORD PTR [ebx+0x2c]
1003eca6:	d8 25 74 8c 0d 10    	fsub   DWORD PTR ds:0x100d8c74
1003ecac:	d9 c1                	fld    st(1)
1003ecae:	de d9                	fcompp
1003ecb0:	df e0                	fnstsw ax
1003ecb2:	f6 c4 01             	test   ah,0x1
1003ecb5:	75 1a                	jne    0x1003ecd1
1003ecb7:	d9 43 2c             	fld    DWORD PTR [ebx+0x2c]
1003ecba:	d8 e1                	fsub   st,st(1)
1003ecbc:	d8 35 74 8c 0d 10    	fdiv   DWORD PTR ds:0x100d8c74
1003ecc2:	d8 0d f0 85 0b 10    	fmul   DWORD PTR ds:0x100b85f0
1003ecc8:	e8 67 51 06 00       	call   0x100a3e34
1003eccd:	dd d8                	fstp   st(0)
1003eccf:	eb 07                	jmp    0x1003ecd8
1003ecd1:	dd d8                	fstp   st(0)
1003ecd3:	b8 ff 00 00 00       	mov    eax,0xff
1003ecd8:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
1003ecdc:	be ff 00 00 00       	mov    esi,0xff
1003ece1:	2b f0                	sub    esi,eax
1003ece3:	85 c0                	test   eax,eax
1003ece5:	74 34                	je     0x1003ed1b
1003ece7:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
1003ecea:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
1003eced:	25 ff 00 00 00       	and    eax,0xff
1003ecf2:	c1 e0 18             	shl    eax,0x18
1003ecf5:	0d ff ff ff 00       	or     eax,0xffffff
1003ecfa:	50                   	push   eax
1003ecfb:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1003ecfe:	6a 00                	push   0x0
1003ed00:	51                   	push   ecx
1003ed01:	8b 0f                	mov    ecx,DWORD PTR [edi]
1003ed03:	52                   	push   edx
1003ed04:	8b 53 30             	mov    edx,DWORD PTR [ebx+0x30]
1003ed07:	50                   	push   eax
1003ed08:	8b 43 38             	mov    eax,DWORD PTR [ebx+0x38]
1003ed0b:	51                   	push   ecx
1003ed0c:	8b 0c 90             	mov    ecx,DWORD PTR [eax+edx*4]
1003ed0f:	51                   	push   ecx
1003ed10:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1003ed16:	e8 75 b9 00 00       	call   0x1004a690
1003ed1b:	85 f6                	test   esi,esi
1003ed1d:	74 3b                	je     0x1003ed5a
1003ed1f:	8b 57 0c             	mov    edx,DWORD PTR [edi+0xc]
1003ed22:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
1003ed25:	81 e6 ff 00 00 00    	and    esi,0xff
1003ed2b:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1003ed2e:	c1 e6 18             	shl    esi,0x18
1003ed31:	81 ce ff ff ff 00    	or     esi,0xffffff
1003ed37:	56                   	push   esi
1003ed38:	6a 00                	push   0x0
1003ed3a:	52                   	push   edx
1003ed3b:	8b 17                	mov    edx,DWORD PTR [edi]
1003ed3d:	50                   	push   eax
1003ed3e:	8b 43 30             	mov    eax,DWORD PTR [ebx+0x30]
1003ed41:	51                   	push   ecx
1003ed42:	40                   	inc    eax
1003ed43:	52                   	push   edx
1003ed44:	99                   	cdq
1003ed45:	f7 7b 34             	idiv   DWORD PTR [ebx+0x34]
1003ed48:	8b 43 38             	mov    eax,DWORD PTR [ebx+0x38]
1003ed4b:	8b 0c 90             	mov    ecx,DWORD PTR [eax+edx*4]
1003ed4e:	51                   	push   ecx
1003ed4f:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1003ed55:	e8 36 b9 00 00       	call   0x1004a690
1003ed5a:	5f                   	pop    edi
1003ed5b:	5e                   	pop    esi
1003ed5c:	5b                   	pop    ebx
1003ed5d:	c2 08 00             	ret    0x8

*/
void WSlideshow::LoadSlides() {
    // TODO: Implement LoadSlides
}

