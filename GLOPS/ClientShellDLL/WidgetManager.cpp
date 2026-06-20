#include "WidgetManager.h"

// 0x1006ee20: WidgetManager::WidgetManager
/*
1006ee20:	6a ff                	push   0xffffffff
1006ee22:	68 d8 60 0b 10       	push   0x100b60d8
1006ee27:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1006ee2d:	50                   	push   eax
1006ee2e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1006ee35:	83 ec 14             	sub    esp,0x14
1006ee38:	53                   	push   ebx
1006ee39:	56                   	push   esi
1006ee3a:	8b f1                	mov    esi,ecx
1006ee3c:	33 db                	xor    ebx,ebx
1006ee3e:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
1006ee42:	8d 46 1c             	lea    eax,[esi+0x1c]
1006ee45:	89 5e 0c             	mov    DWORD PTR [esi+0xc],ebx
1006ee48:	89 5e 08             	mov    DWORD PTR [esi+0x8],ebx
1006ee4b:	c7 46 18 03 00 00 00 	mov    DWORD PTR [esi+0x18],0x3
1006ee52:	89 5e 04             	mov    DWORD PTR [esi+0x4],ebx
1006ee55:	89 18                	mov    DWORD PTR [eax],ebx
1006ee57:	89 5e 20             	mov    DWORD PTR [esi+0x20],ebx
1006ee5a:	89 5e 24             	mov    DWORD PTR [esi+0x24],ebx
1006ee5d:	89 5e 28             	mov    DWORD PTR [esi+0x28],ebx
1006ee60:	8d 56 44             	lea    edx,[esi+0x44]
1006ee63:	33 c9                	xor    ecx,ecx
1006ee65:	c7 06 bc b9 0b 10    	mov    DWORD PTR [esi],0x100bb9bc
1006ee6b:	89 76 2c             	mov    DWORD PTR [esi+0x2c],esi
1006ee6e:	89 76 30             	mov    DWORD PTR [esi+0x30],esi
1006ee71:	89 5e 34             	mov    DWORD PTR [esi+0x34],ebx
1006ee74:	89 5e 38             	mov    DWORD PTR [esi+0x38],ebx
1006ee77:	89 5e 3c             	mov    DWORD PTR [esi+0x3c],ebx
1006ee7a:	89 5e 40             	mov    DWORD PTR [esi+0x40],ebx
1006ee7d:	89 0a                	mov    DWORD PTR [edx],ecx
1006ee7f:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
1006ee83:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
1006ee86:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1006ee8c:	3b cb                	cmp    ecx,ebx
1006ee8e:	74 46                	je     0x1006eed6
1006ee90:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006ee96:	68 c7 01 00 00       	push   0x1c7
1006ee9b:	68 e4 d2 0d 10       	push   0x100dd2e4
1006eea0:	8b 01                	mov    eax,DWORD PTR [ecx]
1006eea2:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1006eea8:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1006eead:	68 b0 d2 0d 10       	push   0x100dd2b0
1006eeb2:	68 7c 5d 0c 10       	push   0x100c5d7c
1006eeb7:	50                   	push   eax
1006eeb8:	8b 08                	mov    ecx,DWORD PTR [eax]
1006eeba:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1006eec0:	83 c4 0c             	add    esp,0xc
1006eec3:	8b c6                	mov    eax,esi
1006eec5:	5e                   	pop    esi
1006eec6:	5b                   	pop    ebx
1006eec7:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1006eecb:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1006eed2:	83 c4 20             	add    esp,0x20
1006eed5:	c3                   	ret

*/
void WidgetManager::WidgetManager() {
    // TODO: Implement WidgetManager
}

// 0x1006eed6: WidgetManager::WidgetManager
/*
1006eed6:	55                   	push   ebp
1006eed7:	8b 2d 54 be 11 10    	mov    ebp,DWORD PTR ds:0x1011be54
1006eedd:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
1006eee1:	8b e8                	mov    ebp,eax
1006eee3:	57                   	push   edi
1006eee4:	8b 3d 58 be 11 10    	mov    edi,DWORD PTR ds:0x1011be58
1006eeea:	33 d2                	xor    edx,edx
1006eeec:	89 35 d8 40 12 10    	mov    DWORD PTR ds:0x101240d8,esi
1006eef2:	89 55 00             	mov    DWORD PTR [ebp+0x0],edx
1006eef5:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1006eef9:	33 c9                	xor    ecx,ecx
1006eefb:	50                   	push   eax
1006eefc:	89 4d 04             	mov    DWORD PTR [ebp+0x4],ecx
1006eeff:	8b ce                	mov    ecx,esi
1006ef01:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
1006ef04:	89 55 0c             	mov    DWORD PTR [ebp+0xc],edx
1006ef07:	8b 16                	mov    edx,DWORD PTR [esi]
1006ef09:	ff 52 54             	call   DWORD PTR [edx+0x54]
1006ef0c:	8b 7e 08             	mov    edi,DWORD PTR [esi+0x8]
1006ef0f:	3b fb                	cmp    edi,ebx
1006ef11:	74 32                	je     0x1006ef45
1006ef13:	8d 47 1c             	lea    eax,[edi+0x1c]
1006ef16:	8b 4f 1c             	mov    ecx,DWORD PTR [edi+0x1c]
1006ef19:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
1006ef1d:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1006ef20:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1006ef24:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1006ef27:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
1006ef2b:	8b cf                	mov    ecx,edi
1006ef2d:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
1006ef30:	8d 44 24 14          	lea    eax,[esp+0x14]
1006ef34:	50                   	push   eax
1006ef35:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
1006ef39:	e8 12 f7 ff ff       	call   0x1006e650
1006ef3e:	8b 7f 10             	mov    edi,DWORD PTR [edi+0x10]
1006ef41:	3b fb                	cmp    edi,ebx
1006ef43:	75 ce                	jne    0x1006ef13
1006ef45:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1006ef4b:	68 d4 40 12 10       	push   0x101240d4
1006ef50:	68 a8 d2 0d 10       	push   0x100dd2a8
1006ef55:	ff 91 e8 03 00 00    	call   DWORD PTR [ecx+0x3e8]
1006ef5b:	83 c4 08             	add    esp,0x8
1006ef5e:	85 c0                	test   eax,eax
1006ef60:	5f                   	pop    edi
1006ef61:	5d                   	pop    ebp
1006ef62:	74 46                	je     0x1006efaa
1006ef64:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1006ef6a:	68 d5 01 00 00       	push   0x1d5
1006ef6f:	68 e4 d2 0d 10       	push   0x100dd2e4
1006ef74:	8b 11                	mov    edx,DWORD PTR [ecx]
1006ef76:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1006ef7c:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1006ef81:	68 68 d2 0d 10       	push   0x100dd268
1006ef86:	68 7c 5d 0c 10       	push   0x100c5d7c
1006ef8b:	50                   	push   eax
1006ef8c:	8b 08                	mov    ecx,DWORD PTR [eax]
1006ef8e:	ff 91 2c 01 00 00    	call   DWORD PTR [ecx+0x12c]
1006ef94:	83 c4 0c             	add    esp,0xc
1006ef97:	8b c6                	mov    eax,esi
1006ef99:	5e                   	pop    esi
1006ef9a:	5b                   	pop    ebx
1006ef9b:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1006ef9f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1006efa6:	83 c4 20             	add    esp,0x20
1006efa9:	c3                   	ret
1006efaa:	8b 15 d4 40 12 10    	mov    edx,DWORD PTR ds:0x101240d4
1006efb0:	6a fc                	push   0xfffffffc
1006efb2:	52                   	push   edx
1006efb3:	ff 15 a8 81 0b 10    	call   DWORD PTR ds:0x100b81a8
1006efb9:	a3 d0 40 12 10       	mov    ds:0x101240d0,eax
1006efbe:	a1 d4 40 12 10       	mov    eax,ds:0x101240d4
1006efc3:	68 90 f6 06 10       	push   0x1006f690
1006efc8:	6a fc                	push   0xfffffffc
1006efca:	50                   	push   eax
1006efcb:	ff 15 c8 81 0b 10    	call   DWORD PTR ds:0x100b81c8
1006efd1:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1006efd5:	8b c6                	mov    eax,esi
1006efd7:	5e                   	pop    esi
1006efd8:	5b                   	pop    ebx
1006efd9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1006efe0:	83 c4 20             	add    esp,0x20
1006efe3:	c3                   	ret
1006efe4:	90                   	nop
1006efe5:	90                   	nop
1006efe6:	90                   	nop
1006efe7:	90                   	nop
1006efe8:	90                   	nop
1006efe9:	90                   	nop
1006efea:	90                   	nop
1006efeb:	90                   	nop
1006efec:	90                   	nop
1006efed:	90                   	nop
1006efee:	90                   	nop
1006efef:	90                   	nop
1006eff0:	56                   	push   esi
1006eff1:	8b f1                	mov    esi,ecx
1006eff3:	e8 18 00 00 00       	call   0x1006f010
1006eff8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1006effd:	74 09                	je     0x1006f008
1006efff:	56                   	push   esi
1006f000:	e8 19 49 03 00       	call   0x100a391e
1006f005:	83 c4 04             	add    esp,0x4
1006f008:	8b c6                	mov    eax,esi
1006f00a:	5e                   	pop    esi
1006f00b:	c2 04 00             	ret    0x4
1006f00e:	90                   	nop
1006f00f:	90                   	nop
1006f010:	55                   	push   ebp
1006f011:	56                   	push   esi
1006f012:	57                   	push   edi
1006f013:	8b f9                	mov    edi,ecx
1006f015:	c7 07 bc b9 0b 10    	mov    DWORD PTR [edi],0x100bb9bc
1006f01b:	a1 d0 40 12 10       	mov    eax,ds:0x101240d0
1006f020:	8b 0d d4 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d4
1006f026:	50                   	push   eax
1006f027:	6a fc                	push   0xfffffffc
1006f029:	51                   	push   ecx
1006f02a:	ff 15 c8 81 0b 10    	call   DWORD PTR ds:0x100b81c8
1006f030:	33 ed                	xor    ebp,ebp
1006f032:	89 2d d8 40 12 10    	mov    DWORD PTR ds:0x101240d8,ebp
1006f038:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1006f03b:	3b c5                	cmp    eax,ebp
1006f03d:	c7 07 4c b9 0b 10    	mov    DWORD PTR [edi],0x100bb94c
1006f043:	74 30                	je     0x1006f075
1006f045:	3b 78 08             	cmp    edi,DWORD PTR [eax+0x8]
1006f048:	75 06                	jne    0x1006f050
1006f04a:	8b 57 10             	mov    edx,DWORD PTR [edi+0x10]
1006f04d:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
1006f050:	3b 78 0c             	cmp    edi,DWORD PTR [eax+0xc]
1006f053:	75 06                	jne    0x1006f05b
1006f055:	8b 4f 14             	mov    ecx,DWORD PTR [edi+0x14]
1006f058:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1006f05b:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
1006f05e:	3b c5                	cmp    eax,ebp
1006f060:	74 06                	je     0x1006f068
1006f062:	8b 57 10             	mov    edx,DWORD PTR [edi+0x10]
1006f065:	89 50 10             	mov    DWORD PTR [eax+0x10],edx
1006f068:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
1006f06b:	3b c5                	cmp    eax,ebp
1006f06d:	74 06                	je     0x1006f075
1006f06f:	8b 4f 14             	mov    ecx,DWORD PTR [edi+0x14]
1006f072:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
1006f075:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
1006f078:	3b cd                	cmp    ecx,ebp
1006f07a:	74 16                	je     0x1006f092
1006f07c:	8b 71 10             	mov    esi,DWORD PTR [ecx+0x10]
1006f07f:	3b cd                	cmp    ecx,ebp
1006f081:	89 69 04             	mov    DWORD PTR [ecx+0x4],ebp
1006f084:	74 06                	je     0x1006f08c
1006f086:	8b 11                	mov    edx,DWORD PTR [ecx]
1006f088:	6a 01                	push   0x1
1006f08a:	ff 12                	call   DWORD PTR [edx]
1006f08c:	3b f5                	cmp    esi,ebp
1006f08e:	8b ce                	mov    ecx,esi
1006f090:	75 ea                	jne    0x1006f07c
1006f092:	8b 35 d8 40 12 10    	mov    esi,DWORD PTR ds:0x101240d8
1006f098:	3b f5                	cmp    esi,ebp
1006f09a:	0f 84 9a 00 00 00    	je     0x1006f13a
1006f0a0:	39 7e 2c             	cmp    DWORD PTR [esi+0x2c],edi
1006f0a3:	75 03                	jne    0x1006f0a8
1006f0a5:	89 76 2c             	mov    DWORD PTR [esi+0x2c],esi
1006f0a8:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
1006f0ab:	53                   	push   ebx
1006f0ac:	3b c7                	cmp    eax,edi
1006f0ae:	75 21                	jne    0x1006f0d1
1006f0b0:	8b 5e 2c             	mov    ebx,DWORD PTR [esi+0x2c]
1006f0b3:	3b d8                	cmp    ebx,eax
1006f0b5:	74 1a                	je     0x1006f0d1
1006f0b7:	3b dd                	cmp    ebx,ebp
1006f0b9:	74 07                	je     0x1006f0c2
1006f0bb:	8b 03                	mov    eax,DWORD PTR [ebx]
1006f0bd:	8b cb                	mov    ecx,ebx
1006f0bf:	ff 50 44             	call   DWORD PTR [eax+0x44]
1006f0c2:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
1006f0c5:	3b cd                	cmp    ecx,ebp
1006f0c7:	74 05                	je     0x1006f0ce
1006f0c9:	8b 11                	mov    edx,DWORD PTR [ecx]
1006f0cb:	ff 52 48             	call   DWORD PTR [edx+0x48]
1006f0ce:	89 5e 30             	mov    DWORD PTR [esi+0x30],ebx
1006f0d1:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006f0d4:	5b                   	pop    ebx
1006f0d5:	3b cf                	cmp    ecx,edi
1006f0d7:	75 37                	jne    0x1006f110
1006f0d9:	3b cd                	cmp    ecx,ebp
1006f0db:	74 33                	je     0x1006f110
1006f0dd:	39 6e 44             	cmp    DWORD PTR [esi+0x44],ebp
1006f0e0:	74 05                	je     0x1006f0e7
1006f0e2:	8b 01                	mov    eax,DWORD PTR [ecx]
1006f0e4:	ff 50 6c             	call   DWORD PTR [eax+0x6c]
1006f0e7:	89 6e 44             	mov    DWORD PTR [esi+0x44],ebp
1006f0ea:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1006f0f0:	8b 11                	mov    edx,DWORD PTR [ecx]
1006f0f2:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1006f0f8:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1006f0fe:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006f101:	3b cd                	cmp    ecx,ebp
1006f103:	d9 5e 48             	fstp   DWORD PTR [esi+0x48]
1006f106:	74 05                	je     0x1006f10d
1006f108:	8b 01                	mov    eax,DWORD PTR [ecx]
1006f10a:	ff 50 40             	call   DWORD PTR [eax+0x40]
1006f10d:	89 6e 34             	mov    DWORD PTR [esi+0x34],ebp
1006f110:	39 7e 38             	cmp    DWORD PTR [esi+0x38],edi
1006f113:	75 1a                	jne    0x1006f12f
1006f115:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
1006f118:	89 6e 38             	mov    DWORD PTR [esi+0x38],ebp
1006f11b:	3b c5                	cmp    eax,ebp
1006f11d:	75 03                	jne    0x1006f122
1006f11f:	55                   	push   ebp
1006f120:	eb 07                	jmp    0x1006f129
1006f122:	8b 0d d4 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d4
1006f128:	51                   	push   ecx
1006f129:	ff 15 b8 81 0b 10    	call   DWORD PTR ds:0x100b81b8
1006f12f:	39 7e 3c             	cmp    DWORD PTR [esi+0x3c],edi
1006f132:	75 06                	jne    0x1006f13a
1006f134:	89 6e 3c             	mov    DWORD PTR [esi+0x3c],ebp
1006f137:	89 6e 40             	mov    DWORD PTR [esi+0x40],ebp
1006f13a:	5f                   	pop    edi
1006f13b:	5e                   	pop    esi
1006f13c:	5d                   	pop    ebp
1006f13d:	c3                   	ret
1006f13e:	90                   	nop
1006f13f:	90                   	nop
1006f140:	56                   	push   esi
1006f141:	8b f1                	mov    esi,ecx
1006f143:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1006f146:	85 c0                	test   eax,eax
1006f148:	74 3a                	je     0x1006f184
1006f14a:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
1006f14d:	85 c0                	test   eax,eax
1006f14f:	75 33                	jne    0x1006f184
1006f151:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1006f157:	8b 01                	mov    eax,DWORD PTR [ecx]
1006f159:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1006f15f:	d8 5e 48             	fcomp  DWORD PTR [esi+0x48]
1006f162:	df e0                	fnstsw ax
1006f164:	f6 c4 01             	test   ah,0x1
1006f167:	75 1b                	jne    0x1006f184
1006f169:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006f16c:	c7 46 44 01 00 00 00 	mov    DWORD PTR [esi+0x44],0x1
1006f173:	a1 6c 4c 12 10       	mov    eax,ds:0x10124c6c
1006f178:	8b 11                	mov    edx,DWORD PTR [ecx]
1006f17a:	50                   	push   eax
1006f17b:	a1 68 4c 12 10       	mov    eax,ds:0x10124c68
1006f180:	50                   	push   eax
1006f181:	ff 52 68             	call   DWORD PTR [edx+0x68]
1006f184:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f188:	74 20                	je     0x1006f1aa
1006f18a:	8b 16                	mov    edx,DWORD PTR [esi]
1006f18c:	8d 46 1c             	lea    eax,[esi+0x1c]
1006f18f:	50                   	push   eax
1006f190:	8b ce                	mov    ecx,esi
1006f192:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
1006f195:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
1006f198:	85 f6                	test   esi,esi
1006f19a:	74 0e                	je     0x1006f1aa
1006f19c:	8b ce                	mov    ecx,esi
1006f19e:	e8 7d f9 ff ff       	call   0x1006eb20
1006f1a3:	8b 76 10             	mov    esi,DWORD PTR [esi+0x10]
1006f1a6:	85 f6                	test   esi,esi
1006f1a8:	75 f2                	jne    0x1006f19c
1006f1aa:	5e                   	pop    esi
1006f1ab:	c3                   	ret
1006f1ac:	90                   	nop
1006f1ad:	90                   	nop
1006f1ae:	90                   	nop
1006f1af:	90                   	nop
1006f1b0:	56                   	push   esi
1006f1b1:	8b f1                	mov    esi,ecx
1006f1b3:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1006f1b9:	57                   	push   edi
1006f1ba:	e8 b1 a1 fd ff       	call   0x10049370
1006f1bf:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1006f1c4:	ff 90 e0 01 00 00    	call   DWORD PTR [eax+0x1e0]
1006f1ca:	8b f8                	mov    edi,eax
1006f1cc:	8a 46 18             	mov    al,BYTE PTR [esi+0x18]
1006f1cf:	a8 01                	test   al,0x1
1006f1d1:	74 22                	je     0x1006f1f5
1006f1d3:	8b 16                	mov    edx,DWORD PTR [esi]
1006f1d5:	8d 46 1c             	lea    eax,[esi+0x1c]
1006f1d8:	50                   	push   eax
1006f1d9:	57                   	push   edi
1006f1da:	8b ce                	mov    ecx,esi
1006f1dc:	ff 52 50             	call   DWORD PTR [edx+0x50]
1006f1df:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
1006f1e2:	85 f6                	test   esi,esi
1006f1e4:	74 0f                	je     0x1006f1f5
1006f1e6:	57                   	push   edi
1006f1e7:	8b ce                	mov    ecx,esi
1006f1e9:	e8 62 f9 ff ff       	call   0x1006eb50
1006f1ee:	8b 76 10             	mov    esi,DWORD PTR [esi+0x10]
1006f1f1:	85 f6                	test   esi,esi
1006f1f3:	75 f1                	jne    0x1006f1e6
1006f1f5:	5f                   	pop    edi
1006f1f6:	5e                   	pop    esi
1006f1f7:	c3                   	ret
1006f1f8:	90                   	nop
1006f1f9:	90                   	nop
1006f1fa:	90                   	nop
1006f1fb:	90                   	nop
1006f1fc:	90                   	nop
1006f1fd:	90                   	nop
1006f1fe:	90                   	nop
1006f1ff:	90                   	nop
1006f200:	56                   	push   esi
1006f201:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1006f205:	57                   	push   edi
1006f206:	8b f9                	mov    edi,ecx
1006f208:	85 f6                	test   esi,esi
1006f20a:	75 03                	jne    0x1006f20f
1006f20c:	8b 77 2c             	mov    esi,DWORD PTR [edi+0x2c]
1006f20f:	3b 77 30             	cmp    esi,DWORD PTR [edi+0x30]
1006f212:	74 1a                	je     0x1006f22e
1006f214:	85 f6                	test   esi,esi
1006f216:	74 07                	je     0x1006f21f
1006f218:	8b 06                	mov    eax,DWORD PTR [esi]
1006f21a:	8b ce                	mov    ecx,esi
1006f21c:	ff 50 44             	call   DWORD PTR [eax+0x44]
1006f21f:	8b 4f 30             	mov    ecx,DWORD PTR [edi+0x30]
1006f222:	85 c9                	test   ecx,ecx
1006f224:	74 05                	je     0x1006f22b
1006f226:	8b 11                	mov    edx,DWORD PTR [ecx]
1006f228:	ff 52 48             	call   DWORD PTR [edx+0x48]
1006f22b:	89 77 30             	mov    DWORD PTR [edi+0x30],esi
1006f22e:	5f                   	pop    edi
1006f22f:	5e                   	pop    esi
1006f230:	c2 04 00             	ret    0x4
1006f233:	90                   	nop
1006f234:	90                   	nop
1006f235:	90                   	nop
1006f236:	90                   	nop
1006f237:	90                   	nop
1006f238:	90                   	nop
1006f239:	90                   	nop
1006f23a:	90                   	nop
1006f23b:	90                   	nop
1006f23c:	90                   	nop
1006f23d:	90                   	nop
1006f23e:	90                   	nop
1006f23f:	90                   	nop
1006f240:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1006f244:	85 c0                	test   eax,eax
1006f246:	74 06                	je     0x1006f24e
1006f248:	89 41 2c             	mov    DWORD PTR [ecx+0x2c],eax
1006f24b:	c2 04 00             	ret    0x4
1006f24e:	89 49 2c             	mov    DWORD PTR [ecx+0x2c],ecx
1006f251:	c2 04 00             	ret    0x4
1006f254:	90                   	nop
1006f255:	90                   	nop
1006f256:	90                   	nop
1006f257:	90                   	nop
1006f258:	90                   	nop
1006f259:	90                   	nop
1006f25a:	90                   	nop
1006f25b:	90                   	nop
1006f25c:	90                   	nop
1006f25d:	90                   	nop
1006f25e:	90                   	nop
1006f25f:	90                   	nop
1006f260:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
1006f263:	c3                   	ret
1006f264:	90                   	nop
1006f265:	90                   	nop
1006f266:	90                   	nop
1006f267:	90                   	nop
1006f268:	90                   	nop
1006f269:	90                   	nop
1006f26a:	90                   	nop
1006f26b:	90                   	nop
1006f26c:	90                   	nop
1006f26d:	90                   	nop
1006f26e:	90                   	nop
1006f26f:	90                   	nop
1006f270:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1006f274:	85 c0                	test   eax,eax
1006f276:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
1006f279:	75 12                	jne    0x1006f28d
1006f27b:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
1006f27e:	85 c0                	test   eax,eax
1006f280:	75 0b                	jne    0x1006f28d
1006f282:	6a 00                	push   0x0
1006f284:	ff 15 b8 81 0b 10    	call   DWORD PTR ds:0x100b81b8
1006f28a:	c2 04 00             	ret    0x4
1006f28d:	a1 d4 40 12 10       	mov    eax,ds:0x101240d4
1006f292:	50                   	push   eax
1006f293:	ff 15 b8 81 0b 10    	call   DWORD PTR ds:0x100b81b8
1006f299:	c2 04 00             	ret    0x4
1006f29c:	90                   	nop
1006f29d:	90                   	nop
1006f29e:	90                   	nop
1006f29f:	90                   	nop
1006f2a0:	53                   	push   ebx
1006f2a1:	55                   	push   ebp
1006f2a2:	56                   	push   esi
1006f2a3:	8b 6c 24 10          	mov    ebp,DWORD PTR [esp+0x10]
1006f2a7:	57                   	push   edi
1006f2a8:	8b f9                	mov    edi,ecx
1006f2aa:	8b 77 30             	mov    esi,DWORD PTR [edi+0x30]
1006f2ad:	85 f6                	test   esi,esi
1006f2af:	74 3b                	je     0x1006f2ec
1006f2b1:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f2b5:	74 35                	je     0x1006f2ec
1006f2b7:	8b 06                	mov    eax,DWORD PTR [esi]
1006f2b9:	55                   	push   ebp
1006f2ba:	8b ce                	mov    ecx,esi
1006f2bc:	ff 50 10             	call   DWORD PTR [eax+0x10]
1006f2bf:	85 c0                	test   eax,eax
1006f2c1:	74 0c                	je     0x1006f2cf
1006f2c3:	5f                   	pop    edi
1006f2c4:	5e                   	pop    esi
1006f2c5:	5d                   	pop    ebp
1006f2c6:	b8 01 00 00 00       	mov    eax,0x1
1006f2cb:	5b                   	pop    ebx
1006f2cc:	c2 04 00             	ret    0x4
1006f2cf:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f2d2:	85 f6                	test   esi,esi
1006f2d4:	74 16                	je     0x1006f2ec
1006f2d6:	55                   	push   ebp
1006f2d7:	6a 00                	push   0x0
1006f2d9:	56                   	push   esi
1006f2da:	8b cf                	mov    ecx,edi
1006f2dc:	e8 af 02 00 00       	call   0x1006f590
1006f2e1:	85 c0                	test   eax,eax
1006f2e3:	75 de                	jne    0x1006f2c3
1006f2e5:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f2e8:	85 f6                	test   esi,esi
1006f2ea:	75 ea                	jne    0x1006f2d6
1006f2ec:	8b 5f 30             	mov    ebx,DWORD PTR [edi+0x30]
1006f2ef:	8b 35 d8 40 12 10    	mov    esi,DWORD PTR ds:0x101240d8
1006f2f5:	3b f3                	cmp    esi,ebx
1006f2f7:	74 3a                	je     0x1006f333
1006f2f9:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f2fd:	74 34                	je     0x1006f333
1006f2ff:	8b 16                	mov    edx,DWORD PTR [esi]
1006f301:	55                   	push   ebp
1006f302:	8b ce                	mov    ecx,esi
1006f304:	ff 52 10             	call   DWORD PTR [edx+0x10]
1006f307:	85 c0                	test   eax,eax
1006f309:	74 0c                	je     0x1006f317
1006f30b:	5f                   	pop    edi
1006f30c:	5e                   	pop    esi
1006f30d:	5d                   	pop    ebp
1006f30e:	b8 01 00 00 00       	mov    eax,0x1
1006f313:	5b                   	pop    ebx
1006f314:	c2 04 00             	ret    0x4
1006f317:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f31a:	85 f6                	test   esi,esi
1006f31c:	74 15                	je     0x1006f333
1006f31e:	55                   	push   ebp
1006f31f:	53                   	push   ebx
1006f320:	56                   	push   esi
1006f321:	8b cf                	mov    ecx,edi
1006f323:	e8 68 02 00 00       	call   0x1006f590
1006f328:	85 c0                	test   eax,eax
1006f32a:	75 97                	jne    0x1006f2c3
1006f32c:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f32f:	85 f6                	test   esi,esi
1006f331:	75 eb                	jne    0x1006f31e
1006f333:	5f                   	pop    edi
1006f334:	5e                   	pop    esi
1006f335:	5d                   	pop    ebp
1006f336:	33 c0                	xor    eax,eax
1006f338:	5b                   	pop    ebx
1006f339:	c2 04 00             	ret    0x4
1006f33c:	90                   	nop
1006f33d:	90                   	nop
1006f33e:	90                   	nop
1006f33f:	90                   	nop
1006f340:	53                   	push   ebx
1006f341:	55                   	push   ebp
1006f342:	56                   	push   esi
1006f343:	8b 6c 24 10          	mov    ebp,DWORD PTR [esp+0x10]
1006f347:	57                   	push   edi
1006f348:	8b f9                	mov    edi,ecx
1006f34a:	8b 77 30             	mov    esi,DWORD PTR [edi+0x30]
1006f34d:	85 f6                	test   esi,esi
1006f34f:	74 3b                	je     0x1006f38c
1006f351:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f355:	74 35                	je     0x1006f38c
1006f357:	8b 06                	mov    eax,DWORD PTR [esi]
1006f359:	55                   	push   ebp
1006f35a:	8b ce                	mov    ecx,esi
1006f35c:	ff 50 14             	call   DWORD PTR [eax+0x14]
1006f35f:	85 c0                	test   eax,eax
1006f361:	74 0c                	je     0x1006f36f
1006f363:	5f                   	pop    edi
1006f364:	5e                   	pop    esi
1006f365:	5d                   	pop    ebp
1006f366:	b8 01 00 00 00       	mov    eax,0x1
1006f36b:	5b                   	pop    ebx
1006f36c:	c2 04 00             	ret    0x4
1006f36f:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f372:	85 f6                	test   esi,esi
1006f374:	74 16                	je     0x1006f38c
1006f376:	55                   	push   ebp
1006f377:	6a 00                	push   0x0
1006f379:	56                   	push   esi
1006f37a:	8b cf                	mov    ecx,edi
1006f37c:	e8 6f 02 00 00       	call   0x1006f5f0
1006f381:	85 c0                	test   eax,eax
1006f383:	75 de                	jne    0x1006f363
1006f385:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f388:	85 f6                	test   esi,esi
1006f38a:	75 ea                	jne    0x1006f376
1006f38c:	8b 5f 30             	mov    ebx,DWORD PTR [edi+0x30]
1006f38f:	8b 35 d8 40 12 10    	mov    esi,DWORD PTR ds:0x101240d8
1006f395:	3b f3                	cmp    esi,ebx
1006f397:	74 3a                	je     0x1006f3d3
1006f399:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f39d:	74 34                	je     0x1006f3d3
1006f39f:	8b 16                	mov    edx,DWORD PTR [esi]
1006f3a1:	55                   	push   ebp
1006f3a2:	8b ce                	mov    ecx,esi
1006f3a4:	ff 52 14             	call   DWORD PTR [edx+0x14]
1006f3a7:	85 c0                	test   eax,eax
1006f3a9:	74 0c                	je     0x1006f3b7
1006f3ab:	5f                   	pop    edi
1006f3ac:	5e                   	pop    esi
1006f3ad:	5d                   	pop    ebp
1006f3ae:	b8 01 00 00 00       	mov    eax,0x1
1006f3b3:	5b                   	pop    ebx
1006f3b4:	c2 04 00             	ret    0x4
1006f3b7:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f3ba:	85 f6                	test   esi,esi
1006f3bc:	74 15                	je     0x1006f3d3
1006f3be:	55                   	push   ebp
1006f3bf:	53                   	push   ebx
1006f3c0:	56                   	push   esi
1006f3c1:	8b cf                	mov    ecx,edi
1006f3c3:	e8 28 02 00 00       	call   0x1006f5f0
1006f3c8:	85 c0                	test   eax,eax
1006f3ca:	75 97                	jne    0x1006f363
1006f3cc:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f3cf:	85 f6                	test   esi,esi
1006f3d1:	75 eb                	jne    0x1006f3be
1006f3d3:	5f                   	pop    edi
1006f3d4:	5e                   	pop    esi
1006f3d5:	5d                   	pop    ebp
1006f3d6:	33 c0                	xor    eax,eax
1006f3d8:	5b                   	pop    ebx
1006f3d9:	c2 04 00             	ret    0x4
1006f3dc:	90                   	nop
1006f3dd:	90                   	nop
1006f3de:	90                   	nop
1006f3df:	90                   	nop
1006f3e0:	53                   	push   ebx
1006f3e1:	56                   	push   esi
1006f3e2:	8b 5c 24 0c          	mov    ebx,DWORD PTR [esp+0xc]
1006f3e6:	57                   	push   edi
1006f3e7:	8b f9                	mov    edi,ecx
1006f3e9:	8b 77 08             	mov    esi,DWORD PTR [edi+0x8]
1006f3ec:	85 f6                	test   esi,esi
1006f3ee:	74 10                	je     0x1006f400
1006f3f0:	53                   	push   ebx
1006f3f1:	56                   	push   esi
1006f3f2:	8b cf                	mov    ecx,edi
1006f3f4:	e8 57 02 00 00       	call   0x1006f650
1006f3f9:	8b 76 10             	mov    esi,DWORD PTR [esi+0x10]
1006f3fc:	85 f6                	test   esi,esi
1006f3fe:	75 f0                	jne    0x1006f3f0
1006f400:	8b 07                	mov    eax,DWORD PTR [edi]
1006f402:	53                   	push   ebx
1006f403:	8b cf                	mov    ecx,edi
1006f405:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1006f408:	5f                   	pop    edi
1006f409:	5e                   	pop    esi
1006f40a:	5b                   	pop    ebx
1006f40b:	c2 04 00             	ret    0x4
1006f40e:	90                   	nop
1006f40f:	90                   	nop
1006f410:	56                   	push   esi
1006f411:	8b f1                	mov    esi,ecx
1006f413:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
1006f416:	85 c0                	test   eax,eax
1006f418:	74 0c                	je     0x1006f426
1006f41a:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006f41d:	85 c9                	test   ecx,ecx
1006f41f:	74 05                	je     0x1006f426
1006f421:	8b 01                	mov    eax,DWORD PTR [ecx]
1006f423:	ff 50 6c             	call   DWORD PTR [eax+0x6c]
1006f426:	c7 46 44 00 00 00 00 	mov    DWORD PTR [esi+0x44],0x0
1006f42d:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1006f433:	8b 11                	mov    edx,DWORD PTR [ecx]
1006f435:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1006f43b:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1006f441:	d9 5e 48             	fstp   DWORD PTR [esi+0x48]
1006f444:	5e                   	pop    esi
1006f445:	c3                   	ret
1006f446:	90                   	nop
1006f447:	90                   	nop
1006f448:	90                   	nop
1006f449:	90                   	nop
1006f44a:	90                   	nop
1006f44b:	90                   	nop
1006f44c:	90                   	nop
1006f44d:	90                   	nop
1006f44e:	90                   	nop
1006f44f:	90                   	nop
1006f450:	33 c0                	xor    eax,eax
1006f452:	c2 0c 00             	ret    0xc
1006f455:	90                   	nop
1006f456:	90                   	nop
1006f457:	90                   	nop
1006f458:	90                   	nop
1006f459:	90                   	nop
1006f45a:	90                   	nop
1006f45b:	90                   	nop
1006f45c:	90                   	nop
1006f45d:	90                   	nop
1006f45e:	90                   	nop
1006f45f:	90                   	nop
1006f460:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1006f464:	53                   	push   ebx
1006f465:	55                   	push   ebp
1006f466:	56                   	push   esi
1006f467:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1006f46b:	57                   	push   edi
1006f46c:	3b f0                	cmp    esi,eax
1006f46e:	8b e9                	mov    ebp,ecx
1006f470:	74 48                	je     0x1006f4ba
1006f472:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f476:	74 42                	je     0x1006f4ba
1006f478:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
1006f47c:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
1006f480:	8b 06                	mov    eax,DWORD PTR [esi]
1006f482:	57                   	push   edi
1006f483:	53                   	push   ebx
1006f484:	8b ce                	mov    ecx,esi
1006f486:	ff 50 18             	call   DWORD PTR [eax+0x18]
1006f489:	85 c0                	test   eax,eax
1006f48b:	74 0c                	je     0x1006f499
1006f48d:	5f                   	pop    edi
1006f48e:	5e                   	pop    esi
1006f48f:	5d                   	pop    ebp
1006f490:	b8 01 00 00 00       	mov    eax,0x1
1006f495:	5b                   	pop    ebx
1006f496:	c2 10 00             	ret    0x10
1006f499:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f49c:	85 f6                	test   esi,esi
1006f49e:	74 1a                	je     0x1006f4ba
1006f4a0:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1006f4a4:	57                   	push   edi
1006f4a5:	53                   	push   ebx
1006f4a6:	51                   	push   ecx
1006f4a7:	56                   	push   esi
1006f4a8:	8b cd                	mov    ecx,ebp
1006f4aa:	e8 b1 ff ff ff       	call   0x1006f460
1006f4af:	85 c0                	test   eax,eax
1006f4b1:	75 da                	jne    0x1006f48d
1006f4b3:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f4b6:	85 f6                	test   esi,esi
1006f4b8:	75 e6                	jne    0x1006f4a0
1006f4ba:	5f                   	pop    edi
1006f4bb:	5e                   	pop    esi
1006f4bc:	5d                   	pop    ebp
1006f4bd:	33 c0                	xor    eax,eax
1006f4bf:	5b                   	pop    ebx
1006f4c0:	c2 10 00             	ret    0x10
1006f4c3:	90                   	nop
1006f4c4:	90                   	nop
1006f4c5:	90                   	nop
1006f4c6:	90                   	nop
1006f4c7:	90                   	nop
1006f4c8:	90                   	nop
1006f4c9:	90                   	nop
1006f4ca:	90                   	nop
1006f4cb:	90                   	nop
1006f4cc:	90                   	nop
1006f4cd:	90                   	nop
1006f4ce:	90                   	nop
1006f4cf:	90                   	nop
1006f4d0:	53                   	push   ebx
1006f4d1:	55                   	push   ebp
1006f4d2:	8b 6c 24 10          	mov    ebp,DWORD PTR [esp+0x10]
1006f4d6:	56                   	push   esi
1006f4d7:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1006f4db:	57                   	push   edi
1006f4dc:	3b f5                	cmp    esi,ebp
1006f4de:	8b d9                	mov    ebx,ecx
1006f4e0:	74 3e                	je     0x1006f520
1006f4e2:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f4e6:	74 38                	je     0x1006f520
1006f4e8:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
1006f4ec:	8b 06                	mov    eax,DWORD PTR [esi]
1006f4ee:	57                   	push   edi
1006f4ef:	8b ce                	mov    ecx,esi
1006f4f1:	ff 50 1c             	call   DWORD PTR [eax+0x1c]
1006f4f4:	85 c0                	test   eax,eax
1006f4f6:	74 0c                	je     0x1006f504
1006f4f8:	5f                   	pop    edi
1006f4f9:	5e                   	pop    esi
1006f4fa:	5d                   	pop    ebp
1006f4fb:	b8 01 00 00 00       	mov    eax,0x1
1006f500:	5b                   	pop    ebx
1006f501:	c2 0c 00             	ret    0xc
1006f504:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f507:	85 f6                	test   esi,esi
1006f509:	74 15                	je     0x1006f520
1006f50b:	57                   	push   edi
1006f50c:	55                   	push   ebp
1006f50d:	56                   	push   esi
1006f50e:	8b cb                	mov    ecx,ebx
1006f510:	e8 bb ff ff ff       	call   0x1006f4d0
1006f515:	85 c0                	test   eax,eax
1006f517:	75 df                	jne    0x1006f4f8
1006f519:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f51c:	85 f6                	test   esi,esi
1006f51e:	75 eb                	jne    0x1006f50b
1006f520:	5f                   	pop    edi
1006f521:	5e                   	pop    esi
1006f522:	5d                   	pop    ebp
1006f523:	33 c0                	xor    eax,eax
1006f525:	5b                   	pop    ebx
1006f526:	c2 0c 00             	ret    0xc
1006f529:	90                   	nop
1006f52a:	90                   	nop
1006f52b:	90                   	nop
1006f52c:	90                   	nop
1006f52d:	90                   	nop
1006f52e:	90                   	nop
1006f52f:	90                   	nop
1006f530:	53                   	push   ebx
1006f531:	55                   	push   ebp
1006f532:	8b 6c 24 10          	mov    ebp,DWORD PTR [esp+0x10]
1006f536:	56                   	push   esi
1006f537:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1006f53b:	57                   	push   edi
1006f53c:	3b f5                	cmp    esi,ebp
1006f53e:	8b d9                	mov    ebx,ecx
1006f540:	74 3e                	je     0x1006f580
1006f542:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f546:	74 38                	je     0x1006f580
1006f548:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
1006f54c:	8b 06                	mov    eax,DWORD PTR [esi]
1006f54e:	57                   	push   edi
1006f54f:	8b ce                	mov    ecx,esi
1006f551:	ff 50 20             	call   DWORD PTR [eax+0x20]
1006f554:	85 c0                	test   eax,eax
1006f556:	74 0c                	je     0x1006f564
1006f558:	5f                   	pop    edi
1006f559:	5e                   	pop    esi
1006f55a:	5d                   	pop    ebp
1006f55b:	b8 01 00 00 00       	mov    eax,0x1
1006f560:	5b                   	pop    ebx
1006f561:	c2 0c 00             	ret    0xc
1006f564:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f567:	85 f6                	test   esi,esi
1006f569:	74 15                	je     0x1006f580
1006f56b:	57                   	push   edi
1006f56c:	55                   	push   ebp
1006f56d:	56                   	push   esi
1006f56e:	8b cb                	mov    ecx,ebx
1006f570:	e8 bb ff ff ff       	call   0x1006f530
1006f575:	85 c0                	test   eax,eax
1006f577:	75 df                	jne    0x1006f558
1006f579:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f57c:	85 f6                	test   esi,esi
1006f57e:	75 eb                	jne    0x1006f56b
1006f580:	5f                   	pop    edi
1006f581:	5e                   	pop    esi
1006f582:	5d                   	pop    ebp
1006f583:	33 c0                	xor    eax,eax
1006f585:	5b                   	pop    ebx
1006f586:	c2 0c 00             	ret    0xc
1006f589:	90                   	nop
1006f58a:	90                   	nop
1006f58b:	90                   	nop
1006f58c:	90                   	nop
1006f58d:	90                   	nop
1006f58e:	90                   	nop
1006f58f:	90                   	nop
1006f590:	53                   	push   ebx
1006f591:	55                   	push   ebp
1006f592:	8b 6c 24 10          	mov    ebp,DWORD PTR [esp+0x10]
1006f596:	56                   	push   esi
1006f597:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1006f59b:	57                   	push   edi
1006f59c:	3b f5                	cmp    esi,ebp
1006f59e:	8b d9                	mov    ebx,ecx
1006f5a0:	74 3e                	je     0x1006f5e0
1006f5a2:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f5a6:	74 38                	je     0x1006f5e0
1006f5a8:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
1006f5ac:	8b 06                	mov    eax,DWORD PTR [esi]
1006f5ae:	57                   	push   edi
1006f5af:	8b ce                	mov    ecx,esi
1006f5b1:	ff 50 10             	call   DWORD PTR [eax+0x10]
1006f5b4:	85 c0                	test   eax,eax
1006f5b6:	74 0c                	je     0x1006f5c4
1006f5b8:	5f                   	pop    edi
1006f5b9:	5e                   	pop    esi
1006f5ba:	5d                   	pop    ebp
1006f5bb:	b8 01 00 00 00       	mov    eax,0x1
1006f5c0:	5b                   	pop    ebx
1006f5c1:	c2 0c 00             	ret    0xc
1006f5c4:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f5c7:	85 f6                	test   esi,esi
1006f5c9:	74 15                	je     0x1006f5e0
1006f5cb:	57                   	push   edi
1006f5cc:	55                   	push   ebp
1006f5cd:	56                   	push   esi
1006f5ce:	8b cb                	mov    ecx,ebx
1006f5d0:	e8 bb ff ff ff       	call   0x1006f590
1006f5d5:	85 c0                	test   eax,eax
1006f5d7:	75 df                	jne    0x1006f5b8
1006f5d9:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f5dc:	85 f6                	test   esi,esi
1006f5de:	75 eb                	jne    0x1006f5cb
1006f5e0:	5f                   	pop    edi
1006f5e1:	5e                   	pop    esi
1006f5e2:	5d                   	pop    ebp
1006f5e3:	33 c0                	xor    eax,eax
1006f5e5:	5b                   	pop    ebx
1006f5e6:	c2 0c 00             	ret    0xc
1006f5e9:	90                   	nop
1006f5ea:	90                   	nop
1006f5eb:	90                   	nop
1006f5ec:	90                   	nop
1006f5ed:	90                   	nop
1006f5ee:	90                   	nop
1006f5ef:	90                   	nop
1006f5f0:	53                   	push   ebx
1006f5f1:	55                   	push   ebp
1006f5f2:	8b 6c 24 10          	mov    ebp,DWORD PTR [esp+0x10]
1006f5f6:	56                   	push   esi
1006f5f7:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1006f5fb:	57                   	push   edi
1006f5fc:	3b f5                	cmp    esi,ebp
1006f5fe:	8b d9                	mov    ebx,ecx
1006f600:	74 3e                	je     0x1006f640
1006f602:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f606:	74 38                	je     0x1006f640
1006f608:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
1006f60c:	8b 06                	mov    eax,DWORD PTR [esi]
1006f60e:	57                   	push   edi
1006f60f:	8b ce                	mov    ecx,esi
1006f611:	ff 50 14             	call   DWORD PTR [eax+0x14]
1006f614:	85 c0                	test   eax,eax
1006f616:	74 0c                	je     0x1006f624
1006f618:	5f                   	pop    edi
1006f619:	5e                   	pop    esi
1006f61a:	5d                   	pop    ebp
1006f61b:	b8 01 00 00 00       	mov    eax,0x1
1006f620:	5b                   	pop    ebx
1006f621:	c2 0c 00             	ret    0xc
1006f624:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f627:	85 f6                	test   esi,esi
1006f629:	74 15                	je     0x1006f640
1006f62b:	57                   	push   edi
1006f62c:	55                   	push   ebp
1006f62d:	56                   	push   esi
1006f62e:	8b cb                	mov    ecx,ebx
1006f630:	e8 bb ff ff ff       	call   0x1006f5f0
1006f635:	85 c0                	test   eax,eax
1006f637:	75 df                	jne    0x1006f618
1006f639:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f63c:	85 f6                	test   esi,esi
1006f63e:	75 eb                	jne    0x1006f62b
1006f640:	5f                   	pop    edi
1006f641:	5e                   	pop    esi
1006f642:	5d                   	pop    ebp
1006f643:	33 c0                	xor    eax,eax
1006f645:	5b                   	pop    ebx
1006f646:	c2 0c 00             	ret    0xc
1006f649:	90                   	nop
1006f64a:	90                   	nop
1006f64b:	90                   	nop
1006f64c:	90                   	nop
1006f64d:	90                   	nop
1006f64e:	90                   	nop
1006f64f:	90                   	nop
1006f650:	53                   	push   ebx
1006f651:	8b 5c 24 0c          	mov    ebx,DWORD PTR [esp+0xc]
1006f655:	55                   	push   ebp
1006f656:	8b 6c 24 0c          	mov    ebp,DWORD PTR [esp+0xc]
1006f65a:	56                   	push   esi
1006f65b:	57                   	push   edi
1006f65c:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1006f65f:	8b f9                	mov    edi,ecx
1006f661:	85 f6                	test   esi,esi
1006f663:	74 10                	je     0x1006f675
1006f665:	53                   	push   ebx
1006f666:	56                   	push   esi
1006f667:	8b cf                	mov    ecx,edi
1006f669:	e8 e2 ff ff ff       	call   0x1006f650
1006f66e:	8b 76 10             	mov    esi,DWORD PTR [esi+0x10]
1006f671:	85 f6                	test   esi,esi
1006f673:	75 f0                	jne    0x1006f665
1006f675:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1006f678:	53                   	push   ebx
1006f679:	8b cd                	mov    ecx,ebp
1006f67b:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1006f67e:	5f                   	pop    edi
1006f67f:	5e                   	pop    esi
1006f680:	5d                   	pop    ebp
1006f681:	5b                   	pop    ebx
1006f682:	c2 08 00             	ret    0x8
1006f685:	90                   	nop
1006f686:	90                   	nop
1006f687:	90                   	nop
1006f688:	90                   	nop
1006f689:	90                   	nop
1006f68a:	90                   	nop
1006f68b:	90                   	nop
1006f68c:	90                   	nop
1006f68d:	90                   	nop
1006f68e:	90                   	nop
1006f68f:	90                   	nop
1006f690:	83 ec 0c             	sub    esp,0xc
1006f693:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1006f697:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1006f69b:	53                   	push   ebx
1006f69c:	55                   	push   ebp
1006f69d:	8b 6c 24 20          	mov    ebp,DWORD PTR [esp+0x20]
1006f6a1:	56                   	push   esi
1006f6a2:	3d 02 02 00 00       	cmp    eax,0x202
1006f6a7:	57                   	push   edi
1006f6a8:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1006f6af:	00 
1006f6b0:	0f 87 bf 03 00 00    	ja     0x1006fa75
1006f6b6:	3d 02 02 00 00       	cmp    eax,0x202
1006f6bb:	0f 84 6e 03 00 00    	je     0x1006fa2f
1006f6c1:	3d 02 01 00 00       	cmp    eax,0x102
1006f6c6:	0f 87 81 02 00 00    	ja     0x1006f94d
1006f6cc:	0f 84 bd 01 00 00    	je     0x1006f88f
1006f6d2:	2d 00 01 00 00       	sub    eax,0x100
1006f6d7:	0f 84 ba 00 00 00    	je     0x1006f797
1006f6dd:	48                   	dec    eax
1006f6de:	0f 85 56 06 00 00    	jne    0x1006fd3a
1006f6e4:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006f6e9:	8b f8                	mov    edi,eax
1006f6eb:	8b 70 30             	mov    esi,DWORD PTR [eax+0x30]
1006f6ee:	85 f6                	test   esi,esi
1006f6f0:	74 45                	je     0x1006f737
1006f6f2:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f6f6:	74 3f                	je     0x1006f737
1006f6f8:	8b 06                	mov    eax,DWORD PTR [esi]
1006f6fa:	55                   	push   ebp
1006f6fb:	8b ce                	mov    ecx,esi
1006f6fd:	ff 50 20             	call   DWORD PTR [eax+0x20]
1006f700:	85 c0                	test   eax,eax
1006f702:	74 0d                	je     0x1006f711
1006f704:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
1006f70b:	00 
1006f70c:	e9 29 06 00 00       	jmp    0x1006fd3a
1006f711:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f714:	85 f6                	test   esi,esi
1006f716:	74 1a                	je     0x1006f732
1006f718:	55                   	push   ebp
1006f719:	6a 00                	push   0x0
1006f71b:	56                   	push   esi
1006f71c:	8b cf                	mov    ecx,edi
1006f71e:	e8 0d fe ff ff       	call   0x1006f530
1006f723:	85 c0                	test   eax,eax
1006f725:	0f 85 e9 01 00 00    	jne    0x1006f914
1006f72b:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f72e:	85 f6                	test   esi,esi
1006f730:	75 e6                	jne    0x1006f718
1006f732:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006f737:	8b 78 30             	mov    edi,DWORD PTR [eax+0x30]
1006f73a:	8b 70 2c             	mov    esi,DWORD PTR [eax+0x2c]
1006f73d:	3b f7                	cmp    esi,edi
1006f73f:	8b d8                	mov    ebx,eax
1006f741:	0f 84 f9 01 00 00    	je     0x1006f940
1006f747:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f74b:	0f 84 ef 01 00 00    	je     0x1006f940
1006f751:	8b 16                	mov    edx,DWORD PTR [esi]
1006f753:	55                   	push   ebp
1006f754:	8b ce                	mov    ecx,esi
1006f756:	ff 52 20             	call   DWORD PTR [edx+0x20]
1006f759:	85 c0                	test   eax,eax
1006f75b:	74 0d                	je     0x1006f76a
1006f75d:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
1006f764:	00 
1006f765:	e9 d0 05 00 00       	jmp    0x1006fd3a
1006f76a:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f76d:	85 f6                	test   esi,esi
1006f76f:	0f 84 cb 01 00 00    	je     0x1006f940
1006f775:	55                   	push   ebp
1006f776:	57                   	push   edi
1006f777:	56                   	push   esi
1006f778:	8b cb                	mov    ecx,ebx
1006f77a:	e8 b1 fd ff ff       	call   0x1006f530
1006f77f:	85 c0                	test   eax,eax
1006f781:	0f 85 8d 01 00 00    	jne    0x1006f914
1006f787:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f78a:	85 f6                	test   esi,esi
1006f78c:	75 e7                	jne    0x1006f775
1006f78e:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
1006f792:	e9 a3 05 00 00       	jmp    0x1006fd3a
1006f797:	8b 3d cc 81 0b 10    	mov    edi,DWORD PTR ds:0x100b81cc
1006f79d:	83 fd 10             	cmp    ebp,0x10
1006f7a0:	8b f5                	mov    esi,ebp
1006f7a2:	75 15                	jne    0x1006f7b9
1006f7a4:	68 a0 00 00 00       	push   0xa0
1006f7a9:	ff d7                	call   edi
1006f7ab:	0f bf f0             	movsx  esi,ax
1006f7ae:	f7 d6                	not    esi
1006f7b0:	c1 ee 1f             	shr    esi,0x1f
1006f7b3:	81 ce a0 00 00 00    	or     esi,0xa0
1006f7b9:	83 fe 11             	cmp    esi,0x11
1006f7bc:	75 15                	jne    0x1006f7d3
1006f7be:	68 a2 00 00 00       	push   0xa2
1006f7c3:	ff d7                	call   edi
1006f7c5:	0f bf f0             	movsx  esi,ax
1006f7c8:	f7 d6                	not    esi
1006f7ca:	c1 ee 1f             	shr    esi,0x1f
1006f7cd:	81 ce a2 00 00 00    	or     esi,0xa2
1006f7d3:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006f7d8:	8b e8                	mov    ebp,eax
1006f7da:	8b 48 30             	mov    ecx,DWORD PTR [eax+0x30]
1006f7dd:	89 0d e0 40 12 10    	mov    DWORD PTR ds:0x101240e0,ecx
1006f7e3:	8b 78 30             	mov    edi,DWORD PTR [eax+0x30]
1006f7e6:	85 ff                	test   edi,edi
1006f7e8:	74 45                	je     0x1006f82f
1006f7ea:	f6 47 18 02          	test   BYTE PTR [edi+0x18],0x2
1006f7ee:	74 3f                	je     0x1006f82f
1006f7f0:	8b 17                	mov    edx,DWORD PTR [edi]
1006f7f2:	56                   	push   esi
1006f7f3:	8b cf                	mov    ecx,edi
1006f7f5:	ff 52 1c             	call   DWORD PTR [edx+0x1c]
1006f7f8:	85 c0                	test   eax,eax
1006f7fa:	74 0d                	je     0x1006f809
1006f7fc:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
1006f803:	00 
1006f804:	e9 31 05 00 00       	jmp    0x1006fd3a
1006f809:	8b 7f 0c             	mov    edi,DWORD PTR [edi+0xc]
1006f80c:	85 ff                	test   edi,edi
1006f80e:	74 1a                	je     0x1006f82a
1006f810:	56                   	push   esi
1006f811:	6a 00                	push   0x0
1006f813:	57                   	push   edi
1006f814:	8b cd                	mov    ecx,ebp
1006f816:	e8 b5 fc ff ff       	call   0x1006f4d0
1006f81b:	85 c0                	test   eax,eax
1006f81d:	0f 85 f1 00 00 00    	jne    0x1006f914
1006f823:	8b 7f 14             	mov    edi,DWORD PTR [edi+0x14]
1006f826:	85 ff                	test   edi,edi
1006f828:	75 e6                	jne    0x1006f810
1006f82a:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006f82f:	8b 68 30             	mov    ebp,DWORD PTR [eax+0x30]
1006f832:	8b 78 2c             	mov    edi,DWORD PTR [eax+0x2c]
1006f835:	3b fd                	cmp    edi,ebp
1006f837:	8b d8                	mov    ebx,eax
1006f839:	0f 84 01 01 00 00    	je     0x1006f940
1006f83f:	f6 47 18 02          	test   BYTE PTR [edi+0x18],0x2
1006f843:	0f 84 f7 00 00 00    	je     0x1006f940
1006f849:	8b 07                	mov    eax,DWORD PTR [edi]
1006f84b:	56                   	push   esi
1006f84c:	8b cf                	mov    ecx,edi
1006f84e:	ff 50 1c             	call   DWORD PTR [eax+0x1c]
1006f851:	85 c0                	test   eax,eax
1006f853:	74 0d                	je     0x1006f862
1006f855:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
1006f85c:	00 
1006f85d:	e9 d8 04 00 00       	jmp    0x1006fd3a
1006f862:	8b 7f 0c             	mov    edi,DWORD PTR [edi+0xc]
1006f865:	85 ff                	test   edi,edi
1006f867:	0f 84 d3 00 00 00    	je     0x1006f940
1006f86d:	56                   	push   esi
1006f86e:	55                   	push   ebp
1006f86f:	57                   	push   edi
1006f870:	8b cb                	mov    ecx,ebx
1006f872:	e8 59 fc ff ff       	call   0x1006f4d0
1006f877:	85 c0                	test   eax,eax
1006f879:	0f 85 95 00 00 00    	jne    0x1006f914
1006f87f:	8b 7f 14             	mov    edi,DWORD PTR [edi+0x14]
1006f882:	85 ff                	test   edi,edi
1006f884:	75 e7                	jne    0x1006f86d
1006f886:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1006f88a:	e9 ab 04 00 00       	jmp    0x1006fd3a
1006f88f:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006f894:	8b 0d e0 40 12 10    	mov    ecx,DWORD PTR ds:0x101240e0
1006f89a:	8b 70 30             	mov    esi,DWORD PTR [eax+0x30]
1006f89d:	3b ce                	cmp    ecx,esi
1006f89f:	0f 85 95 04 00 00    	jne    0x1006fd3a
1006f8a5:	8b fa                	mov    edi,edx
1006f8a7:	8b d8                	mov    ebx,eax
1006f8a9:	83 e7 0f             	and    edi,0xf
1006f8ac:	85 f6                	test   esi,esi
1006f8ae:	74 43                	je     0x1006f8f3
1006f8b0:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f8b4:	74 3d                	je     0x1006f8f3
1006f8b6:	8b 16                	mov    edx,DWORD PTR [esi]
1006f8b8:	57                   	push   edi
1006f8b9:	55                   	push   ebp
1006f8ba:	8b ce                	mov    ecx,esi
1006f8bc:	ff 52 18             	call   DWORD PTR [edx+0x18]
1006f8bf:	85 c0                	test   eax,eax
1006f8c1:	74 0d                	je     0x1006f8d0
1006f8c3:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
1006f8ca:	00 
1006f8cb:	e9 6a 04 00 00       	jmp    0x1006fd3a
1006f8d0:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f8d3:	85 f6                	test   esi,esi
1006f8d5:	74 17                	je     0x1006f8ee
1006f8d7:	57                   	push   edi
1006f8d8:	55                   	push   ebp
1006f8d9:	6a 00                	push   0x0
1006f8db:	56                   	push   esi
1006f8dc:	8b cb                	mov    ecx,ebx
1006f8de:	e8 7d fb ff ff       	call   0x1006f460
1006f8e3:	85 c0                	test   eax,eax
1006f8e5:	75 2d                	jne    0x1006f914
1006f8e7:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f8ea:	85 f6                	test   esi,esi
1006f8ec:	75 e9                	jne    0x1006f8d7
1006f8ee:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006f8f3:	8b 58 30             	mov    ebx,DWORD PTR [eax+0x30]
1006f8f6:	8b 70 2c             	mov    esi,DWORD PTR [eax+0x2c]
1006f8f9:	3b f3                	cmp    esi,ebx
1006f8fb:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1006f8ff:	74 3f                	je     0x1006f940
1006f901:	f6 46 18 02          	test   BYTE PTR [esi+0x18],0x2
1006f905:	74 39                	je     0x1006f940
1006f907:	8b 06                	mov    eax,DWORD PTR [esi]
1006f909:	57                   	push   edi
1006f90a:	55                   	push   ebp
1006f90b:	8b ce                	mov    ecx,esi
1006f90d:	ff 50 18             	call   DWORD PTR [eax+0x18]
1006f910:	85 c0                	test   eax,eax
1006f912:	74 0d                	je     0x1006f921
1006f914:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
1006f91b:	00 
1006f91c:	e9 19 04 00 00       	jmp    0x1006fd3a
1006f921:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
1006f924:	85 f6                	test   esi,esi
1006f926:	74 18                	je     0x1006f940
1006f928:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1006f92c:	57                   	push   edi
1006f92d:	55                   	push   ebp
1006f92e:	53                   	push   ebx
1006f92f:	56                   	push   esi
1006f930:	e8 2b fb ff ff       	call   0x1006f460
1006f935:	85 c0                	test   eax,eax
1006f937:	75 db                	jne    0x1006f914
1006f939:	8b 76 14             	mov    esi,DWORD PTR [esi+0x14]
1006f93c:	85 f6                	test   esi,esi
1006f93e:	75 e8                	jne    0x1006f928
1006f940:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1006f947:	00 
1006f948:	e9 ed 03 00 00       	jmp    0x1006fd3a
1006f94d:	2d 00 02 00 00       	sub    eax,0x200
1006f952:	74 0c                	je     0x1006f960
1006f954:	48                   	dec    eax
1006f955:	0f 84 db 01 00 00    	je     0x1006fb36
1006f95b:	e9 da 03 00 00       	jmp    0x1006fd3a
1006f960:	a1 9c 4c 12 10       	mov    eax,ds:0x10124c9c
1006f965:	85 c0                	test   eax,eax
1006f967:	0f 84 cd 03 00 00    	je     0x1006fd3a
1006f96d:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1006f971:	0f bf d8             	movsx  ebx,ax
1006f974:	c1 e8 10             	shr    eax,0x10
1006f977:	0f bf e8             	movsx  ebp,ax
1006f97a:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006f97f:	8b 48 38             	mov    ecx,DWORD PTR [eax+0x38]
1006f982:	85 c9                	test   ecx,ecx
1006f984:	74 1d                	je     0x1006f9a3
1006f986:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1006f98a:	8b 11                	mov    edx,DWORD PTR [ecx]
1006f98c:	55                   	push   ebp
1006f98d:	53                   	push   ebx
1006f98e:	50                   	push   eax
1006f98f:	ff 52 38             	call   DWORD PTR [edx+0x38]
1006f992:	55                   	push   ebp
1006f993:	53                   	push   ebx
1006f994:	b9 68 4c 12 10       	mov    ecx,0x10124c68
1006f999:	e8 12 0c 02 00       	call   0x100905b0
1006f99e:	e9 97 03 00 00       	jmp    0x1006fd3a
1006f9a3:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1006f9a7:	55                   	push   ebp
1006f9a8:	53                   	push   ebx
1006f9a9:	51                   	push   ecx
1006f9aa:	8b 48 2c             	mov    ecx,DWORD PTR [eax+0x2c]
1006f9ad:	e8 8e f2 ff ff       	call   0x1006ec40
1006f9b2:	8b 35 d8 40 12 10    	mov    esi,DWORD PTR ds:0x101240d8
1006f9b8:	8b f8                	mov    edi,eax
1006f9ba:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006f9bd:	3b f9                	cmp    edi,ecx
1006f9bf:	74 5d                	je     0x1006fa1e
1006f9c1:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
1006f9c4:	85 c0                	test   eax,eax
1006f9c6:	74 09                	je     0x1006f9d1
1006f9c8:	85 c9                	test   ecx,ecx
1006f9ca:	74 05                	je     0x1006f9d1
1006f9cc:	8b 11                	mov    edx,DWORD PTR [ecx]
1006f9ce:	ff 52 6c             	call   DWORD PTR [edx+0x6c]
1006f9d1:	c7 46 44 00 00 00 00 	mov    DWORD PTR [esi+0x44],0x0
1006f9d8:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1006f9de:	8b 01                	mov    eax,DWORD PTR [ecx]
1006f9e0:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1006f9e6:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1006f9ec:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
1006f9ef:	85 c9                	test   ecx,ecx
1006f9f1:	d9 5e 48             	fstp   DWORD PTR [esi+0x48]
1006f9f4:	74 05                	je     0x1006f9fb
1006f9f6:	8b 11                	mov    edx,DWORD PTR [ecx]
1006f9f8:	ff 52 40             	call   DWORD PTR [edx+0x40]
1006f9fb:	85 ff                	test   edi,edi
1006f9fd:	74 07                	je     0x1006fa06
1006f9ff:	8b 07                	mov    eax,DWORD PTR [edi]
1006fa01:	8b cf                	mov    ecx,edi
1006fa03:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
1006fa06:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1006fa0a:	89 7e 34             	mov    DWORD PTR [esi+0x34],edi
1006fa0d:	8b 15 d8 40 12 10    	mov    edx,DWORD PTR ds:0x101240d8
1006fa13:	55                   	push   ebp
1006fa14:	53                   	push   ebx
1006fa15:	51                   	push   ecx
1006fa16:	8b 4a 2c             	mov    ecx,DWORD PTR [edx+0x2c]
1006fa19:	e8 22 f2 ff ff       	call   0x1006ec40
1006fa1e:	55                   	push   ebp
1006fa1f:	53                   	push   ebx
1006fa20:	b9 68 4c 12 10       	mov    ecx,0x10124c68
1006fa25:	e8 86 0b 02 00       	call   0x100905b0
1006fa2a:	e9 0b 03 00 00       	jmp    0x1006fd3a
1006fa2f:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1006fa35:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
1006fa38:	a8 01                	test   al,0x1
1006fa3a:	0f 84 fa 02 00 00    	je     0x1006fd3a
1006fa40:	24 fe                	and    al,0xfe
1006fa42:	8b f2                	mov    esi,edx
1006fa44:	89 41 40             	mov    DWORD PTR [ecx+0x40],eax
1006fa47:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006fa4c:	c1 ee 10             	shr    esi,0x10
1006fa4f:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
1006fa52:	0f bf f6             	movsx  esi,si
1006fa55:	8b 01                	mov    eax,DWORD PTR [ecx]
1006fa57:	56                   	push   esi
1006fa58:	0f bf d2             	movsx  edx,dx
1006fa5b:	52                   	push   edx
1006fa5c:	55                   	push   ebp
1006fa5d:	ff 50 28             	call   DWORD PTR [eax+0x28]
1006fa60:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006fa65:	8b 48 40             	mov    ecx,DWORD PTR [eax+0x40]
1006fa68:	85 c9                	test   ecx,ecx
1006fa6a:	0f 85 ca 02 00 00    	jne    0x1006fd3a
1006fa70:	e9 af 02 00 00       	jmp    0x1006fd24
1006fa75:	05 fd fd ff ff       	add    eax,0xfffffdfd
1006fa7a:	83 f8 07             	cmp    eax,0x7
1006fa7d:	0f 87 b7 02 00 00    	ja     0x1006fd3a
1006fa83:	ff 24 85 78 fd 06 10 	jmp    DWORD PTR [eax*4+0x1006fd78]
1006fa8a:	a1 9c 4c 12 10       	mov    eax,ds:0x10124c9c
1006fa8f:	85 c0                	test   eax,eax
1006fa91:	0f 84 a3 02 00 00    	je     0x1006fd3a
1006fa97:	0f bf ca             	movsx  ecx,dx
1006fa9a:	c1 ea 10             	shr    edx,0x10
1006fa9d:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
1006faa1:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1006faa5:	0f bf d2             	movsx  edx,dx
1006faa8:	8d 44 24 14          	lea    eax,[esp+0x14]
1006faac:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1006fab0:	50                   	push   eax
1006fab1:	51                   	push   ecx
1006fab2:	ff 15 a4 81 0b 10    	call   DWORD PTR ds:0x100b81a4
1006fab8:	8b 35 d8 40 12 10    	mov    esi,DWORD PTR ds:0x101240d8
1006fabe:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
1006fac1:	85 c9                	test   ecx,ecx
1006fac3:	74 37                	je     0x1006fafc
1006fac5:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1006fac9:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1006facd:	52                   	push   edx
1006face:	8b d5                	mov    edx,ebp
1006fad0:	c1 ea 10             	shr    edx,0x10
1006fad3:	0f bf f2             	movsx  esi,dx
1006fad6:	50                   	push   eax
1006fad7:	b8 89 88 88 88       	mov    eax,0x88888889
1006fadc:	f7 ee                	imul   esi
1006fade:	03 d6                	add    edx,esi
1006fae0:	8b 39                	mov    edi,DWORD PTR [ecx]
1006fae2:	c1 fa 06             	sar    edx,0x6
1006fae5:	8b c2                	mov    eax,edx
1006fae7:	81 e5 ff ff 00 00    	and    ebp,0xffff
1006faed:	c1 e8 1f             	shr    eax,0x1f
1006faf0:	03 d0                	add    edx,eax
1006faf2:	52                   	push   edx
1006faf3:	55                   	push   ebp
1006faf4:	ff 57 34             	call   DWORD PTR [edi+0x34]
1006faf7:	e9 3e 02 00 00       	jmp    0x1006fd3a
1006fafc:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1006fb00:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1006fb04:	8b c5                	mov    eax,ebp
1006fb06:	51                   	push   ecx
1006fb07:	c1 e8 10             	shr    eax,0x10
1006fb0a:	0f bf c8             	movsx  ecx,ax
1006fb0d:	b8 89 88 88 88       	mov    eax,0x88888889
1006fb12:	52                   	push   edx
1006fb13:	f7 e9                	imul   ecx
1006fb15:	03 d1                	add    edx,ecx
1006fb17:	81 e5 ff ff 00 00    	and    ebp,0xffff
1006fb1d:	c1 fa 06             	sar    edx,0x6
1006fb20:	8b ca                	mov    ecx,edx
1006fb22:	c1 e9 1f             	shr    ecx,0x1f
1006fb25:	03 d1                	add    edx,ecx
1006fb27:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
1006fb2a:	52                   	push   edx
1006fb2b:	55                   	push   ebp
1006fb2c:	e8 af f1 ff ff       	call   0x1006ece0
1006fb31:	e9 04 02 00 00       	jmp    0x1006fd3a
1006fb36:	a1 9c 4c 12 10       	mov    eax,ds:0x10124c9c
1006fb3b:	85 c0                	test   eax,eax
1006fb3d:	0f 84 f7 01 00 00    	je     0x1006fd3a
1006fb43:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1006fb49:	0f bf fa             	movsx  edi,dx
1006fb4c:	c1 ea 10             	shr    edx,0x10
1006fb4f:	0f bf da             	movsx  ebx,dx
1006fb52:	8b 11                	mov    edx,DWORD PTR [ecx]
1006fb54:	53                   	push   ebx
1006fb55:	57                   	push   edi
1006fb56:	55                   	push   ebp
1006fb57:	ff 52 70             	call   DWORD PTR [edx+0x70]
1006fb5a:	85 c0                	test   eax,eax
1006fb5c:	0f 85 d8 01 00 00    	jne    0x1006fd3a
1006fb62:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006fb67:	8b 48 40             	mov    ecx,DWORD PTR [eax+0x40]
1006fb6a:	85 c9                	test   ecx,ecx
1006fb6c:	74 05                	je     0x1006fb73
1006fb6e:	8b 70 3c             	mov    esi,DWORD PTR [eax+0x3c]
1006fb71:	eb 1e                	jmp    0x1006fb91
1006fb73:	8b 48 2c             	mov    ecx,DWORD PTR [eax+0x2c]
1006fb76:	53                   	push   ebx
1006fb77:	57                   	push   edi
1006fb78:	55                   	push   ebp
1006fb79:	e8 f2 f1 ff ff       	call   0x1006ed70
1006fb7e:	8b f0                	mov    esi,eax
1006fb80:	a1 d4 40 12 10       	mov    eax,ds:0x101240d4
1006fb85:	50                   	push   eax
1006fb86:	ff 15 b8 81 0b 10    	call   DWORD PTR ds:0x100b81b8
1006fb8c:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006fb91:	85 f6                	test   esi,esi
1006fb93:	75 1a                	jne    0x1006fbaf
1006fb95:	8b 70 2c             	mov    esi,DWORD PTR [eax+0x2c]
1006fb98:	53                   	push   ebx
1006fb99:	57                   	push   edi
1006fb9a:	55                   	push   ebp
1006fb9b:	8b 16                	mov    edx,DWORD PTR [esi]
1006fb9d:	8b ce                	mov    ecx,esi
1006fb9f:	ff 52 24             	call   DWORD PTR [edx+0x24]
1006fba2:	85 f6                	test   esi,esi
1006fba4:	0f 84 90 01 00 00    	je     0x1006fd3a
1006fbaa:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006fbaf:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
1006fbb2:	f6 c5 02             	test   ch,0x2
1006fbb5:	75 30                	jne    0x1006fbe7
1006fbb7:	85 f6                	test   esi,esi
1006fbb9:	8b fe                	mov    edi,esi
1006fbbb:	75 03                	jne    0x1006fbc0
1006fbbd:	8b 78 2c             	mov    edi,DWORD PTR [eax+0x2c]
1006fbc0:	8b 48 30             	mov    ecx,DWORD PTR [eax+0x30]
1006fbc3:	8d 58 30             	lea    ebx,[eax+0x30]
1006fbc6:	3b f9                	cmp    edi,ecx
1006fbc8:	74 1d                	je     0x1006fbe7
1006fbca:	85 ff                	test   edi,edi
1006fbcc:	74 07                	je     0x1006fbd5
1006fbce:	8b 07                	mov    eax,DWORD PTR [edi]
1006fbd0:	8b cf                	mov    ecx,edi
1006fbd2:	ff 50 44             	call   DWORD PTR [eax+0x44]
1006fbd5:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1006fbd7:	85 c9                	test   ecx,ecx
1006fbd9:	74 05                	je     0x1006fbe0
1006fbdb:	8b 11                	mov    edx,DWORD PTR [ecx]
1006fbdd:	ff 52 48             	call   DWORD PTR [edx+0x48]
1006fbe0:	89 3b                	mov    DWORD PTR [ebx],edi
1006fbe2:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006fbe7:	89 70 3c             	mov    DWORD PTR [eax+0x3c],esi
1006fbea:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006fbef:	83 48 40 01          	or     DWORD PTR [eax+0x40],0x1
1006fbf3:	e9 42 01 00 00       	jmp    0x1006fd3a
1006fbf8:	a1 9c 4c 12 10       	mov    eax,ds:0x10124c9c
1006fbfd:	85 c0                	test   eax,eax
1006fbff:	0f 84 35 01 00 00    	je     0x1006fd3a
1006fc05:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1006fc09:	0f bf d8             	movsx  ebx,ax
1006fc0c:	c1 e8 10             	shr    eax,0x10
1006fc0f:	0f bf e8             	movsx  ebp,ax
1006fc12:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006fc17:	8b 48 40             	mov    ecx,DWORD PTR [eax+0x40]
1006fc1a:	85 c9                	test   ecx,ecx
1006fc1c:	74 05                	je     0x1006fc23
1006fc1e:	8b 70 3c             	mov    esi,DWORD PTR [eax+0x3c]
1006fc21:	eb 63                	jmp    0x1006fc86
1006fc23:	8b 70 2c             	mov    esi,DWORD PTR [eax+0x2c]
1006fc26:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
1006fc29:	a8 01                	test   al,0x1
1006fc2b:	74 45                	je     0x1006fc72
1006fc2d:	a8 20                	test   al,0x20
1006fc2f:	75 41                	jne    0x1006fc72
1006fc31:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
1006fc34:	3b d9                	cmp    ebx,ecx
1006fc36:	7c 3a                	jl     0x1006fc72
1006fc38:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
1006fc3b:	3b e8                	cmp    ebp,eax
1006fc3d:	7c 33                	jl     0x1006fc72
1006fc3f:	8b 56 24             	mov    edx,DWORD PTR [esi+0x24]
1006fc42:	03 d1                	add    edx,ecx
1006fc44:	3b da                	cmp    ebx,edx
1006fc46:	7d 2a                	jge    0x1006fc72
1006fc48:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
1006fc4b:	03 c8                	add    ecx,eax
1006fc4d:	3b e9                	cmp    ebp,ecx
1006fc4f:	7d 21                	jge    0x1006fc72
1006fc51:	8b 7e 0c             	mov    edi,DWORD PTR [esi+0xc]
1006fc54:	85 ff                	test   edi,edi
1006fc56:	74 1c                	je     0x1006fc74
1006fc58:	55                   	push   ebp
1006fc59:	53                   	push   ebx
1006fc5a:	8b cf                	mov    ecx,edi
1006fc5c:	e8 4f ec ff ff       	call   0x1006e8b0
1006fc61:	85 c0                	test   eax,eax
1006fc63:	75 09                	jne    0x1006fc6e
1006fc65:	8b 7f 14             	mov    edi,DWORD PTR [edi+0x14]
1006fc68:	85 ff                	test   edi,edi
1006fc6a:	75 ec                	jne    0x1006fc58
1006fc6c:	eb 06                	jmp    0x1006fc74
1006fc6e:	8b f0                	mov    esi,eax
1006fc70:	eb 02                	jmp    0x1006fc74
1006fc72:	33 f6                	xor    esi,esi
1006fc74:	8b 15 d4 40 12 10    	mov    edx,DWORD PTR ds:0x101240d4
1006fc7a:	52                   	push   edx
1006fc7b:	ff 15 b8 81 0b 10    	call   DWORD PTR ds:0x100b81b8
1006fc81:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006fc86:	85 f6                	test   esi,esi
1006fc88:	75 0b                	jne    0x1006fc95
1006fc8a:	8b 70 2c             	mov    esi,DWORD PTR [eax+0x2c]
1006fc8d:	85 f6                	test   esi,esi
1006fc8f:	0f 84 a5 00 00 00    	je     0x1006fd3a
1006fc95:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1006fc99:	89 70 3c             	mov    DWORD PTR [eax+0x3c],esi
1006fc9c:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006fca1:	55                   	push   ebp
1006fca2:	53                   	push   ebx
1006fca3:	51                   	push   ecx
1006fca4:	8b 50 40             	mov    edx,DWORD PTR [eax+0x40]
1006fca7:	8b ce                	mov    ecx,esi
1006fca9:	83 ca 02             	or     edx,0x2
1006fcac:	89 50 40             	mov    DWORD PTR [eax+0x40],edx
1006fcaf:	8b 06                	mov    eax,DWORD PTR [esi]
1006fcb1:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
1006fcb4:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
1006fcb7:	f6 c4 02             	test   ah,0x2
1006fcba:	75 7e                	jne    0x1006fd3a
1006fcbc:	8b 3d d8 40 12 10    	mov    edi,DWORD PTR ds:0x101240d8
1006fcc2:	85 f6                	test   esi,esi
1006fcc4:	75 03                	jne    0x1006fcc9
1006fcc6:	8b 77 2c             	mov    esi,DWORD PTR [edi+0x2c]
1006fcc9:	3b 77 30             	cmp    esi,DWORD PTR [edi+0x30]
1006fccc:	74 6c                	je     0x1006fd3a
1006fcce:	85 f6                	test   esi,esi
1006fcd0:	74 07                	je     0x1006fcd9
1006fcd2:	8b 16                	mov    edx,DWORD PTR [esi]
1006fcd4:	8b ce                	mov    ecx,esi
1006fcd6:	ff 52 44             	call   DWORD PTR [edx+0x44]
1006fcd9:	8b 4f 30             	mov    ecx,DWORD PTR [edi+0x30]
1006fcdc:	85 c9                	test   ecx,ecx
1006fcde:	74 05                	je     0x1006fce5
1006fce0:	8b 01                	mov    eax,DWORD PTR [ecx]
1006fce2:	ff 50 48             	call   DWORD PTR [eax+0x48]
1006fce5:	89 77 30             	mov    DWORD PTR [edi+0x30],esi
1006fce8:	eb 50                	jmp    0x1006fd3a
1006fcea:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1006fcf0:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
1006fcf3:	a8 02                	test   al,0x2
1006fcf5:	74 43                	je     0x1006fd3a
1006fcf7:	24 fd                	and    al,0xfd
1006fcf9:	8b f2                	mov    esi,edx
1006fcfb:	89 41 40             	mov    DWORD PTR [ecx+0x40],eax
1006fcfe:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1006fd04:	c1 ee 10             	shr    esi,0x10
1006fd07:	8b 49 3c             	mov    ecx,DWORD PTR [ecx+0x3c]
1006fd0a:	0f bf f6             	movsx  esi,si
1006fd0d:	8b 01                	mov    eax,DWORD PTR [ecx]
1006fd0f:	56                   	push   esi
1006fd10:	0f bf d2             	movsx  edx,dx
1006fd13:	52                   	push   edx
1006fd14:	55                   	push   ebp
1006fd15:	ff 50 30             	call   DWORD PTR [eax+0x30]
1006fd18:	a1 d8 40 12 10       	mov    eax,ds:0x101240d8
1006fd1d:	8b 48 40             	mov    ecx,DWORD PTR [eax+0x40]
1006fd20:	85 c9                	test   ecx,ecx
1006fd22:	75 16                	jne    0x1006fd3a
1006fd24:	8b 40 38             	mov    eax,DWORD PTR [eax+0x38]
1006fd27:	8b 15 d4 40 12 10    	mov    edx,DWORD PTR ds:0x101240d4
1006fd2d:	f7 d8                	neg    eax
1006fd2f:	1b c0                	sbb    eax,eax
1006fd31:	23 c2                	and    eax,edx
1006fd33:	50                   	push   eax
1006fd34:	ff 15 b8 81 0b 10    	call   DWORD PTR ds:0x100b81b8
1006fd3a:	a1 d0 40 12 10       	mov    eax,ds:0x101240d0
1006fd3f:	5f                   	pop    edi
1006fd40:	5e                   	pop    esi
1006fd41:	5d                   	pop    ebp
1006fd42:	85 c0                	test   eax,eax
1006fd44:	5b                   	pop    ebx
1006fd45:	74 27                	je     0x1006fd6e
1006fd47:	8b 4c 24 00          	mov    ecx,DWORD PTR [esp+0x0]
1006fd4b:	85 c9                	test   ecx,ecx
1006fd4d:	75 1f                	jne    0x1006fd6e
1006fd4f:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1006fd53:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1006fd57:	51                   	push   ecx
1006fd58:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1006fd5c:	52                   	push   edx
1006fd5d:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1006fd61:	51                   	push   ecx
1006fd62:	52                   	push   edx
1006fd63:	50                   	push   eax
1006fd64:	ff 15 d8 81 0b 10    	call   DWORD PTR ds:0x100b81d8
1006fd6a:	83 c4 0c             	add    esp,0xc
1006fd6d:	c3                   	ret
1006fd6e:	8b 44 24 00          	mov    eax,DWORD PTR [esp+0x0]
1006fd72:	83 c4 0c             	add    esp,0xc
1006fd75:	c3                   	ret
1006fd76:	8b ff                	mov    edi,edi
1006fd78:	36 fb                	ss sti
1006fd7a:	06                   	push   es
1006fd7b:	10 f8                	adc    al,bh
1006fd7d:	fb                   	sti
1006fd7e:	06                   	push   es
1006fd7f:	10 ea                	adc    dl,ch
1006fd81:	fc                   	cld
1006fd82:	06                   	push   es
1006fd83:	10 f8                	adc    al,bh
1006fd85:	fb                   	sti
1006fd86:	06                   	push   es
1006fd87:	10 3a                	adc    BYTE PTR [edx],bh
1006fd89:	fd                   	std
1006fd8a:	06                   	push   es
1006fd8b:	10 3a                	adc    BYTE PTR [edx],bh
1006fd8d:	fd                   	std
1006fd8e:	06                   	push   es
1006fd8f:	10 3a                	adc    BYTE PTR [edx],bh
1006fd91:	fd                   	std
1006fd92:	06                   	push   es
1006fd93:	10 8a fa 06 10 90    	adc    BYTE PTR [edx-0x6feff906],cl
1006fd99:	90                   	nop
1006fd9a:	90                   	nop
1006fd9b:	90                   	nop
1006fd9c:	90                   	nop
1006fd9d:	90                   	nop
1006fd9e:	90                   	nop
1006fd9f:	90                   	nop
1006fda0:	55                   	push   ebp
1006fda1:	8b 6c 24 0c          	mov    ebp,DWORD PTR [esp+0xc]
1006fda5:	56                   	push   esi
1006fda6:	57                   	push   edi
1006fda7:	8b fd                	mov    edi,ebp
1006fda9:	83 c9 ff             	or     ecx,0xffffffff
1006fdac:	33 c0                	xor    eax,eax
1006fdae:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
1006fdb0:	f7 d1                	not    ecx
1006fdb2:	49                   	dec    ecx
1006fdb3:	83 f9 01             	cmp    ecx,0x1
1006fdb6:	75 5e                	jne    0x1006fe16
1006fdb8:	50                   	push   eax
1006fdb9:	ff 15 d0 81 0b 10    	call   DWORD PTR ds:0x100b81d0
1006fdbf:	8b f0                	mov    esi,eax
1006fdc1:	66 0f be 45 00       	movsx  ax,BYTE PTR [ebp+0x0]
1006fdc6:	66 85 c0             	test   ax,ax
1006fdc9:	7e 4b                	jle    0x1006fe16
1006fdcb:	66 3d ff 00          	cmp    ax,0xff
1006fdcf:	7f 45                	jg     0x1006fe16
1006fdd1:	0f bf c0             	movsx  eax,ax
1006fdd4:	66 8b 04 45 50 d3 0d 	mov    ax,WORD PTR [eax*2+0x100dd350]
1006fddb:	10 
1006fddc:	66 3d ff ff          	cmp    ax,0xffff
1006fde0:	74 34                	je     0x1006fe16
1006fde2:	8b 3d d4 81 0b 10    	mov    edi,DWORD PTR ds:0x100b81d4
1006fde8:	56                   	push   esi
1006fde9:	25 ff 00 00 00       	and    eax,0xff
1006fdee:	6a 01                	push   0x1
1006fdf0:	50                   	push   eax
1006fdf1:	ff d7                	call   edi
1006fdf3:	66 3d ff ff          	cmp    ax,0xffff
1006fdf7:	74 1d                	je     0x1006fe16
1006fdf9:	56                   	push   esi
1006fdfa:	25 ff 00 00 00       	and    eax,0xff
1006fdff:	6a 02                	push   0x2
1006fe01:	50                   	push   eax
1006fe02:	ff d7                	call   edi
1006fe04:	85 c0                	test   eax,eax
1006fe06:	74 0e                	je     0x1006fe16
1006fe08:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1006fe0c:	5f                   	pop    edi
1006fe0d:	5e                   	pop    esi
1006fe0e:	5d                   	pop    ebp
1006fe0f:	88 01                	mov    BYTE PTR [ecx],al
1006fe11:	c6 41 01 00          	mov    BYTE PTR [ecx+0x1],0x0
1006fe15:	c3                   	ret
1006fe16:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
1006fe1a:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
1006fe1e:	56                   	push   esi
1006fe1f:	55                   	push   ebp
1006fe20:	57                   	push   edi
1006fe21:	e8 fa 39 03 00       	call   0x100a3820
1006fe26:	83 c4 0c             	add    esp,0xc
1006fe29:	c6 44 37 ff 00       	mov    BYTE PTR [edi+esi*1-0x1],0x0
1006fe2e:	5f                   	pop    edi
1006fe2f:	5e                   	pop    esi
1006fe30:	5d                   	pop    ebp
1006fe31:	c3                   	ret
1006fe32:	90                   	nop
1006fe33:	90                   	nop
1006fe34:	90                   	nop
1006fe35:	90                   	nop
1006fe36:	90                   	nop
1006fe37:	90                   	nop
1006fe38:	90                   	nop
1006fe39:	90                   	nop
1006fe3a:	90                   	nop
1006fe3b:	90                   	nop
1006fe3c:	90                   	nop
1006fe3d:	90                   	nop
1006fe3e:	90                   	nop
1006fe3f:	90                   	nop
1006fe40:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1006fe44:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1006fe48:	56                   	push   esi
1006fe49:	8b f1                	mov    esi,ecx
1006fe4b:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1006fe4f:	50                   	push   eax
1006fe50:	51                   	push   ecx
1006fe51:	52                   	push   edx
1006fe52:	8b ce                	mov    ecx,esi
1006fe54:	e8 27 e5 ff ff       	call   0x1006e380
1006fe59:	c7 06 30 ba 0b 10    	mov    DWORD PTR [esi],0x100bba30
1006fe5f:	8b c6                	mov    eax,esi
1006fe61:	5e                   	pop    esi
1006fe62:	c2 0c 00             	ret    0xc
1006fe65:	90                   	nop
1006fe66:	90                   	nop
1006fe67:	90                   	nop
1006fe68:	90                   	nop
1006fe69:	90                   	nop
1006fe6a:	90                   	nop
1006fe6b:	90                   	nop
1006fe6c:	90                   	nop
1006fe6d:	90                   	nop
1006fe6e:	90                   	nop
1006fe6f:	90                   	nop
1006fe70:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1006fe76:	e8 f5 d3 fd ff       	call   0x1004d270
1006fe7b:	8d 04 80             	lea    eax,[eax+eax*4]
1006fe7e:	d1 e0                	shl    eax,1
1006fe80:	c3                   	ret
1006fe81:	90                   	nop
1006fe82:	90                   	nop
1006fe83:	90                   	nop
1006fe84:	90                   	nop
1006fe85:	90                   	nop
1006fe86:	90                   	nop
1006fe87:	90                   	nop
1006fe88:	90                   	nop
1006fe89:	90                   	nop
1006fe8a:	90                   	nop
1006fe8b:	90                   	nop
1006fe8c:	90                   	nop
1006fe8d:	90                   	nop
1006fe8e:	90                   	nop
1006fe8f:	90                   	nop
1006fe90:	53                   	push   ebx
1006fe91:	55                   	push   ebp
1006fe92:	56                   	push   esi
1006fe93:	57                   	push   edi
1006fe94:	e8 87 6a fa ff       	call   0x10016920
1006fe99:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1006fe9f:	8b f0                	mov    esi,eax
1006fea1:	e8 ca d3 fd ff       	call   0x1004d270
1006fea6:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
1006feaa:	8b e8                	mov    ebp,eax
1006feac:	8b 7b 0c             	mov    edi,DWORD PTR [ebx+0xc]
1006feaf:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1006feb2:	2b fd                	sub    edi,ebp
1006feb4:	03 f9                	add    edi,ecx
1006feb6:	85 f6                	test   esi,esi
1006feb8:	74 38                	je     0x1006fef2
1006feba:	3b 7b 04             	cmp    edi,DWORD PTR [ebx+0x4]
1006febd:	7c 33                	jl     0x1006fef2
1006febf:	8b 86 00 01 00 00    	mov    eax,DWORD PTR [esi+0x100]
1006fec5:	8b 4b 08             	mov    ecx,DWORD PTR [ebx+0x8]
1006fec8:	8b 13                	mov    edx,DWORD PTR [ebx]
1006feca:	6a 00                	push   0x0
1006fecc:	50                   	push   eax
1006fecd:	a1 ec b6 0d 10       	mov    eax,ds:0x100db6ec
1006fed2:	55                   	push   ebp
1006fed3:	51                   	push   ecx
1006fed4:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1006feda:	83 c2 10             	add    edx,0x10
1006fedd:	57                   	push   edi
1006fede:	52                   	push   edx
1006fedf:	56                   	push   esi
1006fee0:	50                   	push   eax
1006fee1:	e8 1a a2 fd ff       	call   0x1004a100
1006fee6:	8b b6 0c 01 00 00    	mov    esi,DWORD PTR [esi+0x10c]
1006feec:	2b fd                	sub    edi,ebp
1006feee:	85 f6                	test   esi,esi
1006fef0:	75 c8                	jne    0x1006feba
1006fef2:	5f                   	pop    edi
1006fef3:	5e                   	pop    esi
1006fef4:	5d                   	pop    ebp
1006fef5:	5b                   	pop    ebx
1006fef6:	c2 08 00             	ret    0x8
1006fef9:	90                   	nop
1006fefa:	90                   	nop
1006fefb:	90                   	nop
1006fefc:	90                   	nop
1006fefd:	90                   	nop
1006fefe:	90                   	nop
1006feff:	90                   	nop
1006ff00:	6a ff                	push   0xffffffff
1006ff02:	68 f8 60 0b 10       	push   0x100b60f8
1006ff07:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1006ff0d:	50                   	push   eax
1006ff0e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1006ff15:	83 ec 14             	sub    esp,0x14
1006ff18:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1006ff1c:	53                   	push   ebx
1006ff1d:	56                   	push   esi
1006ff1e:	33 db                	xor    ebx,ebx
1006ff20:	57                   	push   edi
1006ff21:	53                   	push   ebx
1006ff22:	8b f1                	mov    esi,ecx
1006ff24:	53                   	push   ebx
1006ff25:	50                   	push   eax
1006ff26:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
1006ff2a:	e8 51 e4 ff ff       	call   0x1006e380
1006ff2f:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1006ff33:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
1006ff37:	51                   	push   ecx
1006ff38:	8b ce                	mov    ecx,esi
1006ff3a:	c7 06 a0 ba 0b 10    	mov    DWORD PTR [esi],0x100bbaa0
1006ff40:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1006ff44:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
1006ff48:	c7 44 24 1c 18 01 00 	mov    DWORD PTR [esp+0x1c],0x118
1006ff4f:	00 
1006ff50:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
1006ff54:	89 5e 30             	mov    DWORD PTR [esi+0x30],ebx
1006ff57:	89 9e f4 08 00 00    	mov    DWORD PTR [esi+0x8f4],ebx
1006ff5d:	c7 86 f8 08 00 00 ff 	mov    DWORD PTR [esi+0x8f8],0xffffffff
1006ff64:	ff ff ff 
1006ff67:	e8 e4 e6 ff ff       	call   0x1006e650
1006ff6c:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
1006ff70:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
1006ff74:	3b c3                	cmp    eax,ebx
1006ff76:	89 56 2c             	mov    DWORD PTR [esi+0x2c],edx
1006ff79:	75 05                	jne    0x1006ff80
1006ff7b:	b8 00 d0 10 10       	mov    eax,0x1010d000
1006ff80:	8d 7e 34             	lea    edi,[esi+0x34]
1006ff83:	6a 7f                	push   0x7f
1006ff85:	50                   	push   eax
1006ff86:	57                   	push   edi
1006ff87:	e8 94 38 03 00       	call   0x100a3820
1006ff8c:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
1006ff90:	83 c4 0c             	add    esp,0xc
1006ff93:	88 5f 7f             	mov    BYTE PTR [edi+0x7f],bl
1006ff96:	8b c6                	mov    eax,esi
1006ff98:	5f                   	pop    edi
1006ff99:	5e                   	pop    esi
1006ff9a:	5b                   	pop    ebx
1006ff9b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1006ffa2:	83 c4 20             	add    esp,0x20
1006ffa5:	c2 0c 00             	ret    0xc
1006ffa8:	90                   	nop
1006ffa9:	90                   	nop
1006ffaa:	90                   	nop
1006ffab:	90                   	nop
1006ffac:	90                   	nop
1006ffad:	90                   	nop
1006ffae:	90                   	nop
1006ffaf:	90                   	nop
1006ffb0:	56                   	push   esi
1006ffb1:	8b f1                	mov    esi,ecx
1006ffb3:	e8 18 00 00 00       	call   0x1006ffd0
1006ffb8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1006ffbd:	74 09                	je     0x1006ffc8
1006ffbf:	56                   	push   esi
1006ffc0:	e8 59 39 03 00       	call   0x100a391e
1006ffc5:	83 c4 04             	add    esp,0x4
1006ffc8:	8b c6                	mov    eax,esi
1006ffca:	5e                   	pop    esi
1006ffcb:	c2 04 00             	ret    0x4
1006ffce:	90                   	nop
1006ffcf:	90                   	nop
1006ffd0:	c7 01 a0 ba 0b 10    	mov    DWORD PTR [ecx],0x100bbaa0
1006ffd6:	e9 45 e5 ff ff       	jmp    0x1006e520
1006ffdb:	90                   	nop
1006ffdc:	90                   	nop
1006ffdd:	90                   	nop
1006ffde:	90                   	nop
1006ffdf:	90                   	nop
1006ffe0:	c7 81 f4 08 00 00 00 	mov    DWORD PTR [ecx+0x8f4],0x0
1006ffe7:	00 00 00 
1006ffea:	c3                   	ret
1006ffeb:	90                   	nop
1006ffec:	90                   	nop
1006ffed:	90                   	nop
1006ffee:	90                   	nop
1006ffef:	90                   	nop

*/
void WidgetManager::WidgetManager() {
    // TODO: Implement WidgetManager
}

