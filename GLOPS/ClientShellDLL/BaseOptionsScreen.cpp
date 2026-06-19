#include "BaseOptionsScreen.h"
#include "ILTClient.h"

extern ILTClient* g_pLTClient;

// 0x100584c0: BaseOptionsScreen::LoadSettings
/*
100584c0:	e9 7b 90 ff ff       	jmp    0x10051540
100584c5:	90                   	nop
100584c6:	90                   	nop
100584c7:	90                   	nop
100584c8:	90                   	nop
100584c9:	90                   	nop
100584ca:	90                   	nop
100584cb:	90                   	nop
100584cc:	90                   	nop
100584cd:	90                   	nop
100584ce:	90                   	nop
100584cf:	90                   	nop
100584d0:	53                   	push   ebx
100584d1:	8b d9                	mov    ebx,ecx
100584d3:	55                   	push   ebp
100584d4:	33 ed                	xor    ebp,ebp
100584d6:	8b 83 90 03 00 00    	mov    eax,DWORD PTR [ebx+0x390]
100584dc:	85 c0                	test   eax,eax
100584de:	0f 8e af 00 00 00    	jle    0x10058593
100584e4:	56                   	push   esi
100584e5:	57                   	push   edi
100584e6:	8d bb c4 01 00 00    	lea    edi,[ebx+0x1c4]
100584ec:	8b 07                	mov    eax,DWORD PTR [edi]
100584ee:	8b 8f 70 fe ff ff    	mov    ecx,DWORD PTR [edi-0x190]
100584f4:	8b 30                	mov    esi,DWORD PTR [eax]
100584f6:	83 fe 07             	cmp    esi,0x7
100584f9:	77 50                	ja     0x1005854b
100584fb:	ff 24 b5 98 85 05 10 	jmp    DWORD PTR [esi*4+0x10058598]
10058502:	8b 70 0c             	mov    esi,DWORD PTR [eax+0xc]
10058505:	33 d2                	xor    edx,edx
10058507:	85 f6                	test   esi,esi
10058509:	0f 95 c2             	setne  dl
1005850c:	52                   	push   edx
1005850d:	e8 1e 85 01 00       	call   0x10070a30
10058512:	eb 6b                	jmp    0x1005857f
10058514:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
10058517:	50                   	push   eax
10058518:	e8 13 e6 01 00       	call   0x10076b30
1005851d:	eb 60                	jmp    0x1005857f
1005851f:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
10058522:	52                   	push   edx
10058523:	e8 98 fc 01 00       	call   0x100781c0
10058528:	eb 55                	jmp    0x1005857f
1005852a:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
1005852d:	50                   	push   eax
1005852e:	e8 fd 0d 02 00       	call   0x10079330
10058533:	eb 4a                	jmp    0x1005857f
10058535:	83 c0 10             	add    eax,0x10
10058538:	50                   	push   eax
10058539:	e8 22 d6 01 00       	call   0x10075b60
1005853e:	eb 3f                	jmp    0x1005857f
10058540:	83 c0 10             	add    eax,0x10
10058543:	50                   	push   eax
10058544:	e8 27 82 01 00       	call   0x10070770
10058549:	eb 34                	jmp    0x1005857f
1005854b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10058551:	68 a4 02 00 00       	push   0x2a4
10058556:	68 58 b0 0d 10       	push   0x100db058
1005855b:	8b 11                	mov    edx,DWORD PTR [ecx]
1005855d:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
10058563:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10058568:	56                   	push   esi
10058569:	68 94 b0 0d 10       	push   0x100db094
1005856e:	68 7c 5d 0c 10       	push   0x100c5d7c
10058573:	8b 08                	mov    ecx,DWORD PTR [eax]
10058575:	50                   	push   eax
10058576:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1005857c:	83 c4 10             	add    esp,0x10
1005857f:	8b 83 90 03 00 00    	mov    eax,DWORD PTR [ebx+0x390]
10058585:	45                   	inc    ebp
10058586:	83 c7 04             	add    edi,0x4
10058589:	3b e8                	cmp    ebp,eax
1005858b:	0f 8c 5b ff ff ff    	jl     0x100584ec
10058591:	5f                   	pop    edi
10058592:	5e                   	pop    esi
10058593:	5d                   	pop    ebp
10058594:	5b                   	pop    ebx
10058595:	c3                   	ret
10058596:	8b ff                	mov    edi,edi
10058598:	02 85 05 10 14 85    	add    al,BYTE PTR [ebp-0x7aebeffb]
1005859e:	05 10 1f 85 05       	add    eax,0x5851f10
100585a3:	10 1f                	adc    BYTE PTR [edi],bl
100585a5:	85 05 10 7f 85 05    	test   DWORD PTR ds:0x5857f10,eax
100585ab:	10 2a                	adc    BYTE PTR [edx],ch
100585ad:	85 05 10 35 85 05    	test   DWORD PTR ds:0x5853510,eax
100585b3:	10 40 85             	adc    BYTE PTR [eax-0x7b],al
100585b6:	05 10 90 90 90       	add    eax,0x90909010
100585bb:	90                   	nop
100585bc:	90                   	nop
100585bd:	90                   	nop
100585be:	90                   	nop
100585bf:	90                   	nop
100585c0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100585c4:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100585c8:	55                   	push   ebp
100585c9:	56                   	push   esi
100585ca:	8b f1                	mov    esi,ecx
100585cc:	57                   	push   edi
100585cd:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
100585d1:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
100585d8:	89 06                	mov    DWORD PTR [esi],eax
100585da:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
100585dd:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
100585e0:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100585e4:	c6 46 10 00          	mov    BYTE PTR [esi+0x10],0x0
100585e8:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100585ed:	52                   	push   edx
100585ee:	50                   	push   eax
100585ef:	8b 08                	mov    ecx,DWORD PTR [eax]
100585f1:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
100585f7:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
100585fd:	83 c4 08             	add    esp,0x8
10058600:	8b f8                	mov    edi,eax
10058602:	8b 01                	mov    eax,DWORD PTR [ecx]
10058604:	57                   	push   edi
10058605:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1005860b:	8d ae 1c 01 00 00    	lea    ebp,[esi+0x11c]
10058611:	68 ff 00 00 00       	push   0xff
10058616:	50                   	push   eax
10058617:	55                   	push   ebp
10058618:	e8 03 b2 04 00       	call   0x100a3820
1005861d:	c6 85 ff 00 00 00 00 	mov    BYTE PTR [ebp+0xff],0x0
10058624:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1005862a:	83 c4 0c             	add    esp,0xc
1005862d:	8b 11                	mov    edx,DWORD PTR [ecx]
1005862f:	57                   	push   edi
10058630:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10058636:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1005863b:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1005863f:	52                   	push   edx
10058640:	50                   	push   eax
10058641:	8b 08                	mov    ecx,DWORD PTR [eax]
10058643:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10058649:	83 c4 08             	add    esp,0x8
1005864c:	89 86 18 01 00 00    	mov    DWORD PTR [esi+0x118],eax
10058652:	8b c6                	mov    eax,esi
10058654:	5f                   	pop    edi
10058655:	5e                   	pop    esi
10058656:	5d                   	pop    ebp
10058657:	c2 14 00             	ret    0x14
1005865a:	90                   	nop
1005865b:	90                   	nop
1005865c:	90                   	nop
1005865d:	90                   	nop
1005865e:	90                   	nop
1005865f:	90                   	nop
10058660:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10058664:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10058668:	56                   	push   esi
10058669:	8b f1                	mov    esi,ecx
1005866b:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1005866f:	57                   	push   edi
10058670:	89 06                	mov    DWORD PTR [esi],eax
10058672:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10058676:	8d be 1c 01 00 00    	lea    edi,[esi+0x11c]
1005867c:	68 ff 00 00 00       	push   0xff
10058681:	50                   	push   eax
10058682:	57                   	push   edi
10058683:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
1005868a:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
1005868d:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
10058690:	c6 46 10 00          	mov    BYTE PTR [esi+0x10],0x0
10058694:	e8 87 b1 04 00       	call   0x100a3820
10058699:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1005869d:	c6 87 ff 00 00 00 00 	mov    BYTE PTR [edi+0xff],0x0
100586a4:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100586a9:	52                   	push   edx
100586aa:	50                   	push   eax
100586ab:	8b 08                	mov    ecx,DWORD PTR [eax]
100586ad:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
100586b3:	83 c4 14             	add    esp,0x14
100586b6:	89 86 18 01 00 00    	mov    DWORD PTR [esi+0x118],eax
100586bc:	8b c6                	mov    eax,esi
100586be:	5f                   	pop    edi
100586bf:	5e                   	pop    esi
100586c0:	c2 14 00             	ret    0x14
100586c3:	90                   	nop
100586c4:	90                   	nop
100586c5:	90                   	nop
100586c6:	90                   	nop
100586c7:	90                   	nop
100586c8:	90                   	nop
100586c9:	90                   	nop
100586ca:	90                   	nop
100586cb:	90                   	nop
100586cc:	90                   	nop
100586cd:	90                   	nop
100586ce:	90                   	nop
100586cf:	90                   	nop
100586d0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100586d4:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100586d8:	55                   	push   ebp
100586d9:	56                   	push   esi
100586da:	8b f1                	mov    esi,ecx
100586dc:	57                   	push   edi
100586dd:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
100586e1:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
100586e8:	89 06                	mov    DWORD PTR [esi],eax
100586ea:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
100586ed:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
100586f0:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100586f4:	c6 46 10 00          	mov    BYTE PTR [esi+0x10],0x0
100586f8:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100586fd:	52                   	push   edx
100586fe:	50                   	push   eax
100586ff:	8b 08                	mov    ecx,DWORD PTR [eax]
10058701:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10058707:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1005870d:	83 c4 08             	add    esp,0x8
10058710:	8b f8                	mov    edi,eax
10058712:	8b 01                	mov    eax,DWORD PTR [ecx]
10058714:	57                   	push   edi
10058715:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
1005871b:	8d ae 1c 01 00 00    	lea    ebp,[esi+0x11c]
10058721:	68 ff 00 00 00       	push   0xff
10058726:	50                   	push   eax
10058727:	55                   	push   ebp
10058728:	e8 f3 b0 04 00       	call   0x100a3820
1005872d:	c6 85 ff 00 00 00 00 	mov    BYTE PTR [ebp+0xff],0x0
10058734:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1005873a:	83 c4 0c             	add    esp,0xc
1005873d:	8b 11                	mov    edx,DWORD PTR [ecx]
1005873f:	57                   	push   edi
10058740:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
10058746:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1005874c:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10058750:	52                   	push   edx
10058751:	8b 01                	mov    eax,DWORD PTR [ecx]
10058753:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
10058759:	89 86 18 01 00 00    	mov    DWORD PTR [esi+0x118],eax
1005875f:	8b c6                	mov    eax,esi
10058761:	5f                   	pop    edi
10058762:	5e                   	pop    esi
10058763:	5d                   	pop    ebp
10058764:	c2 14 00             	ret    0x14
10058767:	90                   	nop
10058768:	90                   	nop
10058769:	90                   	nop
1005876a:	90                   	nop
1005876b:	90                   	nop
1005876c:	90                   	nop
1005876d:	90                   	nop
1005876e:	90                   	nop
1005876f:	90                   	nop
10058770:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10058774:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10058778:	56                   	push   esi
10058779:	8b f1                	mov    esi,ecx
1005877b:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1005877f:	57                   	push   edi
10058780:	89 06                	mov    DWORD PTR [esi],eax
10058782:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10058786:	8d be 1c 01 00 00    	lea    edi,[esi+0x11c]
1005878c:	68 ff 00 00 00       	push   0xff
10058791:	50                   	push   eax
10058792:	57                   	push   edi
10058793:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
1005879a:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
1005879d:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
100587a0:	c6 46 10 00          	mov    BYTE PTR [esi+0x10],0x0
100587a4:	e8 77 b0 04 00       	call   0x100a3820
100587a9:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100587ad:	c6 87 ff 00 00 00 00 	mov    BYTE PTR [edi+0xff],0x0
100587b4:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100587ba:	83 c4 0c             	add    esp,0xc
100587bd:	8b 11                	mov    edx,DWORD PTR [ecx]
100587bf:	50                   	push   eax
100587c0:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
100587c6:	89 86 18 01 00 00    	mov    DWORD PTR [esi+0x118],eax
100587cc:	8b c6                	mov    eax,esi
100587ce:	5f                   	pop    edi
100587cf:	5e                   	pop    esi
100587d0:	c2 14 00             	ret    0x14
100587d3:	90                   	nop
100587d4:	90                   	nop
100587d5:	90                   	nop
100587d6:	90                   	nop
100587d7:	90                   	nop
100587d8:	90                   	nop
100587d9:	90                   	nop
100587da:	90                   	nop
100587db:	90                   	nop
100587dc:	90                   	nop
100587dd:	90                   	nop
100587de:	90                   	nop
100587df:	90                   	nop
100587e0:	8b 81 18 01 00 00    	mov    eax,DWORD PTR [ecx+0x118]
100587e6:	85 c0                	test   eax,eax
100587e8:	74 0f                	je     0x100587f9
100587ea:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100587f0:	50                   	push   eax
100587f1:	8b 11                	mov    edx,DWORD PTR [ecx]
100587f3:	ff 92 c0 00 00 00    	call   DWORD PTR [edx+0xc0]
100587f9:	c3                   	ret
100587fa:	90                   	nop
100587fb:	90                   	nop
100587fc:	90                   	nop
100587fd:	90                   	nop
100587fe:	90                   	nop
100587ff:	90                   	nop
10058800:	83 ec 28             	sub    esp,0x28
10058803:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
10058807:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1005880d:	53                   	push   ebx
1005880e:	56                   	push   esi
1005880f:	8d 44 24 0c          	lea    eax,[esp+0xc]
10058813:	57                   	push   edi
10058814:	50                   	push   eax
10058815:	51                   	push   ecx
10058816:	ff 92 f0 02 00 00    	call   DWORD PTR [edx+0x2f0]
1005881c:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
10058820:	d8 25 ac 88 0b 10    	fsub   DWORD PTR ds:0x100b88ac
10058826:	8d 44 24 40          	lea    eax,[esp+0x40]
1005882a:	8d 4c 24 24          	lea    ecx,[esp+0x24]
1005882e:	50                   	push   eax
1005882f:	8d 54 24 34          	lea    edx,[esp+0x34]
10058833:	51                   	push   ecx
10058834:	52                   	push   edx
10058835:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
10058839:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1005883d:	d8 25 08 85 0b 10    	fsub   DWORD PTR ds:0x100b8508
10058843:	33 ff                	xor    edi,edi
10058845:	33 db                	xor    ebx,ebx
10058847:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
1005884b:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
1005884f:	d8 25 ac 88 0b 10    	fsub   DWORD PTR ds:0x100b88ac
10058855:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
10058859:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1005885d:	d8 05 ac 88 0b 10    	fadd   DWORD PTR ds:0x100b88ac
10058863:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
10058867:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1005886b:	d8 05 08 85 0b 10    	fadd   DWORD PTR ds:0x100b8508
10058871:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
10058875:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
10058879:	d8 05 ac 88 0b 10    	fadd   DWORD PTR ds:0x100b88ac
1005887f:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
10058883:	e8 78 88 fb ff       	call   0x10011100
10058888:	8b f0                	mov    esi,eax
1005888a:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
1005888e:	83 c4 14             	add    esp,0x14
10058891:	85 c0                	test   eax,eax
10058893:	74 4b                	je     0x100588e0
10058895:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1005889b:	8d 54 24 0c          	lea    edx,[esp+0xc]
1005889f:	52                   	push   edx
100588a0:	8b 16                	mov    edx,DWORD PTR [esi]
100588a2:	8b 01                	mov    eax,DWORD PTR [ecx]
100588a4:	52                   	push   edx
100588a5:	ff 90 ac 00 00 00    	call   DWORD PTR [eax+0xac]
100588ab:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
100588af:	b8 01 00 00 00       	mov    eax,0x1
100588b4:	81 e1 ff ff 00 00    	and    ecx,0xffff
100588ba:	d3 e0                	shl    eax,cl
100588bc:	0b f8                	or     edi,eax
100588be:	83 e9 02             	sub    ecx,0x2
100588c1:	75 0d                	jne    0x100588d0
100588c3:	8b 0e                	mov    ecx,DWORD PTR [esi]
100588c5:	51                   	push   ecx
100588c6:	e8 15 88 fb ff       	call   0x100110e0
100588cb:	83 c4 04             	add    esp,0x4
100588ce:	8b d8                	mov    ebx,eax
100588d0:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
100588d4:	83 c6 04             	add    esi,0x4
100588d7:	48                   	dec    eax
100588d8:	85 c0                	test   eax,eax
100588da:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
100588de:	75 b5                	jne    0x10058895
100588e0:	5f                   	pop    edi
100588e1:	8b c3                	mov    eax,ebx
100588e3:	5e                   	pop    esi
100588e4:	5b                   	pop    ebx
100588e5:	83 c4 28             	add    esp,0x28
100588e8:	c3                   	ret
100588e9:	90                   	nop
100588ea:	90                   	nop
100588eb:	90                   	nop
100588ec:	90                   	nop
100588ed:	90                   	nop
100588ee:	90                   	nop
100588ef:	90                   	nop

*/
void BaseOptionsScreen::LoadSettings() {
    if ((int)m_nNumControls <= 0) return;
    
    for (uint32 i = 0; i < m_nNumControls; ++i) {
        OptionControl* pControl = m_apControls[i];
        if (!pControl) continue;
        
        switch (pControl->m_nType) {
            case 0:
                // Checkbox toggle control
                // e.g. SetOptionState(pControl->m_nValue != 0);
                break;
            case 1:
                // Slider increment control
                // e.g. SetOptionValue(pControl->m_nValue);
                break;
            case 2:
                // Dropdown selector control
                // e.g. SetOptionSelection(pControl->m_nValue);
                break;
            case 3:
                break;
            case 4:
                // Text-name based item load
                break;
            case 5:
                // Text-name based item load
                break;
            default:
                g_pLTClient->CPrint("BaseOptionsScreen::LoadSettings: Unhandled item type (%i)", pControl->m_nType);
                break;
        }
    }
}

