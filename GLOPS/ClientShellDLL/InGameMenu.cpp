#include "InGameMenu.h"

// 0x10082fed: InGameMenu::Navigate
/*
10082fed:	8d 49 00             	lea    ecx,[ecx+0x0]
10082ff0:	12 2f                	adc    ch,BYTE PTR [edi]
10082ff2:	08 10                	or     BYTE PTR [eax],dl
10082ff4:	23 2f                	and    ebp,DWORD PTR [edi]
10082ff6:	08 10                	or     BYTE PTR [eax],dl
10082ff8:	6e                   	outs   dx,BYTE PTR ds:[esi]
10082ff9:	2f                   	das
10082ffa:	08 10                	or     BYTE PTR [eax],dl
10082ffc:	7c 2f                	jl     0x1008302d
10082ffe:	08 10                	or     BYTE PTR [eax],dl
10083000:	8a 2f                	mov    ch,BYTE PTR [edi]
10083002:	08 10                	or     BYTE PTR [eax],dl
10083004:	98                   	cwde
10083005:	2f                   	das
10083006:	08 10                	or     BYTE PTR [eax],dl
10083008:	90                   	nop
10083009:	90                   	nop
1008300a:	90                   	nop
1008300b:	90                   	nop
1008300c:	90                   	nop
1008300d:	90                   	nop
1008300e:	90                   	nop
1008300f:	90                   	nop
10083010:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
10083015:	53                   	push   ebx
10083016:	55                   	push   ebp
10083017:	56                   	push   esi
10083018:	8b 90 08 81 01 00    	mov    edx,DWORD PTR [eax+0x18108]
1008301e:	8b f1                	mov    esi,ecx
10083020:	33 c9                	xor    ecx,ecx
10083022:	83 fa 01             	cmp    edx,0x1
10083025:	8b 5e 48             	mov    ebx,DWORD PTR [esi+0x48]
10083028:	57                   	push   edi
10083029:	0f 94 c1             	sete   cl
1008302c:	8b f9                	mov    edi,ecx
1008302e:	8b 88 c8 81 01 00    	mov    ecx,DWORD PTR [eax+0x181c8]
10083034:	33 ed                	xor    ebp,ebp
10083036:	85 c9                	test   ecx,ecx
10083038:	74 24                	je     0x1008305e
1008303a:	8b 11                	mov    edx,DWORD PTR [ecx]
1008303c:	ff 52 18             	call   DWORD PTR [edx+0x18]
1008303f:	50                   	push   eax
10083040:	b9 10 59 11 10       	mov    ecx,0x10115910
10083045:	e8 16 c6 f9 ff       	call   0x1001f660
1008304a:	85 c0                	test   eax,eax
1008304c:	74 10                	je     0x1008305e
1008304e:	8b c8                	mov    ecx,eax
10083050:	e8 7b f0 f8 ff       	call   0x100120d0
10083055:	85 c0                	test   eax,eax
10083057:	74 05                	je     0x1008305e
10083059:	bd 01 00 00 00       	mov    ebp,0x1
1008305e:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10083062:	85 c0                	test   eax,eax
10083064:	0f 84 9c 01 00 00    	je     0x10083206
1008306a:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
1008306d:	85 ff                	test   edi,edi
1008306f:	0f 84 9d 00 00 00    	je     0x10083112
10083075:	83 f8 05             	cmp    eax,0x5
10083078:	0f 87 05 02 00 00    	ja     0x10083283
1008307e:	ff 24 85 b8 32 08 10 	jmp    DWORD PTR [eax*4+0x100832b8]
10083085:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008308b:	68 75 06 00 00       	push   0x675
10083090:	68 4c dd 0d 10       	push   0x100ddd4c
10083095:	bb 01 00 00 00       	mov    ebx,0x1
1008309a:	8b 01                	mov    eax,DWORD PTR [ecx]
1008309c:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
100830a2:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100830a7:	68 d0 dd 0d 10       	push   0x100dddd0
100830ac:	68 7c 5d 0c 10       	push   0x100c5d7c
100830b1:	50                   	push   eax
100830b2:	8b 08                	mov    ecx,DWORD PTR [eax]
100830b4:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
100830ba:	83 c4 0c             	add    esp,0xc
100830bd:	e9 ca 01 00 00       	jmp    0x1008328c
100830c2:	8b 4e 40             	mov    ecx,DWORD PTR [esi+0x40]
100830c5:	e8 b6 2a 00 00       	call   0x10085b80
100830ca:	85 c0                	test   eax,eax
100830cc:	0f 84 dd 01 00 00    	je     0x100832af
100830d2:	83 7e 60 07          	cmp    DWORD PTR [esi+0x60],0x7
100830d6:	75 04                	jne    0x100830dc
100830d8:	6a 05                	push   0x5
100830da:	eb 02                	jmp    0x100830de
100830dc:	6a 04                	push   0x4
100830de:	e8 2d dd fc ff       	call   0x10050e10
100830e3:	83 c4 04             	add    esp,0x4
100830e6:	e8 25 de fc ff       	call   0x10050f10
100830eb:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100830f1:	68 92 00 00 00       	push   0x92
100830f6:	8b 11                	mov    edx,DWORD PTR [ecx]
100830f8:	ff 92 90 01 00 00    	call   DWORD PTR [edx+0x190]
100830fe:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083104:	50                   	push   eax
10083105:	8b 11                	mov    edx,DWORD PTR [ecx]
10083107:	ff 92 94 01 00 00    	call   DWORD PTR [edx+0x194]
1008310d:	e9 71 01 00 00       	jmp    0x10083283
10083112:	83 f8 05             	cmp    eax,0x5
10083115:	bf 07 00 00 00       	mov    edi,0x7
1008311a:	75 4c                	jne    0x10083168
1008311c:	8b 4e 40             	mov    ecx,DWORD PTR [esi+0x40]
1008311f:	e8 5c 2a 00 00       	call   0x10085b80
10083124:	85 c0                	test   eax,eax
10083126:	0f 84 83 01 00 00    	je     0x100832af
1008312c:	39 7e 60             	cmp    DWORD PTR [esi+0x60],edi
1008312f:	75 04                	jne    0x10083135
10083131:	6a 05                	push   0x5
10083133:	eb 02                	jmp    0x10083137
10083135:	6a 04                	push   0x4
10083137:	e8 d4 dc fc ff       	call   0x10050e10
1008313c:	83 c4 04             	add    esp,0x4
1008313f:	e8 cc dd fc ff       	call   0x10050f10
10083144:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008314a:	68 92 00 00 00       	push   0x92
1008314f:	8b 01                	mov    eax,DWORD PTR [ecx]
10083151:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
10083157:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008315d:	50                   	push   eax
1008315e:	8b 11                	mov    edx,DWORD PTR [ecx]
10083160:	ff 92 94 01 00 00    	call   DWORD PTR [edx+0x194]
10083166:	eb 03                	jmp    0x1008316b
10083168:	8d 58 01             	lea    ebx,[eax+0x1]
1008316b:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
1008316e:	83 f8 05             	cmp    eax,0x5
10083171:	0f 87 0c 01 00 00    	ja     0x10083283
10083177:	ff 24 85 d0 32 08 10 	jmp    DWORD PTR [eax*4+0x100832d0]
1008317e:	bb 01 00 00 00       	mov    ebx,0x1
10083183:	e9 04 01 00 00       	jmp    0x1008328c
10083188:	bb 02 00 00 00       	mov    ebx,0x2
1008318d:	e9 fa 00 00 00       	jmp    0x1008328c
10083192:	85 ed                	test   ebp,ebp
10083194:	0f 84 ca 00 00 00    	je     0x10083264
1008319a:	eb 12                	jmp    0x100831ae
1008319c:	85 ed                	test   ebp,ebp
1008319e:	75 0e                	jne    0x100831ae
100831a0:	bb 05 00 00 00       	mov    ebx,0x5
100831a5:	e9 e2 00 00 00       	jmp    0x1008328c
100831aa:	85 ed                	test   ebp,ebp
100831ac:	74 36                	je     0x100831e4
100831ae:	6a 04                	push   0x4
100831b0:	e8 5b dc fc ff       	call   0x10050e10
100831b5:	83 c4 04             	add    esp,0x4
100831b8:	e8 53 dd fc ff       	call   0x10050f10
100831bd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100831c3:	68 92 00 00 00       	push   0x92
100831c8:	8b 01                	mov    eax,DWORD PTR [ecx]
100831ca:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
100831d0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100831d6:	50                   	push   eax
100831d7:	8b 11                	mov    edx,DWORD PTR [ecx]
100831d9:	ff 92 94 01 00 00    	call   DWORD PTR [edx+0x194]
100831df:	e9 9f 00 00 00       	jmp    0x10083283
100831e4:	39 7e 60             	cmp    DWORD PTR [esi+0x60],edi
100831e7:	75 04                	jne    0x100831ed
100831e9:	6a 05                	push   0x5
100831eb:	eb 02                	jmp    0x100831ef
100831ed:	6a 04                	push   0x4
100831ef:	e8 1c dc fc ff       	call   0x10050e10
100831f4:	83 c4 04             	add    esp,0x4
100831f7:	e8 14 dd fc ff       	call   0x10050f10
100831fc:	8b 4e 40             	mov    ecx,DWORD PTR [esi+0x40]
100831ff:	e8 7c 29 00 00       	call   0x10085b80
10083204:	eb b7                	jmp    0x100831bd
10083206:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
10083209:	85 ff                	test   edi,edi
1008320b:	74 5e                	je     0x1008326b
1008320d:	83 f8 05             	cmp    eax,0x5
10083210:	77 71                	ja     0x10083283
10083212:	ff 24 85 e8 32 08 10 	jmp    DWORD PTR [eax*4+0x100832e8]
10083219:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008321f:	68 f6 06 00 00       	push   0x6f6
10083224:	68 4c dd 0d 10       	push   0x100ddd4c
10083229:	8b 01                	mov    eax,DWORD PTR [ecx]
1008322b:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10083231:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083236:	68 d0 dd 0d 10       	push   0x100dddd0
1008323b:	68 7c 5d 0c 10       	push   0x100c5d7c
10083240:	50                   	push   eax
10083241:	8b 08                	mov    ecx,DWORD PTR [eax]
10083243:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10083249:	83 c4 0c             	add    esp,0xc
1008324c:	e8 6f dc fc ff       	call   0x10050ec0
10083251:	6a 02                	push   0x2
10083253:	e8 b8 db fc ff       	call   0x10050e10
10083258:	83 c4 04             	add    esp,0x4
1008325b:	eb 26                	jmp    0x10083283
1008325d:	bb 03 00 00 00       	mov    ebx,0x3
10083262:	eb 28                	jmp    0x1008328c
10083264:	bb 04 00 00 00       	mov    ebx,0x4
10083269:	eb 21                	jmp    0x1008328c
1008326b:	85 c0                	test   eax,eax
1008326d:	75 11                	jne    0x10083280
1008326f:	e8 4c dc fc ff       	call   0x10050ec0
10083274:	6a 02                	push   0x2
10083276:	e8 95 db fc ff       	call   0x10050e10
1008327b:	83 c4 04             	add    esp,0x4
1008327e:	eb 03                	jmp    0x10083283
10083280:	8d 58 ff             	lea    ebx,[eax-0x1]
10083283:	85 db                	test   ebx,ebx
10083285:	7c 28                	jl     0x100832af
10083287:	83 fb 05             	cmp    ebx,0x5
1008328a:	7f 23                	jg     0x100832af
1008328c:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
1008328f:	3b d8                	cmp    ebx,eax
10083291:	74 1c                	je     0x100832af
10083293:	33 d2                	xor    edx,edx
10083295:	3b d8                	cmp    ebx,eax
10083297:	0f 9f c2             	setg   dl
1008329a:	52                   	push   edx
1008329b:	50                   	push   eax
1008329c:	8b ce                	mov    ecx,esi
1008329e:	e8 6d fa ff ff       	call   0x10082d10
100832a3:	85 c0                	test   eax,eax
100832a5:	74 08                	je     0x100832af
100832a7:	53                   	push   ebx
100832a8:	8b ce                	mov    ecx,esi
100832aa:	e8 41 fc ff ff       	call   0x10082ef0
100832af:	5f                   	pop    edi
100832b0:	5e                   	pop    esi
100832b1:	5d                   	pop    ebp
100832b2:	5b                   	pop    ebx
100832b3:	c2 04 00             	ret    0x4
100832b6:	8b ff                	mov    edi,edi
100832b8:	85 30                	test   DWORD PTR [eax],esi
100832ba:	08 10                	or     BYTE PTR [eax],dl
100832bc:	5d                   	pop    ebp
100832bd:	32 08                	xor    cl,BYTE PTR [eax]
100832bf:	10 83 32 08 10 64    	adc    BYTE PTR [ebx+0x64100832],al
100832c5:	32 08                	xor    cl,BYTE PTR [eax]
100832c7:	10 a0 31 08 10 c2    	adc    BYTE PTR [eax-0x3deff7cf],ah
100832cd:	30 08                	xor    BYTE PTR [eax],cl
100832cf:	10 7e 31             	adc    BYTE PTR [esi+0x31],bh
100832d2:	08 10                	or     BYTE PTR [eax],dl
100832d4:	88 31                	mov    BYTE PTR [ecx],dh
100832d6:	08 10                	or     BYTE PTR [eax],dl
100832d8:	5d                   	pop    ebp
100832d9:	32 08                	xor    cl,BYTE PTR [eax]
100832db:	10 92 31 08 10 9c    	adc    BYTE PTR [edx-0x63eff7cf],dl
100832e1:	31 08                	xor    DWORD PTR [eax],ecx
100832e3:	10 aa 31 08 10 19    	adc    BYTE PTR [edx+0x19100831],ch
100832e9:	32 08                	xor    cl,BYTE PTR [eax]
100832eb:	10 4c 32 08          	adc    BYTE PTR [edx+esi*1+0x8],cl
100832ef:	10 83 32 08 10 7e    	adc    BYTE PTR [ebx+0x7e100832],al
100832f5:	31 08                	xor    DWORD PTR [eax],ecx
100832f7:	10 5d 32             	adc    BYTE PTR [ebp+0x32],bl
100832fa:	08 10                	or     BYTE PTR [eax],dl
100832fc:	64 32 08             	xor    cl,BYTE PTR fs:[eax]
100832ff:	10 8b 44 24 04 89    	adc    BYTE PTR [ebx-0x76fbdbbc],cl
10083305:	41                   	inc    ecx
10083306:	64 c2 04 00          	fs ret 0x4
1008330a:	90                   	nop
1008330b:	90                   	nop
1008330c:	90                   	nop
1008330d:	90                   	nop
1008330e:	90                   	nop
1008330f:	90                   	nop
10083310:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10083314:	56                   	push   esi
10083315:	8b f1                	mov    esi,ecx
10083317:	85 c0                	test   eax,eax
10083319:	89 46 58             	mov    DWORD PTR [esi+0x58],eax
1008331c:	75 20                	jne    0x1008333e
1008331e:	57                   	push   edi
1008331f:	8b 7e 34             	mov    edi,DWORD PTR [esi+0x34]
10083322:	8b cf                	mov    ecx,edi
10083324:	e8 e7 a0 fe ff       	call   0x1006d410
10083329:	6a ff                	push   0xffffffff
1008332b:	8b cf                	mov    ecx,edi
1008332d:	e8 4e a1 fe ff       	call   0x1006d480
10083332:	c7 46 54 00 00 00 00 	mov    DWORD PTR [esi+0x54],0x0
10083339:	5f                   	pop    edi
1008333a:	5e                   	pop    esi
1008333b:	c2 04 00             	ret    0x4
1008333e:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
10083341:	c7 46 54 00 00 00 00 	mov    DWORD PTR [esi+0x54],0x0
10083348:	83 f8 02             	cmp    eax,0x2
1008334b:	75 14                	jne    0x10083361
1008334d:	8b ce                	mov    ecx,esi
1008334f:	e8 4c b5 fe ff       	call   0x1006e8a0
10083354:	a8 01                	test   al,0x1
10083356:	74 09                	je     0x10083361
10083358:	6a 01                	push   0x1
1008335a:	8b ce                	mov    ecx,esi
1008335c:	e8 af fc ff ff       	call   0x10083010
10083361:	5e                   	pop    esi
10083362:	c2 04 00             	ret    0x4
10083365:	90                   	nop
10083366:	90                   	nop
10083367:	90                   	nop
10083368:	90                   	nop
10083369:	90                   	nop
1008336a:	90                   	nop
1008336b:	90                   	nop
1008336c:	90                   	nop
1008336d:	90                   	nop
1008336e:	90                   	nop
1008336f:	90                   	nop
10083370:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10083374:	56                   	push   esi
10083375:	8b f1                	mov    esi,ecx
10083377:	57                   	push   edi
10083378:	85 c0                	test   eax,eax
1008337a:	89 46 5c             	mov    DWORD PTR [esi+0x5c],eax
1008337d:	75 30                	jne    0x100833af
1008337f:	8b 7e 3c             	mov    edi,DWORD PTR [esi+0x3c]
10083382:	6a 08                	push   0x8
10083384:	8b cf                	mov    ecx,edi
10083386:	c7 46 60 08 00 00 00 	mov    DWORD PTR [esi+0x60],0x8
1008338d:	e8 9e e3 ff ff       	call   0x10081730
10083392:	85 c0                	test   eax,eax
10083394:	74 3c                	je     0x100833d2
10083396:	6a 08                	push   0x8
10083398:	8b cf                	mov    ecx,edi
1008339a:	e8 41 ef ff ff       	call   0x100822e0
1008339f:	a1 54 cd 0b 10       	mov    eax,ds:0x100bcd54
100833a4:	89 87 9c 00 00 00    	mov    DWORD PTR [edi+0x9c],eax
100833aa:	5f                   	pop    edi
100833ab:	5e                   	pop    esi
100833ac:	c2 04 00             	ret    0x4
100833af:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
100833b2:	c7 46 54 00 00 00 00 	mov    DWORD PTR [esi+0x54],0x0
100833b9:	83 f8 04             	cmp    eax,0x4
100833bc:	75 14                	jne    0x100833d2
100833be:	8b ce                	mov    ecx,esi
100833c0:	e8 db b4 fe ff       	call   0x1006e8a0
100833c5:	a8 01                	test   al,0x1
100833c7:	74 09                	je     0x100833d2
100833c9:	6a 01                	push   0x1
100833cb:	8b ce                	mov    ecx,esi
100833cd:	e8 3e fc ff ff       	call   0x10083010
100833d2:	5f                   	pop    edi
100833d3:	5e                   	pop    esi
100833d4:	c2 04 00             	ret    0x4
100833d7:	90                   	nop
100833d8:	90                   	nop
100833d9:	90                   	nop
100833da:	90                   	nop
100833db:	90                   	nop
100833dc:	90                   	nop
100833dd:	90                   	nop
100833de:	90                   	nop
100833df:	90                   	nop
100833e0:	56                   	push   esi
100833e1:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
100833e5:	57                   	push   edi
100833e6:	8b 79 3c             	mov    edi,DWORD PTR [ecx+0x3c]
100833e9:	89 71 60             	mov    DWORD PTR [ecx+0x60],esi
100833ec:	56                   	push   esi
100833ed:	8b cf                	mov    ecx,edi
100833ef:	e8 3c e3 ff ff       	call   0x10081730
100833f4:	85 c0                	test   eax,eax
100833f6:	74 15                	je     0x1008340d
100833f8:	56                   	push   esi
100833f9:	8b cf                	mov    ecx,edi
100833fb:	e8 e0 ee ff ff       	call   0x100822e0
10083400:	8b 04 b5 34 cd 0b 10 	mov    eax,DWORD PTR [esi*4+0x100bcd34]
10083407:	89 87 9c 00 00 00    	mov    DWORD PTR [edi+0x9c],eax
1008340d:	5f                   	pop    edi
1008340e:	5e                   	pop    esi
1008340f:	c2 04 00             	ret    0x4
10083412:	90                   	nop
10083413:	90                   	nop
10083414:	90                   	nop
10083415:	90                   	nop
10083416:	90                   	nop
10083417:	90                   	nop
10083418:	90                   	nop
10083419:	90                   	nop
1008341a:	90                   	nop
1008341b:	90                   	nop
1008341c:	90                   	nop
1008341d:	90                   	nop
1008341e:	90                   	nop
1008341f:	90                   	nop
10083420:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10083424:	33 c0                	xor    eax,eax
10083426:	83 fa 0d             	cmp    edx,0xd
10083429:	75 0f                	jne    0x1008343a
1008342b:	6a 01                	push   0x1
1008342d:	e8 de fb ff ff       	call   0x10083010
10083432:	b8 01 00 00 00       	mov    eax,0x1
10083437:	c2 04 00             	ret    0x4
1008343a:	83 fa 08             	cmp    edx,0x8
1008343d:	75 0c                	jne    0x1008344b
1008343f:	6a 00                	push   0x0
10083441:	e8 ca fb ff ff       	call   0x10083010
10083446:	b8 01 00 00 00       	mov    eax,0x1
1008344b:	c2 04 00             	ret    0x4
1008344e:	90                   	nop
1008344f:	90                   	nop
10083450:	f6 44 24 04 01       	test   BYTE PTR [esp+0x4],0x1
10083455:	74 34                	je     0x1008348b
10083457:	56                   	push   esi
10083458:	8b 71 40             	mov    esi,DWORD PTR [ecx+0x40]
1008345b:	85 f6                	test   esi,esi
1008345d:	74 12                	je     0x10083471
1008345f:	8b ce                	mov    ecx,esi
10083461:	e8 3a b4 fe ff       	call   0x1006e8a0
10083466:	a8 01                	test   al,0x1
10083468:	74 07                	je     0x10083471
1008346a:	8b ce                	mov    ecx,esi
1008346c:	e8 8f 10 00 00       	call   0x10084500
10083471:	6a 01                	push   0x1
10083473:	b9 68 4c 12 10       	mov    ecx,0x10124c68
10083478:	e8 13 d2 00 00       	call   0x10090690
1008347d:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10083483:	6a 00                	push   0x0
10083485:	e8 76 bd fe ff       	call   0x1006f200
1008348a:	5e                   	pop    esi
1008348b:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
10083490:	74 0c                	je     0x1008349e
10083492:	6a 00                	push   0x0
10083494:	b9 68 4c 12 10       	mov    ecx,0x10124c68
10083499:	e8 f2 d1 00 00       	call   0x10090690
1008349e:	c2 08 00             	ret    0x8
100834a1:	90                   	nop
100834a2:	90                   	nop
100834a3:	90                   	nop
100834a4:	90                   	nop
100834a5:	90                   	nop
100834a6:	90                   	nop
100834a7:	90                   	nop
100834a8:	90                   	nop
100834a9:	90                   	nop
100834aa:	90                   	nop
100834ab:	90                   	nop
100834ac:	90                   	nop
100834ad:	90                   	nop
100834ae:	90                   	nop
100834af:	90                   	nop
100834b0:	56                   	push   esi
100834b1:	8b f1                	mov    esi,ecx
100834b3:	57                   	push   edi
100834b4:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
100834b8:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
100834bb:	89 b9 fc 00 00 00    	mov    DWORD PTR [ecx+0xfc],edi
100834c1:	e8 6a ef ff ff       	call   0x10082430
100834c6:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
100834c9:	57                   	push   edi
100834ca:	e8 f1 dd ff ff       	call   0x100812c0
100834cf:	5f                   	pop    edi
100834d0:	5e                   	pop    esi
100834d1:	c2 04 00             	ret    0x4
100834d4:	90                   	nop
100834d5:	90                   	nop
100834d6:	90                   	nop
100834d7:	90                   	nop
100834d8:	90                   	nop
100834d9:	90                   	nop
100834da:	90                   	nop
100834db:	90                   	nop
100834dc:	90                   	nop
100834dd:	90                   	nop
100834de:	90                   	nop
100834df:	90                   	nop
100834e0:	8b 49 34             	mov    ecx,DWORD PTR [ecx+0x34]
100834e3:	e8 28 9f fe ff       	call   0x1006d410
100834e8:	c2 08 00             	ret    0x8
100834eb:	90                   	nop
100834ec:	90                   	nop
100834ed:	90                   	nop
100834ee:	90                   	nop
100834ef:	90                   	nop
100834f0:	8b 49 30             	mov    ecx,DWORD PTR [ecx+0x30]
100834f3:	e9 28 da ff ff       	jmp    0x10080f20
100834f8:	90                   	nop
100834f9:	90                   	nop
100834fa:	90                   	nop
100834fb:	90                   	nop
100834fc:	90                   	nop
100834fd:	90                   	nop
100834fe:	90                   	nop
100834ff:	90                   	nop
10083500:	6a ff                	push   0xffffffff
10083502:	68 2e 68 0b 10       	push   0x100b682e
10083507:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1008350d:	50                   	push   eax
1008350e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10083515:	83 ec 14             	sub    esp,0x14
10083518:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1008351c:	53                   	push   ebx
1008351d:	55                   	push   ebp
1008351e:	8b 6c 24 34          	mov    ebp,DWORD PTR [esp+0x34]
10083522:	56                   	push   esi
10083523:	8b f1                	mov    esi,ecx
10083525:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
10083529:	57                   	push   edi
1008352a:	55                   	push   ebp
1008352b:	50                   	push   eax
1008352c:	51                   	push   ecx
1008352d:	8b ce                	mov    ecx,esi
1008352f:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
10083533:	e8 48 ae fe ff       	call   0x1006e380
10083538:	c7 06 40 cf 0b 10    	mov    DWORD PTR [esi],0x100bcf40
1008353e:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083543:	68 ee 06 00 00       	push   0x6ee
10083548:	50                   	push   eax
10083549:	8b 10                	mov    edx,DWORD PTR [eax]
1008354b:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
10083552:	00 
10083553:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
10083559:	8b d8                	mov    ebx,eax
1008355b:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083560:	68 e8 06 00 00       	push   0x6e8
10083565:	50                   	push   eax
10083566:	8b 08                	mov    ecx,DWORD PTR [eax]
10083568:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1008356e:	68 a4 01 00 00       	push   0x1a4
10083573:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
10083577:	e8 ad 03 02 00       	call   0x100a3929
1008357c:	8b f8                	mov    edi,eax
1008357e:	83 c4 14             	add    esp,0x14
10083581:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
10083585:	85 ff                	test   edi,edi
10083587:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
1008358c:	74 21                	je     0x100835af
1008358e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083594:	6a ff                	push   0xffffffff
10083596:	53                   	push   ebx
10083597:	8b 11                	mov    edx,DWORD PTR [ecx]
10083599:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008359f:	50                   	push   eax
100835a0:	6a 00                	push   0x0
100835a2:	55                   	push   ebp
100835a3:	6a 03                	push   0x3
100835a5:	56                   	push   esi
100835a6:	8b cf                	mov    ecx,edi
100835a8:	e8 43 e1 fe ff       	call   0x100716f0
100835ad:	eb 02                	jmp    0x100835b1
100835af:	33 c0                	xor    eax,eax
100835b1:	68 a4 01 00 00       	push   0x1a4
100835b6:	c6 44 24 30 00       	mov    BYTE PTR [esp+0x30],0x0
100835bb:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
100835be:	e8 66 03 02 00       	call   0x100a3929
100835c3:	8b f8                	mov    edi,eax
100835c5:	83 c4 04             	add    esp,0x4
100835c8:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
100835cc:	85 ff                	test   edi,edi
100835ce:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
100835d3:	74 25                	je     0x100835fa
100835d5:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100835db:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
100835df:	6a ff                	push   0xffffffff
100835e1:	52                   	push   edx
100835e2:	8b 01                	mov    eax,DWORD PTR [ecx]
100835e4:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
100835ea:	50                   	push   eax
100835eb:	6a 01                	push   0x1
100835ed:	55                   	push   ebp
100835ee:	6a 03                	push   0x3
100835f0:	56                   	push   esi
100835f1:	8b cf                	mov    ecx,edi
100835f3:	e8 f8 e0 fe ff       	call   0x100716f0
100835f8:	eb 02                	jmp    0x100835fc
100835fa:	33 c0                	xor    eax,eax
100835fc:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
100835ff:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083605:	53                   	push   ebx
10083606:	c6 44 24 30 00       	mov    BYTE PTR [esp+0x30],0x0
1008360b:	8b 01                	mov    eax,DWORD PTR [ecx]
1008360d:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10083613:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083619:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
1008361d:	50                   	push   eax
1008361e:	8b 11                	mov    edx,DWORD PTR [ecx]
10083620:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10083626:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1008362a:	51                   	push   ecx
1008362b:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
1008362e:	e8 8d b0 fe ff       	call   0x1006e6c0
10083633:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
10083639:	8d 14 c9             	lea    edx,[ecx+ecx*8]
1008363c:	8d 04 51             	lea    eax,[ecx+edx*2]
1008363f:	8d 14 81             	lea    edx,[ecx+eax*4]
10083642:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10083647:	f7 e2                	mul    edx
10083649:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1008364d:	c1 ea 09             	shr    edx,0x9
10083650:	8b fa                	mov    edi,edx
10083652:	99                   	cdq
10083653:	2b c2                	sub    eax,edx
10083655:	d1 f8                	sar    eax,1
10083657:	d1 ef                	shr    edi,1
10083659:	f7 d8                	neg    eax
1008365b:	2b c7                	sub    eax,edi
1008365d:	8b 3d 4c be 11 10    	mov    edi,DWORD PTR ds:0x1011be4c
10083663:	03 c1                	add    eax,ecx
10083665:	8b 0d 48 be 11 10    	mov    ecx,DWORD PTR ds:0x1011be48
1008366b:	03 c1                	add    eax,ecx
1008366d:	50                   	push   eax
1008366e:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
10083673:	8d 04 40             	lea    eax,[eax+eax*2]
10083676:	8b c8                	mov    ecx,eax
10083678:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1008367c:	99                   	cdq
1008367d:	2b c2                	sub    eax,edx
1008367f:	c1 e9 02             	shr    ecx,0x2
10083682:	d1 f8                	sar    eax,1
10083684:	2b c8                	sub    ecx,eax
10083686:	03 cf                	add    ecx,edi
10083688:	51                   	push   ecx
10083689:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
1008368c:	e8 9f af fe ff       	call   0x1006e630
10083691:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
10083697:	8d 14 c9             	lea    edx,[ecx+ecx*8]
1008369a:	8d 04 51             	lea    eax,[ecx+edx*2]
1008369d:	8d 14 81             	lea    edx,[ecx+eax*4]
100836a0:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
100836a5:	f7 e2                	mul    edx
100836a7:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
100836ab:	c1 ea 09             	shr    edx,0x9
100836ae:	8b fa                	mov    edi,edx
100836b0:	99                   	cdq
100836b1:	2b c2                	sub    eax,edx
100836b3:	8b 15 48 be 11 10    	mov    edx,DWORD PTR ds:0x1011be48
100836b9:	d1 f8                	sar    eax,1
100836bb:	d1 ef                	shr    edi,1
100836bd:	f7 d8                	neg    eax
100836bf:	2b c7                	sub    eax,edi
100836c1:	03 c1                	add    eax,ecx
100836c3:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
100836c9:	03 c2                	add    eax,edx
100836cb:	50                   	push   eax
100836cc:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
100836d0:	99                   	cdq
100836d1:	2b c2                	sub    eax,edx
100836d3:	8b 15 4c be 11 10    	mov    edx,DWORD PTR ds:0x1011be4c
100836d9:	c1 e9 02             	shr    ecx,0x2
100836dc:	d1 f8                	sar    eax,1
100836de:	2b c8                	sub    ecx,eax
100836e0:	03 ca                	add    ecx,edx
100836e2:	51                   	push   ecx
100836e3:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
100836e6:	e8 45 af fe ff       	call   0x1006e630
100836eb:	8b c6                	mov    eax,esi
100836ed:	5f                   	pop    edi
100836ee:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
100836f2:	5e                   	pop    esi
100836f3:	5d                   	pop    ebp
100836f4:	5b                   	pop    ebx
100836f5:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100836fc:	83 c4 20             	add    esp,0x20
100836ff:	c2 0c 00             	ret    0xc
10083702:	90                   	nop
10083703:	90                   	nop
10083704:	90                   	nop
10083705:	90                   	nop
10083706:	90                   	nop
10083707:	90                   	nop
10083708:	90                   	nop
10083709:	90                   	nop
1008370a:	90                   	nop
1008370b:	90                   	nop
1008370c:	90                   	nop
1008370d:	90                   	nop
1008370e:	90                   	nop
1008370f:	90                   	nop
10083710:	83 ec 10             	sub    esp,0x10
10083713:	8d 44 24 00          	lea    eax,[esp+0x0]
10083717:	56                   	push   esi
10083718:	8b f1                	mov    esi,ecx
1008371a:	57                   	push   edi
1008371b:	50                   	push   eax
1008371c:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
1008371f:	e8 9c af fe ff       	call   0x1006e6c0
10083724:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
1008372a:	8d 14 c9             	lea    edx,[ecx+ecx*8]
1008372d:	8d 04 51             	lea    eax,[ecx+edx*2]
10083730:	8d 14 81             	lea    edx,[ecx+eax*4]
10083733:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10083738:	f7 e2                	mul    edx
1008373a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1008373e:	c1 ea 09             	shr    edx,0x9
10083741:	8b fa                	mov    edi,edx
10083743:	99                   	cdq
10083744:	2b c2                	sub    eax,edx
10083746:	8b 15 48 be 11 10    	mov    edx,DWORD PTR ds:0x1011be48
1008374c:	d1 f8                	sar    eax,1
1008374e:	d1 ef                	shr    edi,1
10083750:	f7 d8                	neg    eax
10083752:	2b c7                	sub    eax,edi
10083754:	03 c1                	add    eax,ecx
10083756:	03 c2                	add    eax,edx
10083758:	50                   	push   eax
10083759:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
1008375e:	8d 04 40             	lea    eax,[eax+eax*2]
10083761:	8b c8                	mov    ecx,eax
10083763:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10083767:	99                   	cdq
10083768:	2b c2                	sub    eax,edx
1008376a:	8b 15 4c be 11 10    	mov    edx,DWORD PTR ds:0x1011be4c
10083770:	c1 e9 02             	shr    ecx,0x2
10083773:	d1 f8                	sar    eax,1
10083775:	2b c8                	sub    ecx,eax
10083777:	03 ca                	add    ecx,edx
10083779:	51                   	push   ecx
1008377a:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
1008377d:	e8 ae ae fe ff       	call   0x1006e630
10083782:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
10083788:	8d 14 c9             	lea    edx,[ecx+ecx*8]
1008378b:	8d 04 51             	lea    eax,[ecx+edx*2]
1008378e:	8d 14 81             	lea    edx,[ecx+eax*4]
10083791:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10083796:	f7 e2                	mul    edx
10083798:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1008379c:	c1 ea 09             	shr    edx,0x9
1008379f:	8b fa                	mov    edi,edx
100837a1:	99                   	cdq
100837a2:	2b c2                	sub    eax,edx
100837a4:	8b 15 48 be 11 10    	mov    edx,DWORD PTR ds:0x1011be48
100837aa:	d1 f8                	sar    eax,1
100837ac:	d1 ef                	shr    edi,1
100837ae:	f7 d8                	neg    eax
100837b0:	2b c7                	sub    eax,edi
100837b2:	03 c1                	add    eax,ecx
100837b4:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
100837ba:	03 c2                	add    eax,edx
100837bc:	50                   	push   eax
100837bd:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100837c1:	99                   	cdq
100837c2:	2b c2                	sub    eax,edx
100837c4:	8b 15 4c be 11 10    	mov    edx,DWORD PTR ds:0x1011be4c
100837ca:	c1 e9 02             	shr    ecx,0x2
100837cd:	d1 f8                	sar    eax,1
100837cf:	2b c8                	sub    ecx,eax
100837d1:	03 ca                	add    ecx,edx
100837d3:	51                   	push   ecx
100837d4:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
100837d7:	e8 54 ae fe ff       	call   0x1006e630
100837dc:	5f                   	pop    edi
100837dd:	5e                   	pop    esi
100837de:	83 c4 10             	add    esp,0x10
100837e1:	c2 04 00             	ret    0x4
100837e4:	90                   	nop
100837e5:	90                   	nop
100837e6:	90                   	nop
100837e7:	90                   	nop
100837e8:	90                   	nop
100837e9:	90                   	nop
100837ea:	90                   	nop
100837eb:	90                   	nop
100837ec:	90                   	nop
100837ed:	90                   	nop
100837ee:	90                   	nop
100837ef:	90                   	nop
100837f0:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
100837f4:	33 c0                	xor    eax,eax
100837f6:	2b c8                	sub    ecx,eax
100837f8:	74 17                	je     0x10083811
100837fa:	49                   	dec    ecx
100837fb:	75 26                	jne    0x10083823
100837fd:	8b 0d 10 43 12 10    	mov    ecx,DWORD PTR ds:0x10124310
10083803:	50                   	push   eax
10083804:	e8 07 f8 ff ff       	call   0x10083010
10083809:	b8 01 00 00 00       	mov    eax,0x1
1008380e:	c2 08 00             	ret    0x8
10083811:	8b 0d 10 43 12 10    	mov    ecx,DWORD PTR ds:0x10124310
10083817:	6a 01                	push   0x1
10083819:	e8 f2 f7 ff ff       	call   0x10083010
1008381e:	b8 01 00 00 00       	mov    eax,0x1
10083823:	c2 08 00             	ret    0x8
10083826:	90                   	nop
10083827:	90                   	nop
10083828:	90                   	nop
10083829:	90                   	nop
1008382a:	90                   	nop
1008382b:	90                   	nop
1008382c:	90                   	nop
1008382d:	90                   	nop
1008382e:	90                   	nop
1008382f:	90                   	nop
10083830:	56                   	push   esi
10083831:	8b f1                	mov    esi,ecx
10083833:	e8 18 00 00 00       	call   0x10083850
10083838:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1008383d:	74 09                	je     0x10083848
1008383f:	56                   	push   esi
10083840:	e8 d9 00 02 00       	call   0x100a391e
10083845:	83 c4 04             	add    esp,0x4
10083848:	8b c6                	mov    eax,esi
1008384a:	5e                   	pop    esi
1008384b:	c2 04 00             	ret    0x4
1008384e:	90                   	nop
1008384f:	90                   	nop
10083850:	6a ff                	push   0xffffffff
10083852:	68 53 68 0b 10       	push   0x100b6853
10083857:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1008385d:	50                   	push   eax
1008385e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10083865:	51                   	push   ecx
10083866:	56                   	push   esi
10083867:	8b f1                	mov    esi,ecx
10083869:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
1008386d:	c7 06 58 ce 0b 10    	mov    DWORD PTR [esi],0x100bce58
10083873:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
10083876:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
1008387d:	00 
1008387e:	85 c0                	test   eax,eax
10083880:	74 0f                	je     0x10083891
10083882:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083888:	50                   	push   eax
10083889:	8b 11                	mov    edx,DWORD PTR [ecx]
1008388b:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10083891:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
10083894:	c6 44 24 10 00       	mov    BYTE PTR [esp+0x10],0x0
10083899:	85 c0                	test   eax,eax
1008389b:	74 16                	je     0x100838b3
1008389d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100838a3:	50                   	push   eax
100838a4:	8b 11                	mov    edx,DWORD PTR [ecx]
100838a6:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100838ac:	c7 46 44 00 00 00 00 	mov    DWORD PTR [esi+0x44],0x0
100838b3:	8b ce                	mov    ecx,esi
100838b5:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
100838bc:	ff 
100838bd:	e8 5e ac fe ff       	call   0x1006e520
100838c2:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100838c6:	5e                   	pop    esi
100838c7:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100838ce:	83 c4 10             	add    esp,0x10
100838d1:	c3                   	ret
100838d2:	90                   	nop
100838d3:	90                   	nop
100838d4:	90                   	nop
100838d5:	90                   	nop
100838d6:	90                   	nop
100838d7:	90                   	nop
100838d8:	90                   	nop
100838d9:	90                   	nop
100838da:	90                   	nop
100838db:	90                   	nop
100838dc:	90                   	nop
100838dd:	90                   	nop
100838de:	90                   	nop
100838df:	90                   	nop
100838e0:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
100838e4:	56                   	push   esi
100838e5:	8b f1                	mov    esi,ecx
100838e7:	52                   	push   edx
100838e8:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
100838ee:	8b 01                	mov    eax,DWORD PTR [ecx]
100838f0:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
100838f6:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
100838f9:	50                   	push   eax
100838fa:	e8 41 1d ff ff       	call   0x10075640
100838ff:	5e                   	pop    esi
10083900:	c2 04 00             	ret    0x4
10083903:	90                   	nop
10083904:	90                   	nop
10083905:	90                   	nop
10083906:	90                   	nop
10083907:	90                   	nop
10083908:	90                   	nop
10083909:	90                   	nop
1008390a:	90                   	nop
1008390b:	90                   	nop
1008390c:	90                   	nop
1008390d:	90                   	nop
1008390e:	90                   	nop
1008390f:	90                   	nop
10083910:	83 ec 20             	sub    esp,0x20
10083913:	53                   	push   ebx
10083914:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
10083918:	56                   	push   esi
10083919:	8b f1                	mov    esi,ecx
1008391b:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
1008391e:	8d 54 24 18          	lea    edx,[esp+0x18]
10083922:	8d 46 48             	lea    eax,[esi+0x48]
10083925:	57                   	push   edi
10083926:	52                   	push   edx
10083927:	53                   	push   ebx
10083928:	50                   	push   eax
10083929:	ff 14 8d 2c a0 0d 10 	call   DWORD PTR [ecx*4+0x100da02c]
10083930:	8b 15 1c a0 0d 10    	mov    edx,DWORD PTR ds:0x100da01c
10083936:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
1008393c:	c1 e2 04             	shl    edx,0x4
1008393f:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10083944:	83 c4 0c             	add    esp,0xc
10083947:	f7 e2                	mul    edx
10083949:	8b 03                	mov    eax,DWORD PTR [ebx]
1008394b:	8b fa                	mov    edi,edx
1008394d:	c1 e1 04             	shl    ecx,0x4
10083950:	c1 e9 0a             	shr    ecx,0xa
10083953:	03 c1                	add    eax,ecx
10083955:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
10083958:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
1008395b:	c1 ef 09             	shr    edi,0x9
1008395e:	03 d7                	add    edx,edi
10083960:	8d 04 09             	lea    eax,[ecx+ecx*1]
10083963:	89 56 38             	mov    DWORD PTR [esi+0x38],edx
10083966:	8b 4b 08             	mov    ecx,DWORD PTR [ebx+0x8]
10083969:	2b c8                	sub    ecx,eax
1008396b:	89 4e 3c             	mov    DWORD PTR [esi+0x3c],ecx
1008396e:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10083974:	e8 f7 98 fc ff       	call   0x1004d270
10083979:	8b 56 34             	mov    edx,DWORD PTR [esi+0x34]
1008397c:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
1008397f:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
10083983:	8b 56 38             	mov    edx,DWORD PTR [esi+0x38]
10083986:	03 c7                	add    eax,edi
10083988:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
1008398b:	03 c2                	add    eax,edx
1008398d:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
10083991:	2b d0                	sub    edx,eax
10083993:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10083997:	2b d7                	sub    edx,edi
10083999:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
1008399d:	8d 44 24 0c          	lea    eax,[esp+0xc]
100839a1:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
100839a5:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
100839a8:	03 d7                	add    edx,edi
100839aa:	50                   	push   eax
100839ab:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
100839af:	e8 9c ac fe ff       	call   0x1006e650
100839b4:	5f                   	pop    edi
100839b5:	5e                   	pop    esi
100839b6:	5b                   	pop    ebx
100839b7:	83 c4 20             	add    esp,0x20
100839ba:	c2 04 00             	ret    0x4
100839bd:	90                   	nop
100839be:	90                   	nop
100839bf:	90                   	nop
100839c0:	83 ec 10             	sub    esp,0x10
100839c3:	53                   	push   ebx
100839c4:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
100839c8:	56                   	push   esi
100839c9:	8b f1                	mov    esi,ecx
100839cb:	57                   	push   edi
100839cc:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
100839d0:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
100839d3:	8d 7e 48             	lea    edi,[esi+0x48]
100839d6:	51                   	push   ecx
100839d7:	53                   	push   ebx
100839d8:	57                   	push   edi
100839d9:	ff 14 85 38 a0 0d 10 	call   DWORD PTR [eax*4+0x100da038]
100839e0:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
100839e4:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
100839e8:	83 c4 0c             	add    esp,0xc
100839eb:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100839ef:	6a 00                	push   0x0
100839f1:	6a ff                	push   0xffffffff
100839f3:	6a ff                	push   0xffffffff
100839f5:	6a ff                	push   0xffffffff
100839f7:	6a ff                	push   0xffffffff
100839f9:	52                   	push   edx
100839fa:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
100839fe:	50                   	push   eax
100839ff:	a1 a0 c4 11 10       	mov    eax,ds:0x1011c4a0
10083a04:	51                   	push   ecx
10083a05:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10083a0b:	52                   	push   edx
10083a0c:	50                   	push   eax
10083a0d:	e8 de 71 fc ff       	call   0x1004abf0
10083a12:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083a18:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
10083a1b:	50                   	push   eax
10083a1c:	8b 11                	mov    edx,DWORD PTR [ecx]
10083a1e:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
10083a24:	8b 4e 40             	mov    ecx,DWORD PTR [esi+0x40]
10083a27:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
10083a2a:	6a 04                	push   0x4
10083a2c:	6a ff                	push   0xffffffff
10083a2e:	51                   	push   ecx
10083a2f:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10083a32:	52                   	push   edx
10083a33:	8b 56 34             	mov    edx,DWORD PTR [esi+0x34]
10083a36:	51                   	push   ecx
10083a37:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10083a3d:	52                   	push   edx
10083a3e:	50                   	push   eax
10083a3f:	a1 f0 b6 0d 10       	mov    eax,ds:0x100db6f0
10083a44:	50                   	push   eax
10083a45:	e8 b6 66 fc ff       	call   0x1004a100
10083a4a:	8b 0f                	mov    ecx,DWORD PTR [edi]
10083a4c:	53                   	push   ebx
10083a4d:	57                   	push   edi
10083a4e:	ff 14 8d 20 a0 0d 10 	call   DWORD PTR [ecx*4+0x100da020]
10083a55:	83 c4 08             	add    esp,0x8
10083a58:	5f                   	pop    edi
10083a59:	5e                   	pop    esi
10083a5a:	5b                   	pop    ebx
10083a5b:	83 c4 10             	add    esp,0x10
10083a5e:	c2 08 00             	ret    0x8
10083a61:	90                   	nop
10083a62:	90                   	nop
10083a63:	90                   	nop
10083a64:	90                   	nop
10083a65:	90                   	nop
10083a66:	90                   	nop
10083a67:	90                   	nop
10083a68:	90                   	nop
10083a69:	90                   	nop
10083a6a:	90                   	nop
10083a6b:	90                   	nop
10083a6c:	90                   	nop
10083a6d:	90                   	nop
10083a6e:	90                   	nop
10083a6f:	90                   	nop
10083a70:	6a ff                	push   0xffffffff
10083a72:	68 aa 68 0b 10       	push   0x100b68aa
10083a77:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10083a7d:	50                   	push   eax
10083a7e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10083a85:	83 ec 3c             	sub    esp,0x3c
10083a88:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
10083a8c:	53                   	push   ebx
10083a8d:	55                   	push   ebp
10083a8e:	8b 6c 24 5c          	mov    ebp,DWORD PTR [esp+0x5c]
10083a92:	56                   	push   esi
10083a93:	8b f1                	mov    esi,ecx
10083a95:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
10083a99:	57                   	push   edi
10083a9a:	55                   	push   ebp
10083a9b:	50                   	push   eax
10083a9c:	51                   	push   ecx
10083a9d:	8b ce                	mov    ecx,esi
10083a9f:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
10083aa3:	e8 d8 a8 fe ff       	call   0x1006e380
10083aa8:	33 db                	xor    ebx,ebx
10083aaa:	8d 4e 2c             	lea    ecx,[esi+0x2c]
10083aad:	89 5c 24 54          	mov    DWORD PTR [esp+0x54],ebx
10083ab1:	e8 da d0 ff ff       	call   0x10080b90
10083ab6:	b8 ff 00 00 00       	mov    eax,0xff
10083abb:	8b ce                	mov    ecx,esi
10083abd:	c7 06 b0 cf 0b 10    	mov    DWORD PTR [esi],0x100bcfb0
10083ac3:	89 9e 18 17 00 00    	mov    DWORD PTR [esi+0x1718],ebx
10083ac9:	89 9e d0 16 00 00    	mov    DWORD PTR [esi+0x16d0],ebx
10083acf:	c7 86 e0 16 00 00 08 	mov    DWORD PTR [esi+0x16e0],0x8
10083ad6:	00 00 00 
10083ad9:	89 86 d4 16 00 00    	mov    DWORD PTR [esi+0x16d4],eax
10083adf:	89 86 cc 16 00 00    	mov    DWORD PTR [esi+0x16cc],eax
10083ae5:	e8 c6 23 00 00       	call   0x10085eb0
10083aea:	8b ce                	mov    ecx,esi
10083aec:	e8 af 3c 00 00       	call   0x100877a0
10083af1:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083af6:	8d 54 24 60          	lea    edx,[esp+0x60]
10083afa:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
10083afe:	52                   	push   edx
10083aff:	51                   	push   ecx
10083b00:	8d b8 10 02 00 00    	lea    edi,[eax+0x210]
10083b06:	ff 90 e0 01 00 00    	call   DWORD PTR [eax+0x1e0]
10083b0c:	50                   	push   eax
10083b0d:	ff 17                	call   DWORD PTR [edi]
10083b0f:	68 b8 0f 00 00       	push   0xfb8
10083b14:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
10083b18:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
10083b1c:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
10083b20:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
10083b24:	e8 00 fe 01 00       	call   0x100a3929
10083b29:	83 c4 10             	add    esp,0x10
10083b2c:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10083b30:	3b c3                	cmp    eax,ebx
10083b32:	c6 44 24 54 01       	mov    BYTE PTR [esp+0x54],0x1
10083b37:	74 0d                	je     0x10083b46
10083b39:	55                   	push   ebp
10083b3a:	6a 01                	push   0x1
10083b3c:	56                   	push   esi
10083b3d:	8b c8                	mov    ecx,eax
10083b3f:	e8 2c 68 00 00       	call   0x1008a370
10083b44:	eb 02                	jmp    0x10083b48
10083b46:	33 c0                	xor    eax,eax
10083b48:	88 5c 24 54          	mov    BYTE PTR [esp+0x54],bl
10083b4c:	89 86 dc 0e 00 00    	mov    DWORD PTR [esi+0xedc],eax
10083b52:	33 ed                	xor    ebp,ebp
10083b54:	8d be fc 0e 00 00    	lea    edi,[esi+0xefc]
10083b5a:	8d 55 01             	lea    edx,[ebp+0x1]
10083b5d:	8d 44 24 2c          	lea    eax,[esp+0x2c]
10083b61:	52                   	push   edx
10083b62:	68 34 b4 0d 10       	push   0x100db434
10083b67:	50                   	push   eax
10083b68:	e8 ee 02 02 00       	call   0x100a3e5b
10083b6d:	68 80 01 00 00       	push   0x180
10083b72:	e8 b2 fd 01 00       	call   0x100a3929
10083b77:	83 c4 10             	add    esp,0x10
10083b7a:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10083b7e:	3b c3                	cmp    eax,ebx
10083b80:	c6 44 24 54 02       	mov    BYTE PTR [esp+0x54],0x2
10083b85:	74 1c                	je     0x10083ba3
10083b87:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
10083b8b:	8d 54 24 1c          	lea    edx,[esp+0x1c]
10083b8f:	51                   	push   ecx
10083b90:	8d 4d 09             	lea    ecx,[ebp+0x9]
10083b93:	6a 41                	push   0x41
10083b95:	51                   	push   ecx
10083b96:	52                   	push   edx
10083b97:	6a 03                	push   0x3
10083b99:	56                   	push   esi
10083b9a:	8b c8                	mov    ecx,eax
10083b9c:	e8 9f e1 fe ff       	call   0x10071d40
10083ba1:	eb 02                	jmp    0x10083ba5
10083ba3:	33 c0                	xor    eax,eax
10083ba5:	68 a5 70 26 00       	push   0x2670a5
10083baa:	68 a5 70 26 00       	push   0x2670a5
10083baf:	68 a5 70 26 c8       	push   0xc82670a5
10083bb4:	8b c8                	mov    ecx,eax
10083bb6:	88 5c 24 60          	mov    BYTE PTR [esp+0x60],bl
10083bba:	89 07                	mov    DWORD PTR [edi],eax
10083bbc:	e8 9f e5 fe ff       	call   0x10072160
10083bc1:	8b 0f                	mov    ecx,DWORD PTR [edi]
10083bc3:	6a ff                	push   0xffffffff
10083bc5:	68 ff ff ff 00       	push   0xffffff
10083bca:	6a ff                	push   0xffffffff
10083bcc:	e8 bf e5 fe ff       	call   0x10072190
10083bd1:	8b 0f                	mov    ecx,DWORD PTR [edi]
10083bd3:	6a ff                	push   0xffffffff
10083bd5:	6a ff                	push   0xffffffff
10083bd7:	6a ff                	push   0xffffffff
10083bd9:	e8 e2 e5 fe ff       	call   0x100721c0
10083bde:	8b 0f                	mov    ecx,DWORD PTR [edi]
10083be0:	33 c0                	xor    eax,eax
10083be2:	3b eb                	cmp    ebp,ebx
10083be4:	0f 94 c0             	sete   al
10083be7:	50                   	push   eax
10083be8:	e8 43 e2 fe ff       	call   0x10071e30
10083bed:	8b 0f                	mov    ecx,DWORD PTR [edi]
10083bef:	e8 8c ad fe ff       	call   0x1006e980
10083bf4:	45                   	inc    ebp
10083bf5:	83 c7 04             	add    edi,0x4
10083bf8:	83 fd 05             	cmp    ebp,0x5
10083bfb:	0f 8c 59 ff ff ff    	jl     0x10083b5a
10083c01:	68 b8 00 00 00       	push   0xb8
10083c06:	e8 1e fd 01 00       	call   0x100a3929
10083c0b:	83 c4 04             	add    esp,0x4
10083c0e:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10083c12:	3b c3                	cmp    eax,ebx
10083c14:	c6 44 24 54 03       	mov    BYTE PTR [esp+0x54],0x3
10083c19:	74 11                	je     0x10083c2c
10083c1b:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
10083c1f:	51                   	push   ecx
10083c20:	6a 01                	push   0x1
10083c22:	56                   	push   esi
10083c23:	8b c8                	mov    ecx,eax
10083c25:	e8 56 40 00 00       	call   0x10087c80
10083c2a:	eb 02                	jmp    0x10083c2e
10083c2c:	33 c0                	xor    eax,eax
10083c2e:	88 5c 24 54          	mov    BYTE PTR [esp+0x54],bl
10083c32:	89 86 e4 0e 00 00    	mov    DWORD PTR [esi+0xee4],eax
10083c38:	bf 0f 00 00 00       	mov    edi,0xf
10083c3d:	8d ae e8 0e 00 00    	lea    ebp,[esi+0xee8]
10083c43:	68 88 01 00 00       	push   0x188
10083c48:	e8 dc fc 01 00       	call   0x100a3929
10083c4d:	83 c4 04             	add    esp,0x4
10083c50:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10083c54:	3b c3                	cmp    eax,ebx
10083c56:	c6 44 24 54 04       	mov    BYTE PTR [esp+0x54],0x4
10083c5b:	74 17                	je     0x10083c74
10083c5d:	8d 57 03             	lea    edx,[edi+0x3]
10083c60:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
10083c64:	52                   	push   edx
10083c65:	53                   	push   ebx
10083c66:	57                   	push   edi
10083c67:	51                   	push   ecx
10083c68:	6a 03                	push   0x3
10083c6a:	56                   	push   esi
10083c6b:	8b c8                	mov    ecx,eax
10083c6d:	e8 0e d5 fe ff       	call   0x10071180
10083c72:	eb 02                	jmp    0x10083c76
10083c74:	33 c0                	xor    eax,eax
10083c76:	53                   	push   ebx
10083c77:	53                   	push   ebx
10083c78:	53                   	push   ebx
10083c79:	8b c8                	mov    ecx,eax
10083c7b:	88 5c 24 60          	mov    BYTE PTR [esp+0x60],bl
10083c7f:	89 45 00             	mov    DWORD PTR [ebp+0x0],eax
10083c82:	e8 79 d6 fe ff       	call   0x10071300
10083c87:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
10083c8a:	53                   	push   ebx
10083c8b:	53                   	push   ebx
10083c8c:	53                   	push   ebx
10083c8d:	e8 9e d6 fe ff       	call   0x10071330
10083c92:	83 c5 04             	add    ebp,0x4
10083c95:	47                   	inc    edi
10083c96:	8d 57 f1             	lea    edx,[edi-0xf]
10083c99:	83 fa 03             	cmp    edx,0x3
10083c9c:	7c a5                	jl     0x10083c43
10083c9e:	33 ff                	xor    edi,edi
10083ca0:	8d ae f4 0e 00 00    	lea    ebp,[esi+0xef4]
10083ca6:	68 88 01 00 00       	push   0x188
10083cab:	e8 79 fc 01 00       	call   0x100a3929
10083cb0:	83 c4 04             	add    esp,0x4
10083cb3:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10083cb7:	3b c3                	cmp    eax,ebx
10083cb9:	c6 44 24 54 05       	mov    BYTE PTR [esp+0x54],0x5
10083cbe:	74 18                	je     0x10083cd8
10083cc0:	6a ff                	push   0xffffffff
10083cc2:	8d 4f 05             	lea    ecx,[edi+0x5]
10083cc5:	53                   	push   ebx
10083cc6:	8d 54 24 24          	lea    edx,[esp+0x24]
10083cca:	51                   	push   ecx
10083ccb:	52                   	push   edx
10083ccc:	6a 03                	push   0x3
10083cce:	56                   	push   esi
10083ccf:	8b c8                	mov    ecx,eax
10083cd1:	e8 aa d4 fe ff       	call   0x10071180
10083cd6:	eb 02                	jmp    0x10083cda
10083cd8:	33 c0                	xor    eax,eax
10083cda:	53                   	push   ebx
10083cdb:	53                   	push   ebx
10083cdc:	53                   	push   ebx
10083cdd:	8b c8                	mov    ecx,eax
10083cdf:	88 5c 24 60          	mov    BYTE PTR [esp+0x60],bl
10083ce3:	89 45 00             	mov    DWORD PTR [ebp+0x0],eax
10083ce6:	e8 15 d6 fe ff       	call   0x10071300
10083ceb:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
10083cee:	53                   	push   ebx
10083cef:	53                   	push   ebx
10083cf0:	53                   	push   ebx
10083cf1:	e8 3a d6 fe ff       	call   0x10071330
10083cf6:	47                   	inc    edi
10083cf7:	83 c5 04             	add    ebp,0x4
10083cfa:	83 ff 02             	cmp    edi,0x2
10083cfd:	7c a7                	jl     0x10083ca6
10083cff:	68 18 09 00 00       	push   0x918
10083d04:	e8 20 fc 01 00       	call   0x100a3929
10083d09:	83 c4 04             	add    esp,0x4
10083d0c:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10083d10:	3b c3                	cmp    eax,ebx
10083d12:	c6 44 24 54 06       	mov    BYTE PTR [esp+0x54],0x6
10083d17:	74 11                	je     0x10083d2a
10083d19:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
10083d1d:	51                   	push   ecx
10083d1e:	6a 03                	push   0x3
10083d20:	56                   	push   esi
10083d21:	8b c8                	mov    ecx,eax
10083d23:	e8 88 77 00 00       	call   0x1008b4b0
10083d28:	eb 02                	jmp    0x10083d2c
10083d2a:	33 c0                	xor    eax,eax
10083d2c:	89 86 e0 0e 00 00    	mov    DWORD PTR [esi+0xee0],eax
10083d32:	89 9e 14 17 00 00    	mov    DWORD PTR [esi+0x1714],ebx
10083d38:	89 9e 30 18 00 00    	mov    DWORD PTR [esi+0x1830],ebx
10083d3e:	89 9e 34 18 00 00    	mov    DWORD PTR [esi+0x1834],ebx
10083d44:	88 9e 88 17 00 00    	mov    BYTE PTR [esi+0x1788],bl
10083d4a:	88 9e 48 17 00 00    	mov    BYTE PTR [esi+0x1748],bl
10083d50:	88 9e 68 17 00 00    	mov    BYTE PTR [esi+0x1768],bl
10083d56:	88 9e a8 17 00 00    	mov    BYTE PTR [esi+0x17a8],bl
10083d5c:	89 9e 2c 18 00 00    	mov    DWORD PTR [esi+0x182c],ebx
10083d62:	89 9e 28 18 00 00    	mov    DWORD PTR [esi+0x1828],ebx
10083d68:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083d6d:	68 f5 06 00 00       	push   0x6f5
10083d72:	50                   	push   eax
10083d73:	88 5c 24 5c          	mov    BYTE PTR [esp+0x5c],bl
10083d77:	8b 10                	mov    edx,DWORD PTR [eax]
10083d79:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
10083d7f:	89 86 34 17 00 00    	mov    DWORD PTR [esi+0x1734],eax
10083d85:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083d8a:	68 e7 06 00 00       	push   0x6e7
10083d8f:	50                   	push   eax
10083d90:	8b 08                	mov    ecx,DWORD PTR [eax]
10083d92:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10083d98:	89 86 38 17 00 00    	mov    DWORD PTR [esi+0x1738],eax
10083d9e:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083da3:	68 f0 06 00 00       	push   0x6f0
10083da8:	50                   	push   eax
10083da9:	8b 10                	mov    edx,DWORD PTR [eax]
10083dab:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
10083db1:	89 86 3c 17 00 00    	mov    DWORD PTR [esi+0x173c],eax
10083db7:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083dbc:	68 ef 06 00 00       	push   0x6ef
10083dc1:	50                   	push   eax
10083dc2:	8b 08                	mov    ecx,DWORD PTR [eax]
10083dc4:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10083dca:	89 86 40 17 00 00    	mov    DWORD PTR [esi+0x1740],eax
10083dd0:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083dd5:	68 ea 06 00 00       	push   0x6ea
10083dda:	50                   	push   eax
10083ddb:	8b 10                	mov    edx,DWORD PTR [eax]
10083ddd:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
10083de3:	89 86 44 17 00 00    	mov    DWORD PTR [esi+0x1744],eax
10083de9:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083dee:	68 bc 07 00 00       	push   0x7bc
10083df3:	50                   	push   eax
10083df4:	8b 08                	mov    ecx,DWORD PTR [eax]
10083df6:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10083dfc:	89 86 20 17 00 00    	mov    DWORD PTR [esi+0x1720],eax
10083e02:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083e07:	68 e7 07 00 00       	push   0x7e7
10083e0c:	50                   	push   eax
10083e0d:	8b 10                	mov    edx,DWORD PTR [eax]
10083e0f:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
10083e15:	89 86 24 17 00 00    	mov    DWORD PTR [esi+0x1724],eax
10083e1b:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083e20:	68 f1 08 00 00       	push   0x8f1
10083e25:	50                   	push   eax
10083e26:	8b 08                	mov    ecx,DWORD PTR [eax]
10083e28:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10083e2e:	89 86 28 17 00 00    	mov    DWORD PTR [esi+0x1728],eax
10083e34:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083e39:	83 c4 40             	add    esp,0x40
10083e3c:	8b 10                	mov    edx,DWORD PTR [eax]
10083e3e:	68 8f 06 00 00       	push   0x68f
10083e43:	50                   	push   eax
10083e44:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
10083e4a:	89 86 2c 17 00 00    	mov    DWORD PTR [esi+0x172c],eax
10083e50:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083e55:	68 86 05 00 00       	push   0x586
10083e5a:	50                   	push   eax
10083e5b:	8b 08                	mov    ecx,DWORD PTR [eax]
10083e5d:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10083e63:	8b be dc 0e 00 00    	mov    edi,DWORD PTR [esi+0xedc]
10083e69:	83 c4 10             	add    esp,0x10
10083e6c:	89 86 30 17 00 00    	mov    DWORD PTR [esi+0x1730],eax
10083e72:	89 9e e4 16 00 00    	mov    DWORD PTR [esi+0x16e4],ebx
10083e78:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10083e7d:	8d 54 24 14          	lea    edx,[esp+0x14]
10083e81:	8d 4c 24 18          	lea    ecx,[esp+0x18]
10083e85:	52                   	push   edx
10083e86:	8d a8 10 02 00 00    	lea    ebp,[eax+0x210]
10083e8c:	51                   	push   ecx
10083e8d:	ff 90 e0 01 00 00    	call   DWORD PTR [eax+0x1e0]
10083e93:	50                   	push   eax
10083e94:	ff 55 00             	call   DWORD PTR [ebp+0x0]
10083e97:	83 c4 0c             	add    esp,0xc
10083e9a:	8b cf                	mov    ecx,edi
10083e9c:	89 9f 4c 01 00 00    	mov    DWORD PTR [edi+0x14c],ebx
10083ea2:	6a 02                	push   0x2
10083ea4:	53                   	push   ebx
10083ea5:	e8 d6 a8 fe ff       	call   0x1006e780
10083eaa:	8b 54 24 64          	mov    edx,DWORD PTR [esp+0x64]
10083eae:	8b ce                	mov    ecx,esi
10083eb0:	52                   	push   edx
10083eb1:	e8 6a 01 00 00       	call   0x10084020
10083eb6:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
10083eba:	8b c6                	mov    eax,esi
10083ebc:	5f                   	pop    edi
10083ebd:	5e                   	pop    esi
10083ebe:	5d                   	pop    ebp
10083ebf:	5b                   	pop    ebx
10083ec0:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10083ec7:	83 c4 48             	add    esp,0x48
10083eca:	c2 0c 00             	ret    0xc
10083ecd:	90                   	nop
10083ece:	90                   	nop
10083ecf:	90                   	nop
10083ed0:	56                   	push   esi
10083ed1:	8b f1                	mov    esi,ecx
10083ed3:	e8 18 00 00 00       	call   0x10083ef0
10083ed8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
10083edd:	74 09                	je     0x10083ee8
10083edf:	56                   	push   esi
10083ee0:	e8 39 fa 01 00       	call   0x100a391e
10083ee5:	83 c4 04             	add    esp,0x4
10083ee8:	8b c6                	mov    eax,esi
10083eea:	5e                   	pop    esi
10083eeb:	c2 04 00             	ret    0x4
10083eee:	90                   	nop
10083eef:	90                   	nop
10083ef0:	6a ff                	push   0xffffffff
10083ef2:	68 c8 68 0b 10       	push   0x100b68c8
10083ef7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10083efd:	50                   	push   eax
10083efe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10083f05:	51                   	push   ecx
10083f06:	56                   	push   esi
10083f07:	8b f1                	mov    esi,ecx
10083f09:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
10083f0d:	c7 06 b0 cf 0b 10    	mov    DWORD PTR [esi],0x100bcfb0
10083f13:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083f19:	8b 96 34 17 00 00    	mov    edx,DWORD PTR [esi+0x1734]
10083f1f:	52                   	push   edx
10083f20:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
10083f27:	00 
10083f28:	8b 01                	mov    eax,DWORD PTR [ecx]
10083f2a:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10083f30:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083f36:	8b 96 38 17 00 00    	mov    edx,DWORD PTR [esi+0x1738]
10083f3c:	52                   	push   edx
10083f3d:	8b 01                	mov    eax,DWORD PTR [ecx]
10083f3f:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10083f45:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083f4b:	8b 96 3c 17 00 00    	mov    edx,DWORD PTR [esi+0x173c]
10083f51:	52                   	push   edx
10083f52:	8b 01                	mov    eax,DWORD PTR [ecx]
10083f54:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10083f5a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083f60:	8b 96 40 17 00 00    	mov    edx,DWORD PTR [esi+0x1740]
10083f66:	52                   	push   edx
10083f67:	8b 01                	mov    eax,DWORD PTR [ecx]
10083f69:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10083f6f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083f75:	8b 96 44 17 00 00    	mov    edx,DWORD PTR [esi+0x1744]
10083f7b:	52                   	push   edx
10083f7c:	8b 01                	mov    eax,DWORD PTR [ecx]
10083f7e:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10083f84:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083f8a:	8b 96 20 17 00 00    	mov    edx,DWORD PTR [esi+0x1720]
10083f90:	52                   	push   edx
10083f91:	8b 01                	mov    eax,DWORD PTR [ecx]
10083f93:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10083f99:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083f9f:	8b 96 24 17 00 00    	mov    edx,DWORD PTR [esi+0x1724]
10083fa5:	52                   	push   edx
10083fa6:	8b 01                	mov    eax,DWORD PTR [ecx]
10083fa8:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10083fae:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083fb4:	8b 96 28 17 00 00    	mov    edx,DWORD PTR [esi+0x1728]
10083fba:	52                   	push   edx
10083fbb:	8b 01                	mov    eax,DWORD PTR [ecx]
10083fbd:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10083fc3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083fc9:	8b 96 2c 17 00 00    	mov    edx,DWORD PTR [esi+0x172c]
10083fcf:	52                   	push   edx
10083fd0:	8b 01                	mov    eax,DWORD PTR [ecx]
10083fd2:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10083fd8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10083fde:	8b 96 30 17 00 00    	mov    edx,DWORD PTR [esi+0x1730]
10083fe4:	52                   	push   edx
10083fe5:	8b 01                	mov    eax,DWORD PTR [ecx]
10083fe7:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10083fed:	8b ce                	mov    ecx,esi
10083fef:	e8 dc 3a 00 00       	call   0x10087ad0
10083ff4:	8b ce                	mov    ecx,esi
10083ff6:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
10083ffd:	ff 
10083ffe:	e8 1d a5 fe ff       	call   0x1006e520
10084003:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10084007:	5e                   	pop    esi
10084008:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1008400f:	83 c4 10             	add    esp,0x10
10084012:	c3                   	ret
10084013:	90                   	nop
10084014:	90                   	nop
10084015:	90                   	nop
10084016:	90                   	nop
10084017:	90                   	nop
10084018:	90                   	nop
10084019:	90                   	nop
1008401a:	90                   	nop
1008401b:	90                   	nop
1008401c:	90                   	nop
1008401d:	90                   	nop
1008401e:	90                   	nop
1008401f:	90                   	nop
10084020:	83 ec 24             	sub    esp,0x24
10084023:	53                   	push   ebx
10084024:	55                   	push   ebp
10084025:	56                   	push   esi
10084026:	8b f1                	mov    esi,ecx
10084028:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
1008402e:	57                   	push   edi
1008402f:	8b 3d 1c a0 0d 10    	mov    edi,DWORD PTR ds:0x100da01c
10084035:	8d 04 49             	lea    eax,[ecx+ecx*2]
10084038:	8d 14 81             	lea    edx,[ecx+eax*4]
1008403b:	8d 04 ff             	lea    eax,[edi+edi*8]
1008403e:	c1 e2 04             	shl    edx,0x4
10084041:	03 d1                	add    edx,ecx
10084043:	c1 ea 0a             	shr    edx,0xa
10084046:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
1008404a:	8d 14 87             	lea    edx,[edi+eax*4]
1008404d:	c1 e2 04             	shl    edx,0x4
10084050:	2b d7                	sub    edx,edi
10084052:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10084057:	f7 e2                	mul    edx
10084059:	8d 04 49             	lea    eax,[ecx+ecx*2]
1008405c:	c1 ea 09             	shr    edx,0x9
1008405f:	8d 0c c1             	lea    ecx,[ecx+eax*8]
10084062:	a1 4c be 11 10       	mov    eax,ds:0x1011be4c
10084067:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
1008406b:	8d 14 bf             	lea    edx,[edi+edi*4]
1008406e:	8d 0c 49             	lea    ecx,[ecx+ecx*2]
10084071:	8b 3d 48 be 11 10    	mov    edi,DWORD PTR ds:0x1011be48
10084077:	c1 e9 0a             	shr    ecx,0xa
1008407a:	03 c8                	add    ecx,eax
1008407c:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10084081:	c1 e2 04             	shl    edx,0x4
10084084:	f7 e2                	mul    edx
10084086:	c1 ea 09             	shr    edx,0x9
10084089:	8d 44 24 14          	lea    eax,[esp+0x14]
1008408d:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
10084091:	8b 8e e4 0e 00 00    	mov    ecx,DWORD PTR [esi+0xee4]
10084097:	03 d7                	add    edx,edi
10084099:	50                   	push   eax
1008409a:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
1008409e:	e8 ad a5 fe ff       	call   0x1006e650
100840a3:	8b 3d 18 a0 0d 10    	mov    edi,DWORD PTR ds:0x100da018
100840a9:	8d 0c fd 00 00 00 00 	lea    ecx,[edi*8+0x0]
100840b0:	2b cf                	sub    ecx,edi
100840b2:	c1 e1 04             	shl    ecx,0x4
100840b5:	03 cf                	add    ecx,edi
100840b7:	8d 1c 4f             	lea    ebx,[edi+ecx*2]
100840ba:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
100840c0:	d1 e3                	shl    ebx,1
100840c2:	8d 04 c9             	lea    eax,[ecx+ecx*8]
100840c5:	c1 e0 03             	shl    eax,0x3
100840c8:	2b c1                	sub    eax,ecx
100840ca:	c1 eb 0a             	shr    ebx,0xa
100840cd:	8d 14 40             	lea    edx,[eax+eax*2]
100840d0:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
100840d5:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
100840d9:	8d 14 51             	lea    edx,[ecx+edx*2]
100840dc:	f7 e2                	mul    edx
100840de:	8b c7                	mov    eax,edi
100840e0:	8b ea                	mov    ebp,edx
100840e2:	c1 e0 06             	shl    eax,0x6
100840e5:	2b c7                	sub    eax,edi
100840e7:	c1 ed 09             	shr    ebp,0x9
100840ea:	8d 14 c7             	lea    edx,[edi+eax*8]
100840ed:	8b c3                	mov    eax,ebx
100840ef:	8b fa                	mov    edi,edx
100840f1:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
100840f5:	99                   	cdq
100840f6:	2b c2                	sub    eax,edx
100840f8:	c1 ef 0a             	shr    edi,0xa
100840fb:	d1 f8                	sar    eax,1
100840fd:	2b f8                	sub    edi,eax
100840ff:	a1 4c be 11 10       	mov    eax,ds:0x1011be4c
10084104:	03 f8                	add    edi,eax
10084106:	8d 04 49             	lea    eax,[ecx+ecx*2]
10084109:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
1008410d:	8d 14 c1             	lea    edx,[ecx+eax*8]
10084110:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10084115:	c1 e2 03             	shl    edx,0x3
10084118:	2b d1                	sub    edx,ecx
1008411a:	d1 e2                	shl    edx,1
1008411c:	f7 e2                	mul    edx
1008411e:	c1 ea 09             	shr    edx,0x9
10084121:	8b c5                	mov    eax,ebp
10084123:	8b ca                	mov    ecx,edx
10084125:	8b 1d 48 be 11 10    	mov    ebx,DWORD PTR ds:0x1011be48
1008412b:	99                   	cdq
1008412c:	2b c2                	sub    eax,edx
1008412e:	8d 54 24 14          	lea    edx,[esp+0x14]
10084132:	d1 f8                	sar    eax,1
10084134:	2b c8                	sub    ecx,eax
10084136:	52                   	push   edx
10084137:	03 cb                	add    ecx,ebx
10084139:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
1008413d:	8b 8e dc 0e 00 00    	mov    ecx,DWORD PTR [esi+0xedc]
10084143:	e8 08 a5 fe ff       	call   0x1006e650
10084148:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
1008414e:	8b 1d 1c a0 0d 10    	mov    ebx,DWORD PTR ds:0x100da01c
10084154:	8b d3                	mov    edx,ebx
10084156:	8d 04 c9             	lea    eax,[ecx+ecx*8]
10084159:	c1 e0 04             	shl    eax,0x4
1008415c:	03 c1                	add    eax,ecx
1008415e:	c1 e2 04             	shl    edx,0x4
10084161:	8d 04 40             	lea    eax,[eax+eax*2]
10084164:	c1 e8 0a             	shr    eax,0xa
10084167:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1008416b:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10084170:	f7 e2                	mul    edx
10084172:	8d 04 c9             	lea    eax,[ecx+ecx*8]
10084175:	8b ea                	mov    ebp,edx
10084177:	c1 ed 09             	shr    ebp,0x9
1008417a:	8d 14 81             	lea    edx,[ecx+eax*4]
1008417d:	a1 4c be 11 10       	mov    eax,ds:0x1011be4c
10084182:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
10084186:	89 6c 24 30          	mov    DWORD PTR [esp+0x30],ebp
1008418a:	8d 3c 91             	lea    edi,[ecx+edx*4]
1008418d:	d1 e7                	shl    edi,1
1008418f:	c1 ef 0a             	shr    edi,0xa
10084192:	03 f8                	add    edi,eax
10084194:	8b c3                	mov    eax,ebx
10084196:	c1 e0 05             	shl    eax,0x5
10084199:	2b c3                	sub    eax,ebx
1008419b:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
1008419f:	8d 14 80             	lea    edx,[eax+eax*4]
100841a2:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
100841a7:	c1 e2 02             	shl    edx,0x2
100841aa:	2b d3                	sub    edx,ebx
100841ac:	8d 1c 89             	lea    ebx,[ecx+ecx*4]
100841af:	f7 e2                	mul    edx
100841b1:	a1 48 be 11 10       	mov    eax,ds:0x1011be48
100841b6:	c1 ea 09             	shr    edx,0x9
100841b9:	03 d0                	add    edx,eax
100841bb:	8d 04 89             	lea    eax,[ecx+ecx*4]
100841be:	c1 e0 04             	shl    eax,0x4
100841c1:	2b c1                	sub    eax,ecx
100841c3:	8d 8e fc 0e 00 00    	lea    ecx,[esi+0xefc]
100841c9:	d1 e3                	shl    ebx,1
100841cb:	c1 e8 0a             	shr    eax,0xa
100841ce:	c1 eb 0a             	shr    ebx,0xa
100841d1:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
100841d5:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
100841d9:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
100841dd:	33 ed                	xor    ebp,ebp
100841df:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
100841e3:	eb 08                	jmp    0x100841ed
100841e5:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
100841e9:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
100841ed:	8d 14 03             	lea    edx,[ebx+eax*1]
100841f0:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100841f4:	0f af d5             	imul   edx,ebp
100841f7:	8b 09                	mov    ecx,DWORD PTR [ecx]
100841f9:	8d 44 24 24          	lea    eax,[esp+0x24]
100841fd:	03 d7                	add    edx,edi
100841ff:	50                   	push   eax
10084200:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
10084204:	e8 47 a4 fe ff       	call   0x1006e650
10084209:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1008420d:	45                   	inc    ebp
1008420e:	83 c1 04             	add    ecx,0x4
10084211:	83 fd 05             	cmp    ebp,0x5
10084214:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10084218:	7c cb                	jl     0x100841e5
1008421a:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
10084220:	8b 3d 1c a0 0d 10    	mov    edi,DWORD PTR ds:0x100da01c
10084226:	8b 1d 48 be 11 10    	mov    ebx,DWORD PTR ds:0x1011be48
1008422c:	8d 14 49             	lea    edx,[ecx+ecx*2]
1008422f:	8d 04 91             	lea    eax,[ecx+edx*4]
10084232:	c1 e0 04             	shl    eax,0x4
10084235:	03 c1                	add    eax,ecx
10084237:	c1 e8 0a             	shr    eax,0xa
1008423a:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1008423e:	8d 04 bf             	lea    eax,[edi+edi*4]
10084241:	8d 14 c0             	lea    edx,[eax+eax*8]
10084244:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10084249:	c1 e2 02             	shl    edx,0x2
1008424c:	2b d7                	sub    edx,edi
1008424e:	d1 e2                	shl    edx,1
10084250:	f7 e2                	mul    edx
10084252:	8b c1                	mov    eax,ecx
10084254:	c1 e0 05             	shl    eax,0x5
10084257:	2b c1                	sub    eax,ecx
10084259:	c1 ea 09             	shr    edx,0x9
1008425c:	8d 04 40             	lea    eax,[eax+eax*2]
1008425f:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
10084263:	8b 15 4c be 11 10    	mov    edx,DWORD PTR ds:0x1011be4c
10084269:	8d 0c 41             	lea    ecx,[ecx+eax*2]
1008426c:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10084271:	c1 e1 02             	shl    ecx,0x2
10084274:	c1 e9 0a             	shr    ecx,0xa
10084277:	03 ca                	add    ecx,edx
10084279:	8d 14 bf             	lea    edx,[edi+edi*4]
1008427c:	c1 e2 04             	shl    edx,0x4
1008427f:	f7 e2                	mul    edx
10084281:	c1 ea 09             	shr    edx,0x9
10084284:	8d 44 24 14          	lea    eax,[esp+0x14]
10084288:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
1008428c:	8b 8e e0 0e 00 00    	mov    ecx,DWORD PTR [esi+0xee0]
10084292:	03 d3                	add    edx,ebx
10084294:	50                   	push   eax
10084295:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
10084299:	e8 b2 a3 fe ff       	call   0x1006e650
1008429e:	8b 3d 18 a0 0d 10    	mov    edi,DWORD PTR ds:0x100da018
100842a4:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
100842a9:	8b cf                	mov    ecx,edi
100842ab:	c1 e1 05             	shl    ecx,0x5
100842ae:	2b cf                	sub    ecx,edi
100842b0:	c1 e1 03             	shl    ecx,0x3
100842b3:	2b cf                	sub    ecx,edi
100842b5:	c1 e9 0a             	shr    ecx,0xa
100842b8:	f7 e1                	mul    ecx
100842ba:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
100842c0:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
100842c5:	d1 ea                	shr    edx,1
100842c7:	4a                   	dec    edx
100842c8:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
100842cc:	8b d1                	mov    edx,ecx
100842ce:	c1 e2 04             	shl    edx,0x4
100842d1:	f7 e2                	mul    edx
100842d3:	8d 04 89             	lea    eax,[ecx+ecx*4]
100842d6:	8b da                	mov    ebx,edx
100842d8:	c1 eb 09             	shr    ebx,0x9
100842db:	8d 14 41             	lea    edx,[ecx+eax*2]
100842de:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
100842e3:	c1 e2 03             	shl    edx,0x3
100842e6:	f7 e2                	mul    edx
100842e8:	c1 ea 09             	shr    edx,0x9
100842eb:	8d 04 c9             	lea    eax,[ecx+ecx*8]
100842ee:	8b ea                	mov    ebp,edx
100842f0:	8d 14 41             	lea    edx,[ecx+eax*2]
100842f3:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
100842f8:	f7 e2                	mul    edx
100842fa:	8d 04 7f             	lea    eax,[edi+edi*2]
100842fd:	c1 ea 09             	shr    edx,0x9
10084300:	8d 04 c7             	lea    eax,[edi+eax*8]
10084303:	2b ea                	sub    ebp,edx
10084305:	2b eb                	sub    ebp,ebx
10084307:	8d 14 40             	lea    edx,[eax+eax*2]
1008430a:	a1 4c be 11 10       	mov    eax,ds:0x1011be4c
1008430f:	c1 e2 02             	shl    edx,0x2
10084312:	2b d7                	sub    edx,edi
10084314:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
10084318:	c1 ea 0a             	shr    edx,0xa
1008431b:	8d 54 02 01          	lea    edx,[edx+eax*1+0x1]
1008431f:	8d 0c 89             	lea    ecx,[ecx+ecx*4]
10084322:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10084327:	c1 e1 04             	shl    ecx,0x4
1008432a:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1008432e:	f7 e1                	mul    ecx
10084330:	a1 48 be 11 10       	mov    eax,ds:0x1011be48
10084335:	c1 ea 09             	shr    edx,0x9
10084338:	03 d3                	add    edx,ebx
1008433a:	8d 4c 02 01          	lea    ecx,[edx+eax*1+0x1]
1008433e:	8d 54 24 14          	lea    edx,[esp+0x14]
10084342:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
10084346:	8b 8e e8 0e 00 00    	mov    ecx,DWORD PTR [esi+0xee8]
1008434c:	52                   	push   edx
1008434d:	e8 fe a2 fe ff       	call   0x1006e650
10084352:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
10084358:	8b c1                	mov    eax,ecx
1008435a:	c1 e0 05             	shl    eax,0x5
1008435d:	2b c1                	sub    eax,ecx
1008435f:	c1 e0 03             	shl    eax,0x3
10084362:	2b c1                	sub    eax,ecx
10084364:	8b d0                	mov    edx,eax
10084366:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008436b:	c1 ea 0a             	shr    edx,0xa
1008436e:	f7 e2                	mul    edx
10084370:	8d 04 49             	lea    eax,[ecx+ecx*2]
10084373:	d1 ea                	shr    edx,1
10084375:	8d 04 c1             	lea    eax,[ecx+eax*8]
10084378:	8d 04 40             	lea    eax,[eax+eax*2]
1008437b:	c1 e0 02             	shl    eax,0x2
1008437e:	2b c1                	sub    eax,ecx
10084380:	8b 0d 4c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be4c
10084386:	c1 e8 0a             	shr    eax,0xa
10084389:	03 ca                	add    ecx,edx
1008438b:	8d 54 08 01          	lea    edx,[eax+ecx*1+0x1]
1008438f:	8b 8e ec 0e 00 00    	mov    ecx,DWORD PTR [esi+0xeec]
10084395:	8d 44 24 14          	lea    eax,[esp+0x14]
10084399:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1008439d:	50                   	push   eax
1008439e:	e8 ad a2 fe ff       	call   0x1006e650
100843a3:	8b 0d 18 a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da018
100843a9:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
100843ae:	8b d1                	mov    edx,ecx
100843b0:	c1 e2 05             	shl    edx,0x5
100843b3:	2b d1                	sub    edx,ecx
100843b5:	c1 e2 03             	shl    edx,0x3
100843b8:	2b d1                	sub    edx,ecx
100843ba:	c1 ea 0a             	shr    edx,0xa
100843bd:	d1 e2                	shl    edx,1
100843bf:	f7 e2                	mul    edx
100843c1:	8d 04 49             	lea    eax,[ecx+ecx*2]
100843c4:	d1 ea                	shr    edx,1
100843c6:	8d 04 c1             	lea    eax,[ecx+eax*8]
100843c9:	8d 04 40             	lea    eax,[eax+eax*2]
100843cc:	c1 e0 02             	shl    eax,0x2
100843cf:	2b c1                	sub    eax,ecx
100843d1:	8b 0d 4c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be4c
100843d7:	c1 e8 0a             	shr    eax,0xa
100843da:	03 ca                	add    ecx,edx
100843dc:	8d 54 08 01          	lea    edx,[eax+ecx*1+0x1]
100843e0:	8b 8e f0 0e 00 00    	mov    ecx,DWORD PTR [esi+0xef0]
100843e6:	8d 44 24 14          	lea    eax,[esp+0x14]
100843ea:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
100843ee:	50                   	push   eax
100843ef:	e8 5c a2 fe ff       	call   0x1006e650
100843f4:	8b 3d 18 a0 0d 10    	mov    edi,DWORD PTR ds:0x100da018
100843fa:	8b c7                	mov    eax,edi
100843fc:	c1 e0 04             	shl    eax,0x4
100843ff:	03 c7                	add    eax,edi
10084401:	8d 0c 80             	lea    ecx,[eax+eax*4]
10084404:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10084409:	d1 e1                	shl    ecx,1
1008440b:	2b cf                	sub    ecx,edi
1008440d:	c1 e9 0a             	shr    ecx,0xa
10084410:	f7 e1                	mul    ecx
10084412:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
10084418:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008441d:	d1 ea                	shr    edx,1
1008441f:	4a                   	dec    edx
10084420:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
10084424:	8b d1                	mov    edx,ecx
10084426:	c1 e2 04             	shl    edx,0x4
10084429:	f7 e2                	mul    edx
1008442b:	8d 04 89             	lea    eax,[ecx+ecx*4]
1008442e:	8b da                	mov    ebx,edx
10084430:	c1 eb 09             	shr    ebx,0x9
10084433:	8d 14 41             	lea    edx,[ecx+eax*2]
10084436:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008443b:	c1 e2 03             	shl    edx,0x3
1008443e:	f7 e2                	mul    edx
10084440:	c1 ea 09             	shr    edx,0x9
10084443:	8d 04 c9             	lea    eax,[ecx+ecx*8]
10084446:	8b ea                	mov    ebp,edx
10084448:	8d 14 41             	lea    edx,[ecx+eax*2]
1008444b:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10084450:	f7 e2                	mul    edx
10084452:	8d 04 7f             	lea    eax,[edi+edi*2]
10084455:	8d 0c 89             	lea    ecx,[ecx+ecx*4]
10084458:	c1 e0 04             	shl    eax,0x4
1008445b:	2b c7                	sub    eax,edi
1008445d:	c1 ea 09             	shr    edx,0x9
10084460:	8d 04 40             	lea    eax,[eax+eax*2]
10084463:	2b ea                	sub    ebp,edx
10084465:	8b 15 4c be 11 10    	mov    edx,DWORD PTR ds:0x1011be4c
1008446b:	2b eb                	sub    ebp,ebx
1008446d:	c1 e0 02             	shl    eax,0x2
10084470:	c1 e8 0a             	shr    eax,0xa
10084473:	c1 e1 04             	shl    ecx,0x4
10084476:	8d 44 10 01          	lea    eax,[eax+edx*1+0x1]
1008447a:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
1008447e:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10084482:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
10084487:	f7 e1                	mul    ecx
10084489:	a1 48 be 11 10       	mov    eax,ds:0x1011be48
1008448e:	c1 ea 09             	shr    edx,0x9
10084491:	03 d3                	add    edx,ebx
10084493:	8d 4c 02 01          	lea    ecx,[edx+eax*1+0x1]
10084497:	8d 54 24 14          	lea    edx,[esp+0x14]
1008449b:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1008449f:	8b 8e f4 0e 00 00    	mov    ecx,DWORD PTR [esi+0xef4]
100844a5:	52                   	push   edx
100844a6:	e8 a5 a1 fe ff       	call   0x1006e650
100844ab:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
100844b0:	8d 0c 40             	lea    ecx,[eax+eax*2]
100844b3:	c1 e1 04             	shl    ecx,0x4
100844b6:	2b c8                	sub    ecx,eax
100844b8:	8d 0c 49             	lea    ecx,[ecx+ecx*2]
100844bb:	c1 e1 02             	shl    ecx,0x2
100844be:	8b d1                	mov    edx,ecx
100844c0:	8b c8                	mov    ecx,eax
100844c2:	c1 e1 04             	shl    ecx,0x4
100844c5:	03 c8                	add    ecx,eax
100844c7:	c1 ea 0a             	shr    edx,0xa
100844ca:	8d 0c 89             	lea    ecx,[ecx+ecx*4]
100844cd:	d1 e1                	shl    ecx,1
100844cf:	2b c8                	sub    ecx,eax
100844d1:	a1 4c be 11 10       	mov    eax,ds:0x1011be4c
100844d6:	c1 e9 0b             	shr    ecx,0xb
100844d9:	03 c2                	add    eax,edx
100844db:	8d 54 24 14          	lea    edx,[esp+0x14]
100844df:	52                   	push   edx
100844e0:	8d 4c 01 01          	lea    ecx,[ecx+eax*1+0x1]
100844e4:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
100844e8:	8b 8e f8 0e 00 00    	mov    ecx,DWORD PTR [esi+0xef8]
100844ee:	e8 5d a1 fe ff       	call   0x1006e650
100844f3:	5f                   	pop    edi
100844f4:	5e                   	pop    esi
100844f5:	5d                   	pop    ebp
100844f6:	5b                   	pop    ebx
100844f7:	83 c4 24             	add    esp,0x24
100844fa:	c2 04 00             	ret    0x4
100844fd:	90                   	nop
100844fe:	90                   	nop
100844ff:	90                   	nop

*/
void InGameMenu::Navigate(int nDirection) {
    bool bSinglePlayer = (g_pGameClientShell->m_nGameType == 1);
    bool bObserver = false;
    CMoveMgr* pMoveMgr = g_pGameClientShell->GetMoveMgr();
    
    if (pMoveMgr && pMoveMgr->IsObserver()) {
        void* pPlayer = g_pLTClient->GetPlayerMgr();
        if (pPlayer && ((bool(__thiscall*)(void*))0x100120d0)(pPlayer)) {
            bObserver = true;
        }
    }

    int nNewState = m_nState;

    if (nDirection != 0) {
        if (bSinglePlayer) {
            if (m_nState <= 5) {
                switch (m_nState) {
                    case 0:
                        _ASSERT(0);
                        g_pLTClient->CPrint("InGameMenu::Navigate: Shouldn't be in the MOTD screen in single player!");
                        nNewState = 1;
                        break;
                    case 1:
                        nNewState = 2;
                        break;
                    case 2:
                        if (m_pEquipSelect->IsValid()) {
                            int msg = (m_nClass == 7) ? 5 : 4;
                            SendGameMessage(msg);
                            g_pLTClient->ProcessMessage(0x92);
                        }
                        return;
                    case 3:
                        nNewState = 1;
                        break;
                    case 4:
                        nNewState = 2;
                        break;
                    case 5:
                        nNewState = 4;
                        break;
                }
            }
        } else {
            if (m_nState <= 5) {
                switch (m_nState) {
                    case 0:
                        nNewState = 1;
                        break;
                    case 1:
                        if (m_pEquipSelect->IsValid()) {
                            int msg = (m_nClass == 7) ? 5 : 4;
                            SendGameMessage(msg);
                            g_pLTClient->ProcessMessage(0x92);
                        }
                        return;
                    case 2:
                        nNewState = 1;
                        break;
                    case 3:
                        nNewState = bObserver ? 4 : 5;
                        break;
                    case 4:
                        nNewState = 2;
                        break;
                    case 5:
                        nNewState = 3;
                        break;
                }
            }
        }
    } else {
        if (!bSinglePlayer) {
            if (m_nState <= 5) {
                switch (m_nState) {
                    case 0:
                        _ASSERT(0);
                        g_pLTClient->CPrint("InGameMenu::Navigate: Shouldn't be in the MOTD screen in single player!");
                        nNewState = 1;
                        break;
                    case 1:
                        nNewState = 0;
                        break;
                    case 2:
                        nNewState = 1;
                        break;
                    case 3:
                        nNewState = 2;
                        break;
                    case 4:
                        nNewState = 3;
                        break;
                    case 5:
                        nNewState = 4;
                        break;
                }
            }
        } else {
            if (m_nState <= 5) {
                switch (m_nState) {
                    case 0:
                    case 1:
                        nNewState = 0;
                        break;
                    case 2:
                        nNewState = 1;
                        break;
                    case 3:
                        nNewState = 2;
                        break;
                    case 4:
                        nNewState = 3;
                        break;
                    case 5:
                        nNewState = 4;
                        break;
                }
            }
        }
    }
    
    if (nNewState != m_nState) {
        bool bForward = nNewState > m_nState;
        if (UpdateMenuState(m_nState, bForward)) {
            SetState(nNewState);
        }
    }
}
