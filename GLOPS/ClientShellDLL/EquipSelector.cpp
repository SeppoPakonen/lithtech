#include "EquipSelector.h"

// 0x1008b2a7: EquipSelector::SetWeaponSlot
/*
1008b2a7:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b2ad:	68 25 18 00 00       	push   0x1825
1008b2b2:	68 4c dd 0d 10       	push   0x100ddd4c
1008b2b7:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b2b9:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1008b2bf:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b2c4:	56                   	push   esi
1008b2c5:	68 c0 df 0d 10       	push   0x100ddfc0
1008b2ca:	68 7c 5d 0c 10       	push   0x100c5d7c
1008b2cf:	8b 08                	mov    ecx,DWORD PTR [eax]
1008b2d1:	50                   	push   eax
1008b2d2:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1008b2d8:	83 c4 10             	add    esp,0x10
1008b2db:	5f                   	pop    edi
1008b2dc:	5e                   	pop    esi
1008b2dd:	5b                   	pop    ebx
1008b2de:	c2 10 00             	ret    0x10
1008b2e1:	8b 4c b7 2c          	mov    ecx,DWORD PTR [edi+esi*4+0x2c]
1008b2e5:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1008b2e9:	50                   	push   eax
1008b2ea:	53                   	push   ebx
1008b2eb:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b2ed:	ff 52 58             	call   DWORD PTR [edx+0x58]
1008b2f0:	8b 44 b7 2c          	mov    eax,DWORD PTR [edi+esi*4+0x2c]
1008b2f4:	8d 0c 76             	lea    ecx,[esi+esi*2]
1008b2f7:	8d 54 8f 50          	lea    edx,[edi+ecx*4+0x50]
1008b2fb:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1008b2fe:	52                   	push   edx
1008b2ff:	51                   	push   ecx
1008b300:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008b306:	53                   	push   ebx
1008b307:	e8 94 04 fc ff       	call   0x1004b7a0
1008b30c:	5f                   	pop    edi
1008b30d:	5e                   	pop    esi
1008b30e:	5b                   	pop    ebx
1008b30f:	c2 10 00             	ret    0x10
1008b312:	90                   	nop
1008b313:	90                   	nop
1008b314:	90                   	nop
1008b315:	90                   	nop
1008b316:	90                   	nop
1008b317:	90                   	nop
1008b318:	90                   	nop
1008b319:	90                   	nop
1008b31a:	90                   	nop
1008b31b:	90                   	nop
1008b31c:	90                   	nop
1008b31d:	90                   	nop
1008b31e:	90                   	nop
1008b31f:	90                   	nop
1008b320:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1008b324:	56                   	push   esi
1008b325:	8b f1                	mov    esi,ecx
1008b327:	50                   	push   eax
1008b328:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1008b32c:	51                   	push   ecx
1008b32d:	8b ce                	mov    ecx,esi
1008b32f:	e8 cc fb ff ff       	call   0x1008af00
1008b334:	88 86 91 0c 00 00    	mov    BYTE PTR [esi+0xc91],al
1008b33a:	5e                   	pop    esi
1008b33b:	c2 0c 00             	ret    0xc
1008b33e:	90                   	nop
1008b33f:	90                   	nop
1008b340:	c6 81 91 0c 00 00 ff 	mov    BYTE PTR [ecx+0xc91],0xff
1008b347:	c3                   	ret
1008b348:	90                   	nop
1008b349:	90                   	nop
1008b34a:	90                   	nop
1008b34b:	90                   	nop
1008b34c:	90                   	nop
1008b34d:	90                   	nop
1008b34e:	90                   	nop
1008b34f:	90                   	nop
1008b350:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1008b354:	56                   	push   esi
1008b355:	8b f1                	mov    esi,ecx
1008b357:	50                   	push   eax
1008b358:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1008b35c:	51                   	push   ecx
1008b35d:	8b ce                	mov    ecx,esi
1008b35f:	e8 9c fb ff ff       	call   0x1008af00
1008b364:	ba 01 00 00 00       	mov    edx,0x1
1008b369:	8b c8                	mov    ecx,eax
1008b36b:	d3 e2                	shl    edx,cl
1008b36d:	85 96 94 0c 00 00    	test   DWORD PTR [esi+0xc94],edx
1008b373:	75 56                	jne    0x1008b3cb
1008b375:	83 f8 08             	cmp    eax,0x8
1008b378:	88 86 92 0c 00 00    	mov    BYTE PTR [esi+0xc92],al
1008b37e:	77 3c                	ja     0x1008b3bc
1008b380:	ff 24 85 d0 b3 08 10 	jmp    DWORD PTR [eax*4+0x1008b3d0]
1008b387:	b8 02 00 00 00       	mov    eax,0x2
1008b38c:	8b ce                	mov    ecx,esi
1008b38e:	50                   	push   eax
1008b38f:	6a 00                	push   0x0
1008b391:	e8 8a 35 fe ff       	call   0x1006e920
1008b396:	5e                   	pop    esi
1008b397:	c2 0c 00             	ret    0xc
1008b39a:	b8 01 00 00 00       	mov    eax,0x1
1008b39f:	8b ce                	mov    ecx,esi
1008b3a1:	50                   	push   eax
1008b3a2:	6a 00                	push   0x0
1008b3a4:	e8 77 35 fe ff       	call   0x1006e920
1008b3a9:	5e                   	pop    esi
1008b3aa:	c2 0c 00             	ret    0xc
1008b3ad:	33 c0                	xor    eax,eax
1008b3af:	8b ce                	mov    ecx,esi
1008b3b1:	50                   	push   eax
1008b3b2:	50                   	push   eax
1008b3b3:	e8 68 35 fe ff       	call   0x1006e920
1008b3b8:	5e                   	pop    esi
1008b3b9:	c2 0c 00             	ret    0xc
1008b3bc:	b8 ff 00 00 00       	mov    eax,0xff
1008b3c1:	50                   	push   eax
1008b3c2:	6a 00                	push   0x0
1008b3c4:	8b ce                	mov    ecx,esi
1008b3c6:	e8 55 35 fe ff       	call   0x1006e920
1008b3cb:	5e                   	pop    esi
1008b3cc:	c2 0c 00             	ret    0xc
1008b3cf:	90                   	nop
1008b3d0:	87 b3 08 10 9a b3    	xchg   DWORD PTR [ebx-0x4c65eff8],esi
1008b3d6:	08 10                	or     BYTE PTR [eax],dl
1008b3d8:	ad                   	lods   eax,DWORD PTR ds:[esi]
1008b3d9:	b3 08                	mov    bl,0x8
1008b3db:	10 c1                	adc    cl,al
1008b3dd:	b3 08                	mov    bl,0x8
1008b3df:	10 c1                	adc    cl,al
1008b3e1:	b3 08                	mov    bl,0x8
1008b3e3:	10 c1                	adc    cl,al
1008b3e5:	b3 08                	mov    bl,0x8
1008b3e7:	10 c1                	adc    cl,al
1008b3e9:	b3 08                	mov    bl,0x8
1008b3eb:	10 c1                	adc    cl,al
1008b3ed:	b3 08                	mov    bl,0x8
1008b3ef:	10 c1                	adc    cl,al
1008b3f1:	b3 08                	mov    bl,0x8
1008b3f3:	10 90 90 90 90 90    	adc    BYTE PTR [eax-0x6f6f6f70],dl
1008b3f9:	90                   	nop
1008b3fa:	90                   	nop
1008b3fb:	90                   	nop
1008b3fc:	90                   	nop
1008b3fd:	90                   	nop
1008b3fe:	90                   	nop
1008b3ff:	90                   	nop
1008b400:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1008b404:	56                   	push   esi
1008b405:	8b f1                	mov    esi,ecx
1008b407:	50                   	push   eax
1008b408:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1008b40c:	51                   	push   ecx
1008b40d:	8b ce                	mov    ecx,esi
1008b40f:	e8 ec fa ff ff       	call   0x1008af00
1008b414:	ba 01 00 00 00       	mov    edx,0x1
1008b419:	8b c8                	mov    ecx,eax
1008b41b:	d3 e2                	shl    edx,cl
1008b41d:	85 96 94 0c 00 00    	test   DWORD PTR [esi+0xc94],edx
1008b423:	75 56                	jne    0x1008b47b
1008b425:	83 f8 08             	cmp    eax,0x8
1008b428:	88 86 92 0c 00 00    	mov    BYTE PTR [esi+0xc92],al
1008b42e:	77 3c                	ja     0x1008b46c
1008b430:	ff 24 85 80 b4 08 10 	jmp    DWORD PTR [eax*4+0x1008b480]
1008b437:	b8 02 00 00 00       	mov    eax,0x2
1008b43c:	8b ce                	mov    ecx,esi
1008b43e:	50                   	push   eax
1008b43f:	6a 01                	push   0x1
1008b441:	e8 da 34 fe ff       	call   0x1006e920
1008b446:	5e                   	pop    esi
1008b447:	c2 0c 00             	ret    0xc
1008b44a:	b8 01 00 00 00       	mov    eax,0x1
1008b44f:	8b ce                	mov    ecx,esi
1008b451:	50                   	push   eax
1008b452:	50                   	push   eax
1008b453:	e8 c8 34 fe ff       	call   0x1006e920
1008b458:	5e                   	pop    esi
1008b459:	c2 0c 00             	ret    0xc
1008b45c:	33 c0                	xor    eax,eax
1008b45e:	8b ce                	mov    ecx,esi
1008b460:	50                   	push   eax
1008b461:	6a 01                	push   0x1
1008b463:	e8 b8 34 fe ff       	call   0x1006e920
1008b468:	5e                   	pop    esi
1008b469:	c2 0c 00             	ret    0xc
1008b46c:	b8 ff 00 00 00       	mov    eax,0xff
1008b471:	50                   	push   eax
1008b472:	6a 01                	push   0x1
1008b474:	8b ce                	mov    ecx,esi
1008b476:	e8 a5 34 fe ff       	call   0x1006e920
1008b47b:	5e                   	pop    esi
1008b47c:	c2 0c 00             	ret    0xc
1008b47f:	90                   	nop
1008b480:	37                   	aaa
1008b481:	b4 08                	mov    ah,0x8
1008b483:	10 4a b4             	adc    BYTE PTR [edx-0x4c],cl
1008b486:	08 10                	or     BYTE PTR [eax],dl
1008b488:	5c                   	pop    esp
1008b489:	b4 08                	mov    ah,0x8
1008b48b:	10 71 b4             	adc    BYTE PTR [ecx-0x4c],dh
1008b48e:	08 10                	or     BYTE PTR [eax],dl
1008b490:	71 b4                	jno    0x1008b446
1008b492:	08 10                	or     BYTE PTR [eax],dl
1008b494:	71 b4                	jno    0x1008b44a
1008b496:	08 10                	or     BYTE PTR [eax],dl
1008b498:	71 b4                	jno    0x1008b44e
1008b49a:	08 10                	or     BYTE PTR [eax],dl
1008b49c:	71 b4                	jno    0x1008b452
1008b49e:	08 10                	or     BYTE PTR [eax],dl
1008b4a0:	71 b4                	jno    0x1008b456
1008b4a2:	08 10                	or     BYTE PTR [eax],dl
1008b4a4:	90                   	nop
1008b4a5:	90                   	nop
1008b4a6:	90                   	nop
1008b4a7:	90                   	nop
1008b4a8:	90                   	nop
1008b4a9:	90                   	nop
1008b4aa:	90                   	nop
1008b4ab:	90                   	nop
1008b4ac:	90                   	nop
1008b4ad:	90                   	nop
1008b4ae:	90                   	nop
1008b4af:	90                   	nop
1008b4b0:	6a ff                	push   0xffffffff
1008b4b2:	68 ff 6c 0b 10       	push   0x100b6cff
1008b4b7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1008b4bd:	50                   	push   eax
1008b4be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1008b4c5:	83 ec 2c             	sub    esp,0x2c
1008b4c8:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
1008b4cc:	53                   	push   ebx
1008b4cd:	55                   	push   ebp
1008b4ce:	56                   	push   esi
1008b4cf:	57                   	push   edi
1008b4d0:	8b 7c 24 54          	mov    edi,DWORD PTR [esp+0x54]
1008b4d4:	8b f1                	mov    esi,ecx
1008b4d6:	57                   	push   edi
1008b4d7:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
1008b4db:	50                   	push   eax
1008b4dc:	51                   	push   ecx
1008b4dd:	8b ce                	mov    ecx,esi
1008b4df:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
1008b4e3:	e8 a8 af fe ff       	call   0x10076490
1008b4e8:	33 db                	xor    ebx,ebx
1008b4ea:	c7 06 b4 d6 0b 10    	mov    DWORD PTR [esi],0x100bd6b4
1008b4f0:	89 5c 24 44          	mov    DWORD PTR [esp+0x44],ebx
1008b4f4:	c7 86 70 01 00 00 ff 	mov    DWORD PTR [esi+0x170],0xff
1008b4fb:	00 00 00 
1008b4fe:	89 9e 94 03 00 00    	mov    DWORD PTR [esi+0x394],ebx
1008b504:	8d 8e 60 01 00 00    	lea    ecx,[esi+0x160]
1008b50a:	8d 86 74 01 00 00    	lea    eax,[esi+0x174]
1008b510:	ba 04 00 00 00       	mov    edx,0x4
1008b515:	bd 0f 00 00 00       	mov    ebp,0xf
1008b51a:	89 68 40             	mov    DWORD PTR [eax+0x40],ebp
1008b51d:	66 c7 00 ff ff       	mov    WORD PTR [eax],0xffff
1008b522:	89 19                	mov    DWORD PTR [ecx],ebx
1008b524:	83 c1 04             	add    ecx,0x4
1008b527:	05 88 00 00 00       	add    eax,0x88
1008b52c:	4a                   	dec    edx
1008b52d:	75 eb                	jne    0x1008b51a
1008b52f:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
1008b532:	68 88 01 00 00       	push   0x188
1008b537:	8b c1                	mov    eax,ecx
1008b539:	99                   	cdq
1008b53a:	83 e2 03             	and    edx,0x3
1008b53d:	03 c2                	add    eax,edx
1008b53f:	c1 f8 02             	sar    eax,0x2
1008b542:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
1008b546:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1008b549:	99                   	cdq
1008b54a:	2b c2                	sub    eax,edx
1008b54c:	d1 f8                	sar    eax,1
1008b54e:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
1008b552:	8b c1                	mov    eax,ecx
1008b554:	8b 0f                	mov    ecx,DWORD PTR [edi]
1008b556:	99                   	cdq
1008b557:	2b c2                	sub    eax,edx
1008b559:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1008b55c:	d1 f8                	sar    eax,1
1008b55e:	03 c1                	add    eax,ecx
1008b560:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
1008b564:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1008b568:	e8 bc 83 01 00       	call   0x100a3929
1008b56d:	83 c4 04             	add    esp,0x4
1008b570:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
1008b574:	3b c3                	cmp    eax,ebx
1008b576:	c6 44 24 44 01       	mov    BYTE PTR [esp+0x44],0x1
1008b57b:	74 14                	je     0x1008b591
1008b57d:	6a ff                	push   0xffffffff
1008b57f:	53                   	push   ebx
1008b580:	8d 4c 24 34          	lea    ecx,[esp+0x34]
1008b584:	53                   	push   ebx
1008b585:	51                   	push   ecx
1008b586:	53                   	push   ebx
1008b587:	56                   	push   esi
1008b588:	8b c8                	mov    ecx,eax
1008b58a:	e8 f1 5b fe ff       	call   0x10071180
1008b58f:	eb 02                	jmp    0x1008b593
1008b591:	33 c0                	xor    eax,eax
1008b593:	53                   	push   ebx
1008b594:	8b c8                	mov    ecx,eax
1008b596:	88 5c 24 48          	mov    BYTE PTR [esp+0x48],bl
1008b59a:	89 86 50 01 00 00    	mov    DWORD PTR [esi+0x150],eax
1008b5a0:	e8 4b 5d fe ff       	call   0x100712f0
1008b5a5:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
1008b5a8:	8b 0f                	mov    ecx,DWORD PTR [edi]
1008b5aa:	68 88 01 00 00       	push   0x188
1008b5af:	8d 04 40             	lea    eax,[eax+eax*2]
1008b5b2:	99                   	cdq
1008b5b3:	83 e2 03             	and    edx,0x3
1008b5b6:	03 c2                	add    eax,edx
1008b5b8:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1008b5bb:	c1 f8 02             	sar    eax,0x2
1008b5be:	03 c1                	add    eax,ecx
1008b5c0:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
1008b5c4:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1008b5c8:	e8 5c 83 01 00       	call   0x100a3929
1008b5cd:	83 c4 04             	add    esp,0x4
1008b5d0:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
1008b5d4:	3b c3                	cmp    eax,ebx
1008b5d6:	c6 44 24 44 02       	mov    BYTE PTR [esp+0x44],0x2
1008b5db:	74 15                	je     0x1008b5f2
1008b5dd:	6a ff                	push   0xffffffff
1008b5df:	53                   	push   ebx
1008b5e0:	8d 4c 24 34          	lea    ecx,[esp+0x34]
1008b5e4:	6a 01                	push   0x1
1008b5e6:	51                   	push   ecx
1008b5e7:	53                   	push   ebx
1008b5e8:	56                   	push   esi
1008b5e9:	8b c8                	mov    ecx,eax
1008b5eb:	e8 90 5b fe ff       	call   0x10071180
1008b5f0:	eb 02                	jmp    0x1008b5f4
1008b5f2:	33 c0                	xor    eax,eax
1008b5f4:	53                   	push   ebx
1008b5f5:	8b c8                	mov    ecx,eax
1008b5f7:	88 5c 24 48          	mov    BYTE PTR [esp+0x48],bl
1008b5fb:	89 86 54 01 00 00    	mov    DWORD PTR [esi+0x154],eax
1008b601:	e8 ea 5c fe ff       	call   0x100712f0
1008b606:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
1008b609:	8b 0f                	mov    ecx,DWORD PTR [edi]
1008b60b:	99                   	cdq
1008b60c:	2b c2                	sub    eax,edx
1008b60e:	68 88 01 00 00       	push   0x188
1008b613:	d1 f8                	sar    eax,1
1008b615:	03 c1                	add    eax,ecx
1008b617:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1008b61a:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1008b61e:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1008b621:	99                   	cdq
1008b622:	2b c2                	sub    eax,edx
1008b624:	d1 f8                	sar    eax,1
1008b626:	03 c1                	add    eax,ecx
1008b628:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1008b62c:	e8 f8 82 01 00       	call   0x100a3929
1008b631:	83 c4 04             	add    esp,0x4
1008b634:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
1008b638:	3b c3                	cmp    eax,ebx
1008b63a:	c6 44 24 44 03       	mov    BYTE PTR [esp+0x44],0x3
1008b63f:	74 15                	je     0x1008b656
1008b641:	6a ff                	push   0xffffffff
1008b643:	53                   	push   ebx
1008b644:	8d 54 24 34          	lea    edx,[esp+0x34]
1008b648:	6a 02                	push   0x2
1008b64a:	52                   	push   edx
1008b64b:	53                   	push   ebx
1008b64c:	56                   	push   esi
1008b64d:	8b c8                	mov    ecx,eax
1008b64f:	e8 2c 5b fe ff       	call   0x10071180
1008b654:	eb 02                	jmp    0x1008b658
1008b656:	33 c0                	xor    eax,eax
1008b658:	53                   	push   ebx
1008b659:	8b c8                	mov    ecx,eax
1008b65b:	88 5c 24 48          	mov    BYTE PTR [esp+0x48],bl
1008b65f:	89 86 58 01 00 00    	mov    DWORD PTR [esi+0x158],eax
1008b665:	e8 86 5c fe ff       	call   0x100712f0
1008b66a:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
1008b66d:	8b 0f                	mov    ecx,DWORD PTR [edi]
1008b66f:	8b 6f 04             	mov    ebp,DWORD PTR [edi+0x4]
1008b672:	68 88 01 00 00       	push   0x188
1008b677:	8d 04 40             	lea    eax,[eax+eax*2]
1008b67a:	99                   	cdq
1008b67b:	83 e2 03             	and    edx,0x3
1008b67e:	03 c2                	add    eax,edx
1008b680:	c1 f8 02             	sar    eax,0x2
1008b683:	03 c1                	add    eax,ecx
1008b685:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1008b689:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1008b68c:	99                   	cdq
1008b68d:	2b c2                	sub    eax,edx
1008b68f:	d1 f8                	sar    eax,1
1008b691:	03 c5                	add    eax,ebp
1008b693:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1008b697:	e8 8d 82 01 00       	call   0x100a3929
1008b69c:	83 c4 04             	add    esp,0x4
1008b69f:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
1008b6a3:	3b c3                	cmp    eax,ebx
1008b6a5:	c6 44 24 44 04       	mov    BYTE PTR [esp+0x44],0x4
1008b6aa:	74 15                	je     0x1008b6c1
1008b6ac:	6a ff                	push   0xffffffff
1008b6ae:	53                   	push   ebx
1008b6af:	8d 4c 24 34          	lea    ecx,[esp+0x34]
1008b6b3:	6a 03                	push   0x3
1008b6b5:	51                   	push   ecx
1008b6b6:	53                   	push   ebx
1008b6b7:	56                   	push   esi
1008b6b8:	8b c8                	mov    ecx,eax
1008b6ba:	e8 c1 5a fe ff       	call   0x10071180
1008b6bf:	eb 02                	jmp    0x1008b6c3
1008b6c1:	33 c0                	xor    eax,eax
1008b6c3:	53                   	push   ebx
1008b6c4:	8b c8                	mov    ecx,eax
1008b6c6:	88 5c 24 48          	mov    BYTE PTR [esp+0x48],bl
1008b6ca:	89 86 5c 01 00 00    	mov    DWORD PTR [esi+0x15c],eax
1008b6d0:	e8 1b 5c fe ff       	call   0x100712f0
1008b6d5:	6a 08                	push   0x8
1008b6d7:	e8 4d 82 01 00       	call   0x100a3929
1008b6dc:	83 c4 04             	add    esp,0x4
1008b6df:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
1008b6e3:	3b c3                	cmp    eax,ebx
1008b6e5:	c6 44 24 44 05       	mov    BYTE PTR [esp+0x44],0x5
1008b6ea:	74 09                	je     0x1008b6f5
1008b6ec:	8b c8                	mov    ecx,eax
1008b6ee:	e8 3d a8 f7 ff       	call   0x10005f30
1008b6f3:	eb 02                	jmp    0x1008b6f7
1008b6f5:	33 c0                	xor    eax,eax
1008b6f7:	8b c8                	mov    ecx,eax
1008b6f9:	88 5c 24 44          	mov    BYTE PTR [esp+0x44],bl
1008b6fd:	89 86 14 09 00 00    	mov    DWORD PTR [esi+0x914],eax
1008b703:	e8 f8 a8 f7 ff       	call   0x10006000
1008b708:	89 9e 4c 01 00 00    	mov    DWORD PTR [esi+0x14c],ebx
1008b70e:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b713:	68 82 05 00 00       	push   0x582
1008b718:	50                   	push   eax
1008b719:	8b 10                	mov    edx,DWORD PTR [eax]
1008b71b:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1008b721:	8b f8                	mov    edi,eax
1008b723:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b728:	68 81 05 00 00       	push   0x581
1008b72d:	50                   	push   eax
1008b72e:	8b 08                	mov    ecx,DWORD PTR [eax]
1008b730:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1008b736:	8b e8                	mov    ebp,eax
1008b738:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b73d:	68 83 05 00 00       	push   0x583
1008b742:	50                   	push   eax
1008b743:	8b 10                	mov    edx,DWORD PTR [eax]
1008b745:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1008b74b:	89 44 24 6c          	mov    DWORD PTR [esp+0x6c],eax
1008b74f:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b754:	68 80 05 00 00       	push   0x580
1008b759:	50                   	push   eax
1008b75a:	8b 08                	mov    ecx,DWORD PTR [eax]
1008b75c:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1008b762:	89 44 24 70          	mov    DWORD PTR [esp+0x70],eax
1008b766:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b76b:	68 7f 05 00 00       	push   0x57f
1008b770:	50                   	push   eax
1008b771:	8b 10                	mov    edx,DWORD PTR [eax]
1008b773:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1008b779:	89 44 24 74          	mov    DWORD PTR [esp+0x74],eax
1008b77d:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b782:	68 84 05 00 00       	push   0x584
1008b787:	50                   	push   eax
1008b788:	8b 08                	mov    ecx,DWORD PTR [eax]
1008b78a:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1008b790:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
1008b794:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b799:	68 85 05 00 00       	push   0x585
1008b79e:	50                   	push   eax
1008b79f:	8b 10                	mov    edx,DWORD PTR [eax]
1008b7a1:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1008b7a7:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
1008b7ab:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b7b0:	68 d1 05 00 00       	push   0x5d1
1008b7b5:	50                   	push   eax
1008b7b6:	8b 08                	mov    ecx,DWORD PTR [eax]
1008b7b8:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1008b7be:	89 44 24 58          	mov    DWORD PTR [esp+0x58],eax
1008b7c2:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b7c7:	83 c4 40             	add    esp,0x40
1008b7ca:	8b 10                	mov    edx,DWORD PTR [eax]
1008b7cc:	68 d4 05 00 00       	push   0x5d4
1008b7d1:	50                   	push   eax
1008b7d2:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1008b7d8:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
1008b7dc:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b7e1:	68 ba 05 00 00       	push   0x5ba
1008b7e6:	50                   	push   eax
1008b7e7:	8b 08                	mov    ecx,DWORD PTR [eax]
1008b7e9:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
1008b7ef:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1008b7f3:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1008b7f8:	68 c1 05 00 00       	push   0x5c1
1008b7fd:	50                   	push   eax
1008b7fe:	8b 10                	mov    edx,DWORD PTR [eax]
1008b800:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
1008b806:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b80c:	83 c4 18             	add    esp,0x18
1008b80f:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
1008b813:	8b 01                	mov    eax,DWORD PTR [ecx]
1008b815:	57                   	push   edi
1008b816:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1008b81c:	8d 8e f4 04 00 00    	lea    ecx,[esi+0x4f4]
1008b822:	50                   	push   eax
1008b823:	51                   	push   ecx
1008b824:	e8 32 86 01 00       	call   0x100a3e5b
1008b829:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b82f:	83 c4 08             	add    esp,0x8
1008b832:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b834:	55                   	push   ebp
1008b835:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008b83b:	50                   	push   eax
1008b83c:	8d 86 74 05 00 00    	lea    eax,[esi+0x574]
1008b842:	50                   	push   eax
1008b843:	e8 13 86 01 00       	call   0x100a3e5b
1008b848:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b84e:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
1008b852:	83 c4 08             	add    esp,0x8
1008b855:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b857:	50                   	push   eax
1008b858:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008b85e:	8d 8e f4 05 00 00    	lea    ecx,[esi+0x5f4]
1008b864:	50                   	push   eax
1008b865:	51                   	push   ecx
1008b866:	e8 f0 85 01 00       	call   0x100a3e5b
1008b86b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b871:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
1008b875:	83 c4 08             	add    esp,0x8
1008b878:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b87a:	50                   	push   eax
1008b87b:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008b881:	8d 8e 74 06 00 00    	lea    ecx,[esi+0x674]
1008b887:	50                   	push   eax
1008b888:	51                   	push   ecx
1008b889:	e8 cd 85 01 00       	call   0x100a3e5b
1008b88e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b894:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
1008b898:	83 c4 08             	add    esp,0x8
1008b89b:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b89d:	50                   	push   eax
1008b89e:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008b8a4:	8d 8e f4 06 00 00    	lea    ecx,[esi+0x6f4]
1008b8aa:	50                   	push   eax
1008b8ab:	51                   	push   ecx
1008b8ac:	e8 aa 85 01 00       	call   0x100a3e5b
1008b8b1:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b8b7:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1008b8bb:	83 c4 08             	add    esp,0x8
1008b8be:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b8c0:	50                   	push   eax
1008b8c1:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008b8c7:	8d 8e 74 07 00 00    	lea    ecx,[esi+0x774]
1008b8cd:	50                   	push   eax
1008b8ce:	51                   	push   ecx
1008b8cf:	e8 87 85 01 00       	call   0x100a3e5b
1008b8d4:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b8da:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1008b8de:	83 c4 08             	add    esp,0x8
1008b8e1:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b8e3:	50                   	push   eax
1008b8e4:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008b8ea:	8d 8e f4 07 00 00    	lea    ecx,[esi+0x7f4]
1008b8f0:	50                   	push   eax
1008b8f1:	51                   	push   ecx
1008b8f2:	e8 64 85 01 00       	call   0x100a3e5b
1008b8f7:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b8fd:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1008b901:	83 c4 08             	add    esp,0x8
1008b904:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b906:	50                   	push   eax
1008b907:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008b90d:	8d 8e 74 08 00 00    	lea    ecx,[esi+0x874]
1008b913:	50                   	push   eax
1008b914:	51                   	push   ecx
1008b915:	e8 41 85 01 00       	call   0x100a3e5b
1008b91a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b920:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1008b924:	83 c4 08             	add    esp,0x8
1008b927:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b929:	50                   	push   eax
1008b92a:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008b930:	8d 8e 94 08 00 00    	lea    ecx,[esi+0x894]
1008b936:	50                   	push   eax
1008b937:	51                   	push   ecx
1008b938:	e8 1e 85 01 00       	call   0x100a3e5b
1008b93d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b943:	83 c4 08             	add    esp,0x8
1008b946:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1008b94a:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b94c:	50                   	push   eax
1008b94d:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008b953:	8d 8e b4 08 00 00    	lea    ecx,[esi+0x8b4]
1008b959:	50                   	push   eax
1008b95a:	51                   	push   ecx
1008b95b:	e8 fb 84 01 00       	call   0x100a3e5b
1008b960:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b966:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1008b96a:	83 c4 08             	add    esp,0x8
1008b96d:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b96f:	50                   	push   eax
1008b970:	ff 92 cc 00 00 00    	call   DWORD PTR [edx+0xcc]
1008b976:	8d 8e d4 08 00 00    	lea    ecx,[esi+0x8d4]
1008b97c:	50                   	push   eax
1008b97d:	51                   	push   ecx
1008b97e:	e8 d8 84 01 00       	call   0x100a3e5b
1008b983:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b989:	83 c4 08             	add    esp,0x8
1008b98c:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b98e:	57                   	push   edi
1008b98f:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008b995:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b99b:	55                   	push   ebp
1008b99c:	8b 01                	mov    eax,DWORD PTR [ecx]
1008b99e:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
1008b9a4:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b9aa:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
1008b9ae:	50                   	push   eax
1008b9af:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b9b1:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008b9b7:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b9bd:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
1008b9c1:	50                   	push   eax
1008b9c2:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b9c4:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008b9ca:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b9d0:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
1008b9d4:	50                   	push   eax
1008b9d5:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b9d7:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008b9dd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b9e3:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1008b9e7:	50                   	push   eax
1008b9e8:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b9ea:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008b9f0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008b9f6:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1008b9fa:	50                   	push   eax
1008b9fb:	8b 11                	mov    edx,DWORD PTR [ecx]
1008b9fd:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008ba03:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008ba09:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1008ba0d:	50                   	push   eax
1008ba0e:	8b 11                	mov    edx,DWORD PTR [ecx]
1008ba10:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008ba16:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008ba1c:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1008ba20:	50                   	push   eax
1008ba21:	8b 11                	mov    edx,DWORD PTR [ecx]
1008ba23:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008ba29:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008ba2f:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1008ba33:	50                   	push   eax
1008ba34:	8b 11                	mov    edx,DWORD PTR [ecx]
1008ba36:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008ba3c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1008ba42:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1008ba46:	50                   	push   eax
1008ba47:	8b 11                	mov    edx,DWORD PTR [ecx]
1008ba49:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
1008ba4f:	88 9e f4 03 00 00    	mov    BYTE PTR [esi+0x3f4],bl
1008ba55:	88 9e 54 04 00 00    	mov    BYTE PTR [esi+0x454],bl
1008ba5b:	88 9e 74 04 00 00    	mov    BYTE PTR [esi+0x474],bl
1008ba61:	88 9e 94 04 00 00    	mov    BYTE PTR [esi+0x494],bl
1008ba67:	88 9e d4 04 00 00    	mov    BYTE PTR [esi+0x4d4],bl
1008ba6d:	88 9e b4 04 00 00    	mov    BYTE PTR [esi+0x4b4],bl
1008ba73:	8b c6                	mov    eax,esi
1008ba75:	5f                   	pop    edi
1008ba76:	5e                   	pop    esi
1008ba77:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
1008ba7b:	5d                   	pop    ebp
1008ba7c:	5b                   	pop    ebx
1008ba7d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1008ba84:	83 c4 38             	add    esp,0x38
1008ba87:	c2 0c 00             	ret    0xc
1008ba8a:	90                   	nop
1008ba8b:	90                   	nop
1008ba8c:	90                   	nop
1008ba8d:	90                   	nop
1008ba8e:	90                   	nop
1008ba8f:	90                   	nop
1008ba90:	56                   	push   esi
1008ba91:	8b f1                	mov    esi,ecx
1008ba93:	e8 18 00 00 00       	call   0x1008bab0
1008ba98:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1008ba9d:	74 09                	je     0x1008baa8
1008ba9f:	56                   	push   esi
1008baa0:	e8 79 7e 01 00       	call   0x100a391e
1008baa5:	83 c4 04             	add    esp,0x4
1008baa8:	8b c6                	mov    eax,esi
1008baaa:	5e                   	pop    esi
1008baab:	c2 04 00             	ret    0x4
1008baae:	90                   	nop
1008baaf:	90                   	nop
1008bab0:	6a ff                	push   0xffffffff
1008bab2:	68 18 6d 0b 10       	push   0x100b6d18
1008bab7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1008babd:	50                   	push   eax
1008babe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1008bac5:	51                   	push   ecx
1008bac6:	56                   	push   esi
1008bac7:	8b f1                	mov    esi,ecx
1008bac9:	57                   	push   edi
1008baca:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
1008bace:	c7 06 b4 d6 0b 10    	mov    DWORD PTR [esi],0x100bd6b4
1008bad4:	8b be 14 09 00 00    	mov    edi,DWORD PTR [esi+0x914]
1008bada:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
1008bae1:	00 
1008bae2:	85 ff                	test   edi,edi
1008bae4:	74 10                	je     0x1008baf6
1008bae6:	8b cf                	mov    ecx,edi
1008bae8:	e8 53 a4 f7 ff       	call   0x10005f40
1008baed:	57                   	push   edi
1008baee:	e8 2b 7e 01 00       	call   0x100a391e
1008baf3:	83 c4 04             	add    esp,0x4
1008baf6:	8b ce                	mov    ecx,esi
1008baf8:	c7 86 14 09 00 00 00 	mov    DWORD PTR [esi+0x914],0x0
1008baff:	00 00 00 
1008bb02:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
1008bb09:	ff 
1008bb0a:	e8 e1 a9 fe ff       	call   0x100764f0
1008bb0f:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1008bb13:	5f                   	pop    edi
1008bb14:	5e                   	pop    esi
1008bb15:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1008bb1c:	83 c4 10             	add    esp,0x10
1008bb1f:	c3                   	ret
1008bb20:	83 ec 50             	sub    esp,0x50
1008bb23:	53                   	push   ebx
1008bb24:	55                   	push   ebp
1008bb25:	56                   	push   esi
1008bb26:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1008bb2a:	57                   	push   edi
1008bb2b:	8b f1                	mov    esi,ecx
1008bb2d:	50                   	push   eax
1008bb2e:	e8 8d 2b fe ff       	call   0x1006e6c0
1008bb33:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
1008bb39:	68 4a 5b 58 ff       	push   0xff585b4a
1008bb3e:	6a ff                	push   0xffffffff
1008bb40:	8d 04 49             	lea    eax,[ecx+ecx*2]
1008bb43:	8d 14 80             	lea    edx,[eax+eax*4]
1008bb46:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008bb4b:	8d 14 91             	lea    edx,[ecx+edx*4]
1008bb4e:	d1 e2                	shl    edx,1
1008bb50:	f7 e2                	mul    edx
1008bb52:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
1008bb57:	8b fa                	mov    edi,edx
1008bb59:	c1 e0 04             	shl    eax,0x4
1008bb5c:	c1 e8 0a             	shr    eax,0xa
1008bb5f:	50                   	push   eax
1008bb60:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008bb65:	c1 e1 04             	shl    ecx,0x4
1008bb68:	f7 e1                	mul    ecx
1008bb6a:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
1008bb6e:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1008bb72:	c1 ea 09             	shr    edx,0x9
1008bb75:	52                   	push   edx
1008bb76:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
1008bb7a:	51                   	push   ecx
1008bb7b:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008bb81:	52                   	push   edx
1008bb82:	50                   	push   eax
1008bb83:	c1 ef 09             	shr    edi,0x9
1008bb86:	e8 35 e1 fb ff       	call   0x10049cc0
1008bb8b:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
1008bb91:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008bb96:	c1 e1 04             	shl    ecx,0x4
1008bb99:	f7 e1                	mul    ecx
1008bb9b:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1008bb9f:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1008bba3:	6a 05                	push   0x5
1008bba5:	6a ff                	push   0xffffffff
1008bba7:	c1 ea 09             	shr    edx,0x9
1008bbaa:	52                   	push   edx
1008bbab:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
1008bbaf:	52                   	push   edx
1008bbb0:	50                   	push   eax
1008bbb1:	a1 f0 b6 0d 10       	mov    eax,ds:0x100db6f0
1008bbb6:	8d 96 d4 08 00 00    	lea    edx,[esi+0x8d4]
1008bbbc:	51                   	push   ecx
1008bbbd:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008bbc3:	52                   	push   edx
1008bbc4:	50                   	push   eax
1008bbc5:	e8 36 e5 fb ff       	call   0x1004a100
1008bbca:	8b 0d 1c a0 0d 10    	mov    ecx,DWORD PTR ds:0x100da01c
1008bbd0:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008bbd5:	c1 e1 04             	shl    ecx,0x4
1008bbd8:	f7 e1                	mul    ecx
1008bbda:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1008bbde:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
1008bbe2:	c1 ea 09             	shr    edx,0x9
1008bbe5:	03 c2                	add    eax,edx
1008bbe7:	2b ca                	sub    ecx,edx
1008bbe9:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1008bbed:	6a 00                	push   0x0
1008bbef:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1008bbf3:	6a ff                	push   0xffffffff
1008bbf5:	51                   	push   ecx
1008bbf6:	48                   	dec    eax
1008bbf7:	52                   	push   edx
1008bbf8:	50                   	push   eax
1008bbf9:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
1008bbfd:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
1008bc01:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008bc07:	50                   	push   eax
1008bc08:	e8 63 d9 fb ff       	call   0x10049570
1008bc0d:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1008bc11:	6a 00                	push   0x0
1008bc13:	57                   	push   edi
1008bc14:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
1008bc18:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1008bc1c:	49                   	dec    ecx
1008bc1d:	51                   	push   ecx
1008bc1e:	8b 0d a0 c4 11 10    	mov    ecx,DWORD PTR ds:0x1011c4a0
1008bc24:	52                   	push   edx
1008bc25:	50                   	push   eax
1008bc26:	51                   	push   ecx
1008bc27:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008bc2d:	e8 6e ec fb ff       	call   0x1004a8a0
1008bc32:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1008bc36:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1008bc3a:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1008bc3e:	68 a5 70 26 c8       	push   0xc82670a5
1008bc43:	4a                   	dec    edx
1008bc44:	57                   	push   edi
1008bc45:	52                   	push   edx
1008bc46:	50                   	push   eax
1008bc47:	51                   	push   ecx
1008bc48:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008bc4e:	e8 fd da fb ff       	call   0x10049750
1008bc53:	8b 8e 70 01 00 00    	mov    ecx,DWORD PTR [esi+0x170]
1008bc59:	81 f9 ff 00 00 00    	cmp    ecx,0xff
1008bc5f:	0f 84 cb 00 00 00    	je     0x1008bd30
1008bc65:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1008bc69:	99                   	cdq
1008bc6a:	2b c2                	sub    eax,edx
1008bc6c:	8b d8                	mov    ebx,eax
1008bc6e:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1008bc72:	d1 fb                	sar    ebx,1
1008bc74:	03 d8                	add    ebx,eax
1008bc76:	8b c7                	mov    eax,edi
1008bc78:	99                   	cdq
1008bc79:	2b c2                	sub    eax,edx
1008bc7b:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1008bc7f:	d1 f8                	sar    eax,1
1008bc81:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1008bc85:	8d 2c 10             	lea    ebp,[eax+edx*1]
1008bc88:	8b 86 4c 01 00 00    	mov    eax,DWORD PTR [esi+0x14c]
1008bc8e:	85 c0                	test   eax,eax
1008bc90:	75 12                	jne    0x1008bca4
1008bc92:	6a ff                	push   0xffffffff
1008bc94:	55                   	push   ebp
1008bc95:	53                   	push   ebx
1008bc96:	51                   	push   ecx
1008bc97:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008bc9d:	e8 2e 00 fc ff       	call   0x1004bcd0
1008bca2:	eb 5c                	jmp    0x1008bd00
1008bca4:	8b 86 14 09 00 00    	mov    eax,DWORD PTR [esi+0x914]
1008bcaa:	51                   	push   ecx
1008bcab:	8b c8                	mov    ecx,eax
1008bcad:	e8 de a2 f7 ff       	call   0x10005f90
1008bcb2:	8b 80 84 00 00 00    	mov    eax,DWORD PTR [eax+0x84]
1008bcb8:	8b 0d f0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cff0
1008bcbe:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1008bcc2:	8d 44 24 14          	lea    eax,[esp+0x14]
1008bcc6:	8b 11                	mov    edx,DWORD PTR [ecx]
1008bcc8:	50                   	push   eax
1008bcc9:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1008bccd:	50                   	push   eax
1008bcce:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1008bcd2:	50                   	push   eax
1008bcd3:	ff 52 28             	call   DWORD PTR [edx+0x28]
1008bcd6:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1008bcda:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1008bcde:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1008bce2:	6a ff                	push   0xffffffff
1008bce4:	d1 e9                	shr    ecx,1
1008bce6:	6a 00                	push   0x0
1008bce8:	6a ff                	push   0xffffffff
1008bcea:	d1 ea                	shr    edx,1
1008bcec:	2b e9                	sub    ebp,ecx
1008bcee:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008bcf4:	6a ff                	push   0xffffffff
1008bcf6:	2b da                	sub    ebx,edx
1008bcf8:	55                   	push   ebp
1008bcf9:	53                   	push   ebx
1008bcfa:	50                   	push   eax
1008bcfb:	e8 90 e9 fb ff       	call   0x1004a690
1008bd00:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1008bd04:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1008bd08:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1008bd0c:	6a 05                	push   0x5
1008bd0e:	6a ff                	push   0xffffffff
1008bd10:	51                   	push   ecx
1008bd11:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
1008bd15:	52                   	push   edx
1008bd16:	50                   	push   eax
1008bd17:	a1 f0 b6 0d 10       	mov    eax,ds:0x100db6f0
1008bd1c:	8d 96 f4 03 00 00    	lea    edx,[esi+0x3f4]
1008bd22:	51                   	push   ecx
1008bd23:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008bd29:	52                   	push   edx
1008bd2a:	50                   	push   eax
1008bd2b:	e8 d0 e3 fb ff       	call   0x1004a100
1008bd30:	a1 1c a0 0d 10       	mov    eax,ds:0x100da01c
1008bd35:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1008bd39:	8b 5c 24 2c          	mov    ebx,DWORD PTR [esp+0x2c]
1008bd3d:	8d 14 c0             	lea    edx,[eax+eax*8]
1008bd40:	b8 ab aa aa aa       	mov    eax,0xaaaaaaab
1008bd45:	d1 e2                	shl    edx,1
1008bd47:	f7 e2                	mul    edx
1008bd49:	8d 6c 39 ff          	lea    ebp,[ecx+edi*1-0x1]
1008bd4d:	2b df                	sub    ebx,edi
1008bd4f:	b9 0c 00 00 00       	mov    ecx,0xc
1008bd54:	33 c0                	xor    eax,eax
1008bd56:	8d 7c 24 30          	lea    edi,[esp+0x30]
1008bd5a:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
1008bd5e:	8b da                	mov    ebx,edx
1008bd60:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
1008bd64:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1008bd66:	8b 86 4c 01 00 00    	mov    eax,DWORD PTR [esi+0x14c]
1008bd6c:	c1 eb 09             	shr    ebx,0x9
1008bd6f:	85 c0                	test   eax,eax
1008bd71:	74 19                	je     0x1008bd8c
1008bd73:	8d 86 f4 04 00 00    	lea    eax,[esi+0x4f4]
1008bd79:	81 c6 34 04 00 00    	add    esi,0x434
1008bd7f:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1008bd83:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
1008bd87:	e9 ae 00 00 00       	jmp    0x1008be3a
1008bd8c:	8b 86 70 01 00 00    	mov    eax,DWORD PTR [esi+0x170]
1008bd92:	83 f8 3f             	cmp    eax,0x3f
1008bd95:	77 63                	ja     0x1008bdfa
1008bd97:	33 c9                	xor    ecx,ecx
1008bd99:	8d 7c 24 30          	lea    edi,[esp+0x30]
1008bd9d:	8b c1                	mov    eax,ecx
1008bd9f:	83 c1 02             	add    ecx,0x2
1008bda2:	99                   	cdq
1008bda3:	2b c2                	sub    eax,edx
1008bda5:	83 c7 08             	add    edi,0x8
1008bda8:	d1 f8                	sar    eax,1
1008bdaa:	c1 e0 07             	shl    eax,0x7
1008bdad:	83 f9 0c             	cmp    ecx,0xc
1008bdb0:	8d 94 30 f4 04 00 00 	lea    edx,[eax+esi*1+0x4f4]
1008bdb7:	89 57 f8             	mov    DWORD PTR [edi-0x8],edx
1008bdba:	7c e1                	jl     0x1008bd9d
1008bdbc:	8d 86 34 04 00 00    	lea    eax,[esi+0x434]
1008bdc2:	8d 8e 54 04 00 00    	lea    ecx,[esi+0x454]
1008bdc8:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1008bdcc:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
1008bdd0:	8d 96 74 04 00 00    	lea    edx,[esi+0x474]
1008bdd6:	8d 86 94 04 00 00    	lea    eax,[esi+0x494]
1008bddc:	8d 8e d4 04 00 00    	lea    ecx,[esi+0x4d4]
1008bde2:	81 c6 b4 04 00 00    	add    esi,0x4b4
1008bde8:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
1008bdec:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
1008bdf0:	89 4c 24 54          	mov    DWORD PTR [esp+0x54],ecx
1008bdf4:	89 74 24 5c          	mov    DWORD PTR [esp+0x5c],esi
1008bdf8:	eb 40                	jmp    0x1008be3a
1008bdfa:	83 f8 40             	cmp    eax,0x40
1008bdfd:	72 3b                	jb     0x1008be3a
1008bdff:	83 f8 7f             	cmp    eax,0x7f
1008be02:	77 36                	ja     0x1008be3a
1008be04:	8d 96 f4 04 00 00    	lea    edx,[esi+0x4f4]
1008be0a:	8d 86 34 04 00 00    	lea    eax,[esi+0x434]
1008be10:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
1008be14:	8d 96 54 04 00 00    	lea    edx,[esi+0x454]
1008be1a:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1008be1e:	8b fa                	mov    edi,edx
1008be20:	83 c9 ff             	or     ecx,0xffffffff
1008be23:	33 c0                	xor    eax,eax
1008be25:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
1008be27:	f7 d1                	not    ecx
1008be29:	49                   	dec    ecx
1008be2a:	74 0e                	je     0x1008be3a
1008be2c:	81 c6 f4 07 00 00    	add    esi,0x7f4
1008be32:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
1008be36:	89 74 24 38          	mov    DWORD PTR [esp+0x38],esi
1008be3a:	33 f6                	xor    esi,esi
1008be3c:	8d 7c 24 30          	lea    edi,[esp+0x30]
1008be40:	8b ce                	mov    ecx,esi
1008be42:	81 e1 01 00 00 80    	and    ecx,0x80000001
1008be48:	79 05                	jns    0x1008be4f
1008be4a:	49                   	dec    ecx
1008be4b:	83 c9 fe             	or     ecx,0xfffffffe
1008be4e:	41                   	inc    ecx
1008be4f:	74 14                	je     0x1008be65
1008be51:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1008be55:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1008be59:	68 a5 70 26 c8       	push   0xc82670a5
1008be5e:	4a                   	dec    edx
1008be5f:	53                   	push   ebx
1008be60:	52                   	push   edx
1008be61:	55                   	push   ebp
1008be62:	50                   	push   eax
1008be63:	eb 12                	jmp    0x1008be77
1008be65:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1008be69:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1008be6d:	68 85 4f 05 c8       	push   0xc8054f85
1008be72:	49                   	dec    ecx
1008be73:	53                   	push   ebx
1008be74:	51                   	push   ecx
1008be75:	55                   	push   ebp
1008be76:	52                   	push   edx
1008be77:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008be7d:	e8 ce d8 fb ff       	call   0x10049750
1008be82:	8b 07                	mov    eax,DWORD PTR [edi]
1008be84:	85 c0                	test   eax,eax
1008be86:	74 22                	je     0x1008beaa
1008be88:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1008be8c:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1008be90:	6a 05                	push   0x5
1008be92:	6a ff                	push   0xffffffff
1008be94:	53                   	push   ebx
1008be95:	51                   	push   ecx
1008be96:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008be9c:	55                   	push   ebp
1008be9d:	52                   	push   edx
1008be9e:	50                   	push   eax
1008be9f:	a1 ec b6 0d 10       	mov    eax,ds:0x100db6ec
1008bea4:	50                   	push   eax
1008bea5:	e8 56 e2 fb ff       	call   0x1004a100
1008beaa:	8d 43 ff             	lea    eax,[ebx-0x1]
1008bead:	83 c7 04             	add    edi,0x4
1008beb0:	03 e8                	add    ebp,eax
1008beb2:	46                   	inc    esi
1008beb3:	83 fe 0b             	cmp    esi,0xb
1008beb6:	7c 88                	jl     0x1008be40
1008beb8:	8b 74 24 2c          	mov    esi,DWORD PTR [esp+0x2c]
1008bebc:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1008bec0:	8d 0c 9b             	lea    ecx,[ebx+ebx*4]
1008bec3:	68 a5 70 26 c8       	push   0xc82670a5
1008bec8:	8d 14 4b             	lea    edx,[ebx+ecx*2]
1008becb:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1008becf:	2b f2                	sub    esi,edx
1008bed1:	48                   	dec    eax
1008bed2:	56                   	push   esi
1008bed3:	50                   	push   eax
1008bed4:	55                   	push   ebp
1008bed5:	51                   	push   ecx
1008bed6:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008bedc:	e8 6f d8 fb ff       	call   0x10049750
1008bee1:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
1008bee5:	85 c0                	test   eax,eax
1008bee7:	74 23                	je     0x1008bf0c
1008bee9:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1008beed:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1008bef1:	6a 05                	push   0x5
1008bef3:	6a ff                	push   0xffffffff
1008bef5:	56                   	push   esi
1008bef6:	52                   	push   edx
1008bef7:	8b 15 ec b6 0d 10    	mov    edx,DWORD PTR ds:0x100db6ec
1008befd:	55                   	push   ebp
1008befe:	51                   	push   ecx
1008beff:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1008bf05:	50                   	push   eax
1008bf06:	52                   	push   edx
1008bf07:	e8 f4 e1 fb ff       	call   0x1004a100
1008bf0c:	5f                   	pop    edi
1008bf0d:	5e                   	pop    esi
1008bf0e:	5d                   	pop    ebp
1008bf0f:	5b                   	pop    ebx
1008bf10:	83 c4 50             	add    esp,0x50
1008bf13:	c2 08 00             	ret    0x8
1008bf16:	90                   	nop
1008bf17:	90                   	nop
1008bf18:	90                   	nop
1008bf19:	90                   	nop
1008bf1a:	90                   	nop
1008bf1b:	90                   	nop
1008bf1c:	90                   	nop
1008bf1d:	90                   	nop
1008bf1e:	90                   	nop
1008bf1f:	90                   	nop
1008bf20:	56                   	push   esi
1008bf21:	8b f1                	mov    esi,ecx
1008bf23:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1008bf27:	33 c0                	xor    eax,eax
1008bf29:	83 f9 03             	cmp    ecx,0x3
1008bf2c:	0f 87 37 01 00 00    	ja     0x1008c069
1008bf32:	ff 24 8d 70 c0 08 10 	jmp    DWORD PTR [ecx*4+0x1008c070]
1008bf39:	8b 86 50 01 00 00    	mov    eax,DWORD PTR [esi+0x150]
1008bf3f:	6a 00                	push   0x0
1008bf41:	8b 48 4c             	mov    ecx,DWORD PTR [eax+0x4c]
1008bf44:	85 c9                	test   ecx,ecx
1008bf46:	74 1f                	je     0x1008bf67
1008bf48:	6a 04                	push   0x4
1008bf4a:	8b ce                	mov    ecx,esi
1008bf4c:	e8 cf 29 fe ff       	call   0x1006e920
1008bf51:	8b 8e 50 01 00 00    	mov    ecx,DWORD PTR [esi+0x150]
1008bf57:	6a 00                	push   0x0
1008bf59:	e8 32 54 fe ff       	call   0x10071390
1008bf5e:	b8 01 00 00 00       	mov    eax,0x1
1008bf63:	5e                   	pop    esi
1008bf64:	c2 08 00             	ret    0x8
1008bf67:	6a 03                	push   0x3
1008bf69:	8b ce                	mov    ecx,esi
1008bf6b:	e8 b0 29 fe ff       	call   0x1006e920
1008bf70:	8b 8e 50 01 00 00    	mov    ecx,DWORD PTR [esi+0x150]
1008bf76:	6a 01                	push   0x1
1008bf78:	e8 13 54 fe ff       	call   0x10071390
1008bf7d:	b8 01 00 00 00       	mov    eax,0x1
1008bf82:	5e                   	pop    esi
1008bf83:	c2 08 00             	ret    0x8
1008bf86:	8b 8e 54 01 00 00    	mov    ecx,DWORD PTR [esi+0x154]
1008bf8c:	6a 01                	push   0x1
1008bf8e:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
1008bf91:	85 c0                	test   eax,eax
1008bf93:	74 1f                	je     0x1008bfb4
1008bf95:	6a 04                	push   0x4
1008bf97:	8b ce                	mov    ecx,esi
1008bf99:	e8 82 29 fe ff       	call   0x1006e920
1008bf9e:	8b 8e 54 01 00 00    	mov    ecx,DWORD PTR [esi+0x154]
1008bfa4:	6a 00                	push   0x0
1008bfa6:	e8 e5 53 fe ff       	call   0x10071390
1008bfab:	b8 01 00 00 00       	mov    eax,0x1
1008bfb0:	5e                   	pop    esi
1008bfb1:	c2 08 00             	ret    0x8
1008bfb4:	6a 03                	push   0x3
1008bfb6:	8b ce                	mov    ecx,esi
1008bfb8:	e8 63 29 fe ff       	call   0x1006e920
1008bfbd:	8b 8e 54 01 00 00    	mov    ecx,DWORD PTR [esi+0x154]
1008bfc3:	6a 01                	push   0x1
1008bfc5:	e8 c6 53 fe ff       	call   0x10071390
1008bfca:	b8 01 00 00 00       	mov    eax,0x1
1008bfcf:	5e                   	pop    esi
1008bfd0:	c2 08 00             	ret    0x8
1008bfd3:	8b 96 58 01 00 00    	mov    edx,DWORD PTR [esi+0x158]
1008bfd9:	6a 02                	push   0x2
1008bfdb:	8b 42 4c             	mov    eax,DWORD PTR [edx+0x4c]
1008bfde:	85 c0                	test   eax,eax
1008bfe0:	74 1f                	je     0x1008c001
1008bfe2:	6a 04                	push   0x4
1008bfe4:	8b ce                	mov    ecx,esi
1008bfe6:	e8 35 29 fe ff       	call   0x1006e920
1008bfeb:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1008bff1:	6a 00                	push   0x0
1008bff3:	e8 98 53 fe ff       	call   0x10071390
1008bff8:	b8 01 00 00 00       	mov    eax,0x1
1008bffd:	5e                   	pop    esi
1008bffe:	c2 08 00             	ret    0x8
1008c001:	6a 03                	push   0x3
1008c003:	8b ce                	mov    ecx,esi
1008c005:	e8 16 29 fe ff       	call   0x1006e920
1008c00a:	8b 8e 58 01 00 00    	mov    ecx,DWORD PTR [esi+0x158]
1008c010:	6a 01                	push   0x1
1008c012:	e8 79 53 fe ff       	call   0x10071390
1008c017:	b8 01 00 00 00       	mov    eax,0x1
1008c01c:	5e                   	pop    esi
1008c01d:	c2 08 00             	ret    0x8
1008c020:	8b 86 5c 01 00 00    	mov    eax,DWORD PTR [esi+0x15c]
1008c026:	6a 03                	push   0x3
1008c028:	8b 48 4c             	mov    ecx,DWORD PTR [eax+0x4c]
1008c02b:	85 c9                	test   ecx,ecx
1008c02d:	74 1f                	je     0x1008c04e
1008c02f:	6a 04                	push   0x4
1008c031:	8b ce                	mov    ecx,esi
1008c033:	e8 e8 28 fe ff       	call   0x1006e920
1008c038:	8b 8e 5c 01 00 00    	mov    ecx,DWORD PTR [esi+0x15c]
1008c03e:	6a 00                	push   0x0
1008c040:	e8 4b 53 fe ff       	call   0x10071390
1008c045:	b8 01 00 00 00       	mov    eax,0x1
1008c04a:	5e                   	pop    esi
1008c04b:	c2 08 00             	ret    0x8
1008c04e:	6a 03                	push   0x3
1008c050:	8b ce                	mov    ecx,esi
1008c052:	e8 c9 28 fe ff       	call   0x1006e920
1008c057:	8b 8e 5c 01 00 00    	mov    ecx,DWORD PTR [esi+0x15c]
1008c05d:	6a 01                	push   0x1
1008c05f:	e8 2c 53 fe ff       	call   0x10071390
1008c064:	b8 01 00 00 00       	mov    eax,0x1
1008c069:	5e                   	pop    esi
1008c06a:	c2 08 00             	ret    0x8
1008c06d:	8d 49 00             	lea    ecx,[ecx+0x0]
1008c070:	39 bf 08 10 86 bf    	cmp    DWORD PTR [edi-0x4079eff8],edi
1008c076:	08 10                	or     BYTE PTR [eax],dl
1008c078:	d3 bf 08 10 20 c0    	sar    DWORD PTR [edi-0x3fdfeff8],cl
1008c07e:	08 10                	or     BYTE PTR [eax],dl
1008c080:	8b 81 70 01 00 00    	mov    eax,DWORD PTR [ecx+0x170]
1008c086:	50                   	push   eax
1008c087:	e8 a4 00 00 00       	call   0x1008c130
1008c08c:	c2 04 00             	ret    0x4
1008c08f:	90                   	nop

*/
void EquipSelector::SetWeaponSlot() {
    // TODO: Implement SetWeaponSlot
}

