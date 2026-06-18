#include "ConsolePrompt.h"

// 0x10075f40: ConsolePrompt::Invoke
/*
10075f40:	a0 f4 40 12 10       	mov    al,ds:0x101240f4
10075f45:	83 ec 20             	sub    esp,0x20
10075f48:	a8 01                	test   al,0x1
10075f4a:	53                   	push   ebx
10075f4b:	55                   	push   ebp
10075f4c:	56                   	push   esi
10075f4d:	57                   	push   edi
10075f4e:	8b f1                	mov    esi,ecx
10075f50:	75 2c                	jne    0x10075f7e
10075f52:	0c 01                	or     al,0x1
10075f54:	68 e2 06 00 00       	push   0x6e2
10075f59:	a2 f4 40 12 10       	mov    ds:0x101240f4,al
10075f5e:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10075f63:	50                   	push   eax
10075f64:	8b 08                	mov    ecx,DWORD PTR [eax]
10075f66:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10075f6c:	68 40 61 07 10       	push   0x10076140
10075f71:	a3 f0 40 12 10       	mov    ds:0x101240f0,eax
10075f76:	e8 0a ef 02 00       	call   0x100a4e85
10075f7b:	83 c4 0c             	add    esp,0xc
10075f7e:	a0 f4 40 12 10       	mov    al,ds:0x101240f4
10075f83:	a8 02                	test   al,0x2
10075f85:	75 2c                	jne    0x10075fb3
10075f87:	0c 02                	or     al,0x2
10075f89:	68 e6 06 00 00       	push   0x6e6
10075f8e:	a2 f4 40 12 10       	mov    ds:0x101240f4,al
10075f93:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10075f98:	50                   	push   eax
10075f99:	8b 10                	mov    edx,DWORD PTR [eax]
10075f9b:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
10075fa1:	68 10 61 07 10       	push   0x10076110
10075fa6:	a3 f8 40 12 10       	mov    ds:0x101240f8,eax
10075fab:	e8 d5 ee 02 00       	call   0x100a4e85
10075fb0:	83 c4 0c             	add    esp,0xc
10075fb3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10075fb9:	8b 15 f0 40 12 10    	mov    edx,DWORD PTR ds:0x101240f0
10075fbf:	52                   	push   edx
10075fc0:	8b 01                	mov    eax,DWORD PTR [ecx]
10075fc2:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
10075fc8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10075fce:	8b 15 f8 40 12 10    	mov    edx,DWORD PTR ds:0x101240f8
10075fd4:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10075fd8:	52                   	push   edx
10075fd9:	8b 01                	mov    eax,DWORD PTR [ecx]
10075fdb:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
10075fe1:	8b 6e 50             	mov    ebp,DWORD PTR [esi+0x50]
10075fe4:	68 ff 00 00 00       	push   0xff
10075fe9:	68 00 d0 10 10       	push   0x1010d000
10075fee:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10075ff2:	8d 5d 3c             	lea    ebx,[ebp+0x3c]
10075ff5:	53                   	push   ebx
10075ff6:	e8 25 d8 02 00       	call   0x100a3820
10075ffb:	8b fb                	mov    edi,ebx
10075ffd:	83 c9 ff             	or     ecx,0xffffffff
10076000:	33 c0                	xor    eax,eax
10076002:	83 c4 0c             	add    esp,0xc
10076005:	c6 83 ff 00 00 00 00 	mov    BYTE PTR [ebx+0xff],0x0
1007600c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
1007600e:	f7 d1                	not    ecx
10076010:	49                   	dec    ecx
10076011:	53                   	push   ebx
10076012:	89 4d 30             	mov    DWORD PTR [ebp+0x30],ecx
10076015:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1007601b:	e8 00 72 fd ff       	call   0x1004d220
10076020:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
10076024:	89 45 38             	mov    DWORD PTR [ebp+0x38],eax
10076027:	85 ff                	test   edi,edi
10076029:	7c 05                	jl     0x10076030
1007602b:	83 ff 02             	cmp    edi,0x2
1007602e:	7c 36                	jl     0x10076066
10076030:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10076036:	68 51 12 00 00       	push   0x1251
1007603b:	68 f8 d6 0d 10       	push   0x100dd6f8
10076040:	8b 01                	mov    eax,DWORD PTR [ecx]
10076042:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10076048:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1007604d:	57                   	push   edi
1007604e:	68 f0 d7 0d 10       	push   0x100dd7f0
10076053:	68 7c 5d 0c 10       	push   0x100c5d7c
10076058:	8b 08                	mov    ecx,DWORD PTR [eax]
1007605a:	50                   	push   eax
1007605b:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10076061:	83 c4 10             	add    esp,0x10
10076064:	33 ff                	xor    edi,edi
10076066:	8b 54 bc 10          	mov    edx,DWORD PTR [esp+edi*4+0x10]
1007606a:	8d 5e 30             	lea    ebx,[esi+0x30]
1007606d:	6a 1f                	push   0x1f
1007606f:	52                   	push   edx
10076070:	53                   	push   ebx
10076071:	89 7e 2c             	mov    DWORD PTR [esi+0x2c],edi
10076074:	e8 a7 d7 02 00       	call   0x100a3820
10076079:	83 c4 0c             	add    esp,0xc
1007607c:	8d 44 24 20          	lea    eax,[esp+0x20]
10076080:	8b ce                	mov    ecx,esi
10076082:	50                   	push   eax
10076083:	e8 38 86 ff ff       	call   0x1006e6c0
10076088:	8b 2d ec b6 0d 10    	mov    ebp,DWORD PTR ds:0x100db6ec
1007608e:	53                   	push   ebx
1007608f:	8b cd                	mov    ecx,ebp
10076091:	e8 8a 71 fd ff       	call   0x1004d220
10076096:	68 0c 77 0d 10       	push   0x100d770c
1007609b:	8b cd                	mov    ecx,ebp
1007609d:	8b f8                	mov    edi,eax
1007609f:	e8 7c 71 fd ff       	call   0x1004d220
100760a4:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
100760a8:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
100760ac:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
100760b0:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
100760b4:	03 f8                	add    edi,eax
100760b6:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
100760ba:	2b cf                	sub    ecx,edi
100760bc:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100760c0:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
100760c4:	8d 4c 24 10          	lea    ecx,[esp+0x10]
100760c8:	03 c7                	add    eax,edi
100760ca:	51                   	push   ecx
100760cb:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
100760ce:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
100760d2:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
100760d6:	e8 75 85 ff ff       	call   0x1006e650
100760db:	6a 00                	push   0x0
100760dd:	6a 01                	push   0x1
100760df:	8b ce                	mov    ecx,esi
100760e1:	e8 9a 86 ff ff       	call   0x1006e780
100760e6:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
100760e9:	6a 00                	push   0x0
100760eb:	6a 01                	push   0x1
100760ed:	e8 8e 86 ff ff       	call   0x1006e780
100760f2:	8b 56 50             	mov    edx,DWORD PTR [esi+0x50]
100760f5:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100760fb:	52                   	push   edx
100760fc:	e8 ff 90 ff ff       	call   0x1006f200
10076101:	5f                   	pop    edi
10076102:	5e                   	pop    esi
10076103:	5d                   	pop    ebp
10076104:	5b                   	pop    ebx
10076105:	83 c4 20             	add    esp,0x20
10076108:	c2 04 00             	ret    0x4
1007610b:	90                   	nop
1007610c:	90                   	nop
1007610d:	90                   	nop
1007610e:	90                   	nop
1007610f:	90                   	nop
10076110:	a1 f8 40 12 10       	mov    eax,ds:0x101240f8
10076115:	85 c0                	test   eax,eax
10076117:	74 19                	je     0x10076132
10076119:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007611f:	50                   	push   eax
10076120:	8b 11                	mov    edx,DWORD PTR [ecx]
10076122:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10076128:	c7 05 f8 40 12 10 00 	mov    DWORD PTR ds:0x101240f8,0x0
1007612f:	00 00 00 
10076132:	c3                   	ret
10076133:	90                   	nop
10076134:	90                   	nop
10076135:	90                   	nop
10076136:	90                   	nop
10076137:	90                   	nop
10076138:	90                   	nop
10076139:	90                   	nop
1007613a:	90                   	nop
1007613b:	90                   	nop
1007613c:	90                   	nop
1007613d:	90                   	nop
1007613e:	90                   	nop
1007613f:	90                   	nop
10076140:	a1 f0 40 12 10       	mov    eax,ds:0x101240f0
10076145:	85 c0                	test   eax,eax
10076147:	74 19                	je     0x10076162
10076149:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007614f:	50                   	push   eax
10076150:	8b 11                	mov    edx,DWORD PTR [ecx]
10076152:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10076158:	c7 05 f0 40 12 10 00 	mov    DWORD PTR ds:0x101240f0,0x0
1007615f:	00 00 00 
10076162:	c3                   	ret
10076163:	90                   	nop
10076164:	90                   	nop
10076165:	90                   	nop
10076166:	90                   	nop
10076167:	90                   	nop
10076168:	90                   	nop
10076169:	90                   	nop
1007616a:	90                   	nop
1007616b:	90                   	nop
1007616c:	90                   	nop
1007616d:	90                   	nop
1007616e:	90                   	nop
1007616f:	90                   	nop
10076170:	83 ec 10             	sub    esp,0x10
10076173:	53                   	push   ebx
10076174:	8b 1d ec b6 0d 10    	mov    ebx,DWORD PTR ds:0x100db6ec
1007617a:	56                   	push   esi
1007617b:	57                   	push   edi
1007617c:	8b f9                	mov    edi,ecx
1007617e:	8b cb                	mov    ecx,ebx
10076180:	8d 47 30             	lea    eax,[edi+0x30]
10076183:	50                   	push   eax
10076184:	e8 97 70 fd ff       	call   0x1004d220
10076189:	68 0c 77 0d 10       	push   0x100d770c
1007618e:	8b cb                	mov    ecx,ebx
10076190:	8b f0                	mov    esi,eax
10076192:	e8 89 70 fd ff       	call   0x1004d220
10076197:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1007619b:	03 f0                	add    esi,eax
1007619d:	8b 02                	mov    eax,DWORD PTR [edx]
1007619f:	03 c6                	add    eax,esi
100761a1:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
100761a4:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
100761a8:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
100761ac:	8d 44 24 0c          	lea    eax,[esp+0xc]
100761b0:	8b 4a 08             	mov    ecx,DWORD PTR [edx+0x8]
100761b3:	50                   	push   eax
100761b4:	2b ce                	sub    ecx,esi
100761b6:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
100761b9:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
100761bd:	8b 4f 50             	mov    ecx,DWORD PTR [edi+0x50]
100761c0:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
100761c4:	e8 87 84 ff ff       	call   0x1006e650
100761c9:	5f                   	pop    edi
100761ca:	5e                   	pop    esi
100761cb:	5b                   	pop    ebx
100761cc:	83 c4 10             	add    esp,0x10
100761cf:	c2 04 00             	ret    0x4
100761d2:	90                   	nop
100761d3:	90                   	nop
100761d4:	90                   	nop
100761d5:	90                   	nop
100761d6:	90                   	nop
100761d7:	90                   	nop
100761d8:	90                   	nop
100761d9:	90                   	nop
100761da:	90                   	nop
100761db:	90                   	nop
100761dc:	90                   	nop
100761dd:	90                   	nop
100761de:	90                   	nop
100761df:	90                   	nop
100761e0:	56                   	push   esi
100761e1:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
100761e5:	57                   	push   edi
100761e6:	8b f9                	mov    edi,ecx
100761e8:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100761eb:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
100761ee:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100761f1:	68 1c 00 00 e0       	push   0xe000001c
100761f6:	6a 00                	push   0x0
100761f8:	50                   	push   eax
100761f9:	8b 06                	mov    eax,DWORD PTR [esi]
100761fb:	51                   	push   ecx
100761fc:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10076202:	52                   	push   edx
10076203:	50                   	push   eax
10076204:	e8 67 33 fd ff       	call   0x10049570
10076209:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
1007620c:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1007620f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10076212:	6a 04                	push   0x4
10076214:	6a ff                	push   0xffffffff
10076216:	51                   	push   ecx
10076217:	8b 0e                	mov    ecx,DWORD PTR [esi]
10076219:	52                   	push   edx
1007621a:	8b 15 ec b6 0d 10    	mov    edx,DWORD PTR ds:0x100db6ec
10076220:	50                   	push   eax
10076221:	83 c7 30             	add    edi,0x30
10076224:	51                   	push   ecx
10076225:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1007622b:	57                   	push   edi
1007622c:	52                   	push   edx
1007622d:	e8 ce 3e fd ff       	call   0x1004a100
10076232:	5f                   	pop    edi
10076233:	5e                   	pop    esi
10076234:	c2 08 00             	ret    0x8
10076237:	90                   	nop
10076238:	90                   	nop
10076239:	90                   	nop
1007623a:	90                   	nop
1007623b:	90                   	nop
1007623c:	90                   	nop
1007623d:	90                   	nop
1007623e:	90                   	nop
1007623f:	90                   	nop
10076240:	56                   	push   esi
10076241:	57                   	push   edi
10076242:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10076246:	8b f1                	mov    esi,ecx
10076248:	85 ff                	test   edi,edi
1007624a:	74 0f                	je     0x1007625b
1007624c:	83 ff 01             	cmp    edi,0x1
1007624f:	74 0a                	je     0x1007625b
10076251:	5f                   	pop    edi
10076252:	b8 01 00 00 00       	mov    eax,0x1
10076257:	5e                   	pop    esi
10076258:	c2 08 00             	ret    0x8
1007625b:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10076261:	53                   	push   ebx
10076262:	8b 5e 50             	mov    ebx,DWORD PTR [esi+0x50]
10076265:	6a 00                	push   0x0
10076267:	83 c3 3c             	add    ebx,0x3c
1007626a:	e8 91 8f ff ff       	call   0x1006f200
1007626f:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10076272:	6a 03                	push   0x3
10076274:	6a 00                	push   0x0
10076276:	e8 05 85 ff ff       	call   0x1006e780
1007627b:	6a 03                	push   0x3
1007627d:	6a 00                	push   0x0
1007627f:	8b ce                	mov    ecx,esi
10076281:	e8 fa 84 ff ff       	call   0x1006e780
10076286:	e8 95 b1 fd ff       	call   0x10051420
1007628b:	85 ff                	test   edi,edi
1007628d:	75 3e                	jne    0x100762cd
1007628f:	8b fb                	mov    edi,ebx
10076291:	83 c9 ff             	or     ecx,0xffffffff
10076294:	33 c0                	xor    eax,eax
10076296:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
10076298:	f7 d1                	not    ecx
1007629a:	49                   	dec    ecx
1007629b:	74 30                	je     0x100762cd
1007629d:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
100762a0:	83 f8 ff             	cmp    eax,0xffffffff
100762a3:	74 28                	je     0x100762cd
100762a5:	80 3b 5c             	cmp    BYTE PTR [ebx],0x5c
100762a8:	75 0e                	jne    0x100762b8
100762aa:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
100762b0:	53                   	push   ebx
100762b1:	e8 aa 96 fb ff       	call   0x1002f960
100762b6:	eb 15                	jmp    0x100762cd
100762b8:	33 c9                	xor    ecx,ecx
100762ba:	83 f8 01             	cmp    eax,0x1
100762bd:	0f 94 c1             	sete   cl
100762c0:	51                   	push   ecx
100762c1:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
100762c7:	53                   	push   ebx
100762c8:	e8 73 95 fb ff       	call   0x1002f840
100762cd:	8b 5e 50             	mov    ebx,DWORD PTR [esi+0x50]
100762d0:	68 ff 00 00 00       	push   0xff
100762d5:	68 00 d0 10 10       	push   0x1010d000
100762da:	8d 73 3c             	lea    esi,[ebx+0x3c]
100762dd:	56                   	push   esi
100762de:	e8 3d d5 02 00       	call   0x100a3820
100762e3:	8b fe                	mov    edi,esi
100762e5:	83 c9 ff             	or     ecx,0xffffffff
100762e8:	33 c0                	xor    eax,eax
100762ea:	83 c4 0c             	add    esp,0xc
100762ed:	c6 86 ff 00 00 00 00 	mov    BYTE PTR [esi+0xff],0x0
100762f4:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
100762f6:	f7 d1                	not    ecx
100762f8:	49                   	dec    ecx
100762f9:	56                   	push   esi
100762fa:	89 4b 30             	mov    DWORD PTR [ebx+0x30],ecx
100762fd:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10076303:	e8 18 6f fd ff       	call   0x1004d220
10076308:	89 43 38             	mov    DWORD PTR [ebx+0x38],eax
1007630b:	5b                   	pop    ebx
1007630c:	5f                   	pop    edi
1007630d:	b8 01 00 00 00       	mov    eax,0x1
10076312:	5e                   	pop    esi
10076313:	c2 08 00             	ret    0x8
10076316:	90                   	nop
10076317:	90                   	nop
10076318:	90                   	nop
10076319:	90                   	nop
1007631a:	90                   	nop
1007631b:	90                   	nop
1007631c:	90                   	nop
1007631d:	90                   	nop
1007631e:	90                   	nop
1007631f:	90                   	nop
10076320:	b8 01 00 00 00       	mov    eax,0x1
10076325:	c2 04 00             	ret    0x4
10076328:	90                   	nop
10076329:	90                   	nop
1007632a:	90                   	nop
1007632b:	90                   	nop
1007632c:	90                   	nop
1007632d:	90                   	nop
1007632e:	90                   	nop
1007632f:	90                   	nop
10076330:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10076334:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10076338:	56                   	push   esi
10076339:	8b f1                	mov    esi,ecx
1007633b:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1007633f:	50                   	push   eax
10076340:	51                   	push   ecx
10076341:	52                   	push   edx
10076342:	8b ce                	mov    ecx,esi
10076344:	e8 37 80 ff ff       	call   0x1006e380
10076349:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1007634d:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10076351:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
10076354:	33 c0                	xor    eax,eax
10076356:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10076359:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
1007635c:	88 46 3c             	mov    BYTE PTR [esi+0x3c],al
1007635f:	89 86 3c 01 00 00    	mov    DWORD PTR [esi+0x13c],eax
10076365:	c7 06 38 c2 0b 10    	mov    DWORD PTR [esi],0x100bc238
1007636b:	89 8e 40 01 00 00    	mov    DWORD PTR [esi+0x140],ecx
10076371:	c7 86 44 01 00 00 00 	mov    DWORD PTR [esi+0x144],0x100
10076378:	01 00 00 
1007637b:	8b c6                	mov    eax,esi
1007637d:	5e                   	pop    esi
1007637e:	c2 14 00             	ret    0x14
10076381:	90                   	nop
10076382:	90                   	nop
10076383:	90                   	nop
10076384:	90                   	nop
10076385:	90                   	nop
10076386:	90                   	nop
10076387:	90                   	nop
10076388:	90                   	nop
10076389:	90                   	nop
1007638a:	90                   	nop
1007638b:	90                   	nop
1007638c:	90                   	nop
1007638d:	90                   	nop
1007638e:	90                   	nop
1007638f:	90                   	nop
10076390:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10076396:	e8 d5 6e fd ff       	call   0x1004d270
1007639b:	83 c0 04             	add    eax,0x4
1007639e:	c3                   	ret
1007639f:	90                   	nop
100763a0:	8b 81 40 01 00 00    	mov    eax,DWORD PTR [ecx+0x140]
100763a6:	6a 00                	push   0x0
100763a8:	50                   	push   eax
100763a9:	e8 72 85 ff ff       	call   0x1006e920
100763ae:	6a 3c                	push   0x3c
100763b0:	e8 8b 6e fc ff       	call   0x1003d240
100763b5:	59                   	pop    ecx
100763b6:	c3                   	ret
100763b7:	90                   	nop
100763b8:	90                   	nop
100763b9:	90                   	nop
100763ba:	90                   	nop
100763bb:	90                   	nop
100763bc:	90                   	nop
100763bd:	90                   	nop
100763be:	90                   	nop
100763bf:	90                   	nop
100763c0:	c7 81 3c 01 00 00 01 	mov    DWORD PTR [ecx+0x13c],0x1
100763c7:	00 00 00 
100763ca:	c3                   	ret
100763cb:	90                   	nop
100763cc:	90                   	nop
100763cd:	90                   	nop
100763ce:	90                   	nop
100763cf:	90                   	nop
100763d0:	c7 81 3c 01 00 00 00 	mov    DWORD PTR [ecx+0x13c],0x0
100763d7:	00 00 00 
100763da:	c3                   	ret
100763db:	90                   	nop
100763dc:	90                   	nop
100763dd:	90                   	nop
100763de:	90                   	nop
100763df:	90                   	nop
100763e0:	56                   	push   esi
100763e1:	57                   	push   edi
100763e2:	8b f9                	mov    edi,ecx
100763e4:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
100763e8:	8b 87 3c 01 00 00    	mov    eax,DWORD PTR [edi+0x13c]
100763ee:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
100763f1:	8d 04 40             	lea    eax,[eax+eax*2]
100763f4:	8b 0c 85 9c d5 0d 10 	mov    ecx,DWORD PTR [eax*4+0x100dd59c]
100763fb:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
100763fe:	51                   	push   ecx
100763ff:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10076402:	6a 00                	push   0x0
10076404:	52                   	push   edx
10076405:	8b 16                	mov    edx,DWORD PTR [esi]
10076407:	50                   	push   eax
10076408:	51                   	push   ecx
10076409:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1007640f:	52                   	push   edx
10076410:	e8 5b 31 fd ff       	call   0x10049570
10076415:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10076419:	56                   	push   esi
1007641a:	50                   	push   eax
1007641b:	8b cf                	mov    ecx,edi
1007641d:	e8 7e f8 ff ff       	call   0x10075ca0
10076422:	5f                   	pop    edi
10076423:	5e                   	pop    esi
10076424:	c2 08 00             	ret    0x8
10076427:	90                   	nop
10076428:	90                   	nop
10076429:	90                   	nop
1007642a:	90                   	nop
1007642b:	90                   	nop
1007642c:	90                   	nop
1007642d:	90                   	nop
1007642e:	90                   	nop
1007642f:	90                   	nop
10076430:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10076436:	6a 00                	push   0x0
10076438:	e8 c3 8d ff ff       	call   0x1006f200
1007643d:	c3                   	ret
1007643e:	90                   	nop
1007643f:	90                   	nop
10076440:	56                   	push   esi
10076441:	8b f1                	mov    esi,ecx
10076443:	8b 8e 44 01 00 00    	mov    ecx,DWORD PTR [esi+0x144]
10076449:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
1007644c:	49                   	dec    ecx
1007644d:	3b c1                	cmp    eax,ecx
1007644f:	74 37                	je     0x10076488
10076451:	3d ff 00 00 00       	cmp    eax,0xff
10076456:	74 30                	je     0x10076488
10076458:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1007645e:	53                   	push   ebx
1007645f:	8a 5c 24 0c          	mov    bl,BYTE PTR [esp+0xc]
10076463:	0f be d3             	movsx  edx,bl
10076466:	52                   	push   edx
10076467:	e8 a4 6d fd ff       	call   0x1004d210
1007646c:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
1007646f:	03 c8                	add    ecx,eax
10076471:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10076474:	89 4e 38             	mov    DWORD PTR [esi+0x38],ecx
10076477:	88 5c 06 3c          	mov    BYTE PTR [esi+eax*1+0x3c],bl
1007647b:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
1007647e:	40                   	inc    eax
1007647f:	5b                   	pop    ebx
10076480:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10076483:	c6 44 30 3c 00       	mov    BYTE PTR [eax+esi*1+0x3c],0x0
10076488:	5e                   	pop    esi
10076489:	c2 04 00             	ret    0x4
1007648c:	90                   	nop
1007648d:	90                   	nop
1007648e:	90                   	nop
1007648f:	90                   	nop
10076490:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10076494:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10076498:	56                   	push   esi
10076499:	8b f1                	mov    esi,ecx
1007649b:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1007649f:	50                   	push   eax
100764a0:	51                   	push   ecx
100764a1:	52                   	push   edx
100764a2:	8b ce                	mov    ecx,esi
100764a4:	e8 d7 7e ff ff       	call   0x1006e380
100764a9:	c7 06 f8 c6 0b 10    	mov    DWORD PTR [esi],0x100bc6f8
100764af:	c7 46 2c c8 c8 c8 ff 	mov    DWORD PTR [esi+0x2c],0xffc8c8c8
100764b6:	c7 46 30 78 78 46 ff 	mov    DWORD PTR [esi+0x30],0xff467878
100764bd:	c6 46 34 80          	mov    BYTE PTR [esi+0x34],0x80
100764c1:	8b c6                	mov    eax,esi
100764c3:	5e                   	pop    esi
100764c4:	c2 0c 00             	ret    0xc
100764c7:	90                   	nop
100764c8:	90                   	nop
100764c9:	90                   	nop
100764ca:	90                   	nop
100764cb:	90                   	nop
100764cc:	90                   	nop
100764cd:	90                   	nop
100764ce:	90                   	nop
100764cf:	90                   	nop
100764d0:	56                   	push   esi
100764d1:	8b f1                	mov    esi,ecx
100764d3:	e8 18 00 00 00       	call   0x100764f0
100764d8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
100764dd:	74 09                	je     0x100764e8
100764df:	56                   	push   esi
100764e0:	e8 39 d4 02 00       	call   0x100a391e
100764e5:	83 c4 04             	add    esp,0x4
100764e8:	8b c6                	mov    eax,esi
100764ea:	5e                   	pop    esi
100764eb:	c2 04 00             	ret    0x4
100764ee:	90                   	nop
100764ef:	90                   	nop
100764f0:	c7 01 f8 c6 0b 10    	mov    DWORD PTR [ecx],0x100bc6f8
100764f6:	e9 25 80 ff ff       	jmp    0x1006e520
100764fb:	90                   	nop
100764fc:	90                   	nop
100764fd:	90                   	nop
100764fe:	90                   	nop
100764ff:	90                   	nop
10076500:	83 ec 14             	sub    esp,0x14
10076503:	8d 44 24 04          	lea    eax,[esp+0x4]
10076507:	53                   	push   ebx
10076508:	55                   	push   ebp
10076509:	56                   	push   esi
1007650a:	57                   	push   edi
1007650b:	8b f1                	mov    esi,ecx
1007650d:	50                   	push   eax
1007650e:	e8 ad 81 ff ff       	call   0x1006e6c0
10076513:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10076519:	6a 01                	push   0x1
1007651b:	8b 11                	mov    edx,DWORD PTR [ecx]
1007651d:	ff 52 0c             	call   DWORD PTR [edx+0xc]
10076520:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10076526:	33 ed                	xor    ebp,ebp
10076528:	55                   	push   ebp
10076529:	8b 01                	mov    eax,DWORD PTR [ecx]
1007652b:	ff 50 10             	call   DWORD PTR [eax+0x10]
1007652e:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10076534:	6a 02                	push   0x2
10076536:	8b 11                	mov    edx,DWORD PTR [ecx]
10076538:	ff 52 18             	call   DWORD PTR [edx+0x18]
1007653b:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10076541:	6a 01                	push   0x1
10076543:	8b 01                	mov    eax,DWORD PTR [ecx]
10076545:	ff 50 0c             	call   DWORD PTR [eax+0xc]
10076548:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1007654e:	55                   	push   ebp
1007654f:	8b 11                	mov    edx,DWORD PTR [ecx]
10076551:	ff 52 20             	call   DWORD PTR [edx+0x20]
10076554:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1007655a:	6a 01                	push   0x1
1007655c:	8b 01                	mov    eax,DWORD PTR [ecx]
1007655e:	ff 50 24             	call   DWORD PTR [eax+0x24]
10076561:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10076567:	55                   	push   ebp
10076568:	8b 11                	mov    edx,DWORD PTR [ecx]
1007656a:	ff 52 28             	call   DWORD PTR [edx+0x28]
1007656d:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10076573:	55                   	push   ebp
10076574:	8b 01                	mov    eax,DWORD PTR [ecx]
10076576:	ff 50 08             	call   DWORD PTR [eax+0x8]
10076579:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1007657f:	6a 03                	push   0x3
10076581:	8b 11                	mov    edx,DWORD PTR [ecx]
10076583:	ff 52 14             	call   DWORD PTR [edx+0x14]
10076586:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
1007658c:	55                   	push   ebp
1007658d:	8b 01                	mov    eax,DWORD PTR [ecx]
1007658f:	ff 50 1c             	call   DWORD PTR [eax+0x1c]
10076592:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10076598:	8d 7e 38             	lea    edi,[esi+0x38]
1007659b:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
1007659f:	51                   	push   ecx
100765a0:	8b 11                	mov    edx,DWORD PTR [ecx]
100765a2:	d9 1c 24             	fstp   DWORD PTR [esp]
100765a5:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
100765a9:	51                   	push   ecx
100765aa:	d9 1c 24             	fstp   DWORD PTR [esp]
100765ad:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
100765b1:	51                   	push   ecx
100765b2:	d9 1c 24             	fstp   DWORD PTR [esp]
100765b5:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
100765b9:	51                   	push   ecx
100765ba:	d9 1c 24             	fstp   DWORD PTR [esp]
100765bd:	57                   	push   edi
100765be:	ff 92 9c 00 00 00    	call   DWORD PTR [edx+0x9c]
100765c4:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100765ca:	8b 56 30             	mov    edx,DWORD PTR [esi+0x30]
100765cd:	52                   	push   edx
100765ce:	57                   	push   edi
100765cf:	8b 01                	mov    eax,DWORD PTR [ecx]
100765d1:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
100765d7:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100765dd:	8a 56 34             	mov    dl,BYTE PTR [esi+0x34]
100765e0:	52                   	push   edx
100765e1:	57                   	push   edi
100765e2:	8b 01                	mov    eax,DWORD PTR [ecx]
100765e4:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
100765ea:	8d 86 9a 00 00 00    	lea    eax,[esi+0x9a]
100765f0:	b9 04 00 00 00       	mov    ecx,0x4
100765f5:	8b 56 2c             	mov    edx,DWORD PTR [esi+0x2c]
100765f8:	83 c0 30             	add    eax,0x30
100765fb:	c1 ea 18             	shr    edx,0x18
100765fe:	88 50 d1             	mov    BYTE PTR [eax-0x2f],dl
10076601:	8b 56 2c             	mov    edx,DWORD PTR [esi+0x2c]
10076604:	c1 ea 10             	shr    edx,0x10
10076607:	88 50 d0             	mov    BYTE PTR [eax-0x30],dl
1007660a:	8b 56 2c             	mov    edx,DWORD PTR [esi+0x2c]
1007660d:	c1 ea 08             	shr    edx,0x8
10076610:	88 50 cf             	mov    BYTE PTR [eax-0x31],dl
10076613:	8a 56 2c             	mov    dl,BYTE PTR [esi+0x2c]
10076616:	88 50 ce             	mov    BYTE PTR [eax-0x32],dl
10076619:	8b 56 2c             	mov    edx,DWORD PTR [esi+0x2c]
1007661c:	c1 ea 18             	shr    edx,0x18
1007661f:	88 50 e9             	mov    BYTE PTR [eax-0x17],dl
10076622:	8b 56 2c             	mov    edx,DWORD PTR [esi+0x2c]
10076625:	c1 ea 10             	shr    edx,0x10
10076628:	88 50 e8             	mov    BYTE PTR [eax-0x18],dl
1007662b:	8b 56 2c             	mov    edx,DWORD PTR [esi+0x2c]
1007662e:	c1 ea 08             	shr    edx,0x8
10076631:	88 50 e7             	mov    BYTE PTR [eax-0x19],dl
10076634:	8a 56 2c             	mov    dl,BYTE PTR [esi+0x2c]
10076637:	88 50 e6             	mov    BYTE PTR [eax-0x1a],dl
1007663a:	49                   	dec    ecx
1007663b:	75 b8                	jne    0x100765f5
1007663d:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
10076641:	8d 9e 8c 00 00 00    	lea    ebx,[esi+0x8c]
10076647:	89 ae 94 00 00 00    	mov    DWORD PTR [esi+0x94],ebp
1007664d:	89 ae ac 00 00 00    	mov    DWORD PTR [esi+0xac],ebp
10076653:	89 ae c4 00 00 00    	mov    DWORD PTR [esi+0xc4],ebp
10076659:	d9 13                	fst    DWORD PTR [ebx]
1007665b:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
1007665f:	89 ae dc 00 00 00    	mov    DWORD PTR [esi+0xdc],ebp
10076665:	89 ae f4 00 00 00    	mov    DWORD PTR [esi+0xf4],ebp
1007666b:	89 ae 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],ebp
10076671:	89 ae 24 01 00 00    	mov    DWORD PTR [esi+0x124],ebp
10076677:	d9 96 90 00 00 00    	fst    DWORD PTR [esi+0x90]
1007667d:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
10076681:	89 ae 3c 01 00 00    	mov    DWORD PTR [esi+0x13c],ebp
10076687:	6a 01                	push   0x1
10076689:	57                   	push   edi
1007668a:	d8 c2                	fadd   st,st(2)
1007668c:	d9 96 a4 00 00 00    	fst    DWORD PTR [esi+0xa4]
10076692:	d9 c1                	fld    st(1)
10076694:	d9 9e a8 00 00 00    	fstp   DWORD PTR [esi+0xa8]
1007669a:	d9 96 bc 00 00 00    	fst    DWORD PTR [esi+0xbc]
100766a0:	d9 c1                	fld    st(1)
100766a2:	d9 9e c0 00 00 00    	fstp   DWORD PTR [esi+0xc0]
100766a8:	d9 96 d4 00 00 00    	fst    DWORD PTR [esi+0xd4]
100766ae:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
100766b2:	d8 c2                	fadd   st,st(2)
100766b4:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
100766b8:	d9 96 d8 00 00 00    	fst    DWORD PTR [esi+0xd8]
100766be:	d9 c3                	fld    st(3)
100766c0:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100766c4:	d9 9e ec 00 00 00    	fstp   DWORD PTR [esi+0xec]
100766ca:	8b c8                	mov    ecx,eax
100766cc:	89 86 08 01 00 00    	mov    DWORD PTR [esi+0x108],eax
100766d2:	d9 9e f0 00 00 00    	fstp   DWORD PTR [esi+0xf0]
100766d8:	89 8e 38 01 00 00    	mov    DWORD PTR [esi+0x138],ecx
100766de:	d9 9e 04 01 00 00    	fstp   DWORD PTR [esi+0x104]
100766e4:	d9 c1                	fld    st(1)
100766e6:	d9 9e 1c 01 00 00    	fstp   DWORD PTR [esi+0x11c]
100766ec:	d9 9e 20 01 00 00    	fstp   DWORD PTR [esi+0x120]
100766f2:	d9 9e 34 01 00 00    	fstp   DWORD PTR [esi+0x134]
100766f8:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
100766fe:	8b 11                	mov    edx,DWORD PTR [ecx]
10076700:	ff 52 44             	call   DWORD PTR [edx+0x44]
10076703:	8b 0d ec cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfec
10076709:	6a 04                	push   0x4
1007670b:	53                   	push   ebx
1007670c:	8b 01                	mov    eax,DWORD PTR [ecx]
1007670e:	ff 50 38             	call   DWORD PTR [eax+0x38]
10076711:	5f                   	pop    edi
10076712:	5e                   	pop    esi
10076713:	5d                   	pop    ebp
10076714:	5b                   	pop    ebx
10076715:	83 c4 14             	add    esp,0x14
10076718:	c2 08 00             	ret    0x8
1007671b:	90                   	nop
1007671c:	90                   	nop
1007671d:	90                   	nop
1007671e:	90                   	nop
1007671f:	90                   	nop
10076720:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10076724:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10076728:	c1 e0 04             	shl    eax,0x4
1007672b:	53                   	push   ebx
1007672c:	05 b0 d5 0d 10       	add    eax,0x100dd5b0
10076731:	56                   	push   esi
10076732:	57                   	push   edi
10076733:	85 c9                	test   ecx,ecx
10076735:	75 5e                	jne    0x10076795
10076737:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1007673b:	8b 38                	mov    edi,DWORD PTR [eax]
1007673d:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
10076740:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10076743:	8b 0e                	mov    ecx,DWORD PTR [esi]
10076745:	50                   	push   eax
10076746:	51                   	push   ecx
10076747:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1007674d:	6a ff                	push   0xffffffff
1007674f:	6a 00                	push   0x0
10076751:	57                   	push   edi
10076752:	e8 99 4d fd ff       	call   0x1004b4f0
10076757:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
1007675a:	8b 57 18             	mov    edx,DWORD PTR [edi+0x18]
1007675d:	52                   	push   edx
1007675e:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10076761:	8d 0c 00             	lea    ecx,[eax+eax*1]
10076764:	2b d1                	sub    edx,ecx
10076766:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10076769:	52                   	push   edx
1007676a:	8b 16                	mov    edx,DWORD PTR [esi]
1007676c:	03 d0                	add    edx,eax
1007676e:	51                   	push   ecx
1007676f:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10076775:	52                   	push   edx
10076776:	6a ff                	push   0xffffffff
10076778:	6a 00                	push   0x0
1007677a:	53                   	push   ebx
1007677b:	e8 a0 4d fd ff       	call   0x1004b520
10076780:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10076783:	8b 0e                	mov    ecx,DWORD PTR [esi]
10076785:	8b 5e 08             	mov    ebx,DWORD PTR [esi+0x8]
10076788:	50                   	push   eax
10076789:	2b 4f 14             	sub    ecx,DWORD PTR [edi+0x14]
1007678c:	03 cb                	add    ecx,ebx
1007678e:	51                   	push   ecx
1007678f:	6a ff                	push   0xffffffff
10076791:	6a 02                	push   0x2
10076793:	eb 64                	jmp    0x100767f9
10076795:	83 f9 01             	cmp    ecx,0x1
10076798:	75 76                	jne    0x10076810
1007679a:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1007679e:	8b 78 08             	mov    edi,DWORD PTR [eax+0x8]
100767a1:	8b 58 0c             	mov    ebx,DWORD PTR [eax+0xc]
100767a4:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100767aa:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100767ad:	8b 06                	mov    eax,DWORD PTR [esi]
100767af:	52                   	push   edx
100767b0:	50                   	push   eax
100767b1:	6a ff                	push   0xffffffff
100767b3:	6a 00                	push   0x0
100767b5:	57                   	push   edi
100767b6:	e8 35 4d fd ff       	call   0x1004b4f0
100767bb:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
100767be:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
100767c1:	8d 0c 00             	lea    ecx,[eax+eax*1]
100767c4:	2b d1                	sub    edx,ecx
100767c6:	8b 4f 14             	mov    ecx,DWORD PTR [edi+0x14]
100767c9:	52                   	push   edx
100767ca:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100767cd:	03 c2                	add    eax,edx
100767cf:	8b 16                	mov    edx,DWORD PTR [esi]
100767d1:	51                   	push   ecx
100767d2:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100767d8:	50                   	push   eax
100767d9:	52                   	push   edx
100767da:	6a ff                	push   0xffffffff
100767dc:	6a 00                	push   0x0
100767de:	53                   	push   ebx
100767df:	e8 3c 4d fd ff       	call   0x1004b520
100767e4:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100767e7:	8b 57 18             	mov    edx,DWORD PTR [edi+0x18]
100767ea:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100767ed:	2b c2                	sub    eax,edx
100767ef:	03 c1                	add    eax,ecx
100767f1:	8b 0e                	mov    ecx,DWORD PTR [esi]
100767f3:	50                   	push   eax
100767f4:	51                   	push   ecx
100767f5:	6a ff                	push   0xffffffff
100767f7:	6a 01                	push   0x1
100767f9:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100767ff:	57                   	push   edi
10076800:	e8 eb 4c fd ff       	call   0x1004b4f0
10076805:	5f                   	pop    edi
10076806:	5e                   	pop    esi
10076807:	b8 01 00 00 00       	mov    eax,0x1
1007680c:	5b                   	pop    ebx
1007680d:	c2 0c 00             	ret    0xc
10076810:	5f                   	pop    edi
10076811:	5e                   	pop    esi
10076812:	33 c0                	xor    eax,eax
10076814:	5b                   	pop    ebx
10076815:	c2 0c 00             	ret    0xc
10076818:	90                   	nop
10076819:	90                   	nop
1007681a:	90                   	nop
1007681b:	90                   	nop
1007681c:	90                   	nop
1007681d:	90                   	nop
1007681e:	90                   	nop
1007681f:	90                   	nop
10076820:	6a ff                	push   0xffffffff
10076822:	68 2e 65 0b 10       	push   0x100b652e
10076827:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1007682d:	50                   	push   eax
1007682e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10076835:	51                   	push   ecx
10076836:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1007683a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1007683e:	53                   	push   ebx
1007683f:	56                   	push   esi
10076840:	8b f1                	mov    esi,ecx
10076842:	57                   	push   edi
10076843:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10076847:	50                   	push   eax
10076848:	51                   	push   ecx
10076849:	52                   	push   edx
1007684a:	8b ce                	mov    ecx,esi
1007684c:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
10076850:	e8 2b 7b ff ff       	call   0x1006e380
10076855:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10076859:	33 db                	xor    ebx,ebx
1007685b:	25 00 00 00 c0       	and    eax,0xc0000000
10076860:	6a 44                	push   0x44
10076862:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
10076865:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
10076869:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
1007686d:	c7 06 68 c7 0b 10    	mov    DWORD PTR [esi],0x100bc768
10076873:	89 46 68             	mov    DWORD PTR [esi+0x68],eax
10076876:	89 5e 70             	mov    DWORD PTR [esi+0x70],ebx
10076879:	c7 46 74 01 00 00 00 	mov    DWORD PTR [esi+0x74],0x1
10076880:	c7 46 78 01 00 00 00 	mov    DWORD PTR [esi+0x78],0x1
10076887:	89 5e 7c             	mov    DWORD PTR [esi+0x7c],ebx
1007688a:	e8 9a d0 02 00       	call   0x100a3929
1007688f:	8b f8                	mov    edi,eax
10076891:	83 c4 04             	add    esp,0x4
10076894:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
10076898:	3b fb                	cmp    edi,ebx
1007689a:	c6 44 24 18 01       	mov    BYTE PTR [esp+0x18],0x1
1007689f:	74 4e                	je     0x100768ef
100768a1:	53                   	push   ebx
100768a2:	6a 03                	push   0x3
100768a4:	56                   	push   esi
100768a5:	8b cf                	mov    ecx,edi
100768a7:	e8 d4 7a ff ff       	call   0x1006e380
100768ac:	53                   	push   ebx
100768ad:	8b cf                	mov    ecx,edi
100768af:	c6 44 24 1c 02       	mov    BYTE PTR [esp+0x1c],0x2
100768b4:	c7 07 10 bb 0b 10    	mov    DWORD PTR [edi],0x100bbb10
100768ba:	89 5f 2c             	mov    DWORD PTR [edi+0x2c],ebx
100768bd:	89 5f 30             	mov    DWORD PTR [edi+0x30],ebx
100768c0:	e8 ab 9e ff ff       	call   0x10070770
100768c5:	53                   	push   ebx
100768c6:	8b cf                	mov    ecx,edi
100768c8:	c6 44 24 1c 03       	mov    BYTE PTR [esp+0x1c],0x3
100768cd:	c7 07 88 bb 0b 10    	mov    DWORD PTR [edi],0x100bbb88
100768d3:	c7 47 38 48 41 12 10 	mov    DWORD PTR [edi+0x38],0x10124148
100768da:	89 5f 3c             	mov    DWORD PTR [edi+0x3c],ebx
100768dd:	ff 15 04 bc 0b 10    	call   DWORD PTR ds:0x100bbc04
100768e3:	89 47 40             	mov    DWORD PTR [edi+0x40],eax
100768e6:	c7 47 34 00 41 12 10 	mov    DWORD PTR [edi+0x34],0x10124100
100768ed:	eb 02                	jmp    0x100768f1
100768ef:	33 ff                	xor    edi,edi
100768f1:	6a 44                	push   0x44
100768f3:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
100768f7:	89 7e 2c             	mov    DWORD PTR [esi+0x2c],edi
100768fa:	e8 2a d0 02 00       	call   0x100a3929
100768ff:	8b f8                	mov    edi,eax
10076901:	83 c4 04             	add    esp,0x4
10076904:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
10076908:	3b fb                	cmp    edi,ebx
1007690a:	c6 44 24 18 04       	mov    BYTE PTR [esp+0x18],0x4
1007690f:	74 52                	je     0x10076963
10076911:	53                   	push   ebx
10076912:	6a 03                	push   0x3
10076914:	56                   	push   esi
10076915:	8b cf                	mov    ecx,edi
10076917:	e8 64 7a ff ff       	call   0x1006e380
1007691c:	53                   	push   ebx
1007691d:	8b cf                	mov    ecx,edi
1007691f:	c6 44 24 1c 05       	mov    BYTE PTR [esp+0x1c],0x5
10076924:	c7 07 10 bb 0b 10    	mov    DWORD PTR [edi],0x100bbb10
1007692a:	c7 47 2c 01 00 00 00 	mov    DWORD PTR [edi+0x2c],0x1
10076931:	89 5f 30             	mov    DWORD PTR [edi+0x30],ebx
10076934:	e8 37 9e ff ff       	call   0x10070770
10076939:	53                   	push   ebx
1007693a:	8b cf                	mov    ecx,edi
1007693c:	c6 44 24 1c 06       	mov    BYTE PTR [esp+0x1c],0x6
10076941:	c7 07 88 bb 0b 10    	mov    DWORD PTR [edi],0x100bbb88
10076947:	c7 47 38 48 41 12 10 	mov    DWORD PTR [edi+0x38],0x10124148
1007694e:	89 5f 3c             	mov    DWORD PTR [edi+0x3c],ebx
10076951:	ff 15 04 bc 0b 10    	call   DWORD PTR ds:0x100bbc04
10076957:	89 47 40             	mov    DWORD PTR [edi+0x40],eax
1007695a:	c7 47 34 00 41 12 10 	mov    DWORD PTR [edi+0x34],0x10124100
10076961:	eb 02                	jmp    0x10076965
10076963:	33 ff                	xor    edi,edi
10076965:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10076968:	88 5c 24 18          	mov    BYTE PTR [esp+0x18],bl
1007696c:	a9 00 00 00 80       	test   eax,0x80000000
10076971:	89 7e 30             	mov    DWORD PTR [esi+0x30],edi
10076974:	74 3d                	je     0x100769b3
10076976:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
10076979:	b9 40 c5 11 10       	mov    ecx,0x1011c540
1007697e:	8b d1                	mov    edx,ecx
10076980:	85 d2                	test   edx,edx
10076982:	75 05                	jne    0x10076989
10076984:	b9 48 41 12 10       	mov    ecx,0x10124148
10076989:	89 48 38             	mov    DWORD PTR [eax+0x38],ecx
1007698c:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
1007698f:	83 c9 10             	or     ecx,0x10
10076992:	89 48 3c             	mov    DWORD PTR [eax+0x3c],ecx
10076995:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10076998:	b9 40 c5 11 10       	mov    ecx,0x1011c540
1007699d:	8b d1                	mov    edx,ecx
1007699f:	85 d2                	test   edx,edx
100769a1:	75 05                	jne    0x100769a8
100769a3:	b9 48 41 12 10       	mov    ecx,0x10124148
100769a8:	89 48 38             	mov    DWORD PTR [eax+0x38],ecx
100769ab:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
100769ae:	83 c9 30             	or     ecx,0x30
100769b1:	eb 3b                	jmp    0x100769ee
100769b3:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
100769b6:	b9 5c c5 11 10       	mov    ecx,0x1011c55c
100769bb:	8b d1                	mov    edx,ecx
100769bd:	85 d2                	test   edx,edx
100769bf:	75 05                	jne    0x100769c6
100769c1:	b9 48 41 12 10       	mov    ecx,0x10124148
100769c6:	89 48 38             	mov    DWORD PTR [eax+0x38],ecx
100769c9:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
100769cc:	83 c9 10             	or     ecx,0x10
100769cf:	89 48 3c             	mov    DWORD PTR [eax+0x3c],ecx
100769d2:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
100769d5:	b9 5c c5 11 10       	mov    ecx,0x1011c55c
100769da:	8b d1                	mov    edx,ecx
100769dc:	85 d2                	test   edx,edx
100769de:	75 05                	jne    0x100769e5
100769e0:	b9 48 41 12 10       	mov    ecx,0x10124148
100769e5:	89 48 38             	mov    DWORD PTR [eax+0x38],ecx
100769e8:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
100769eb:	83 c9 50             	or     ecx,0x50
100769ee:	89 48 3c             	mov    DWORD PTR [eax+0x3c],ecx
100769f1:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
100769f5:	3b c3                	cmp    eax,ebx
100769f7:	74 08                	je     0x10076a01
100769f9:	50                   	push   eax
100769fa:	8b ce                	mov    ecx,esi
100769fc:	e8 9f 09 00 00       	call   0x100773a0
10076a01:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10076a05:	8b c6                	mov    eax,esi
10076a07:	5f                   	pop    edi
10076a08:	5e                   	pop    esi
10076a09:	5b                   	pop    ebx
10076a0a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10076a11:	83 c4 10             	add    esp,0x10
10076a14:	c2 14 00             	ret    0x14
10076a17:	90                   	nop
10076a18:	90                   	nop
10076a19:	90                   	nop
10076a1a:	90                   	nop
10076a1b:	90                   	nop
10076a1c:	90                   	nop
10076a1d:	90                   	nop
10076a1e:	90                   	nop
10076a1f:	90                   	nop
10076a20:	56                   	push   esi
10076a21:	8b f1                	mov    esi,ecx
10076a23:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
10076a26:	8b 01                	mov    eax,DWORD PTR [ecx]
10076a28:	ff 50 74             	call   DWORD PTR [eax+0x74]
10076a2b:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10076a2e:	5e                   	pop    esi
10076a2f:	f7 c1 00 00 00 80    	test   ecx,0x80000000
10076a35:	75 03                	jne    0x10076a3a
10076a37:	8d 04 40             	lea    eax,[eax+eax*2]
10076a3a:	c3                   	ret
10076a3b:	90                   	nop
10076a3c:	90                   	nop
10076a3d:	90                   	nop
10076a3e:	90                   	nop
10076a3f:	90                   	nop
10076a40:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10076a44:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10076a48:	83 ec 08             	sub    esp,0x8
10076a4b:	2b c2                	sub    eax,edx
10076a4d:	40                   	inc    eax
10076a4e:	56                   	push   esi
10076a4f:	8b f1                	mov    esi,ecx
10076a51:	b9 00 00 00 00       	mov    ecx,0x0
10076a56:	57                   	push   edi
10076a57:	8b 7e 7c             	mov    edi,DWORD PTR [esi+0x7c]
10076a5a:	89 56 70             	mov    DWORD PTR [esi+0x70],edx
10076a5d:	0f 98 c1             	sets   cl
10076a60:	49                   	dec    ecx
10076a61:	23 c1                	and    eax,ecx
10076a63:	8b 4e 78             	mov    ecx,DWORD PTR [esi+0x78]
10076a66:	03 f9                	add    edi,ecx
10076a68:	89 46 74             	mov    DWORD PTR [esi+0x74],eax
10076a6b:	3b f8                	cmp    edi,eax
10076a6d:	7e 13                	jle    0x10076a82
10076a6f:	2b c1                	sub    eax,ecx
10076a71:	b9 00 00 00 00       	mov    ecx,0x0
10076a76:	0f 98 c1             	sets   cl
10076a79:	49                   	dec    ecx
10076a7a:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10076a7d:	23 c1                	and    eax,ecx
10076a7f:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10076a82:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
10076a85:	8d 4c 24 08          	lea    ecx,[esp+0x8]
10076a89:	03 c2                	add    eax,edx
10076a8b:	8b 56 68             	mov    edx,DWORD PTR [esi+0x68]
10076a8e:	51                   	push   ecx
10076a8f:	52                   	push   edx
10076a90:	8b ce                	mov    ecx,esi
10076a92:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
10076a99:	00 
10076a9a:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10076a9e:	e8 7d 7e ff ff       	call   0x1006e920
10076aa3:	8b ce                	mov    ecx,esi
10076aa5:	e8 b6 0a 00 00       	call   0x10077560
10076aaa:	5f                   	pop    edi
10076aab:	5e                   	pop    esi
10076aac:	83 c4 08             	add    esp,0x8
10076aaf:	c2 08 00             	ret    0x8
10076ab2:	90                   	nop
10076ab3:	90                   	nop
10076ab4:	90                   	nop
10076ab5:	90                   	nop
10076ab6:	90                   	nop
10076ab7:	90                   	nop
10076ab8:	90                   	nop
10076ab9:	90                   	nop
10076aba:	90                   	nop
10076abb:	90                   	nop
10076abc:	90                   	nop
10076abd:	90                   	nop
10076abe:	90                   	nop
10076abf:	90                   	nop
10076ac0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10076ac4:	83 ec 08             	sub    esp,0x8
10076ac7:	56                   	push   esi
10076ac8:	8b f1                	mov    esi,ecx
10076aca:	33 c9                	xor    ecx,ecx
10076acc:	8b 56 7c             	mov    edx,DWORD PTR [esi+0x7c]
10076acf:	85 c0                	test   eax,eax
10076ad1:	0f 9c c1             	setl   cl
10076ad4:	49                   	dec    ecx
10076ad5:	23 c8                	and    ecx,eax
10076ad7:	8b 46 74             	mov    eax,DWORD PTR [esi+0x74]
10076ada:	03 d1                	add    edx,ecx
10076adc:	89 4e 78             	mov    DWORD PTR [esi+0x78],ecx
10076adf:	3b d0                	cmp    edx,eax
10076ae1:	7e 13                	jle    0x10076af6
10076ae3:	2b c1                	sub    eax,ecx
10076ae5:	b9 00 00 00 00       	mov    ecx,0x0
10076aea:	0f 98 c1             	sets   cl
10076aed:	49                   	dec    ecx
10076aee:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10076af1:	23 c1                	and    eax,ecx
10076af3:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10076af6:	8b 56 70             	mov    edx,DWORD PTR [esi+0x70]
10076af9:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
10076afc:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
10076aff:	03 d0                	add    edx,eax
10076b01:	8d 44 24 04          	lea    eax,[esp+0x4]
10076b05:	c7 44 24 04 01 00 00 	mov    DWORD PTR [esp+0x4],0x1
10076b0c:	00 
10076b0d:	50                   	push   eax
10076b0e:	51                   	push   ecx
10076b0f:	8b ce                	mov    ecx,esi
10076b11:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10076b15:	e8 06 7e ff ff       	call   0x1006e920
10076b1a:	8b ce                	mov    ecx,esi
10076b1c:	e8 3f 0a 00 00       	call   0x10077560
10076b21:	5e                   	pop    esi
10076b22:	83 c4 08             	add    esp,0x8
10076b25:	c2 04 00             	ret    0x4
10076b28:	90                   	nop
10076b29:	90                   	nop
10076b2a:	90                   	nop
10076b2b:	90                   	nop
10076b2c:	90                   	nop
10076b2d:	90                   	nop
10076b2e:	90                   	nop
10076b2f:	90                   	nop
10076b30:	83 ec 08             	sub    esp,0x8
10076b33:	56                   	push   esi
10076b34:	8b f1                	mov    esi,ecx
10076b36:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10076b3a:	8b 46 74             	mov    eax,DWORD PTR [esi+0x74]
10076b3d:	8b 56 78             	mov    edx,DWORD PTR [esi+0x78]
10076b40:	2b c2                	sub    eax,edx
10076b42:	8b 56 70             	mov    edx,DWORD PTR [esi+0x70]
10076b45:	48                   	dec    eax
10076b46:	2b ca                	sub    ecx,edx
10076b48:	3b c8                	cmp    ecx,eax
10076b4a:	7c 02                	jl     0x10076b4e
10076b4c:	8b c8                	mov    ecx,eax
10076b4e:	33 c0                	xor    eax,eax
10076b50:	85 c9                	test   ecx,ecx
10076b52:	0f 9e c0             	setle  al
10076b55:	48                   	dec    eax
10076b56:	23 c1                	and    eax,ecx
10076b58:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10076b5b:	3b c1                	cmp    eax,ecx
10076b5d:	74 28                	je     0x10076b87
10076b5f:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
10076b62:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10076b65:	03 d0                	add    edx,eax
10076b67:	8d 44 24 04          	lea    eax,[esp+0x4]
10076b6b:	50                   	push   eax
10076b6c:	51                   	push   ecx
10076b6d:	8b ce                	mov    ecx,esi
10076b6f:	c7 44 24 0c 01 00 00 	mov    DWORD PTR [esp+0xc],0x1
10076b76:	00 
10076b77:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10076b7b:	e8 a0 7d ff ff       	call   0x1006e920
10076b80:	8b ce                	mov    ecx,esi
10076b82:	e8 d9 09 00 00       	call   0x10077560
10076b87:	5e                   	pop    esi
10076b88:	83 c4 08             	add    esp,0x8
10076b8b:	c2 04 00             	ret    0x4
10076b8e:	90                   	nop
10076b8f:	90                   	nop
10076b90:	8b 41 78             	mov    eax,DWORD PTR [ecx+0x78]
10076b93:	c3                   	ret
10076b94:	90                   	nop
10076b95:	90                   	nop
10076b96:	90                   	nop
10076b97:	90                   	nop
10076b98:	90                   	nop
10076b99:	90                   	nop
10076b9a:	90                   	nop
10076b9b:	90                   	nop
10076b9c:	90                   	nop
10076b9d:	90                   	nop
10076b9e:	90                   	nop
10076b9f:	90                   	nop
10076ba0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10076ba4:	50                   	push   eax
10076ba5:	e8 f6 07 00 00       	call   0x100773a0
10076baa:	c2 04 00             	ret    0x4
10076bad:	90                   	nop
10076bae:	90                   	nop
10076baf:	90                   	nop
10076bb0:	56                   	push   esi
10076bb1:	8b f1                	mov    esi,ecx
10076bb3:	57                   	push   edi
10076bb4:	f6 46 34 02          	test   BYTE PTR [esi+0x34],0x2
10076bb8:	74 07                	je     0x10076bc1
10076bba:	bf 01 00 00 00       	mov    edi,0x1
10076bbf:	eb 19                	jmp    0x10076bda
10076bc1:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10076bc7:	e8 44 4f fc ff       	call   0x1003bb10
10076bcc:	8b f8                	mov    edi,eax
10076bce:	2b fe                	sub    edi,esi
10076bd0:	f7 df                	neg    edi
10076bd2:	1b ff                	sbb    edi,edi
10076bd4:	83 e7 fc             	and    edi,0xfffffffc
10076bd7:	83 c7 04             	add    edi,0x4
10076bda:	f7 46 34 00 00 00 80 	test   DWORD PTR [esi+0x34],0x80000000
10076be1:	74 43                	je     0x10076c26
10076be3:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
10076be6:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
10076be9:	8b 56 5c             	mov    edx,DWORD PTR [esi+0x5c]
10076bec:	68 c6 87 2e ff       	push   0xff2e87c6
10076bf1:	68 c6 87 2e ff       	push   0xff2e87c6
10076bf6:	68 ea d3 b2 ff       	push   0xffb2d3ea
10076bfb:	68 ea d3 b2 ff       	push   0xffb2d3ea
10076c00:	50                   	push   eax
10076c01:	8b 46 58             	mov    eax,DWORD PTR [esi+0x58]
10076c04:	51                   	push   ecx
10076c05:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10076c0b:	52                   	push   edx
10076c0c:	50                   	push   eax
10076c0d:	e8 6e 2b fd ff       	call   0x10049780
10076c12:	57                   	push   edi
10076c13:	8d 4e 38             	lea    ecx,[esi+0x38]
10076c16:	6a 00                	push   0x0
10076c18:	51                   	push   ecx
10076c19:	8d 4e 2c             	lea    ecx,[esi+0x2c]
10076c1c:	e8 ff fa ff ff       	call   0x10076720
10076c21:	5f                   	pop    edi
10076c22:	5e                   	pop    esi
10076c23:	c2 08 00             	ret    0x8
10076c26:	8b 56 64             	mov    edx,DWORD PTR [esi+0x64]
10076c29:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
10076c2c:	8b 4e 5c             	mov    ecx,DWORD PTR [esi+0x5c]
10076c2f:	68 ea d3 b2 ff       	push   0xffb2d3ea
10076c34:	68 c6 87 2e ff       	push   0xff2e87c6
10076c39:	68 c6 87 2e ff       	push   0xff2e87c6
10076c3e:	68 ea d3 b2 ff       	push   0xffb2d3ea
10076c43:	52                   	push   edx
10076c44:	8b 56 58             	mov    edx,DWORD PTR [esi+0x58]
10076c47:	50                   	push   eax
10076c48:	51                   	push   ecx
10076c49:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10076c4f:	52                   	push   edx
10076c50:	e8 2b 2b fd ff       	call   0x10049780
10076c55:	57                   	push   edi
10076c56:	8d 46 38             	lea    eax,[esi+0x38]
10076c59:	6a 01                	push   0x1
10076c5b:	50                   	push   eax
10076c5c:	8d 4e 2c             	lea    ecx,[esi+0x2c]
10076c5f:	e8 bc fa ff ff       	call   0x10076720
10076c64:	5f                   	pop    edi
10076c65:	5e                   	pop    esi
10076c66:	c2 08 00             	ret    0x8
10076c69:	90                   	nop
10076c6a:	90                   	nop
10076c6b:	90                   	nop
10076c6c:	90                   	nop
10076c6d:	90                   	nop
10076c6e:	90                   	nop
10076c6f:	90                   	nop
10076c70:	83 ec 08             	sub    esp,0x8
10076c73:	53                   	push   ebx
10076c74:	55                   	push   ebp
10076c75:	56                   	push   esi
10076c76:	57                   	push   edi
10076c77:	8b f1                	mov    esi,ecx
10076c79:	6a 1c                	push   0x1c
10076c7b:	e8 c0 65 fc ff       	call   0x1003d240
10076c80:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10076c83:	83 c4 04             	add    esp,0x4
10076c86:	f7 c1 00 00 00 80    	test   ecx,0x80000000
10076c8c:	0f 84 f1 00 00 00    	je     0x10076d83
10076c92:	8b 56 38             	mov    edx,DWORD PTR [esi+0x38]
10076c95:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10076c99:	3b c2                	cmp    eax,edx
10076c9b:	7c 50                	jl     0x10076ced
10076c9d:	8b 7e 3c             	mov    edi,DWORD PTR [esi+0x3c]
10076ca0:	8b 5c 24 24          	mov    ebx,DWORD PTR [esp+0x24]
10076ca4:	3b df                	cmp    ebx,edi
10076ca6:	7c 41                	jl     0x10076ce9
10076ca8:	8b 6e 40             	mov    ebp,DWORD PTR [esi+0x40]
10076cab:	03 ea                	add    ebp,edx
10076cad:	3b c5                	cmp    eax,ebp
10076caf:	7d 38                	jge    0x10076ce9
10076cb1:	8b 6e 44             	mov    ebp,DWORD PTR [esi+0x44]
10076cb4:	03 ef                	add    ebp,edi
10076cb6:	3b dd                	cmp    ebx,ebp
10076cb8:	7d 2f                	jge    0x10076ce9
10076cba:	83 c9 02             	or     ecx,0x2
10076cbd:	2b c2                	sub    eax,edx
10076cbf:	89 4e 34             	mov    DWORD PTR [esi+0x34],ecx
10076cc2:	6a 00                	push   0x0
10076cc4:	6a 04                	push   0x4
10076cc6:	8b ce                	mov    ecx,esi
10076cc8:	89 86 80 00 00 00    	mov    DWORD PTR [esi+0x80],eax
10076cce:	e8 ad 7a ff ff       	call   0x1006e780
10076cd3:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10076cd9:	56                   	push   esi
10076cda:	e8 91 85 ff ff       	call   0x1006f270
10076cdf:	5f                   	pop    edi
10076ce0:	5e                   	pop    esi
10076ce1:	5d                   	pop    ebp
10076ce2:	5b                   	pop    ebx
10076ce3:	83 c4 08             	add    esp,0x8
10076ce6:	c2 0c 00             	ret    0xc
10076ce9:	3b c2                	cmp    eax,edx
10076ceb:	7d 4b                	jge    0x10076d38
10076ced:	8b 56 78             	mov    edx,DWORD PTR [esi+0x78]
10076cf0:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
10076cf3:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
10076cf6:	2b ca                	sub    ecx,edx
10076cf8:	49                   	dec    ecx
10076cf9:	2b c2                	sub    eax,edx
10076cfb:	3b c1                	cmp    eax,ecx
10076cfd:	7c 02                	jl     0x10076d01
10076cff:	8b c1                	mov    eax,ecx
10076d01:	33 c9                	xor    ecx,ecx
10076d03:	85 c0                	test   eax,eax
10076d05:	0f 9e c1             	setle  cl
10076d08:	49                   	dec    ecx
10076d09:	23 c1                	and    eax,ecx
10076d0b:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10076d0e:	3b c1                	cmp    eax,ecx
10076d10:	0f 84 58 01 00 00    	je     0x10076e6e
10076d16:	8b 56 70             	mov    edx,DWORD PTR [esi+0x70]
10076d19:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
10076d1c:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10076d1f:	03 d0                	add    edx,eax
10076d21:	8d 44 24 10          	lea    eax,[esp+0x10]
10076d25:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
10076d2c:	00 
10076d2d:	50                   	push   eax
10076d2e:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10076d32:	51                   	push   ecx
10076d33:	e9 28 01 00 00       	jmp    0x10076e60
10076d38:	8b 4e 78             	mov    ecx,DWORD PTR [esi+0x78]
10076d3b:	8b 46 74             	mov    eax,DWORD PTR [esi+0x74]
10076d3e:	8b 7e 7c             	mov    edi,DWORD PTR [esi+0x7c]
10076d41:	2b c1                	sub    eax,ecx
10076d43:	48                   	dec    eax
10076d44:	03 cf                	add    ecx,edi
10076d46:	3b c8                	cmp    ecx,eax
10076d48:	7c 02                	jl     0x10076d4c
10076d4a:	8b c8                	mov    ecx,eax
10076d4c:	33 c0                	xor    eax,eax
10076d4e:	85 c9                	test   ecx,ecx
10076d50:	0f 9e c0             	setle  al
10076d53:	48                   	dec    eax
10076d54:	23 c1                	and    eax,ecx
10076d56:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10076d59:	3b c1                	cmp    eax,ecx
10076d5b:	0f 84 0d 01 00 00    	je     0x10076e6e
10076d61:	8b 56 70             	mov    edx,DWORD PTR [esi+0x70]
10076d64:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
10076d67:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10076d6a:	03 d0                	add    edx,eax
10076d6c:	8d 44 24 10          	lea    eax,[esp+0x10]
10076d70:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
10076d77:	00 
10076d78:	50                   	push   eax
10076d79:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10076d7d:	51                   	push   ecx
10076d7e:	e9 dd 00 00 00       	jmp    0x10076e60
10076d83:	8b 7e 38             	mov    edi,DWORD PTR [esi+0x38]
10076d86:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
10076d8a:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10076d8e:	3b df                	cmp    ebx,edi
10076d90:	7c 48                	jl     0x10076dda
10076d92:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
10076d95:	3b c2                	cmp    eax,edx
10076d97:	7c 41                	jl     0x10076dda
10076d99:	8b 6e 40             	mov    ebp,DWORD PTR [esi+0x40]
10076d9c:	03 ef                	add    ebp,edi
10076d9e:	3b dd                	cmp    ebx,ebp
10076da0:	7d 38                	jge    0x10076dda
10076da2:	8b 7e 44             	mov    edi,DWORD PTR [esi+0x44]
10076da5:	03 fa                	add    edi,edx
10076da7:	3b c7                	cmp    eax,edi
10076da9:	7d 2f                	jge    0x10076dda
10076dab:	83 c9 02             	or     ecx,0x2
10076dae:	2b c2                	sub    eax,edx
10076db0:	89 4e 34             	mov    DWORD PTR [esi+0x34],ecx
10076db3:	6a 00                	push   0x0
10076db5:	6a 04                	push   0x4
10076db7:	8b ce                	mov    ecx,esi
10076db9:	89 86 80 00 00 00    	mov    DWORD PTR [esi+0x80],eax
10076dbf:	e8 bc 79 ff ff       	call   0x1006e780
10076dc4:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10076dca:	56                   	push   esi
10076dcb:	e8 a0 84 ff ff       	call   0x1006f270
10076dd0:	5f                   	pop    edi
10076dd1:	5e                   	pop    esi
10076dd2:	5d                   	pop    ebp
10076dd3:	5b                   	pop    ebx
10076dd4:	83 c4 08             	add    esp,0x8
10076dd7:	c2 0c 00             	ret    0xc
10076dda:	3b 46 3c             	cmp    eax,DWORD PTR [esi+0x3c]
10076ddd:	7d 3f                	jge    0x10076e1e
10076ddf:	8b 56 78             	mov    edx,DWORD PTR [esi+0x78]
10076de2:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
10076de5:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
10076de8:	2b ca                	sub    ecx,edx
10076dea:	49                   	dec    ecx
10076deb:	2b c2                	sub    eax,edx
10076ded:	3b c1                	cmp    eax,ecx
10076def:	7c 02                	jl     0x10076df3
10076df1:	8b c1                	mov    eax,ecx
10076df3:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10076df6:	33 d2                	xor    edx,edx
10076df8:	85 c0                	test   eax,eax
10076dfa:	0f 9e c2             	setle  dl
10076dfd:	4a                   	dec    edx
10076dfe:	23 c2                	and    eax,edx
10076e00:	3b c1                	cmp    eax,ecx
10076e02:	74 6a                	je     0x10076e6e
10076e04:	8b 4e 70             	mov    ecx,DWORD PTR [esi+0x70]
10076e07:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10076e0a:	03 c8                	add    ecx,eax
10076e0c:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
10076e13:	00 
10076e14:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
10076e18:	8d 54 24 10          	lea    edx,[esp+0x10]
10076e1c:	eb 3d                	jmp    0x10076e5b
10076e1e:	8b 4e 78             	mov    ecx,DWORD PTR [esi+0x78]
10076e21:	8b 46 74             	mov    eax,DWORD PTR [esi+0x74]
10076e24:	8b 7e 7c             	mov    edi,DWORD PTR [esi+0x7c]
10076e27:	2b c1                	sub    eax,ecx
10076e29:	48                   	dec    eax
10076e2a:	03 cf                	add    ecx,edi
10076e2c:	3b c8                	cmp    ecx,eax
10076e2e:	7c 02                	jl     0x10076e32
10076e30:	8b c8                	mov    ecx,eax
10076e32:	33 c0                	xor    eax,eax
10076e34:	85 c9                	test   ecx,ecx
10076e36:	0f 9e c0             	setle  al
10076e39:	48                   	dec    eax
10076e3a:	23 c1                	and    eax,ecx
10076e3c:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10076e3f:	3b c1                	cmp    eax,ecx
10076e41:	74 2b                	je     0x10076e6e
10076e43:	8b 4e 70             	mov    ecx,DWORD PTR [esi+0x70]
10076e46:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10076e49:	03 c8                	add    ecx,eax
10076e4b:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
10076e52:	00 
10076e53:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
10076e57:	8d 54 24 10          	lea    edx,[esp+0x10]
10076e5b:	8b 46 68             	mov    eax,DWORD PTR [esi+0x68]
10076e5e:	52                   	push   edx
10076e5f:	50                   	push   eax
10076e60:	8b ce                	mov    ecx,esi
10076e62:	e8 b9 7a ff ff       	call   0x1006e920
10076e67:	8b ce                	mov    ecx,esi
10076e69:	e8 f2 06 00 00       	call   0x10077560
10076e6e:	5f                   	pop    edi
10076e6f:	5e                   	pop    esi
10076e70:	5d                   	pop    ebp
10076e71:	5b                   	pop    ebx
10076e72:	83 c4 08             	add    esp,0x8
10076e75:	c2 0c 00             	ret    0xc
10076e78:	90                   	nop
10076e79:	90                   	nop
10076e7a:	90                   	nop
10076e7b:	90                   	nop
10076e7c:	90                   	nop
10076e7d:	90                   	nop
10076e7e:	90                   	nop
10076e7f:	90                   	nop
10076e80:	56                   	push   esi
10076e81:	8b f1                	mov    esi,ecx
10076e83:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10076e86:	a8 02                	test   al,0x2
10076e88:	74 2c                	je     0x10076eb6
10076e8a:	24 fd                	and    al,0xfd
10076e8c:	6a 04                	push   0x4
10076e8e:	6a 00                	push   0x0
10076e90:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
10076e93:	e8 e8 78 ff ff       	call   0x1006e780
10076e98:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10076e9e:	6a 00                	push   0x0
10076ea0:	e8 cb 83 ff ff       	call   0x1006f270
10076ea5:	8b ce                	mov    ecx,esi
10076ea7:	e8 b4 06 00 00       	call   0x10077560
10076eac:	6a 1c                	push   0x1c
10076eae:	e8 8d 63 fc ff       	call   0x1003d240
10076eb3:	83 c4 04             	add    esp,0x4
10076eb6:	5e                   	pop    esi
10076eb7:	c2 0c 00             	ret    0xc
10076eba:	90                   	nop
10076ebb:	90                   	nop
10076ebc:	90                   	nop
10076ebd:	90                   	nop
10076ebe:	90                   	nop
10076ebf:	90                   	nop
10076ec0:	83 ec 08             	sub    esp,0x8
10076ec3:	53                   	push   ebx
10076ec4:	55                   	push   ebp
10076ec5:	56                   	push   esi
10076ec6:	8b f1                	mov    esi,ecx
10076ec8:	57                   	push   edi
10076ec9:	8b 5e 34             	mov    ebx,DWORD PTR [esi+0x34]
10076ecc:	f7 c3 00 00 00 80    	test   ebx,0x80000000
10076ed2:	0f 84 9d 00 00 00    	je     0x10076f75
10076ed8:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
10076edc:	8b 8e 80 00 00 00    	mov    ecx,DWORD PTR [esi+0x80]
10076ee2:	2b d1                	sub    edx,ecx
10076ee4:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
10076ee7:	3b d1                	cmp    edx,ecx
10076ee9:	89 56 38             	mov    DWORD PTR [esi+0x38],edx
10076eec:	7d 05                	jge    0x10076ef3
10076eee:	89 4e 38             	mov    DWORD PTR [esi+0x38],ecx
10076ef1:	eb 16                	jmp    0x10076f09
10076ef3:	8b 46 50             	mov    eax,DWORD PTR [esi+0x50]
10076ef6:	8b 7e 40             	mov    edi,DWORD PTR [esi+0x40]
10076ef9:	03 d7                	add    edx,edi
10076efb:	8d 2c 08             	lea    ebp,[eax+ecx*1]
10076efe:	3b d5                	cmp    edx,ebp
10076f00:	7e 07                	jle    0x10076f09
10076f02:	2b c7                	sub    eax,edi
10076f04:	03 c1                	add    eax,ecx
10076f06:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
10076f09:	8b 46 50             	mov    eax,DWORD PTR [esi+0x50]
10076f0c:	85 c0                	test   eax,eax
10076f0e:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10076f12:	7f 07                	jg     0x10076f1b
10076f14:	33 c0                	xor    eax,eax
10076f16:	e9 f7 00 00 00       	jmp    0x10077012
10076f1b:	f7 c3 00 00 00 60    	test   ebx,0x60000000
10076f21:	74 30                	je     0x10076f53
10076f23:	8b 56 74             	mov    edx,DWORD PTR [esi+0x74]
10076f26:	8b 6e 78             	mov    ebp,DWORD PTR [esi+0x78]
10076f29:	2b d5                	sub    edx,ebp
10076f2b:	4a                   	dec    edx
10076f2c:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
10076f30:	8b 56 38             	mov    edx,DWORD PTR [esi+0x38]
10076f33:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
10076f37:	2b d1                	sub    edx,ecx
10076f39:	8b 4e 40             	mov    ecx,DWORD PTR [esi+0x40]
10076f3c:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
10076f40:	2b c1                	sub    eax,ecx
10076f42:	da 4c 24 20          	fimul  DWORD PTR [esp+0x20]
10076f46:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10076f4a:	da 74 24 20          	fidiv  DWORD PTR [esp+0x20]
10076f4e:	e9 b4 00 00 00       	jmp    0x10077007
10076f53:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
10076f56:	2b c1                	sub    eax,ecx
10076f58:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
10076f5b:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10076f5f:	49                   	dec    ecx
10076f60:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
10076f64:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
10076f68:	da 4c 24 20          	fimul  DWORD PTR [esp+0x20]
10076f6c:	da 74 24 24          	fidiv  DWORD PTR [esp+0x24]
10076f70:	e9 92 00 00 00       	jmp    0x10077007
10076f75:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
10076f79:	8b 8e 80 00 00 00    	mov    ecx,DWORD PTR [esi+0x80]
10076f7f:	2b d1                	sub    edx,ecx
10076f81:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
10076f84:	3b d1                	cmp    edx,ecx
10076f86:	89 56 3c             	mov    DWORD PTR [esi+0x3c],edx
10076f89:	7d 05                	jge    0x10076f90
10076f8b:	89 4e 3c             	mov    DWORD PTR [esi+0x3c],ecx
10076f8e:	eb 16                	jmp    0x10076fa6
10076f90:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
10076f93:	8b 7e 44             	mov    edi,DWORD PTR [esi+0x44]
10076f96:	03 d7                	add    edx,edi
10076f98:	8d 2c 08             	lea    ebp,[eax+ecx*1]
10076f9b:	3b d5                	cmp    edx,ebp
10076f9d:	7e 07                	jle    0x10076fa6
10076f9f:	2b c7                	sub    eax,edi
10076fa1:	03 c1                	add    eax,ecx
10076fa3:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
10076fa6:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
10076fa9:	85 c0                	test   eax,eax
10076fab:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10076faf:	7f 04                	jg     0x10076fb5
10076fb1:	33 c0                	xor    eax,eax
10076fb3:	eb 5d                	jmp    0x10077012
10076fb5:	f7 c3 00 00 00 60    	test   ebx,0x60000000
10076fbb:	74 2d                	je     0x10076fea
10076fbd:	8b 56 74             	mov    edx,DWORD PTR [esi+0x74]
10076fc0:	8b 6e 78             	mov    ebp,DWORD PTR [esi+0x78]
10076fc3:	2b d5                	sub    edx,ebp
10076fc5:	4a                   	dec    edx
10076fc6:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
10076fca:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
10076fcd:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
10076fd1:	2b d1                	sub    edx,ecx
10076fd3:	8b 4e 44             	mov    ecx,DWORD PTR [esi+0x44]
10076fd6:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
10076fda:	2b c1                	sub    eax,ecx
10076fdc:	da 4c 24 20          	fimul  DWORD PTR [esp+0x20]
10076fe0:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10076fe4:	da 74 24 20          	fidiv  DWORD PTR [esp+0x20]
10076fe8:	eb 1d                	jmp    0x10077007
10076fea:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
10076fed:	2b c1                	sub    eax,ecx
10076fef:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
10076ff2:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10076ff6:	49                   	dec    ecx
10076ff7:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
10076ffb:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
10076fff:	da 4c 24 20          	fimul  DWORD PTR [esp+0x20]
10077003:	da 74 24 24          	fidiv  DWORD PTR [esp+0x24]
10077007:	d8 05 e0 83 0b 10    	fadd   DWORD PTR ds:0x100b83e0
1007700d:	e8 22 ce 02 00       	call   0x100a3e34
10077012:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
10077015:	8b 5e 78             	mov    ebx,DWORD PTR [esi+0x78]
10077018:	2b cb                	sub    ecx,ebx
1007701a:	49                   	dec    ecx
1007701b:	3b c1                	cmp    eax,ecx
1007701d:	7c 02                	jl     0x10077021
1007701f:	8b c1                	mov    eax,ecx
10077021:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10077024:	33 d2                	xor    edx,edx
10077026:	85 c0                	test   eax,eax
10077028:	0f 9e c2             	setle  dl
1007702b:	4a                   	dec    edx
1007702c:	23 c2                	and    eax,edx
1007702e:	3b c1                	cmp    eax,ecx
10077030:	74 24                	je     0x10077056
10077032:	8b 4e 70             	mov    ecx,DWORD PTR [esi+0x70]
10077035:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10077038:	03 c8                	add    ecx,eax
1007703a:	8b 46 68             	mov    eax,DWORD PTR [esi+0x68]
1007703d:	8d 54 24 10          	lea    edx,[esp+0x10]
10077041:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
10077045:	52                   	push   edx
10077046:	50                   	push   eax
10077047:	8b ce                	mov    ecx,esi
10077049:	c7 44 24 18 01 00 00 	mov    DWORD PTR [esp+0x18],0x1
10077050:	00 
10077051:	e8 ca 78 ff ff       	call   0x1006e920
10077056:	5f                   	pop    edi
10077057:	5e                   	pop    esi
10077058:	5d                   	pop    ebp
10077059:	5b                   	pop    ebx
1007705a:	83 c4 08             	add    esp,0x8
1007705d:	c2 0c 00             	ret    0xc
10077060:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10077064:	83 ec 08             	sub    esp,0x8
10077067:	83 c0 df             	add    eax,0xffffffdf
1007706a:	56                   	push   esi
1007706b:	83 f8 07             	cmp    eax,0x7
1007706e:	57                   	push   edi
1007706f:	8b f1                	mov    esi,ecx
10077071:	0f 87 3d 01 00 00    	ja     0x100771b4
10077077:	bf 01 00 00 00       	mov    edi,0x1
1007707c:	ff 24 85 c0 71 07 10 	jmp    DWORD PTR [eax*4+0x100771c0]
10077083:	8b 56 78             	mov    edx,DWORD PTR [esi+0x78]
10077086:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
10077089:	2b ca                	sub    ecx,edx
1007708b:	0f af 54 24 18       	imul   edx,DWORD PTR [esp+0x18]
10077090:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
10077093:	49                   	dec    ecx
10077094:	2b c2                	sub    eax,edx
10077096:	3b c1                	cmp    eax,ecx
10077098:	7c 02                	jl     0x1007709c
1007709a:	8b c1                	mov    eax,ecx
1007709c:	33 c9                	xor    ecx,ecx
1007709e:	85 c0                	test   eax,eax
100770a0:	0f 9e c1             	setle  cl
100770a3:	49                   	dec    ecx
100770a4:	23 c1                	and    eax,ecx
100770a6:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
100770a9:	3b c1                	cmp    eax,ecx
100770ab:	0f 84 f9 00 00 00    	je     0x100771aa
100770b1:	8b 56 70             	mov    edx,DWORD PTR [esi+0x70]
100770b4:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
100770b7:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
100770ba:	03 d0                	add    edx,eax
100770bc:	8d 44 24 08          	lea    eax,[esp+0x8]
100770c0:	89 7c 24 08          	mov    DWORD PTR [esp+0x8],edi
100770c4:	50                   	push   eax
100770c5:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
100770c9:	51                   	push   ecx
100770ca:	e9 cd 00 00 00       	jmp    0x1007719c
100770cf:	8b 46 78             	mov    eax,DWORD PTR [esi+0x78]
100770d2:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
100770d5:	2b c8                	sub    ecx,eax
100770d7:	0f af 44 24 18       	imul   eax,DWORD PTR [esp+0x18]
100770dc:	8b 56 7c             	mov    edx,DWORD PTR [esi+0x7c]
100770df:	49                   	dec    ecx
100770e0:	03 c2                	add    eax,edx
100770e2:	3b c1                	cmp    eax,ecx
100770e4:	7c 02                	jl     0x100770e8
100770e6:	8b c1                	mov    eax,ecx
100770e8:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
100770eb:	33 d2                	xor    edx,edx
100770ed:	85 c0                	test   eax,eax
100770ef:	0f 9e c2             	setle  dl
100770f2:	4a                   	dec    edx
100770f3:	23 c2                	and    eax,edx
100770f5:	3b c1                	cmp    eax,ecx
100770f7:	0f 84 ad 00 00 00    	je     0x100771aa
100770fd:	8b 4e 70             	mov    ecx,DWORD PTR [esi+0x70]
10077100:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10077103:	03 c8                	add    ecx,eax
10077105:	89 7c 24 08          	mov    DWORD PTR [esp+0x8],edi
10077109:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
1007710d:	8d 54 24 08          	lea    edx,[esp+0x8]
10077111:	e9 81 00 00 00       	jmp    0x10077197
10077116:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
10077119:	8b 56 78             	mov    edx,DWORD PTR [esi+0x78]
1007711c:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
1007711f:	2b ca                	sub    ecx,edx
10077121:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
10077125:	49                   	dec    ecx
10077126:	2b c2                	sub    eax,edx
10077128:	3b c1                	cmp    eax,ecx
1007712a:	7c 02                	jl     0x1007712e
1007712c:	8b c1                	mov    eax,ecx
1007712e:	33 c9                	xor    ecx,ecx
10077130:	85 c0                	test   eax,eax
10077132:	0f 9e c1             	setle  cl
10077135:	49                   	dec    ecx
10077136:	23 c1                	and    eax,ecx
10077138:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
1007713b:	3b c1                	cmp    eax,ecx
1007713d:	74 6b                	je     0x100771aa
1007713f:	8b 56 70             	mov    edx,DWORD PTR [esi+0x70]
10077142:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
10077145:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10077148:	03 d0                	add    edx,eax
1007714a:	8d 44 24 08          	lea    eax,[esp+0x8]
1007714e:	89 7c 24 08          	mov    DWORD PTR [esp+0x8],edi
10077152:	50                   	push   eax
10077153:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10077157:	51                   	push   ecx
10077158:	eb 42                	jmp    0x1007719c
1007715a:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
1007715d:	8b 56 78             	mov    edx,DWORD PTR [esi+0x78]
10077160:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
10077163:	2b ca                	sub    ecx,edx
10077165:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
10077169:	49                   	dec    ecx
1007716a:	03 c2                	add    eax,edx
1007716c:	3b c1                	cmp    eax,ecx
1007716e:	7c 02                	jl     0x10077172
10077170:	8b c1                	mov    eax,ecx
10077172:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10077175:	33 d2                	xor    edx,edx
10077177:	85 c0                	test   eax,eax
10077179:	0f 9e c2             	setle  dl
1007717c:	4a                   	dec    edx
1007717d:	23 c2                	and    eax,edx
1007717f:	3b c1                	cmp    eax,ecx
10077181:	74 27                	je     0x100771aa
10077183:	8b 4e 70             	mov    ecx,DWORD PTR [esi+0x70]
10077186:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10077189:	03 c8                	add    ecx,eax
1007718b:	89 7c 24 08          	mov    DWORD PTR [esp+0x8],edi
1007718f:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
10077193:	8d 54 24 08          	lea    edx,[esp+0x8]
10077197:	8b 46 68             	mov    eax,DWORD PTR [esi+0x68]
1007719a:	52                   	push   edx
1007719b:	50                   	push   eax
1007719c:	8b ce                	mov    ecx,esi
1007719e:	e8 7d 77 ff ff       	call   0x1006e920
100771a3:	8b ce                	mov    ecx,esi
100771a5:	e8 b6 03 00 00       	call   0x10077560
100771aa:	8b c7                	mov    eax,edi
100771ac:	5f                   	pop    edi
100771ad:	5e                   	pop    esi
100771ae:	83 c4 08             	add    esp,0x8
100771b1:	c2 08 00             	ret    0x8
100771b4:	5f                   	pop    edi
100771b5:	33 c0                	xor    eax,eax
100771b7:	5e                   	pop    esi
100771b8:	83 c4 08             	add    esp,0x8
100771bb:	c2 08 00             	ret    0x8
100771be:	8b ff                	mov    edi,edi
100771c0:	83 70 07 10          	xor    DWORD PTR [eax+0x7],0x10
100771c4:	cf                   	iret
100771c5:	70 07                	jo     0x100771ce
100771c7:	10 b4 71 07 10 b4 71 	adc    BYTE PTR [ecx+esi*2+0x71b41007],dh
100771ce:	07                   	pop    es
100771cf:	10 16                	adc    BYTE PTR [esi],dl
100771d1:	71 07                	jno    0x100771da
100771d3:	10 16                	adc    BYTE PTR [esi],dl
100771d5:	71 07                	jno    0x100771de
100771d7:	10 5a 71             	adc    BYTE PTR [edx+0x71],bl
100771da:	07                   	pop    es
100771db:	10 5a 71             	adc    BYTE PTR [edx+0x71],bl
100771de:	07                   	pop    es
100771df:	10 8b 44 24 04 83    	adc    BYTE PTR [ebx-0x7cfbdbbc],cl
100771e5:	ec                   	in     al,dx
100771e6:	08 83 e8 00 56 8b    	or     BYTE PTR [ebx-0x74a9ff18],al
100771ec:	f1                   	int1
100771ed:	74 4a                	je     0x10077239
100771ef:	48                   	dec    eax
100771f0:	0f 85 92 00 00 00    	jne    0x10077288
100771f6:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
100771f9:	8b 56 78             	mov    edx,DWORD PTR [esi+0x78]
100771fc:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
100771ff:	2b ca                	sub    ecx,edx
10077201:	49                   	dec    ecx
10077202:	40                   	inc    eax
10077203:	3b c1                	cmp    eax,ecx
10077205:	7c 02                	jl     0x10077209
10077207:	8b c1                	mov    eax,ecx
10077209:	33 c9                	xor    ecx,ecx
1007720b:	85 c0                	test   eax,eax
1007720d:	0f 9e c1             	setle  cl
10077210:	49                   	dec    ecx
10077211:	23 c1                	and    eax,ecx
10077213:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10077216:	3b c1                	cmp    eax,ecx
10077218:	74 6e                	je     0x10077288
1007721a:	8b 56 70             	mov    edx,DWORD PTR [esi+0x70]
1007721d:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
10077220:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10077223:	03 d0                	add    edx,eax
10077225:	8d 44 24 04          	lea    eax,[esp+0x4]
10077229:	c7 44 24 04 01 00 00 	mov    DWORD PTR [esp+0x4],0x1
10077230:	00 
10077231:	50                   	push   eax
10077232:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
10077236:	51                   	push   ecx
10077237:	eb 41                	jmp    0x1007727a
10077239:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
1007723c:	8b 56 78             	mov    edx,DWORD PTR [esi+0x78]
1007723f:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
10077242:	2b ca                	sub    ecx,edx
10077244:	49                   	dec    ecx
10077245:	48                   	dec    eax
10077246:	3b c1                	cmp    eax,ecx
10077248:	7c 02                	jl     0x1007724c
1007724a:	8b c1                	mov    eax,ecx
1007724c:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
1007724f:	33 d2                	xor    edx,edx
10077251:	85 c0                	test   eax,eax
10077253:	0f 9e c2             	setle  dl
10077256:	4a                   	dec    edx
10077257:	23 c2                	and    eax,edx
10077259:	3b c1                	cmp    eax,ecx
1007725b:	74 2b                	je     0x10077288
1007725d:	8b 4e 70             	mov    ecx,DWORD PTR [esi+0x70]
10077260:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10077263:	03 c8                	add    ecx,eax
10077265:	8b 46 68             	mov    eax,DWORD PTR [esi+0x68]
10077268:	8d 54 24 04          	lea    edx,[esp+0x4]
1007726c:	c7 44 24 04 01 00 00 	mov    DWORD PTR [esp+0x4],0x1
10077273:	00 
10077274:	52                   	push   edx
10077275:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
10077279:	50                   	push   eax
1007727a:	8b ce                	mov    ecx,esi
1007727c:	e8 9f 76 ff ff       	call   0x1006e920
10077281:	8b ce                	mov    ecx,esi
10077283:	e8 d8 02 00 00       	call   0x10077560
10077288:	b8 01 00 00 00       	mov    eax,0x1
1007728d:	5e                   	pop    esi
1007728e:	83 c4 08             	add    esp,0x8
10077291:	c2 08 00             	ret    0x8
10077294:	90                   	nop
10077295:	90                   	nop
10077296:	90                   	nop
10077297:	90                   	nop
10077298:	90                   	nop
10077299:	90                   	nop
1007729a:	90                   	nop
1007729b:	90                   	nop
1007729c:	90                   	nop
1007729d:	90                   	nop
1007729e:	90                   	nop
1007729f:	90                   	nop
100772a0:	8b 41 34             	mov    eax,DWORD PTR [ecx+0x34]
100772a3:	56                   	push   esi
100772a4:	a9 00 00 00 80       	test   eax,0x80000000
100772a9:	74 41                	je     0x100772ec
100772ab:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
100772ae:	ba 40 c5 11 10       	mov    edx,0x1011c540
100772b3:	8b f2                	mov    esi,edx
100772b5:	85 f6                	test   esi,esi
100772b7:	75 05                	jne    0x100772be
100772b9:	ba 48 41 12 10       	mov    edx,0x10124148
100772be:	89 50 38             	mov    DWORD PTR [eax+0x38],edx
100772c1:	8b 50 3c             	mov    edx,DWORD PTR [eax+0x3c]
100772c4:	83 ca 10             	or     edx,0x10
100772c7:	89 50 3c             	mov    DWORD PTR [eax+0x3c],edx
100772ca:	8b 49 30             	mov    ecx,DWORD PTR [ecx+0x30]
100772cd:	b8 40 c5 11 10       	mov    eax,0x1011c540
100772d2:	8b d0                	mov    edx,eax
100772d4:	85 d2                	test   edx,edx
100772d6:	75 05                	jne    0x100772dd
100772d8:	b8 48 41 12 10       	mov    eax,0x10124148
100772dd:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
100772e0:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
100772e3:	0c 30                	or     al,0x30
100772e5:	5e                   	pop    esi
100772e6:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
100772e9:	c2 04 00             	ret    0x4
100772ec:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
100772ef:	ba 5c c5 11 10       	mov    edx,0x1011c55c
100772f4:	8b f2                	mov    esi,edx
100772f6:	85 f6                	test   esi,esi
100772f8:	75 05                	jne    0x100772ff
100772fa:	ba 48 41 12 10       	mov    edx,0x10124148
100772ff:	89 50 38             	mov    DWORD PTR [eax+0x38],edx
10077302:	8b 50 3c             	mov    edx,DWORD PTR [eax+0x3c]
10077305:	83 ca 10             	or     edx,0x10
10077308:	89 50 3c             	mov    DWORD PTR [eax+0x3c],edx
1007730b:	8b 49 30             	mov    ecx,DWORD PTR [ecx+0x30]
1007730e:	b8 5c c5 11 10       	mov    eax,0x1011c55c
10077313:	8b d0                	mov    edx,eax
10077315:	85 d2                	test   edx,edx
10077317:	75 05                	jne    0x1007731e
10077319:	b8 48 41 12 10       	mov    eax,0x10124148
1007731e:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
10077321:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
10077324:	0c 50                	or     al,0x50
10077326:	5e                   	pop    esi
10077327:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
1007732a:	c2 04 00             	ret    0x4
1007732d:	90                   	nop
1007732e:	90                   	nop
1007732f:	90                   	nop
10077330:	83 ec 08             	sub    esp,0x8
10077333:	56                   	push   esi
10077334:	8b f1                	mov    esi,ecx
10077336:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
10077339:	8b 56 78             	mov    edx,DWORD PTR [esi+0x78]
1007733c:	8b 46 7c             	mov    eax,DWORD PTR [esi+0x7c]
1007733f:	2b ca                	sub    ecx,edx
10077341:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10077345:	49                   	dec    ecx
10077346:	2b c2                	sub    eax,edx
10077348:	3b c1                	cmp    eax,ecx
1007734a:	7c 02                	jl     0x1007734e
1007734c:	8b c1                	mov    eax,ecx
1007734e:	33 c9                	xor    ecx,ecx
10077350:	85 c0                	test   eax,eax
10077352:	0f 9e c1             	setle  cl
10077355:	49                   	dec    ecx
10077356:	23 c1                	and    eax,ecx
10077358:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
1007735b:	3b c1                	cmp    eax,ecx
1007735d:	74 2b                	je     0x1007738a
1007735f:	8b 56 70             	mov    edx,DWORD PTR [esi+0x70]
10077362:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
10077365:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10077368:	03 d0                	add    edx,eax
1007736a:	8d 44 24 04          	lea    eax,[esp+0x4]
1007736e:	c7 44 24 04 01 00 00 	mov    DWORD PTR [esp+0x4],0x1
10077375:	00 
10077376:	50                   	push   eax
10077377:	51                   	push   ecx
10077378:	8b ce                	mov    ecx,esi
1007737a:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1007737e:	e8 9d 75 ff ff       	call   0x1006e920
10077383:	8b ce                	mov    ecx,esi
10077385:	e8 d6 01 00 00       	call   0x10077560
1007738a:	5e                   	pop    esi
1007738b:	83 c4 08             	add    esp,0x8
1007738e:	c2 10 00             	ret    0x10
10077391:	90                   	nop
10077392:	90                   	nop
10077393:	90                   	nop
10077394:	90                   	nop
10077395:	90                   	nop
10077396:	90                   	nop
10077397:	90                   	nop
10077398:	90                   	nop
10077399:	90                   	nop
1007739a:	90                   	nop
1007739b:	90                   	nop
1007739c:	90                   	nop
1007739d:	90                   	nop
1007739e:	90                   	nop
1007739f:	90                   	nop
100773a0:	83 ec 10             	sub    esp,0x10
100773a3:	56                   	push   esi
100773a4:	8b f1                	mov    esi,ecx
100773a6:	57                   	push   edi
100773a7:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
100773ab:	f7 46 34 00 00 00 80 	test   DWORD PTR [esi+0x34],0x80000000
100773b2:	0f 84 c7 00 00 00    	je     0x1007747f
100773b8:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100773bb:	8b 0f                	mov    ecx,DWORD PTR [edi]
100773bd:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
100773c1:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
100773c4:	8d 54 24 08          	lea    edx,[esp+0x8]
100773c8:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
100773cc:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
100773cf:	52                   	push   edx
100773d0:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
100773d4:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
100773d8:	e8 73 72 ff ff       	call   0x1006e650
100773dd:	8b 07                	mov    eax,DWORD PTR [edi]
100773df:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100773e3:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
100773e6:	2b c2                	sub    eax,edx
100773e8:	03 c1                	add    eax,ecx
100773ea:	8d 4c 24 08          	lea    ecx,[esp+0x8]
100773ee:	51                   	push   ecx
100773ef:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
100773f2:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
100773f6:	e8 55 72 ff ff       	call   0x1006e650
100773fb:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100773fe:	89 46 4c             	mov    DWORD PTR [esi+0x4c],eax
10077401:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
10077404:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
10077407:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
1007740a:	89 46 44             	mov    DWORD PTR [esi+0x44],eax
1007740d:	8b 17                	mov    edx,DWORD PTR [edi]
1007740f:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
10077412:	03 d0                	add    edx,eax
10077414:	89 56 48             	mov    DWORD PTR [esi+0x48],edx
10077417:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1007741a:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
1007741d:	d1 e0                	shl    eax,1
1007741f:	2b c8                	sub    ecx,eax
10077421:	8d 46 58             	lea    eax,[esi+0x58]
10077424:	89 4e 50             	mov    DWORD PTR [esi+0x50],ecx
10077427:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
1007742a:	8b d0                	mov    edx,eax
1007742c:	89 0a                	mov    DWORD PTR [edx],ecx
1007742e:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
10077431:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
10077434:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10077437:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
1007743a:	8b 4e 54             	mov    ecx,DWORD PTR [esi+0x54]
1007743d:	89 4a 0c             	mov    DWORD PTR [edx+0xc],ecx
10077440:	8b 15 18 a0 0d 10    	mov    edx,DWORD PTR ds:0x100da018
10077446:	8d 0c d5 00 00 00 00 	lea    ecx,[edx*8+0x0]
1007744d:	8b 10                	mov    edx,DWORD PTR [eax]
1007744f:	c1 e9 0a             	shr    ecx,0xa
10077452:	2b d1                	sub    edx,ecx
10077454:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
10077457:	89 10                	mov    DWORD PTR [eax],edx
10077459:	8b 15 18 a0 0d 10    	mov    edx,DWORD PTR ds:0x100da018
1007745f:	8d 04 d5 00 00 00 00 	lea    eax,[edx*8+0x0]
10077466:	c1 e8 0a             	shr    eax,0xa
10077469:	d1 e0                	shl    eax,1
1007746b:	03 c8                	add    ecx,eax
1007746d:	89 4e 60             	mov    DWORD PTR [esi+0x60],ecx
10077470:	8b ce                	mov    ecx,esi
10077472:	e8 e9 00 00 00       	call   0x10077560
10077477:	5f                   	pop    edi
10077478:	5e                   	pop    esi
10077479:	83 c4 10             	add    esp,0x10
1007747c:	c2 04 00             	ret    0x4
1007747f:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
10077482:	8b 0f                	mov    ecx,DWORD PTR [edi]
10077484:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10077487:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1007748b:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1007748f:	8d 44 24 08          	lea    eax,[esp+0x8]
10077493:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
10077497:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
1007749a:	50                   	push   eax
1007749b:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1007749f:	e8 ac 71 ff ff       	call   0x1006e650
100774a4:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100774a7:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100774ab:	8b 57 0c             	mov    edx,DWORD PTR [edi+0xc]
100774ae:	2b c8                	sub    ecx,eax
100774b0:	03 ca                	add    ecx,edx
100774b2:	8d 54 24 08          	lea    edx,[esp+0x8]
100774b6:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
100774ba:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
100774bd:	52                   	push   edx
100774be:	e8 8d 71 ff ff       	call   0x1006e650
100774c3:	8b 07                	mov    eax,DWORD PTR [edi]
100774c5:	89 46 48             	mov    DWORD PTR [esi+0x48],eax
100774c8:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
100774cb:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
100774ce:	89 46 50             	mov    DWORD PTR [esi+0x50],eax
100774d1:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
100774d4:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100774d7:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
100774da:	03 c1                	add    eax,ecx
100774dc:	89 46 4c             	mov    DWORD PTR [esi+0x4c],eax
100774df:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
100774e2:	8b 57 0c             	mov    edx,DWORD PTR [edi+0xc]
100774e5:	8d 46 58             	lea    eax,[esi+0x58]
100774e8:	d1 e1                	shl    ecx,1
100774ea:	2b d1                	sub    edx,ecx
100774ec:	89 56 54             	mov    DWORD PTR [esi+0x54],edx
100774ef:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
100774f2:	8b 56 4c             	mov    edx,DWORD PTR [esi+0x4c]
100774f5:	89 08                	mov    DWORD PTR [eax],ecx
100774f7:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
100774fa:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
100774fd:	8b 56 54             	mov    edx,DWORD PTR [esi+0x54]
10077500:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
10077503:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
10077506:	a1 1c a0 0d 10       	mov    eax,ds:0x100da01c
1007750b:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
10077512:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10077517:	f7 e1                	mul    ecx
10077519:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
1007751c:	c1 ea 09             	shr    edx,0x9
1007751f:	2b c2                	sub    eax,edx
10077521:	89 46 5c             	mov    DWORD PTR [esi+0x5c],eax
10077524:	8b 15 1c a0 0d 10    	mov    edx,DWORD PTR ds:0x100da01c
1007752a:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1007752f:	8d 0c d5 00 00 00 00 	lea    ecx,[edx*8+0x0]
10077536:	f7 e1                	mul    ecx
10077538:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
1007753b:	8b ce                	mov    ecx,esi
1007753d:	c1 ea 09             	shr    edx,0x9
10077540:	d1 e2                	shl    edx,1
10077542:	03 c2                	add    eax,edx
10077544:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
10077547:	e8 14 00 00 00       	call   0x10077560
1007754c:	5f                   	pop    edi
1007754d:	5e                   	pop    esi
1007754e:	83 c4 10             	add    esp,0x10
10077551:	c2 04 00             	ret    0x4
10077554:	90                   	nop
10077555:	90                   	nop
10077556:	90                   	nop
10077557:	90                   	nop
10077558:	90                   	nop
10077559:	90                   	nop
1007755a:	90                   	nop
1007755b:	90                   	nop
1007755c:	90                   	nop
1007755d:	90                   	nop
1007755e:	90                   	nop
1007755f:	90                   	nop
10077560:	53                   	push   ebx
10077561:	8b 59 34             	mov    ebx,DWORD PTR [ecx+0x34]
10077564:	55                   	push   ebp
10077565:	56                   	push   esi
10077566:	8b 71 74             	mov    esi,DWORD PTR [ecx+0x74]
10077569:	57                   	push   edi
1007756a:	8b 79 78             	mov    edi,DWORD PTR [ecx+0x78]
1007756d:	f7 c3 00 00 00 80    	test   ebx,0x80000000
10077573:	8d 6e ff             	lea    ebp,[esi-0x1]
10077576:	0f 84 c3 00 00 00    	je     0x1007763f
1007757c:	3b fd                	cmp    edi,ebp
1007757e:	7c 11                	jl     0x10077591
10077580:	8b 41 48             	mov    eax,DWORD PTR [ecx+0x48]
10077583:	8b 51 50             	mov    edx,DWORD PTR [ecx+0x50]
10077586:	5f                   	pop    edi
10077587:	5e                   	pop    esi
10077588:	5d                   	pop    ebp
10077589:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
1007758c:	89 51 40             	mov    DWORD PTR [ecx+0x40],edx
1007758f:	5b                   	pop    ebx
10077590:	c3                   	ret
10077591:	81 e3 ff ff ff df    	and    ebx,0xdfffffff
10077597:	f7 c3 00 00 00 40    	test   ebx,0x40000000
1007759d:	89 59 34             	mov    DWORD PTR [ecx+0x34],ebx
100775a0:	75 1c                	jne    0x100775be
100775a2:	8b 41 50             	mov    eax,DWORD PTR [ecx+0x50]
100775a5:	0f af c7             	imul   eax,edi
100775a8:	99                   	cdq
100775a9:	f7 fd                	idiv   ebp
100775ab:	8b 51 44             	mov    edx,DWORD PTR [ecx+0x44]
100775ae:	3b c2                	cmp    eax,edx
100775b0:	89 41 40             	mov    DWORD PTR [ecx+0x40],eax
100775b3:	7d 09                	jge    0x100775be
100775b5:	81 cb 00 00 00 20    	or     ebx,0x20000000
100775bb:	89 59 34             	mov    DWORD PTR [ecx+0x34],ebx
100775be:	f7 41 34 00 00 00 60 	test   DWORD PTR [ecx+0x34],0x60000000
100775c5:	74 3b                	je     0x10077602
100775c7:	8b 59 7c             	mov    ebx,DWORD PTR [ecx+0x7c]
100775ca:	8b 51 44             	mov    edx,DWORD PTR [ecx+0x44]
100775cd:	89 51 40             	mov    DWORD PTR [ecx+0x40],edx
100775d0:	8d 44 3b 01          	lea    eax,[ebx+edi*1+0x1]
100775d4:	3b c6                	cmp    eax,esi
100775d6:	8b 41 50             	mov    eax,DWORD PTR [ecx+0x50]
100775d9:	7c 0f                	jl     0x100775ea
100775db:	8b 79 48             	mov    edi,DWORD PTR [ecx+0x48]
100775de:	03 c7                	add    eax,edi
100775e0:	5f                   	pop    edi
100775e1:	2b c2                	sub    eax,edx
100775e3:	5e                   	pop    esi
100775e4:	5d                   	pop    ebp
100775e5:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
100775e8:	5b                   	pop    ebx
100775e9:	c3                   	ret
100775ea:	2b c2                	sub    eax,edx
100775ec:	2b f7                	sub    esi,edi
100775ee:	0f af c3             	imul   eax,ebx
100775f1:	99                   	cdq
100775f2:	4e                   	dec    esi
100775f3:	5f                   	pop    edi
100775f4:	f7 fe                	idiv   esi
100775f6:	8b 51 48             	mov    edx,DWORD PTR [ecx+0x48]
100775f9:	5e                   	pop    esi
100775fa:	5d                   	pop    ebp
100775fb:	5b                   	pop    ebx
100775fc:	03 c2                	add    eax,edx
100775fe:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
10077601:	c3                   	ret
10077602:	8b 59 50             	mov    ebx,DWORD PTR [ecx+0x50]
10077605:	8b c3                	mov    eax,ebx
10077607:	0f af c7             	imul   eax,edi
1007760a:	99                   	cdq
1007760b:	f7 fd                	idiv   ebp
1007760d:	8b d0                	mov    edx,eax
1007760f:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10077612:	89 51 40             	mov    DWORD PTR [ecx+0x40],edx
10077615:	8d 7c 38 01          	lea    edi,[eax+edi*1+0x1]
10077619:	3b fe                	cmp    edi,esi
1007761b:	7c 0f                	jl     0x1007762c
1007761d:	8b 41 48             	mov    eax,DWORD PTR [ecx+0x48]
10077620:	5f                   	pop    edi
10077621:	2b c2                	sub    eax,edx
10077623:	5e                   	pop    esi
10077624:	03 c3                	add    eax,ebx
10077626:	5d                   	pop    ebp
10077627:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
1007762a:	5b                   	pop    ebx
1007762b:	c3                   	ret
1007762c:	0f af c3             	imul   eax,ebx
1007762f:	99                   	cdq
10077630:	f7 fd                	idiv   ebp
10077632:	8b 51 48             	mov    edx,DWORD PTR [ecx+0x48]
10077635:	5f                   	pop    edi
10077636:	5e                   	pop    esi
10077637:	5d                   	pop    ebp
10077638:	5b                   	pop    ebx
10077639:	03 c2                	add    eax,edx
1007763b:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
1007763e:	c3                   	ret
1007763f:	3b fd                	cmp    edi,ebp
10077641:	7c 11                	jl     0x10077654
10077643:	8b 51 4c             	mov    edx,DWORD PTR [ecx+0x4c]
10077646:	8b 41 54             	mov    eax,DWORD PTR [ecx+0x54]
10077649:	5f                   	pop    edi
1007764a:	5e                   	pop    esi
1007764b:	5d                   	pop    ebp
1007764c:	89 51 3c             	mov    DWORD PTR [ecx+0x3c],edx
1007764f:	89 41 44             	mov    DWORD PTR [ecx+0x44],eax
10077652:	5b                   	pop    ebx
10077653:	c3                   	ret
10077654:	81 e3 ff ff ff df    	and    ebx,0xdfffffff
1007765a:	f7 c3 00 00 00 40    	test   ebx,0x40000000
10077660:	89 59 34             	mov    DWORD PTR [ecx+0x34],ebx
10077663:	75 1c                	jne    0x10077681
10077665:	8b 41 54             	mov    eax,DWORD PTR [ecx+0x54]
10077668:	0f af c7             	imul   eax,edi
1007766b:	99                   	cdq
1007766c:	f7 fd                	idiv   ebp
1007766e:	8b 51 40             	mov    edx,DWORD PTR [ecx+0x40]
10077671:	3b c2                	cmp    eax,edx
10077673:	89 41 44             	mov    DWORD PTR [ecx+0x44],eax
10077676:	7d 09                	jge    0x10077681
10077678:	81 cb 00 00 00 20    	or     ebx,0x20000000
1007767e:	89 59 34             	mov    DWORD PTR [ecx+0x34],ebx
10077681:	f7 41 34 00 00 00 60 	test   DWORD PTR [ecx+0x34],0x60000000
10077688:	74 3b                	je     0x100776c5
1007768a:	8b 59 7c             	mov    ebx,DWORD PTR [ecx+0x7c]
1007768d:	8b 51 40             	mov    edx,DWORD PTR [ecx+0x40]
10077690:	89 51 44             	mov    DWORD PTR [ecx+0x44],edx
10077693:	8d 44 3b 01          	lea    eax,[ebx+edi*1+0x1]
10077697:	3b c6                	cmp    eax,esi
10077699:	8b 41 54             	mov    eax,DWORD PTR [ecx+0x54]
1007769c:	7c 0f                	jl     0x100776ad
1007769e:	8b 79 4c             	mov    edi,DWORD PTR [ecx+0x4c]
100776a1:	03 c7                	add    eax,edi
100776a3:	5f                   	pop    edi
100776a4:	2b c2                	sub    eax,edx
100776a6:	5e                   	pop    esi
100776a7:	5d                   	pop    ebp
100776a8:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
100776ab:	5b                   	pop    ebx
100776ac:	c3                   	ret
100776ad:	2b c2                	sub    eax,edx
100776af:	2b f7                	sub    esi,edi
100776b1:	0f af c3             	imul   eax,ebx
100776b4:	99                   	cdq
100776b5:	4e                   	dec    esi
100776b6:	5f                   	pop    edi
100776b7:	f7 fe                	idiv   esi
100776b9:	8b 51 4c             	mov    edx,DWORD PTR [ecx+0x4c]
100776bc:	5e                   	pop    esi
100776bd:	5d                   	pop    ebp
100776be:	5b                   	pop    ebx
100776bf:	03 c2                	add    eax,edx
100776c1:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
100776c4:	c3                   	ret
100776c5:	8b 59 54             	mov    ebx,DWORD PTR [ecx+0x54]
100776c8:	8b c3                	mov    eax,ebx
100776ca:	0f af c7             	imul   eax,edi
100776cd:	99                   	cdq
100776ce:	f7 fd                	idiv   ebp
100776d0:	8b 51 7c             	mov    edx,DWORD PTR [ecx+0x7c]
100776d3:	8d 7c 3a 01          	lea    edi,[edx+edi*1+0x1]
100776d7:	3b fe                	cmp    edi,esi
100776d9:	89 41 44             	mov    DWORD PTR [ecx+0x44],eax
100776dc:	7c 0f                	jl     0x100776ed
100776de:	8b 51 4c             	mov    edx,DWORD PTR [ecx+0x4c]
100776e1:	5f                   	pop    edi
100776e2:	2b d0                	sub    edx,eax
100776e4:	5e                   	pop    esi
100776e5:	03 d3                	add    edx,ebx
100776e7:	5d                   	pop    ebp
100776e8:	89 51 3c             	mov    DWORD PTR [ecx+0x3c],edx
100776eb:	5b                   	pop    ebx
100776ec:	c3                   	ret
100776ed:	8b c3                	mov    eax,ebx
100776ef:	5f                   	pop    edi
100776f0:	0f af c2             	imul   eax,edx
100776f3:	99                   	cdq
100776f4:	f7 fd                	idiv   ebp
100776f6:	8b 51 4c             	mov    edx,DWORD PTR [ecx+0x4c]
100776f9:	5e                   	pop    esi
100776fa:	5d                   	pop    ebp
100776fb:	5b                   	pop    ebx
100776fc:	03 c2                	add    eax,edx
100776fe:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
10077701:	c3                   	ret
10077702:	90                   	nop
10077703:	90                   	nop
10077704:	90                   	nop
10077705:	90                   	nop
10077706:	90                   	nop
10077707:	90                   	nop
10077708:	90                   	nop
10077709:	90                   	nop
1007770a:	90                   	nop
1007770b:	90                   	nop
1007770c:	90                   	nop
1007770d:	90                   	nop
1007770e:	90                   	nop
1007770f:	90                   	nop
10077710:	56                   	push   esi
10077711:	8b f1                	mov    esi,ecx
10077713:	e8 18 00 00 00       	call   0x10077730
10077718:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1007771d:	74 09                	je     0x10077728
1007771f:	56                   	push   esi
10077720:	e8 f9 c1 02 00       	call   0x100a391e
10077725:	83 c4 04             	add    esp,0x4
10077728:	8b c6                	mov    eax,esi
1007772a:	5e                   	pop    esi
1007772b:	c2 04 00             	ret    0x4
1007772e:	90                   	nop
1007772f:	90                   	nop
10077730:	c7 01 d8 c7 0b 10    	mov    DWORD PTR [ecx],0x100bc7d8
10077736:	e9 e5 6d ff ff       	jmp    0x1006e520
1007773b:	90                   	nop
1007773c:	90                   	nop
1007773d:	90                   	nop
1007773e:	90                   	nop
1007773f:	90                   	nop
10077740:	8b 81 30 20 00 00    	mov    eax,DWORD PTR [ecx+0x2030]
10077746:	c1 e0 06             	shl    eax,0x6
10077749:	8d 4c 08 2c          	lea    ecx,[eax+ecx*1+0x2c]
1007774d:	85 c9                	test   ecx,ecx
1007774f:	74 2a                	je     0x1007777b
10077751:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10077755:	6a 05                	push   0x5
10077757:	6a ff                	push   0xffffffff
10077759:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
1007775c:	52                   	push   edx
1007775d:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
10077760:	52                   	push   edx
10077761:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
10077764:	8b 00                	mov    eax,DWORD PTR [eax]
10077766:	52                   	push   edx
10077767:	50                   	push   eax
10077768:	51                   	push   ecx
10077769:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
1007776f:	51                   	push   ecx
10077770:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10077776:	e8 85 29 fd ff       	call   0x1004a100
1007777b:	c2 08 00             	ret    0x8
1007777e:	90                   	nop
1007777f:	90                   	nop
10077780:	8b 91 2c 20 00 00    	mov    edx,DWORD PTR [ecx+0x202c]
10077786:	8b 81 30 20 00 00    	mov    eax,DWORD PTR [ecx+0x2030]
1007778c:	4a                   	dec    edx
1007778d:	3b c2                	cmp    eax,edx
1007778f:	73 09                	jae    0x1007779a
10077791:	40                   	inc    eax
10077792:	89 81 30 20 00 00    	mov    DWORD PTR [ecx+0x2030],eax
10077798:	eb 14                	jmp    0x100777ae
1007779a:	8b 81 38 20 00 00    	mov    eax,DWORD PTR [ecx+0x2038]
100777a0:	85 c0                	test   eax,eax
100777a2:	74 0a                	je     0x100777ae
100777a4:	c7 81 30 20 00 00 00 	mov    DWORD PTR [ecx+0x2030],0x0
100777ab:	00 00 00 
100777ae:	8b 81 30 20 00 00    	mov    eax,DWORD PTR [ecx+0x2030]
100777b4:	8b 91 34 20 00 00    	mov    edx,DWORD PTR [ecx+0x2034]
100777ba:	50                   	push   eax
100777bb:	52                   	push   edx
100777bc:	e8 5f 71 ff ff       	call   0x1006e920
100777c1:	6a 1c                	push   0x1c
100777c3:	e8 78 5a fc ff       	call   0x1003d240
100777c8:	59                   	pop    ecx
100777c9:	c2 0c 00             	ret    0xc
100777cc:	90                   	nop
100777cd:	90                   	nop
100777ce:	90                   	nop
100777cf:	90                   	nop
100777d0:	8b 81 30 20 00 00    	mov    eax,DWORD PTR [ecx+0x2030]
100777d6:	85 c0                	test   eax,eax
100777d8:	77 10                	ja     0x100777ea
100777da:	8b 81 38 20 00 00    	mov    eax,DWORD PTR [ecx+0x2038]
100777e0:	85 c0                	test   eax,eax
100777e2:	74 0d                	je     0x100777f1
100777e4:	8b 81 2c 20 00 00    	mov    eax,DWORD PTR [ecx+0x202c]
100777ea:	48                   	dec    eax
100777eb:	89 81 30 20 00 00    	mov    DWORD PTR [ecx+0x2030],eax
100777f1:	8b 91 30 20 00 00    	mov    edx,DWORD PTR [ecx+0x2030]
100777f7:	8b 81 34 20 00 00    	mov    eax,DWORD PTR [ecx+0x2034]
100777fd:	52                   	push   edx
100777fe:	50                   	push   eax
100777ff:	e8 1c 71 ff ff       	call   0x1006e920
10077804:	6a 1c                	push   0x1c
10077806:	e8 35 5a fc ff       	call   0x1003d240
1007780b:	59                   	pop    ecx
1007780c:	c2 0c 00             	ret    0xc
1007780f:	90                   	nop
10077810:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10077814:	56                   	push   esi
10077815:	85 c0                	test   eax,eax
10077817:	57                   	push   edi
10077818:	8b f1                	mov    esi,ecx
1007781a:	7e 40                	jle    0x1007785c
1007781c:	8d 38                	lea    edi,[eax]
1007781e:	8b 86 30 20 00 00    	mov    eax,DWORD PTR [esi+0x2030]
10077824:	85 c0                	test   eax,eax
10077826:	77 10                	ja     0x10077838
10077828:	8b 86 38 20 00 00    	mov    eax,DWORD PTR [esi+0x2038]
1007782e:	85 c0                	test   eax,eax
10077830:	74 0d                	je     0x1007783f
10077832:	8b 86 2c 20 00 00    	mov    eax,DWORD PTR [esi+0x202c]
10077838:	48                   	dec    eax
10077839:	89 86 30 20 00 00    	mov    DWORD PTR [esi+0x2030],eax
1007783f:	8b 8e 30 20 00 00    	mov    ecx,DWORD PTR [esi+0x2030]
10077845:	8b 96 34 20 00 00    	mov    edx,DWORD PTR [esi+0x2034]
1007784b:	51                   	push   ecx
1007784c:	52                   	push   edx
1007784d:	8b ce                	mov    ecx,esi
1007784f:	e8 cc 70 ff ff       	call   0x1006e920
10077854:	4f                   	dec    edi
10077855:	75 c7                	jne    0x1007781e
10077857:	5f                   	pop    edi
10077858:	5e                   	pop    esi
10077859:	c2 10 00             	ret    0x10
1007785c:	8b c8                	mov    ecx,eax
1007785e:	40                   	inc    eax
1007785f:	85 c9                	test   ecx,ecx
10077861:	74 4d                	je     0x100778b0
10077863:	bf 01 00 00 00       	mov    edi,0x1
10077868:	2b f8                	sub    edi,eax
1007786a:	8b 96 2c 20 00 00    	mov    edx,DWORD PTR [esi+0x202c]
10077870:	8b 86 30 20 00 00    	mov    eax,DWORD PTR [esi+0x2030]
10077876:	4a                   	dec    edx
10077877:	3b c2                	cmp    eax,edx
10077879:	73 09                	jae    0x10077884
1007787b:	40                   	inc    eax
1007787c:	89 86 30 20 00 00    	mov    DWORD PTR [esi+0x2030],eax
10077882:	eb 14                	jmp    0x10077898
10077884:	8b 86 38 20 00 00    	mov    eax,DWORD PTR [esi+0x2038]
1007788a:	85 c0                	test   eax,eax
1007788c:	74 0a                	je     0x10077898
1007788e:	c7 86 30 20 00 00 00 	mov    DWORD PTR [esi+0x2030],0x0
10077895:	00 00 00 
10077898:	8b 86 30 20 00 00    	mov    eax,DWORD PTR [esi+0x2030]
1007789e:	8b 8e 34 20 00 00    	mov    ecx,DWORD PTR [esi+0x2034]
100778a4:	50                   	push   eax
100778a5:	51                   	push   ecx
100778a6:	8b ce                	mov    ecx,esi
100778a8:	e8 73 70 ff ff       	call   0x1006e920
100778ad:	4f                   	dec    edi
100778ae:	75 ba                	jne    0x1007786a
100778b0:	5f                   	pop    edi
100778b1:	5e                   	pop    esi
100778b2:	c2 10 00             	ret    0x10
100778b5:	90                   	nop
100778b6:	90                   	nop
100778b7:	90                   	nop
100778b8:	90                   	nop
100778b9:	90                   	nop
100778ba:	90                   	nop
100778bb:	90                   	nop
100778bc:	90                   	nop
100778bd:	90                   	nop
100778be:	90                   	nop
100778bf:	90                   	nop
100778c0:	6a 3c                	push   0x3c
100778c2:	e8 79 59 fc ff       	call   0x1003d240
100778c7:	59                   	pop    ecx
100778c8:	c3                   	ret
100778c9:	90                   	nop
100778ca:	90                   	nop
100778cb:	90                   	nop
100778cc:	90                   	nop
100778cd:	90                   	nop
100778ce:	90                   	nop
100778cf:	90                   	nop
100778d0:	56                   	push   esi
100778d1:	8b f1                	mov    esi,ecx
100778d3:	e8 18 00 00 00       	call   0x100778f0
100778d8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
100778dd:	74 09                	je     0x100778e8
100778df:	56                   	push   esi
100778e0:	e8 39 c0 02 00       	call   0x100a391e
100778e5:	83 c4 04             	add    esp,0x4
100778e8:	8b c6                	mov    eax,esi
100778ea:	5e                   	pop    esi
100778eb:	c2 04 00             	ret    0x4
100778ee:	90                   	nop
100778ef:	90                   	nop
100778f0:	c7 01 48 c8 0b 10    	mov    DWORD PTR [ecx],0x100bc848
100778f6:	e9 25 6c ff ff       	jmp    0x1006e520
100778fb:	90                   	nop
100778fc:	90                   	nop
100778fd:	90                   	nop
100778fe:	90                   	nop
100778ff:	90                   	nop
10077900:	56                   	push   esi
10077901:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
10077905:	57                   	push   edi
10077906:	8b f9                	mov    edi,ecx
10077908:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007790b:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1007790e:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10077911:	68 00 00 00 ff       	push   0xff000000
10077916:	68 2e 2e 2e ff       	push   0xff2e2e2e
1007791b:	50                   	push   eax
1007791c:	8b 06                	mov    eax,DWORD PTR [esi]
1007791e:	51                   	push   ecx
1007791f:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10077925:	52                   	push   edx
10077926:	50                   	push   eax
10077927:	e8 44 1c fd ff       	call   0x10049570
1007792c:	8b 8f 30 02 00 00    	mov    ecx,DWORD PTR [edi+0x230]
10077932:	8b 44 8f 2c          	mov    eax,DWORD PTR [edi+ecx*4+0x2c]
10077936:	85 c0                	test   eax,eax
10077938:	74 2b                	je     0x10077965
1007793a:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
1007793d:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10077940:	6a ff                	push   0xffffffff
10077942:	83 ea 04             	sub    edx,0x4
10077945:	6a 00                	push   0x0
10077947:	83 e9 04             	sub    ecx,0x4
1007794a:	52                   	push   edx
1007794b:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1007794e:	51                   	push   ecx
1007794f:	8b 0e                	mov    ecx,DWORD PTR [esi]
10077951:	83 c2 02             	add    edx,0x2
10077954:	83 c1 02             	add    ecx,0x2
10077957:	52                   	push   edx
10077958:	51                   	push   ecx
10077959:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1007795f:	50                   	push   eax
10077960:	e8 2b 2d fd ff       	call   0x1004a690
10077965:	5f                   	pop    edi
10077966:	5e                   	pop    esi
10077967:	c2 08 00             	ret    0x8
1007796a:	90                   	nop
1007796b:	90                   	nop
1007796c:	90                   	nop
1007796d:	90                   	nop
1007796e:	90                   	nop
1007796f:	90                   	nop
10077970:	8b 91 2c 02 00 00    	mov    edx,DWORD PTR [ecx+0x22c]
10077976:	8b 81 30 02 00 00    	mov    eax,DWORD PTR [ecx+0x230]
1007797c:	4a                   	dec    edx
1007797d:	3b c2                	cmp    eax,edx
1007797f:	73 09                	jae    0x1007798a
10077981:	40                   	inc    eax
10077982:	89 81 30 02 00 00    	mov    DWORD PTR [ecx+0x230],eax
10077988:	eb 14                	jmp    0x1007799e
1007798a:	8b 81 38 02 00 00    	mov    eax,DWORD PTR [ecx+0x238]
10077990:	85 c0                	test   eax,eax
10077992:	74 0a                	je     0x1007799e
10077994:	c7 81 30 02 00 00 00 	mov    DWORD PTR [ecx+0x230],0x0
1007799b:	00 00 00 
1007799e:	8b 81 30 02 00 00    	mov    eax,DWORD PTR [ecx+0x230]
100779a4:	8b 91 34 02 00 00    	mov    edx,DWORD PTR [ecx+0x234]
100779aa:	50                   	push   eax
100779ab:	52                   	push   edx
100779ac:	e8 6f 6f ff ff       	call   0x1006e920
100779b1:	6a 1c                	push   0x1c
100779b3:	e8 88 58 fc ff       	call   0x1003d240
100779b8:	59                   	pop    ecx
100779b9:	c2 0c 00             	ret    0xc
100779bc:	90                   	nop
100779bd:	90                   	nop
100779be:	90                   	nop
100779bf:	90                   	nop
100779c0:	8b 81 30 02 00 00    	mov    eax,DWORD PTR [ecx+0x230]
100779c6:	85 c0                	test   eax,eax
100779c8:	77 10                	ja     0x100779da
100779ca:	8b 81 38 02 00 00    	mov    eax,DWORD PTR [ecx+0x238]
100779d0:	85 c0                	test   eax,eax
100779d2:	74 0d                	je     0x100779e1
100779d4:	8b 81 2c 02 00 00    	mov    eax,DWORD PTR [ecx+0x22c]
100779da:	48                   	dec    eax
100779db:	89 81 30 02 00 00    	mov    DWORD PTR [ecx+0x230],eax
100779e1:	8b 91 30 02 00 00    	mov    edx,DWORD PTR [ecx+0x230]
100779e7:	8b 81 34 02 00 00    	mov    eax,DWORD PTR [ecx+0x234]
100779ed:	52                   	push   edx
100779ee:	50                   	push   eax
100779ef:	e8 2c 6f ff ff       	call   0x1006e920
100779f4:	6a 1c                	push   0x1c
100779f6:	e8 45 58 fc ff       	call   0x1003d240
100779fb:	59                   	pop    ecx
100779fc:	c2 0c 00             	ret    0xc
100779ff:	90                   	nop
10077a00:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10077a04:	56                   	push   esi
10077a05:	85 c0                	test   eax,eax
10077a07:	57                   	push   edi
10077a08:	8b f1                	mov    esi,ecx
10077a0a:	7e 4a                	jle    0x10077a56
10077a0c:	8d 38                	lea    edi,[eax]
10077a0e:	8b 86 30 02 00 00    	mov    eax,DWORD PTR [esi+0x230]
10077a14:	85 c0                	test   eax,eax
10077a16:	77 10                	ja     0x10077a28
10077a18:	8b 86 38 02 00 00    	mov    eax,DWORD PTR [esi+0x238]
10077a1e:	85 c0                	test   eax,eax
10077a20:	74 0d                	je     0x10077a2f
10077a22:	8b 86 2c 02 00 00    	mov    eax,DWORD PTR [esi+0x22c]
10077a28:	48                   	dec    eax
10077a29:	89 86 30 02 00 00    	mov    DWORD PTR [esi+0x230],eax
10077a2f:	8b 8e 30 02 00 00    	mov    ecx,DWORD PTR [esi+0x230]
10077a35:	8b 96 34 02 00 00    	mov    edx,DWORD PTR [esi+0x234]
10077a3b:	51                   	push   ecx
10077a3c:	52                   	push   edx
10077a3d:	8b ce                	mov    ecx,esi
10077a3f:	e8 dc 6e ff ff       	call   0x1006e920
10077a44:	6a 1c                	push   0x1c
10077a46:	e8 f5 57 fc ff       	call   0x1003d240
10077a4b:	83 c4 04             	add    esp,0x4
10077a4e:	4f                   	dec    edi
10077a4f:	75 bd                	jne    0x10077a0e
10077a51:	5f                   	pop    edi
10077a52:	5e                   	pop    esi
10077a53:	c2 10 00             	ret    0x10
10077a56:	8b c8                	mov    ecx,eax
10077a58:	40                   	inc    eax
10077a59:	85 c9                	test   ecx,ecx
10077a5b:	74 57                	je     0x10077ab4
10077a5d:	bf 01 00 00 00       	mov    edi,0x1
10077a62:	2b f8                	sub    edi,eax
10077a64:	8b 96 2c 02 00 00    	mov    edx,DWORD PTR [esi+0x22c]
10077a6a:	8b 86 30 02 00 00    	mov    eax,DWORD PTR [esi+0x230]
10077a70:	4a                   	dec    edx
10077a71:	3b c2                	cmp    eax,edx
10077a73:	73 09                	jae    0x10077a7e
10077a75:	40                   	inc    eax
10077a76:	89 86 30 02 00 00    	mov    DWORD PTR [esi+0x230],eax
10077a7c:	eb 14                	jmp    0x10077a92
10077a7e:	8b 86 38 02 00 00    	mov    eax,DWORD PTR [esi+0x238]
10077a84:	85 c0                	test   eax,eax
10077a86:	74 0a                	je     0x10077a92
10077a88:	c7 86 30 02 00 00 00 	mov    DWORD PTR [esi+0x230],0x0
10077a8f:	00 00 00 
10077a92:	8b 86 30 02 00 00    	mov    eax,DWORD PTR [esi+0x230]
10077a98:	8b 8e 34 02 00 00    	mov    ecx,DWORD PTR [esi+0x234]
10077a9e:	50                   	push   eax
10077a9f:	51                   	push   ecx
10077aa0:	8b ce                	mov    ecx,esi
10077aa2:	e8 79 6e ff ff       	call   0x1006e920
10077aa7:	6a 1c                	push   0x1c
10077aa9:	e8 92 57 fc ff       	call   0x1003d240
10077aae:	83 c4 04             	add    esp,0x4
10077ab1:	4f                   	dec    edi
10077ab2:	75 b0                	jne    0x10077a64
10077ab4:	5f                   	pop    edi
10077ab5:	5e                   	pop    esi
10077ab6:	c2 10 00             	ret    0x10
10077ab9:	90                   	nop
10077aba:	90                   	nop
10077abb:	90                   	nop
10077abc:	90                   	nop
10077abd:	90                   	nop
10077abe:	90                   	nop
10077abf:	90                   	nop
10077ac0:	6a ff                	push   0xffffffff
10077ac2:	68 94 65 0b 10       	push   0x100b6594
10077ac7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10077acd:	50                   	push   eax
10077ace:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10077ad5:	51                   	push   ecx
10077ad6:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10077ada:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10077ade:	53                   	push   ebx
10077adf:	55                   	push   ebp
10077ae0:	8b e9                	mov    ebp,ecx
10077ae2:	56                   	push   esi
10077ae3:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10077ae7:	57                   	push   edi
10077ae8:	50                   	push   eax
10077ae9:	51                   	push   ecx
10077aea:	52                   	push   edx
10077aeb:	8b cd                	mov    ecx,ebp
10077aed:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
10077af1:	e8 8a 68 ff ff       	call   0x1006e380
10077af6:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
10077afa:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
10077afe:	33 db                	xor    ebx,ebx
10077b00:	6a 44                	push   0x44
10077b02:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
10077b06:	c7 45 00 b8 c8 0b 10 	mov    DWORD PTR [ebp+0x0],0x100bc8b8
10077b0d:	89 45 2c             	mov    DWORD PTR [ebp+0x2c],eax
10077b10:	89 4d 30             	mov    DWORD PTR [ebp+0x30],ecx
10077b13:	e8 11 be 02 00       	call   0x100a3929
10077b18:	8b f0                	mov    esi,eax
10077b1a:	83 c4 04             	add    esp,0x4
10077b1d:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
10077b21:	3b f3                	cmp    esi,ebx
10077b23:	c6 44 24 1c 01       	mov    BYTE PTR [esp+0x1c],0x1
10077b28:	bf 00 41 12 10       	mov    edi,0x10124100
10077b2d:	74 4a                	je     0x10077b79
10077b2f:	53                   	push   ebx
10077b30:	6a 03                	push   0x3
10077b32:	55                   	push   ebp
10077b33:	8b ce                	mov    ecx,esi
10077b35:	e8 46 68 ff ff       	call   0x1006e380
10077b3a:	53                   	push   ebx
10077b3b:	8b ce                	mov    ecx,esi
10077b3d:	c6 44 24 20 02       	mov    BYTE PTR [esp+0x20],0x2
10077b42:	c7 06 10 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb10
10077b48:	89 5e 2c             	mov    DWORD PTR [esi+0x2c],ebx
10077b4b:	89 5e 30             	mov    DWORD PTR [esi+0x30],ebx
10077b4e:	e8 1d 8c ff ff       	call   0x10070770
10077b53:	53                   	push   ebx
10077b54:	8b ce                	mov    ecx,esi
10077b56:	c6 44 24 20 03       	mov    BYTE PTR [esp+0x20],0x3
10077b5b:	c7 06 88 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb88
10077b61:	c7 46 38 48 41 12 10 	mov    DWORD PTR [esi+0x38],0x10124148
10077b68:	89 5e 3c             	mov    DWORD PTR [esi+0x3c],ebx
10077b6b:	ff 15 04 bc 0b 10    	call   DWORD PTR ds:0x100bbc04
10077b71:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10077b74:	89 7e 34             	mov    DWORD PTR [esi+0x34],edi
10077b77:	eb 02                	jmp    0x10077b7b
10077b79:	33 f6                	xor    esi,esi
10077b7b:	6a 44                	push   0x44
10077b7d:	88 5c 24 20          	mov    BYTE PTR [esp+0x20],bl
10077b81:	89 75 34             	mov    DWORD PTR [ebp+0x34],esi
10077b84:	e8 a0 bd 02 00       	call   0x100a3929
10077b89:	8b f0                	mov    esi,eax
10077b8b:	83 c4 04             	add    esp,0x4
10077b8e:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
10077b92:	3b f3                	cmp    esi,ebx
10077b94:	c6 44 24 1c 04       	mov    BYTE PTR [esp+0x1c],0x4
10077b99:	74 52                	je     0x10077bed
10077b9b:	53                   	push   ebx
10077b9c:	6a 03                	push   0x3
10077b9e:	55                   	push   ebp
10077b9f:	8b ce                	mov    ecx,esi
10077ba1:	e8 da 67 ff ff       	call   0x1006e380
10077ba6:	53                   	push   ebx
10077ba7:	8b ce                	mov    ecx,esi
10077ba9:	c6 44 24 20 05       	mov    BYTE PTR [esp+0x20],0x5
10077bae:	c7 06 10 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb10
10077bb4:	c7 46 2c 01 00 00 00 	mov    DWORD PTR [esi+0x2c],0x1
10077bbb:	89 5e 30             	mov    DWORD PTR [esi+0x30],ebx
10077bbe:	e8 ad 8b ff ff       	call   0x10070770
10077bc3:	53                   	push   ebx
10077bc4:	53                   	push   ebx
10077bc5:	8b ce                	mov    ecx,esi
10077bc7:	c6 44 24 24 06       	mov    BYTE PTR [esp+0x24],0x6
10077bcc:	c7 06 88 bb 0b 10    	mov    DWORD PTR [esi],0x100bbb88
10077bd2:	89 5e 3c             	mov    DWORD PTR [esi+0x3c],ebx
10077bd5:	e8 26 8e ff ff       	call   0x10070a00
10077bda:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
10077bdd:	8b 16                	mov    edx,DWORD PTR [esi]
10077bdf:	50                   	push   eax
10077be0:	8b ce                	mov    ecx,esi
10077be2:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
10077be5:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10077be8:	89 7e 34             	mov    DWORD PTR [esi+0x34],edi
10077beb:	eb 02                	jmp    0x10077bef
10077bed:	33 f6                	xor    esi,esi
10077bef:	8b 45 34             	mov    eax,DWORD PTR [ebp+0x34]
10077bf2:	b9 40 c5 11 10       	mov    ecx,0x1011c540
10077bf7:	8b d1                	mov    edx,ecx
10077bf9:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
10077bfd:	85 d2                	test   edx,edx
10077bff:	89 75 38             	mov    DWORD PTR [ebp+0x38],esi
10077c02:	75 05                	jne    0x10077c09
10077c04:	b9 48 41 12 10       	mov    ecx,0x10124148
10077c09:	8b 78 3c             	mov    edi,DWORD PTR [eax+0x3c]
10077c0c:	89 48 38             	mov    DWORD PTR [eax+0x38],ecx
10077c0f:	b9 40 c5 11 10       	mov    ecx,0x1011c540
10077c14:	83 cf 10             	or     edi,0x10
10077c17:	8b d1                	mov    edx,ecx
10077c19:	89 78 3c             	mov    DWORD PTR [eax+0x3c],edi
10077c1c:	8b 45 38             	mov    eax,DWORD PTR [ebp+0x38]
10077c1f:	85 d2                	test   edx,edx
10077c21:	75 05                	jne    0x10077c28
10077c23:	b9 48 41 12 10       	mov    ecx,0x10124148
10077c28:	89 48 38             	mov    DWORD PTR [eax+0x38],ecx
10077c2b:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
10077c2e:	83 c9 30             	or     ecx,0x30
10077c31:	89 48 3c             	mov    DWORD PTR [eax+0x3c],ecx
10077c34:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
10077c38:	3b c3                	cmp    eax,ebx
10077c3a:	74 77                	je     0x10077cb3
10077c3c:	68 3c 20 00 00       	push   0x203c
10077c41:	e8 e3 bc 02 00       	call   0x100a3929
10077c46:	8b f0                	mov    esi,eax
10077c48:	83 c4 04             	add    esp,0x4
10077c4b:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
10077c4f:	3b f3                	cmp    esi,ebx
10077c51:	c6 44 24 1c 07       	mov    BYTE PTR [esp+0x1c],0x7
10077c56:	74 4d                	je     0x10077ca5
10077c58:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10077c5c:	8b ce                	mov    ecx,esi
10077c5e:	50                   	push   eax
10077c5f:	6a 01                	push   0x1
10077c61:	55                   	push   ebp
10077c62:	e8 19 67 ff ff       	call   0x1006e380
10077c67:	c7 06 d8 c7 0b 10    	mov    DWORD PTR [esi],0x100bc7d8
10077c6d:	c7 86 34 20 00 00 03 	mov    DWORD PTR [esi+0x2034],0x3
10077c74:	00 00 00 
10077c77:	8d 46 2c             	lea    eax,[esi+0x2c]
10077c7a:	b9 80 00 00 00       	mov    ecx,0x80
10077c7f:	88 18                	mov    BYTE PTR [eax],bl
10077c81:	83 c0 40             	add    eax,0x40
10077c84:	49                   	dec    ecx
10077c85:	75 f8                	jne    0x10077c7f
10077c87:	89 9e 2c 20 00 00    	mov    DWORD PTR [esi+0x202c],ebx
10077c8d:	89 9e 30 20 00 00    	mov    DWORD PTR [esi+0x2030],ebx
10077c93:	89 9e 38 20 00 00    	mov    DWORD PTR [esi+0x2038],ebx
10077c99:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
10077c9d:	89 75 3c             	mov    DWORD PTR [ebp+0x3c],esi
10077ca0:	89 5d 40             	mov    DWORD PTR [ebp+0x40],ebx
10077ca3:	eb 75                	jmp    0x10077d1a
10077ca5:	33 f6                	xor    esi,esi
10077ca7:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
10077cab:	89 75 3c             	mov    DWORD PTR [ebp+0x3c],esi
10077cae:	89 5d 40             	mov    DWORD PTR [ebp+0x40],ebx
10077cb1:	eb 67                	jmp    0x10077d1a
10077cb3:	68 3c 02 00 00       	push   0x23c
10077cb8:	e8 6c bc 02 00       	call   0x100a3929
10077cbd:	8b f0                	mov    esi,eax
10077cbf:	83 c4 04             	add    esp,0x4
10077cc2:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
10077cc6:	3b f3                	cmp    esi,ebx
10077cc8:	c6 44 24 1c 08       	mov    BYTE PTR [esp+0x1c],0x8
10077ccd:	74 3f                	je     0x10077d0e
10077ccf:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
10077cd3:	51                   	push   ecx
10077cd4:	6a 01                	push   0x1
10077cd6:	55                   	push   ebp
10077cd7:	8b ce                	mov    ecx,esi
10077cd9:	e8 a2 66 ff ff       	call   0x1006e380
10077cde:	8d 7e 2c             	lea    edi,[esi+0x2c]
10077ce1:	b9 80 00 00 00       	mov    ecx,0x80
10077ce6:	33 c0                	xor    eax,eax
10077ce8:	c7 06 48 c8 0b 10    	mov    DWORD PTR [esi],0x100bc848
10077cee:	c7 86 34 02 00 00 04 	mov    DWORD PTR [esi+0x234],0x4
10077cf5:	00 00 00 
10077cf8:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10077cfa:	89 9e 2c 02 00 00    	mov    DWORD PTR [esi+0x22c],ebx
10077d00:	89 9e 30 02 00 00    	mov    DWORD PTR [esi+0x230],ebx
10077d06:	89 9e 38 02 00 00    	mov    DWORD PTR [esi+0x238],ebx
10077d0c:	eb 02                	jmp    0x10077d10
10077d0e:	33 f6                	xor    esi,esi
10077d10:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
10077d14:	89 75 40             	mov    DWORD PTR [ebp+0x40],esi
10077d17:	89 5d 3c             	mov    DWORD PTR [ebp+0x3c],ebx
10077d1a:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10077d1e:	3b c3                	cmp    eax,ebx
10077d20:	74 08                	je     0x10077d2a
10077d22:	50                   	push   eax
10077d23:	8b cd                	mov    ecx,ebp
10077d25:	e8 26 69 ff ff       	call   0x1006e650
10077d2a:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10077d2e:	5f                   	pop    edi
10077d2f:	8b c5                	mov    eax,ebp
10077d31:	5e                   	pop    esi
10077d32:	5d                   	pop    ebp
10077d33:	5b                   	pop    ebx
10077d34:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10077d3b:	83 c4 10             	add    esp,0x10
10077d3e:	c2 14 00             	ret    0x14
10077d41:	90                   	nop
10077d42:	90                   	nop
10077d43:	90                   	nop
10077d44:	90                   	nop
10077d45:	90                   	nop
10077d46:	90                   	nop
10077d47:	90                   	nop
10077d48:	90                   	nop
10077d49:	90                   	nop
10077d4a:	90                   	nop
10077d4b:	90                   	nop
10077d4c:	90                   	nop
10077d4d:	90                   	nop
10077d4e:	90                   	nop
10077d4f:	90                   	nop
10077d50:	56                   	push   esi
10077d51:	8b f1                	mov    esi,ecx
10077d53:	e8 18 00 00 00       	call   0x10077d70
10077d58:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
10077d5d:	74 09                	je     0x10077d68
10077d5f:	56                   	push   esi
10077d60:	e8 b9 bb 02 00       	call   0x100a391e
10077d65:	83 c4 04             	add    esp,0x4
10077d68:	8b c6                	mov    eax,esi
10077d6a:	5e                   	pop    esi
10077d6b:	c2 04 00             	ret    0x4
10077d6e:	90                   	nop
10077d6f:	90                   	nop
10077d70:	c7 01 b8 c8 0b 10    	mov    DWORD PTR [ecx],0x100bc8b8
10077d76:	e9 a5 67 ff ff       	jmp    0x1006e520
10077d7b:	90                   	nop
10077d7c:	90                   	nop
10077d7d:	90                   	nop
10077d7e:	90                   	nop
10077d7f:	90                   	nop
10077d80:	56                   	push   esi
10077d81:	8b f1                	mov    esi,ecx
10077d83:	57                   	push   edi
10077d84:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10077d87:	8b 01                	mov    eax,DWORD PTR [ecx]
10077d89:	ff 50 74             	call   DWORD PTR [eax+0x74]
10077d8c:	8b f8                	mov    edi,eax
10077d8e:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
10077d91:	85 c0                	test   eax,eax
10077d93:	74 0d                	je     0x10077da2
10077d95:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10077d9b:	e8 d0 54 fd ff       	call   0x1004d270
10077da0:	eb 05                	jmp    0x10077da7
10077da2:	b8 24 00 00 00       	mov    eax,0x24
10077da7:	3b c7                	cmp    eax,edi
10077da9:	7f 02                	jg     0x10077dad
10077dab:	8b c7                	mov    eax,edi
10077dad:	5f                   	pop    edi
10077dae:	5e                   	pop    esi
10077daf:	c3                   	ret
10077db0:	8b 41 34             	mov    eax,DWORD PTR [ecx+0x34]
10077db3:	ba 40 c5 11 10       	mov    edx,0x1011c540
10077db8:	56                   	push   esi
10077db9:	8b f2                	mov    esi,edx
10077dbb:	85 f6                	test   esi,esi
10077dbd:	5e                   	pop    esi
10077dbe:	75 05                	jne    0x10077dc5
10077dc0:	ba 48 41 12 10       	mov    edx,0x10124148
10077dc5:	89 50 38             	mov    DWORD PTR [eax+0x38],edx
10077dc8:	8b 50 3c             	mov    edx,DWORD PTR [eax+0x3c]
10077dcb:	83 ca 10             	or     edx,0x10
10077dce:	89 50 3c             	mov    DWORD PTR [eax+0x3c],edx
10077dd1:	8b 49 38             	mov    ecx,DWORD PTR [ecx+0x38]
10077dd4:	b8 40 c5 11 10       	mov    eax,0x1011c540
10077dd9:	8b d0                	mov    edx,eax
10077ddb:	85 d2                	test   edx,edx
10077ddd:	75 05                	jne    0x10077de4
10077ddf:	b8 48 41 12 10       	mov    eax,0x10124148
10077de4:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
10077de7:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
10077dea:	0c 30                	or     al,0x30
10077dec:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
10077def:	c2 04 00             	ret    0x4
10077df2:	90                   	nop
10077df3:	90                   	nop
10077df4:	90                   	nop
10077df5:	90                   	nop
10077df6:	90                   	nop
10077df7:	90                   	nop
10077df8:	90                   	nop
10077df9:	90                   	nop
10077dfa:	90                   	nop
10077dfb:	90                   	nop
10077dfc:	90                   	nop
10077dfd:	90                   	nop
10077dfe:	90                   	nop
10077dff:	90                   	nop
10077e00:	83 ec 10             	sub    esp,0x10
10077e03:	53                   	push   ebx
10077e04:	55                   	push   ebp
10077e05:	56                   	push   esi
10077e06:	57                   	push   edi
10077e07:	8b f9                	mov    edi,ecx
10077e09:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
10077e0c:	8b 01                	mov    eax,DWORD PTR [ecx]
10077e0e:	ff 50 74             	call   DWORD PTR [eax+0x74]
10077e11:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
10077e15:	8b d8                	mov    ebx,eax
10077e17:	99                   	cdq
10077e18:	2b c2                	sub    eax,edx
10077e1a:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
10077e1e:	8b c8                	mov    ecx,eax
10077e20:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10077e23:	99                   	cdq
10077e24:	2b c2                	sub    eax,edx
10077e26:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10077e29:	d1 f9                	sar    ecx,1
10077e2b:	d1 f8                	sar    eax,1
10077e2d:	2b c1                	sub    eax,ecx
10077e2f:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
10077e32:	03 c2                	add    eax,edx
10077e34:	8b 16                	mov    edx,DWORD PTR [esi]
10077e36:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10077e3a:	8d 44 24 10          	lea    eax,[esp+0x10]
10077e3e:	50                   	push   eax
10077e3f:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
10077e43:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
10077e47:	e8 04 68 ff ff       	call   0x1006e650
10077e4c:	8b 0e                	mov    ecx,DWORD PTR [esi]
10077e4e:	8b 6c 24 18          	mov    ebp,DWORD PTR [esp+0x18]
10077e52:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10077e55:	2b cd                	sub    ecx,ebp
10077e57:	03 ca                	add    ecx,edx
10077e59:	8d 54 24 10          	lea    edx,[esp+0x10]
10077e5d:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10077e61:	8b 4f 38             	mov    ecx,DWORD PTR [edi+0x38]
10077e64:	52                   	push   edx
10077e65:	e8 e6 67 ff ff       	call   0x1006e650
10077e6a:	8b 4f 3c             	mov    ecx,DWORD PTR [edi+0x3c]
10077e6d:	85 c9                	test   ecx,ecx
10077e6f:	74 3f                	je     0x10077eb0
10077e71:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10077e74:	8d 54 1b 04          	lea    edx,[ebx+ebx*1+0x4]
10077e78:	8b d8                	mov    ebx,eax
10077e7a:	2b da                	sub    ebx,edx
10077e7c:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
10077e7f:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
10077e83:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
10077e87:	99                   	cdq
10077e88:	2b c2                	sub    eax,edx
10077e8a:	8b e8                	mov    ebp,eax
10077e8c:	8b c3                	mov    eax,ebx
10077e8e:	99                   	cdq
10077e8f:	2b c2                	sub    eax,edx
10077e91:	8b 16                	mov    edx,DWORD PTR [esi]
10077e93:	d1 fd                	sar    ebp,1
10077e95:	d1 f8                	sar    eax,1
10077e97:	2b e8                	sub    ebp,eax
10077e99:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10077e9c:	03 ea                	add    ebp,edx
10077e9e:	8d 54 24 10          	lea    edx,[esp+0x10]
10077ea2:	52                   	push   edx
10077ea3:	89 6c 24 14          	mov    DWORD PTR [esp+0x14],ebp
10077ea7:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10077eab:	e8 a0 67 ff ff       	call   0x1006e650
10077eb0:	8b 4f 40             	mov    ecx,DWORD PTR [edi+0x40]
10077eb3:	85 c9                	test   ecx,ecx
10077eb5:	74 3c                	je     0x10077ef3
10077eb7:	b8 24 00 00 00       	mov    eax,0x24
10077ebc:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10077ec0:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10077ec4:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10077ec7:	99                   	cdq
10077ec8:	2b c2                	sub    eax,edx
10077eca:	8b 16                	mov    edx,DWORD PTR [esi]
10077ecc:	d1 f8                	sar    eax,1
10077ece:	8d 44 10 ee          	lea    eax,[eax+edx*1-0x12]
10077ed2:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10077ed6:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10077ed9:	99                   	cdq
10077eda:	2b c2                	sub    eax,edx
10077edc:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10077edf:	d1 f8                	sar    eax,1
10077ee1:	8d 44 10 ee          	lea    eax,[eax+edx*1-0x12]
10077ee5:	8d 54 24 10          	lea    edx,[esp+0x10]
10077ee9:	52                   	push   edx
10077eea:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10077eee:	e8 5d 67 ff ff       	call   0x1006e650
10077ef3:	5f                   	pop    edi
10077ef4:	5e                   	pop    esi
10077ef5:	5d                   	pop    ebp
10077ef6:	5b                   	pop    ebx
10077ef7:	83 c4 10             	add    esp,0x10
10077efa:	c2 04 00             	ret    0x4
10077efd:	90                   	nop
10077efe:	90                   	nop
10077eff:	90                   	nop
10077f00:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10077f04:	83 f8 04             	cmp    eax,0x4
10077f07:	0f 87 50 01 00 00    	ja     0x1007805d
10077f0d:	ff 24 85 68 80 07 10 	jmp    DWORD PTR [eax*4+0x10078068]
10077f14:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
10077f17:	85 c0                	test   eax,eax
10077f19:	74 3f                	je     0x10077f5a
10077f1b:	8b 49 3c             	mov    ecx,DWORD PTR [ecx+0x3c]
10077f1e:	8b 81 30 20 00 00    	mov    eax,DWORD PTR [ecx+0x2030]
10077f24:	85 c0                	test   eax,eax
10077f26:	77 10                	ja     0x10077f38
10077f28:	8b 81 38 20 00 00    	mov    eax,DWORD PTR [ecx+0x2038]
10077f2e:	85 c0                	test   eax,eax
10077f30:	74 0d                	je     0x10077f3f
10077f32:	8b 81 2c 20 00 00    	mov    eax,DWORD PTR [ecx+0x202c]
10077f38:	48                   	dec    eax
10077f39:	89 81 30 20 00 00    	mov    DWORD PTR [ecx+0x2030],eax
10077f3f:	8b 91 30 20 00 00    	mov    edx,DWORD PTR [ecx+0x2030]
10077f45:	8b 81 34 20 00 00    	mov    eax,DWORD PTR [ecx+0x2034]
10077f4b:	52                   	push   edx
10077f4c:	50                   	push   eax
10077f4d:	e8 ce 69 ff ff       	call   0x1006e920
10077f52:	b8 01 00 00 00       	mov    eax,0x1
10077f57:	c2 08 00             	ret    0x8
10077f5a:	8b 49 40             	mov    ecx,DWORD PTR [ecx+0x40]
10077f5d:	8b 81 30 02 00 00    	mov    eax,DWORD PTR [ecx+0x230]
10077f63:	85 c0                	test   eax,eax
10077f65:	76 0c                	jbe    0x10077f73
10077f67:	48                   	dec    eax
10077f68:	89 81 30 02 00 00    	mov    DWORD PTR [ecx+0x230],eax
10077f6e:	e9 b7 00 00 00       	jmp    0x1007802a
10077f73:	8b 81 38 02 00 00    	mov    eax,DWORD PTR [ecx+0x238]
10077f79:	85 c0                	test   eax,eax
10077f7b:	0f 84 a9 00 00 00    	je     0x1007802a
10077f81:	8b 91 2c 02 00 00    	mov    edx,DWORD PTR [ecx+0x22c]
10077f87:	4a                   	dec    edx
10077f88:	89 91 30 02 00 00    	mov    DWORD PTR [ecx+0x230],edx
10077f8e:	e9 97 00 00 00       	jmp    0x1007802a
10077f93:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
10077f96:	85 c0                	test   eax,eax
10077f98:	74 5f                	je     0x10077ff9
10077f9a:	8b 49 3c             	mov    ecx,DWORD PTR [ecx+0x3c]
10077f9d:	8b 91 2c 20 00 00    	mov    edx,DWORD PTR [ecx+0x202c]
10077fa3:	8b 81 30 20 00 00    	mov    eax,DWORD PTR [ecx+0x2030]
10077fa9:	4a                   	dec    edx
10077faa:	3b c2                	cmp    eax,edx
10077fac:	73 1c                	jae    0x10077fca
10077fae:	8b 91 34 20 00 00    	mov    edx,DWORD PTR [ecx+0x2034]
10077fb4:	40                   	inc    eax
10077fb5:	50                   	push   eax
10077fb6:	52                   	push   edx
10077fb7:	89 81 30 20 00 00    	mov    DWORD PTR [ecx+0x2030],eax
10077fbd:	e8 5e 69 ff ff       	call   0x1006e920
10077fc2:	b8 01 00 00 00       	mov    eax,0x1
10077fc7:	c2 08 00             	ret    0x8
10077fca:	8b 81 38 20 00 00    	mov    eax,DWORD PTR [ecx+0x2038]
10077fd0:	85 c0                	test   eax,eax
10077fd2:	74 0a                	je     0x10077fde
10077fd4:	c7 81 30 20 00 00 00 	mov    DWORD PTR [ecx+0x2030],0x0
10077fdb:	00 00 00 
10077fde:	8b 81 30 20 00 00    	mov    eax,DWORD PTR [ecx+0x2030]
10077fe4:	8b 91 34 20 00 00    	mov    edx,DWORD PTR [ecx+0x2034]
10077fea:	50                   	push   eax
10077feb:	52                   	push   edx
10077fec:	e8 2f 69 ff ff       	call   0x1006e920
10077ff1:	b8 01 00 00 00       	mov    eax,0x1
10077ff6:	c2 08 00             	ret    0x8
10077ff9:	8b 49 40             	mov    ecx,DWORD PTR [ecx+0x40]
10077ffc:	8b 91 2c 02 00 00    	mov    edx,DWORD PTR [ecx+0x22c]
10078002:	8b 81 30 02 00 00    	mov    eax,DWORD PTR [ecx+0x230]
10078008:	4a                   	dec    edx
10078009:	3b c2                	cmp    eax,edx
1007800b:	73 09                	jae    0x10078016
1007800d:	40                   	inc    eax
1007800e:	89 81 30 02 00 00    	mov    DWORD PTR [ecx+0x230],eax
10078014:	eb 14                	jmp    0x1007802a
10078016:	8b 81 38 02 00 00    	mov    eax,DWORD PTR [ecx+0x238]
1007801c:	85 c0                	test   eax,eax
1007801e:	74 0a                	je     0x1007802a
10078020:	c7 81 30 02 00 00 00 	mov    DWORD PTR [ecx+0x230],0x0
10078027:	00 00 00 
1007802a:	8b 81 30 02 00 00    	mov    eax,DWORD PTR [ecx+0x230]
10078030:	8b 91 34 02 00 00    	mov    edx,DWORD PTR [ecx+0x234]
10078036:	50                   	push   eax
10078037:	52                   	push   edx
10078038:	e8 e3 68 ff ff       	call   0x1006e920
1007803d:	6a 1c                	push   0x1c
1007803f:	e8 fc 51 fc ff       	call   0x1003d240
10078044:	83 c4 04             	add    esp,0x4
10078047:	b8 01 00 00 00       	mov    eax,0x1
1007804c:	c2 08 00             	ret    0x8
1007804f:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10078053:	8b 51 30             	mov    edx,DWORD PTR [ecx+0x30]
10078056:	50                   	push   eax
10078057:	52                   	push   edx
10078058:	e8 c3 68 ff ff       	call   0x1006e920
1007805d:	b8 01 00 00 00       	mov    eax,0x1
10078062:	c2 08 00             	ret    0x8
10078065:	8d 49 00             	lea    ecx,[ecx+0x0]
10078068:	14 7f                	adc    al,0x7f
1007806a:	07                   	pop    es
1007806b:	10 93 7f 07 10 5d    	adc    BYTE PTR [ebx+0x5d10077f],dl
10078071:	80 07 10             	add    BYTE PTR [edi],0x10
10078074:	4f                   	dec    edi
10078075:	80 07 10             	add    BYTE PTR [edi],0x10
10078078:	4f                   	dec    edi
10078079:	80 07 10             	add    BYTE PTR [edi],0x10
1007807c:	90                   	nop
1007807d:	90                   	nop
1007807e:	90                   	nop
1007807f:	90                   	nop
10078080:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
10078083:	53                   	push   ebx
10078084:	85 c0                	test   eax,eax
10078086:	56                   	push   esi
10078087:	74 43                	je     0x100780cc
10078089:	8b 71 3c             	mov    esi,DWORD PTR [ecx+0x3c]
1007808c:	85 f6                	test   esi,esi
1007808e:	74 3c                	je     0x100780cc
10078090:	8b 5c 24 0c          	mov    ebx,DWORD PTR [esp+0xc]
10078094:	81 fb 80 00 00 00    	cmp    ebx,0x80
1007809a:	73 30                	jae    0x100780cc
1007809c:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100780a0:	8b c3                	mov    eax,ebx
100780a2:	c1 e0 06             	shl    eax,0x6
100780a5:	57                   	push   edi
100780a6:	6a 3f                	push   0x3f
100780a8:	8d 7c 30 2c          	lea    edi,[eax+esi*1+0x2c]
100780ac:	51                   	push   ecx
100780ad:	57                   	push   edi
100780ae:	e8 6d b7 02 00       	call   0x100a3820
100780b3:	c6 47 3f 00          	mov    BYTE PTR [edi+0x3f],0x0
100780b7:	8b 86 2c 20 00 00    	mov    eax,DWORD PTR [esi+0x202c]
100780bd:	83 c4 0c             	add    esp,0xc
100780c0:	3b d8                	cmp    ebx,eax
100780c2:	5f                   	pop    edi
100780c3:	72 07                	jb     0x100780cc
100780c5:	43                   	inc    ebx
100780c6:	89 9e 2c 20 00 00    	mov    DWORD PTR [esi+0x202c],ebx
100780cc:	5e                   	pop    esi
100780cd:	5b                   	pop    ebx
100780ce:	c2 08 00             	ret    0x8
100780d1:	90                   	nop
100780d2:	90                   	nop
100780d3:	90                   	nop
100780d4:	90                   	nop
100780d5:	90                   	nop
100780d6:	90                   	nop
100780d7:	90                   	nop
100780d8:	90                   	nop
100780d9:	90                   	nop
100780da:	90                   	nop
100780db:	90                   	nop
100780dc:	90                   	nop
100780dd:	90                   	nop
100780de:	90                   	nop
100780df:	90                   	nop
100780e0:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
100780e3:	85 c0                	test   eax,eax
100780e5:	75 2c                	jne    0x10078113
100780e7:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
100780ea:	85 c0                	test   eax,eax
100780ec:	74 25                	je     0x10078113
100780ee:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
100780f2:	81 f9 80 00 00 00    	cmp    ecx,0x80
100780f8:	73 19                	jae    0x10078113
100780fa:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
100780fe:	89 54 88 2c          	mov    DWORD PTR [eax+ecx*4+0x2c],edx
10078102:	8b 90 2c 02 00 00    	mov    edx,DWORD PTR [eax+0x22c]
10078108:	3b ca                	cmp    ecx,edx
1007810a:	72 07                	jb     0x10078113
1007810c:	41                   	inc    ecx
1007810d:	89 88 2c 02 00 00    	mov    DWORD PTR [eax+0x22c],ecx
10078113:	c2 08 00             	ret    0x8
10078116:	90                   	nop
10078117:	90                   	nop
10078118:	90                   	nop
10078119:	90                   	nop
1007811a:	90                   	nop
1007811b:	90                   	nop
1007811c:	90                   	nop
1007811d:	90                   	nop
1007811e:	90                   	nop
1007811f:	90                   	nop
10078120:	51                   	push   ecx
10078121:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
10078124:	33 d2                	xor    edx,edx
10078126:	53                   	push   ebx
10078127:	3b c2                	cmp    eax,edx
10078129:	56                   	push   esi
1007812a:	74 45                	je     0x10078171
1007812c:	8b 49 3c             	mov    ecx,DWORD PTR [ecx+0x3c]
1007812f:	3b ca                	cmp    ecx,edx
10078131:	74 7c                	je     0x100781af
10078133:	8b 81 2c 20 00 00    	mov    eax,DWORD PTR [ecx+0x202c]
10078139:	32 db                	xor    bl,bl
1007813b:	3b c2                	cmp    eax,edx
1007813d:	76 22                	jbe    0x10078161
1007813f:	33 c0                	xor    eax,eax
10078141:	c1 e0 06             	shl    eax,0x6
10078144:	fe c3                	inc    bl
10078146:	88 5c 24 08          	mov    BYTE PTR [esp+0x8],bl
1007814a:	88 54 08 2c          	mov    BYTE PTR [eax+ecx*1+0x2c],dl
1007814e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10078152:	8b b1 2c 20 00 00    	mov    esi,DWORD PTR [ecx+0x202c]
10078158:	25 ff 00 00 00       	and    eax,0xff
1007815d:	3b c6                	cmp    eax,esi
1007815f:	72 e0                	jb     0x10078141
10078161:	5e                   	pop    esi
10078162:	89 91 2c 20 00 00    	mov    DWORD PTR [ecx+0x202c],edx
10078168:	89 91 30 20 00 00    	mov    DWORD PTR [ecx+0x2030],edx
1007816e:	5b                   	pop    ebx
1007816f:	59                   	pop    ecx
10078170:	c3                   	ret
10078171:	8b 49 40             	mov    ecx,DWORD PTR [ecx+0x40]
10078174:	3b ca                	cmp    ecx,edx
10078176:	74 37                	je     0x100781af
10078178:	8b 81 2c 02 00 00    	mov    eax,DWORD PTR [ecx+0x22c]
1007817e:	32 db                	xor    bl,bl
10078180:	3b c2                	cmp    eax,edx
10078182:	76 1f                	jbe    0x100781a3
10078184:	33 c0                	xor    eax,eax
10078186:	fe c3                	inc    bl
10078188:	89 54 81 2c          	mov    DWORD PTR [ecx+eax*4+0x2c],edx
1007818c:	8b b1 2c 02 00 00    	mov    esi,DWORD PTR [ecx+0x22c]
10078192:	88 5c 24 08          	mov    BYTE PTR [esp+0x8],bl
10078196:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1007819a:	25 ff 00 00 00       	and    eax,0xff
1007819f:	3b c6                	cmp    eax,esi
100781a1:	72 e3                	jb     0x10078186
100781a3:	89 91 2c 02 00 00    	mov    DWORD PTR [ecx+0x22c],edx
100781a9:	89 91 30 02 00 00    	mov    DWORD PTR [ecx+0x230],edx
100781af:	5e                   	pop    esi
100781b0:	5b                   	pop    ebx
100781b1:	59                   	pop    ecx
100781b2:	c3                   	ret
100781b3:	90                   	nop
100781b4:	90                   	nop
100781b5:	90                   	nop
100781b6:	90                   	nop
100781b7:	90                   	nop
100781b8:	90                   	nop
100781b9:	90                   	nop
100781ba:	90                   	nop
100781bb:	90                   	nop
100781bc:	90                   	nop
100781bd:	90                   	nop
100781be:	90                   	nop
100781bf:	90                   	nop
100781c0:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
100781c3:	85 c0                	test   eax,eax
100781c5:	74 2b                	je     0x100781f2
100781c7:	8b 49 3c             	mov    ecx,DWORD PTR [ecx+0x3c]
100781ca:	85 c9                	test   ecx,ecx
100781cc:	74 4c                	je     0x1007821a
100781ce:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100781d2:	8b 91 2c 20 00 00    	mov    edx,DWORD PTR [ecx+0x202c]
100781d8:	3b c2                	cmp    eax,edx
100781da:	73 3e                	jae    0x1007821a
100781dc:	89 81 30 20 00 00    	mov    DWORD PTR [ecx+0x2030],eax
100781e2:	50                   	push   eax
100781e3:	8b 81 34 20 00 00    	mov    eax,DWORD PTR [ecx+0x2034]
100781e9:	50                   	push   eax
100781ea:	e8 31 67 ff ff       	call   0x1006e920
100781ef:	c2 04 00             	ret    0x4
100781f2:	8b 49 40             	mov    ecx,DWORD PTR [ecx+0x40]
100781f5:	85 c9                	test   ecx,ecx
100781f7:	74 21                	je     0x1007821a
100781f9:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100781fd:	8b 91 2c 02 00 00    	mov    edx,DWORD PTR [ecx+0x22c]
10078203:	3b c2                	cmp    eax,edx
10078205:	73 13                	jae    0x1007821a
10078207:	8b 91 34 02 00 00    	mov    edx,DWORD PTR [ecx+0x234]
1007820d:	50                   	push   eax
1007820e:	52                   	push   edx
1007820f:	89 81 30 02 00 00    	mov    DWORD PTR [ecx+0x230],eax
10078215:	e8 06 67 ff ff       	call   0x1006e920
1007821a:	c2 04 00             	ret    0x4
1007821d:	90                   	nop
1007821e:	90                   	nop
1007821f:	90                   	nop
10078220:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
10078223:	85 c0                	test   eax,eax
10078225:	74 19                	je     0x10078240
10078227:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
1007822a:	8b 88 30 20 00 00    	mov    ecx,DWORD PTR [eax+0x2030]
10078230:	8b d1                	mov    edx,ecx
10078232:	c1 e2 06             	shl    edx,0x6
10078235:	8d 44 02 2c          	lea    eax,[edx+eax*1+0x2c]
10078239:	f7 d8                	neg    eax
1007823b:	1b c0                	sbb    eax,eax
1007823d:	23 c1                	and    eax,ecx
1007823f:	c3                   	ret
10078240:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
10078243:	8b 88 30 02 00 00    	mov    ecx,DWORD PTR [eax+0x230]
10078249:	8b 44 88 2c          	mov    eax,DWORD PTR [eax+ecx*4+0x2c]
1007824d:	f7 d8                	neg    eax
1007824f:	1b c0                	sbb    eax,eax
10078251:	23 c1                	and    eax,ecx
10078253:	c3                   	ret
10078254:	90                   	nop
10078255:	90                   	nop
10078256:	90                   	nop
10078257:	90                   	nop
10078258:	90                   	nop
10078259:	90                   	nop
1007825a:	90                   	nop
1007825b:	90                   	nop
1007825c:	90                   	nop
1007825d:	90                   	nop
1007825e:	90                   	nop
1007825f:	90                   	nop
10078260:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
10078263:	85 c0                	test   eax,eax
10078265:	74 14                	je     0x1007827b
10078267:	8b 49 3c             	mov    ecx,DWORD PTR [ecx+0x3c]
1007826a:	85 c9                	test   ecx,ecx
1007826c:	74 1e                	je     0x1007828c
1007826e:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10078272:	89 81 38 20 00 00    	mov    DWORD PTR [ecx+0x2038],eax
10078278:	c2 04 00             	ret    0x4
1007827b:	8b 49 40             	mov    ecx,DWORD PTR [ecx+0x40]
1007827e:	85 c9                	test   ecx,ecx
10078280:	74 0a                	je     0x1007828c
10078282:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10078286:	89 91 38 02 00 00    	mov    DWORD PTR [ecx+0x238],edx
1007828c:	c2 04 00             	ret    0x4
1007828f:	90                   	nop
10078290:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10078294:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10078298:	56                   	push   esi
10078299:	8b f1                	mov    esi,ecx
1007829b:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1007829f:	50                   	push   eax
100782a0:	83 c9 02             	or     ecx,0x2
100782a3:	51                   	push   ecx
100782a4:	52                   	push   edx
100782a5:	8b ce                	mov    ecx,esi
100782a7:	e8 d4 60 ff ff       	call   0x1006e380
100782ac:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100782b0:	c7 06 28 c9 0b 10    	mov    DWORD PTR [esi],0x100bc928
100782b6:	89 86 9c 06 00 00    	mov    DWORD PTR [esi+0x69c],eax
100782bc:	33 c0                	xor    eax,eax
100782be:	88 86 a0 06 00 00    	mov    BYTE PTR [esi+0x6a0],al
100782c4:	88 86 e0 06 00 00    	mov    BYTE PTR [esi+0x6e0],al
100782ca:	89 86 24 07 00 00    	mov    DWORD PTR [esi+0x724],eax
100782d0:	89 86 20 07 00 00    	mov    DWORD PTR [esi+0x720],eax
100782d6:	89 86 98 06 00 00    	mov    DWORD PTR [esi+0x698],eax
100782dc:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
100782df:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
100782e2:	8b c6                	mov    eax,esi
100782e4:	5e                   	pop    esi
100782e5:	c2 14 00             	ret    0x14
100782e8:	90                   	nop
100782e9:	90                   	nop
100782ea:	90                   	nop
100782eb:	90                   	nop
100782ec:	90                   	nop
100782ed:	90                   	nop
100782ee:	90                   	nop
100782ef:	90                   	nop
100782f0:	56                   	push   esi
100782f1:	8b f1                	mov    esi,ecx
100782f3:	e8 18 00 00 00       	call   0x10078310
100782f8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
100782fd:	74 09                	je     0x10078308
100782ff:	56                   	push   esi
10078300:	e8 19 b6 02 00       	call   0x100a391e
10078305:	83 c4 04             	add    esp,0x4
10078308:	8b c6                	mov    eax,esi
1007830a:	5e                   	pop    esi
1007830b:	c2 04 00             	ret    0x4
1007830e:	90                   	nop
1007830f:	90                   	nop
10078310:	6a ff                	push   0xffffffff
10078312:	68 a8 65 0b 10       	push   0x100b65a8
10078317:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1007831d:	50                   	push   eax
1007831e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10078325:	51                   	push   ecx
10078326:	56                   	push   esi
10078327:	8b f1                	mov    esi,ecx
10078329:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
1007832d:	c7 06 28 c9 0b 10    	mov    DWORD PTR [esi],0x100bc928
10078333:	8b 86 98 06 00 00    	mov    eax,DWORD PTR [esi+0x698]
10078339:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
10078340:	00 
10078341:	85 c0                	test   eax,eax
10078343:	74 0f                	je     0x10078354
10078345:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007834b:	50                   	push   eax
1007834c:	8b 11                	mov    edx,DWORD PTR [ecx]
1007834e:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10078354:	8b ce                	mov    ecx,esi
10078356:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
1007835d:	ff 
1007835e:	e8 bd 61 ff ff       	call   0x1006e520
10078363:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10078367:	5e                   	pop    esi
10078368:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1007836f:	83 c4 10             	add    esp,0x10
10078372:	c3                   	ret
10078373:	90                   	nop
10078374:	90                   	nop
10078375:	90                   	nop
10078376:	90                   	nop
10078377:	90                   	nop
10078378:	90                   	nop
10078379:	90                   	nop
1007837a:	90                   	nop
1007837b:	90                   	nop
1007837c:	90                   	nop
1007837d:	90                   	nop
1007837e:	90                   	nop
1007837f:	90                   	nop
10078380:	56                   	push   esi
10078381:	8b f1                	mov    esi,ecx
10078383:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
10078386:	85 c0                	test   eax,eax
10078388:	75 5f                	jne    0x100783e9
1007838a:	d9 46 30             	fld    DWORD PTR [esi+0x30]
1007838d:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10078393:	df e0                	fnstsw ax
10078395:	f6 c4 40             	test   ah,0x40
10078398:	74 4f                	je     0x100783e9
1007839a:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
100783a0:	e8 3b 09 fc ff       	call   0x10038ce0
100783a5:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
100783ab:	e8 20 0a fc ff       	call   0x10038dd0
100783b0:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
100783b5:	6a 08                	push   0x8
100783b7:	6a 03                	push   0x3
100783b9:	ff 90 8c 02 00 00    	call   DWORD PTR [eax+0x28c]
100783bf:	83 c4 08             	add    esp,0x8
100783c2:	85 c0                	test   eax,eax
100783c4:	74 10                	je     0x100783d6
100783c6:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
100783cc:	ff 91 94 02 00 00    	call   DWORD PTR [ecx+0x294]
100783d2:	5e                   	pop    esi
100783d3:	c2 0c 00             	ret    0xc
100783d6:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100783dc:	56                   	push   esi
100783dd:	e8 5e 6e ff ff       	call   0x1006f240
100783e2:	c7 46 2c 01 00 00 00 	mov    DWORD PTR [esi+0x2c],0x1
100783e9:	5e                   	pop    esi
100783ea:	c2 0c 00             	ret    0xc
100783ed:	90                   	nop
100783ee:	90                   	nop
100783ef:	90                   	nop
100783f0:	56                   	push   esi
100783f1:	8b f1                	mov    esi,ecx
100783f3:	6a 3c                	push   0x3c
100783f5:	e8 46 4e fc ff       	call   0x1003d240
100783fa:	8b 86 9c 06 00 00    	mov    eax,DWORD PTR [esi+0x69c]
10078400:	83 c4 04             	add    esp,0x4
10078403:	8b ce                	mov    ecx,esi
10078405:	6a 00                	push   0x0
10078407:	50                   	push   eax
10078408:	e8 13 65 ff ff       	call   0x1006e920
1007840d:	5e                   	pop    esi
1007840e:	c3                   	ret
1007840f:	90                   	nop
10078410:	d9 41 30             	fld    DWORD PTR [ecx+0x30]
10078413:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10078419:	df e0                	fnstsw ax
1007841b:	f6 c4 40             	test   ah,0x40
1007841e:	75 08                	jne    0x10078428
10078420:	b8 01 00 00 00       	mov    eax,0x1
10078425:	c2 04 00             	ret    0x4
10078428:	33 c0                	xor    eax,eax
1007842a:	c2 04 00             	ret    0x4
1007842d:	90                   	nop
1007842e:	90                   	nop
1007842f:	90                   	nop
10078430:	55                   	push   ebp
10078431:	56                   	push   esi
10078432:	57                   	push   edi
10078433:	8b f9                	mov    edi,ecx
10078435:	8a 0d ec 40 12 10    	mov    cl,BYTE PTR ds:0x101240ec
1007843b:	b0 01                	mov    al,0x1
1007843d:	84 c8                	test   al,cl
1007843f:	75 2d                	jne    0x1007846e
10078441:	0a c8                	or     cl,al
10078443:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10078448:	88 0d ec 40 12 10    	mov    BYTE PTR ds:0x101240ec,cl
1007844e:	68 82 09 00 00       	push   0x982
10078453:	8b 08                	mov    ecx,DWORD PTR [eax]
10078455:	50                   	push   eax
10078456:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1007845c:	68 d0 86 07 10       	push   0x100786d0
10078461:	a3 e8 40 12 10       	mov    ds:0x101240e8,eax
10078466:	e8 1a ca 02 00       	call   0x100a4e85
1007846b:	83 c4 0c             	add    esp,0xc
1007846e:	8a 0d ec 40 12 10    	mov    cl,BYTE PTR ds:0x101240ec
10078474:	b0 02                	mov    al,0x2
10078476:	84 c8                	test   al,cl
10078478:	75 2d                	jne    0x100784a7
1007847a:	0a c8                	or     cl,al
1007847c:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10078481:	88 0d ec 40 12 10    	mov    BYTE PTR ds:0x101240ec,cl
10078487:	68 83 09 00 00       	push   0x983
1007848c:	8b 10                	mov    edx,DWORD PTR [eax]
1007848e:	50                   	push   eax
1007848f:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
10078495:	68 a0 86 07 10       	push   0x100786a0
1007849a:	a3 fc 40 12 10       	mov    ds:0x101240fc,eax
1007849f:	e8 e1 c9 02 00       	call   0x100a4e85
100784a4:	83 c4 0c             	add    esp,0xc
100784a7:	8b 47 2c             	mov    eax,DWORD PTR [edi+0x2c]
100784aa:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
100784ae:	33 ed                	xor    ebp,ebp
100784b0:	3b c5                	cmp    eax,ebp
100784b2:	74 1b                	je     0x100784cf
100784b4:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100784b7:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
100784ba:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100784bd:	68 a8 7b 3a ff       	push   0xff3a7ba8
100784c2:	68 2e 2e 2e ff       	push   0xff2e2e2e
100784c7:	50                   	push   eax
100784c8:	8b 06                	mov    eax,DWORD PTR [esi]
100784ca:	51                   	push   ecx
100784cb:	52                   	push   edx
100784cc:	50                   	push   eax
100784cd:	eb 19                	jmp    0x100784e8
100784cf:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100784d2:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
100784d5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100784d8:	68 b0 a9 3c 80       	push   0x803ca9b0
100784dd:	68 2e 2e 2e ff       	push   0xff2e2e2e
100784e2:	51                   	push   ecx
100784e3:	8b 0e                	mov    ecx,DWORD PTR [esi]
100784e5:	52                   	push   edx
100784e6:	50                   	push   eax
100784e7:	51                   	push   ecx
100784e8:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100784ee:	e8 7d 10 fd ff       	call   0x10049570
100784f3:	39 6f 2c             	cmp    DWORD PTR [edi+0x2c],ebp
100784f6:	0f 85 b6 00 00 00    	jne    0x100785b2
100784fc:	8a 87 a0 06 00 00    	mov    al,BYTE PTR [edi+0x6a0]
10078502:	8d 8f a0 06 00 00    	lea    ecx,[edi+0x6a0]
10078508:	84 c0                	test   al,al
1007850a:	0f 84 a2 00 00 00    	je     0x100785b2
10078510:	d9 87 20 07 00 00    	fld    DWORD PTR [edi+0x720]
10078516:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1007851c:	df e0                	fnstsw ax
1007851e:	f6 c4 01             	test   ah,0x1
10078521:	74 22                	je     0x10078545
10078523:	d9 87 24 07 00 00    	fld    DWORD PTR [edi+0x724]
10078529:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1007852f:	df e0                	fnstsw ax
10078531:	f6 c4 01             	test   ah,0x1
10078534:	74 0f                	je     0x10078545
10078536:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1007853c:	a1 e8 40 12 10       	mov    eax,ds:0x101240e8
10078541:	8b 11                	mov    edx,DWORD PTR [ecx]
10078543:	eb 33                	jmp    0x10078578
10078545:	d9 87 20 07 00 00    	fld    DWORD PTR [edi+0x720]
1007854b:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10078551:	df e0                	fnstsw ax
10078553:	f6 c4 41             	test   ah,0x41
10078556:	75 3d                	jne    0x10078595
10078558:	d9 87 24 07 00 00    	fld    DWORD PTR [edi+0x724]
1007855e:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10078564:	df e0                	fnstsw ax
10078566:	f6 c4 41             	test   ah,0x41
10078569:	75 2a                	jne    0x10078595
1007856b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10078571:	a1 fc 40 12 10       	mov    eax,ds:0x101240fc
10078576:	8b 11                	mov    edx,DWORD PTR [ecx]
10078578:	50                   	push   eax
10078579:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1007857f:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
10078582:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10078585:	6a 05                	push   0x5
10078587:	6a ff                	push   0xffffffff
10078589:	51                   	push   ecx
1007858a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1007858d:	52                   	push   edx
1007858e:	8b 16                	mov    edx,DWORD PTR [esi]
10078590:	51                   	push   ecx
10078591:	52                   	push   edx
10078592:	50                   	push   eax
10078593:	eb 35                	jmp    0x100785ca
10078595:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
10078598:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1007859b:	6a 15                	push   0x15
1007859d:	6a ff                	push   0xffffffff
1007859f:	52                   	push   edx
100785a0:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100785a3:	50                   	push   eax
100785a4:	8b 06                	mov    eax,DWORD PTR [esi]
100785a6:	52                   	push   edx
100785a7:	50                   	push   eax
100785a8:	51                   	push   ecx
100785a9:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
100785af:	51                   	push   ecx
100785b0:	eb 1e                	jmp    0x100785d0
100785b2:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
100785b5:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
100785b8:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100785bb:	6a 05                	push   0x5
100785bd:	6a ff                	push   0xffffffff
100785bf:	52                   	push   edx
100785c0:	8b 16                	mov    edx,DWORD PTR [esi]
100785c2:	50                   	push   eax
100785c3:	51                   	push   ecx
100785c4:	52                   	push   edx
100785c5:	68 80 46 0d 10       	push   0x100d4680
100785ca:	a1 ec b6 0d 10       	mov    eax,ds:0x100db6ec
100785cf:	50                   	push   eax
100785d0:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100785d6:	e8 25 1b fd ff       	call   0x1004a100
100785db:	d9 47 30             	fld    DWORD PTR [edi+0x30]
100785de:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
100785e4:	df e0                	fnstsw ax
100785e6:	f6 c4 40             	test   ah,0x40
100785e9:	75 24                	jne    0x1007860f
100785eb:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100785f1:	8b 11                	mov    edx,DWORD PTR [ecx]
100785f3:	ff 92 dc 00 00 00    	call   DWORD PTR [edx+0xdc]
100785f9:	d8 6f 30             	fsubr  DWORD PTR [edi+0x30]
100785fc:	d9 57 30             	fst    DWORD PTR [edi+0x30]
100785ff:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10078605:	df e0                	fnstsw ax
10078607:	f6 c4 41             	test   ah,0x41
1007860a:	74 03                	je     0x1007860f
1007860c:	89 6f 30             	mov    DWORD PTR [edi+0x30],ebp
1007860f:	39 6f 2c             	cmp    DWORD PTR [edi+0x2c],ebp
10078612:	74 7e                	je     0x10078692
10078614:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1007861a:	8d 44 24 14          	lea    eax,[esp+0x14]
1007861e:	8d 77 34             	lea    esi,[edi+0x34]
10078621:	50                   	push   eax
10078622:	56                   	push   esi
10078623:	c7 44 24 1c 08 00 00 	mov    DWORD PTR [esp+0x1c],0x8
1007862a:	00 
1007862b:	ff 91 90 02 00 00    	call   DWORD PTR [ecx+0x290]
10078631:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10078635:	83 c4 08             	add    esp,0x8
10078638:	3b c5                	cmp    eax,ebp
1007863a:	76 56                	jbe    0x10078692
1007863c:	8b 86 c8 00 00 00    	mov    eax,DWORD PTR [esi+0xc8]
10078642:	85 c0                	test   eax,eax
10078644:	74 3d                	je     0x10078683
10078646:	56                   	push   esi
10078647:	8b cf                	mov    ecx,edi
10078649:	e8 b2 00 00 00       	call   0x10078700
1007864e:	85 c0                	test   eax,eax
10078650:	74 31                	je     0x10078683
10078652:	6a 18                	push   0x18
10078654:	e8 e7 4b fc ff       	call   0x1003d240
10078659:	83 c4 04             	add    esp,0x4
1007865c:	c7 47 30 cd cc 4c 3e 	mov    DWORD PTR [edi+0x30],0x3e4ccccd
10078663:	c7 47 2c 00 00 00 00 	mov    DWORD PTR [edi+0x2c],0x0
1007866a:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10078670:	6a 00                	push   0x0
10078672:	e8 c9 6b ff ff       	call   0x1006f240
10078677:	8b 15 4c a1 11 10    	mov    edx,DWORD PTR ds:0x1011a14c
1007867d:	ff 92 94 02 00 00    	call   DWORD PTR [edx+0x294]
10078683:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10078687:	45                   	inc    ebp
10078688:	81 c6 cc 00 00 00    	add    esi,0xcc
1007868e:	3b e8                	cmp    ebp,eax
10078690:	72 aa                	jb     0x1007863c
10078692:	5f                   	pop    edi
10078693:	5e                   	pop    esi
10078694:	5d                   	pop    ebp
10078695:	c2 08 00             	ret    0x8
10078698:	90                   	nop
10078699:	90                   	nop
1007869a:	90                   	nop
1007869b:	90                   	nop
1007869c:	90                   	nop
1007869d:	90                   	nop
1007869e:	90                   	nop
1007869f:	90                   	nop
100786a0:	a1 fc 40 12 10       	mov    eax,ds:0x101240fc
100786a5:	85 c0                	test   eax,eax
100786a7:	74 19                	je     0x100786c2
100786a9:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100786af:	50                   	push   eax
100786b0:	8b 11                	mov    edx,DWORD PTR [ecx]
100786b2:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100786b8:	c7 05 fc 40 12 10 00 	mov    DWORD PTR ds:0x101240fc,0x0
100786bf:	00 00 00 
100786c2:	c3                   	ret
100786c3:	90                   	nop
100786c4:	90                   	nop
100786c5:	90                   	nop
100786c6:	90                   	nop
100786c7:	90                   	nop
100786c8:	90                   	nop
100786c9:	90                   	nop
100786ca:	90                   	nop
100786cb:	90                   	nop
100786cc:	90                   	nop
100786cd:	90                   	nop
100786ce:	90                   	nop
100786cf:	90                   	nop
100786d0:	a1 e8 40 12 10       	mov    eax,ds:0x101240e8
100786d5:	85 c0                	test   eax,eax
100786d7:	74 19                	je     0x100786f2
100786d9:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100786df:	50                   	push   eax
100786e0:	8b 11                	mov    edx,DWORD PTR [ecx]
100786e2:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100786e8:	c7 05 e8 40 12 10 00 	mov    DWORD PTR ds:0x101240e8,0x0
100786ef:	00 00 00 
100786f2:	c3                   	ret
100786f3:	90                   	nop
100786f4:	90                   	nop
100786f5:	90                   	nop
100786f6:	90                   	nop
100786f7:	90                   	nop
100786f8:	90                   	nop
100786f9:	90                   	nop
100786fa:	90                   	nop
100786fb:	90                   	nop
100786fc:	90                   	nop
100786fd:	90                   	nop
100786fe:	90                   	nop
100786ff:	90                   	nop
10078700:	81 ec 04 01 00 00    	sub    esp,0x104
10078706:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1007870b:	53                   	push   ebx
1007870c:	8b d9                	mov    ebx,ecx
1007870e:	56                   	push   esi
1007870f:	85 c0                	test   eax,eax
10078711:	89 5c 24 08          	mov    DWORD PTR [esp+0x8],ebx
10078715:	75 0d                	jne    0x10078724
10078717:	5e                   	pop    esi
10078718:	33 c0                	xor    eax,eax
1007871a:	5b                   	pop    ebx
1007871b:	81 c4 04 01 00 00    	add    esp,0x104
10078721:	c2 04 00             	ret    0x4
10078724:	8b b4 24 10 01 00 00 	mov    esi,DWORD PTR [esp+0x110]
1007872b:	8b 86 84 00 00 00    	mov    eax,DWORD PTR [esi+0x84]
10078731:	83 f8 03             	cmp    eax,0x3
10078734:	75 18                	jne    0x1007874e
10078736:	83 3e 02             	cmp    DWORD PTR [esi],0x2
10078739:	75 13                	jne    0x1007874e
1007873b:	56                   	push   esi
1007873c:	8b cb                	mov    ecx,ebx
1007873e:	e8 5d 04 00 00       	call   0x10078ba0
10078743:	5e                   	pop    esi
10078744:	5b                   	pop    ebx
10078745:	81 c4 04 01 00 00    	add    esp,0x104
1007874b:	c2 04 00             	ret    0x4
1007874e:	83 f8 08             	cmp    eax,0x8
10078751:	74 12                	je     0x10078765
10078753:	83 f8 09             	cmp    eax,0x9
10078756:	74 0d                	je     0x10078765
10078758:	5e                   	pop    esi
10078759:	33 c0                	xor    eax,eax
1007875b:	5b                   	pop    ebx
1007875c:	81 c4 04 01 00 00    	add    esp,0x104
10078762:	c2 04 00             	ret    0x4

*/
void ConsolePrompt::Invoke() {
    // TODO: Implement Invoke
}

