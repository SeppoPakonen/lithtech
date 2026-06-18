#include "ClientScenario.h"

// 0x1001ef40: ClientScenario::AddScenario
/*
1001ef40:	81 ec 38 01 00 00    	sub    esp,0x138
1001ef46:	8d 44 24 00          	lea    eax,[esp+0x0]
1001ef4a:	56                   	push   esi
1001ef4b:	50                   	push   eax
1001ef4c:	8b f1                	mov    esi,ecx
1001ef4e:	68 f0 60 0d 10       	push   0x100d60f0
1001ef53:	e8 a8 eb 06 00       	call   0x1008db00
1001ef58:	83 c4 08             	add    esp,0x8
1001ef5b:	85 c0                	test   eax,eax
1001ef5d:	75 10                	jne    0x1001ef6f
1001ef5f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
1001ef63:	51                   	push   ecx
1001ef64:	e8 67 24 ff ff       	call   0x100113d0
1001ef69:	83 c4 04             	add    esp,0x4
1001ef6c:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1001ef6f:	8d 54 24 04          	lea    edx,[esp+0x4]
1001ef73:	52                   	push   edx
1001ef74:	68 dc 60 0d 10       	push   0x100d60dc
1001ef79:	e8 82 eb 06 00       	call   0x1008db00
1001ef7e:	83 c4 08             	add    esp,0x8
1001ef81:	85 c0                	test   eax,eax
1001ef83:	75 10                	jne    0x1001ef95
1001ef85:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1001ef89:	50                   	push   eax
1001ef8a:	e8 41 24 ff ff       	call   0x100113d0
1001ef8f:	83 c4 04             	add    esp,0x4
1001ef92:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1001ef95:	8d 4c 24 04          	lea    ecx,[esp+0x4]
1001ef99:	51                   	push   ecx
1001ef9a:	68 c8 60 0d 10       	push   0x100d60c8
1001ef9f:	e8 5c eb 06 00       	call   0x1008db00
1001efa4:	83 c4 08             	add    esp,0x8
1001efa7:	85 c0                	test   eax,eax
1001efa9:	75 10                	jne    0x1001efbb
1001efab:	8d 54 24 1c          	lea    edx,[esp+0x1c]
1001efaf:	52                   	push   edx
1001efb0:	e8 1b 24 ff ff       	call   0x100113d0
1001efb5:	83 c4 04             	add    esp,0x4
1001efb8:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
1001efbb:	8d 44 24 04          	lea    eax,[esp+0x4]
1001efbf:	50                   	push   eax
1001efc0:	68 bc 60 0d 10       	push   0x100d60bc
1001efc5:	e8 36 eb 06 00       	call   0x1008db00
1001efca:	83 c4 08             	add    esp,0x8
1001efcd:	85 c0                	test   eax,eax
1001efcf:	75 10                	jne    0x1001efe1
1001efd1:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
1001efd5:	51                   	push   ecx
1001efd6:	e8 f5 23 ff ff       	call   0x100113d0
1001efdb:	83 c4 04             	add    esp,0x4
1001efde:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
1001efe1:	8d 54 24 04          	lea    edx,[esp+0x4]
1001efe5:	52                   	push   edx
1001efe6:	68 b4 60 0d 10       	push   0x100d60b4
1001efeb:	e8 10 eb 06 00       	call   0x1008db00
1001eff0:	83 c4 08             	add    esp,0x8
1001eff3:	85 c0                	test   eax,eax
1001eff5:	75 10                	jne    0x1001f007
1001eff7:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1001effb:	50                   	push   eax
1001effc:	e8 cf 23 ff ff       	call   0x100113d0
1001f001:	83 c4 04             	add    esp,0x4
1001f004:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
1001f007:	8d 4c 24 04          	lea    ecx,[esp+0x4]
1001f00b:	51                   	push   ecx
1001f00c:	68 b0 60 0d 10       	push   0x100d60b0
1001f011:	e8 ea ea 06 00       	call   0x1008db00
1001f016:	83 c4 08             	add    esp,0x8
1001f019:	85 c0                	test   eax,eax
1001f01b:	75 10                	jne    0x1001f02d
1001f01d:	8d 54 24 1c          	lea    edx,[esp+0x1c]
1001f021:	52                   	push   edx
1001f022:	e8 a2 5d 08 00       	call   0x100a4dc9
1001f027:	83 c4 04             	add    esp,0x4
1001f02a:	89 46 1c             	mov    DWORD PTR [esi+0x1c],eax
1001f02d:	8d 44 24 04          	lea    eax,[esp+0x4]
1001f031:	50                   	push   eax
1001f032:	68 a8 60 0d 10       	push   0x100d60a8
1001f037:	e8 c4 ea 06 00       	call   0x1008db00
1001f03c:	83 c4 08             	add    esp,0x8
1001f03f:	85 c0                	test   eax,eax
1001f041:	75 10                	jne    0x1001f053
1001f043:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
1001f047:	51                   	push   ecx
1001f048:	e8 7c 5d 08 00       	call   0x100a4dc9
1001f04d:	83 c4 04             	add    esp,0x4
1001f050:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
1001f053:	8d 54 24 04          	lea    edx,[esp+0x4]
1001f057:	52                   	push   edx
1001f058:	68 a0 60 0d 10       	push   0x100d60a0
1001f05d:	e8 9e ea 06 00       	call   0x1008db00
1001f062:	83 c4 08             	add    esp,0x8
1001f065:	85 c0                	test   eax,eax
1001f067:	75 10                	jne    0x1001f079
1001f069:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1001f06d:	50                   	push   eax
1001f06e:	e8 56 5d 08 00       	call   0x100a4dc9
1001f073:	83 c4 04             	add    esp,0x4
1001f076:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
1001f079:	8d 4c 24 04          	lea    ecx,[esp+0x4]
1001f07d:	51                   	push   ecx
1001f07e:	68 98 60 0d 10       	push   0x100d6098
1001f083:	e8 78 ea 06 00       	call   0x1008db00
1001f088:	83 c4 08             	add    esp,0x8
1001f08b:	85 c0                	test   eax,eax
1001f08d:	75 10                	jne    0x1001f09f
1001f08f:	8d 54 24 1c          	lea    edx,[esp+0x1c]
1001f093:	52                   	push   edx
1001f094:	e8 30 5d 08 00       	call   0x100a4dc9
1001f099:	83 c4 04             	add    esp,0x4
1001f09c:	89 46 24             	mov    DWORD PTR [esi+0x24],eax
1001f09f:	8d 44 24 04          	lea    eax,[esp+0x4]
1001f0a3:	57                   	push   edi
1001f0a4:	50                   	push   eax
1001f0a5:	68 8c 60 0d 10       	push   0x100d608c
1001f0aa:	e8 51 ea 06 00       	call   0x1008db00
1001f0af:	83 c4 08             	add    esp,0x8
1001f0b2:	85 c0                	test   eax,eax
1001f0b4:	75 53                	jne    0x1001f109
1001f0b6:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1001f0bc:	8d 44 24 20          	lea    eax,[esp+0x20]
1001f0c0:	8d 7e 28             	lea    edi,[esi+0x28]
1001f0c3:	50                   	push   eax
1001f0c4:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f0c6:	57                   	push   edi
1001f0c7:	ff 52 08             	call   DWORD PTR [edx+0x8]
1001f0ca:	85 c0                	test   eax,eax
1001f0cc:	74 3b                	je     0x1001f109
1001f0ce:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1001f0d4:	6a 76                	push   0x76
1001f0d6:	68 54 60 0d 10       	push   0x100d6054
1001f0db:	8b 11                	mov    edx,DWORD PTR [ecx]
1001f0dd:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1001f0e3:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1001f0e8:	8d 54 24 20          	lea    edx,[esp+0x20]
1001f0ec:	52                   	push   edx
1001f0ed:	68 08 60 0d 10       	push   0x100d6008
1001f0f2:	8b 08                	mov    ecx,DWORD PTR [eax]
1001f0f4:	68 7c 5d 0c 10       	push   0x100c5d7c
1001f0f9:	50                   	push   eax
1001f0fa:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1001f100:	83 c4 10             	add    esp,0x10
1001f103:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
1001f109:	8d 44 24 08          	lea    eax,[esp+0x8]
1001f10d:	50                   	push   eax
1001f10e:	68 fc 5f 0d 10       	push   0x100d5ffc
1001f113:	e8 e8 e9 06 00       	call   0x1008db00
1001f118:	83 c4 08             	add    esp,0x8
1001f11b:	85 c0                	test   eax,eax
1001f11d:	5f                   	pop    edi
1001f11e:	75 0a                	jne    0x1001f12a
1001f120:	8b 8c 24 30 01 00 00 	mov    ecx,DWORD PTR [esp+0x130]
1001f127:	89 4e 2c             	mov    DWORD PTR [esi+0x2c],ecx
1001f12a:	8d 54 24 04          	lea    edx,[esp+0x4]
1001f12e:	52                   	push   edx
1001f12f:	68 f0 5f 0d 10       	push   0x100d5ff0
1001f134:	e8 c7 e9 06 00       	call   0x1008db00
1001f139:	83 c4 08             	add    esp,0x8
1001f13c:	85 c0                	test   eax,eax
1001f13e:	75 0a                	jne    0x1001f14a
1001f140:	8b 84 24 30 01 00 00 	mov    eax,DWORD PTR [esp+0x130]
1001f147:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
1001f14a:	5e                   	pop    esi
1001f14b:	81 c4 38 01 00 00    	add    esp,0x138
1001f151:	c3                   	ret
1001f152:	90                   	nop
1001f153:	90                   	nop
1001f154:	90                   	nop
1001f155:	90                   	nop
1001f156:	90                   	nop
1001f157:	90                   	nop
1001f158:	90                   	nop
1001f159:	90                   	nop
1001f15a:	90                   	nop
1001f15b:	90                   	nop
1001f15c:	90                   	nop
1001f15d:	90                   	nop
1001f15e:	90                   	nop
1001f15f:	90                   	nop
1001f160:	b9 10 59 11 10       	mov    ecx,0x10115910
1001f165:	e8 26 00 00 00       	call   0x1001f190
1001f16a:	68 80 f1 01 10       	push   0x1001f180
1001f16f:	e8 11 5d 08 00       	call   0x100a4e85
1001f174:	59                   	pop    ecx
1001f175:	c3                   	ret
1001f176:	90                   	nop
1001f177:	90                   	nop
1001f178:	90                   	nop
1001f179:	90                   	nop
1001f17a:	90                   	nop
1001f17b:	90                   	nop
1001f17c:	90                   	nop
1001f17d:	90                   	nop
1001f17e:	90                   	nop
1001f17f:	90                   	nop

*/
void ClientScenario::AddScenario() {
    // TODO: Implement AddScenario
}

