#include "TabFolder.h"

// 0x100732e0: TabFolder::AddPage
/*
100732e0:	83 ec 10             	sub    esp,0x10
100732e3:	56                   	push   esi
100732e4:	8b f1                	mov    esi,ecx
100732e6:	57                   	push   edi
100732e7:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
100732ea:	8b 01                	mov    eax,DWORD PTR [ecx]
100732ec:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
100732f2:	83 f8 08             	cmp    eax,0x8
100732f5:	7c 4d                	jl     0x10073344
100732f7:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100732fd:	68 11 0a 00 00       	push   0xa11
10073302:	68 f8 d6 0d 10       	push   0x100dd6f8
10073307:	8b 11                	mov    edx,DWORD PTR [ecx]
10073309:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1007330f:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10073314:	6a 08                	push   0x8
10073316:	68 8c d7 0d 10       	push   0x100dd78c
1007331b:	68 7c 5d 0c 10       	push   0x100c5d7c
10073320:	8b 08                	mov    ecx,DWORD PTR [eax]
10073322:	50                   	push   eax
10073323:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
10073329:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
1007332d:	83 c4 10             	add    esp,0x10
10073330:	85 c9                	test   ecx,ecx
10073332:	74 06                	je     0x1007333a
10073334:	8b 11                	mov    edx,DWORD PTR [ecx]
10073336:	6a 01                	push   0x1
10073338:	ff 12                	call   DWORD PTR [edx]
1007333a:	5f                   	pop    edi
1007333b:	33 c0                	xor    eax,eax
1007333d:	5e                   	pop    esi
1007333e:	83 c4 10             	add    esp,0x10
10073341:	c2 0c 00             	ret    0xc
10073344:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
10073347:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
1007334b:	89 3c 81             	mov    DWORD PTR [ecx+eax*4],edi
1007334e:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10073352:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10073355:	50                   	push   eax
10073356:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1007335a:	8b 11                	mov    edx,DWORD PTR [ecx]
1007335c:	50                   	push   eax
1007335d:	ff 52 74             	call   DWORD PTR [edx+0x74]
10073360:	85 c0                	test   eax,eax
10073362:	74 3e                	je     0x100733a2
10073364:	8b ce                	mov    ecx,esi
10073366:	e8 b5 fd ff ff       	call   0x10073120
1007336b:	83 c6 3c             	add    esi,0x3c
1007336e:	8b 06                	mov    eax,DWORD PTR [esi]
10073370:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
10073374:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10073377:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
1007337b:	8d 4c 24 08          	lea    ecx,[esp+0x8]
1007337f:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10073382:	51                   	push   ecx
10073383:	8b cf                	mov    ecx,edi
10073385:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
10073389:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
1007338c:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10073390:	e8 bb b2 ff ff       	call   0x1006e650
10073395:	5f                   	pop    edi
10073396:	b8 01 00 00 00       	mov    eax,0x1
1007339b:	5e                   	pop    esi
1007339c:	83 c4 10             	add    esp,0x10
1007339f:	c2 0c 00             	ret    0xc
100733a2:	85 ff                	test   edi,edi
100733a4:	74 08                	je     0x100733ae
100733a6:	8b 17                	mov    edx,DWORD PTR [edi]
100733a8:	6a 01                	push   0x1
100733aa:	8b cf                	mov    ecx,edi
100733ac:	ff 12                	call   DWORD PTR [edx]
100733ae:	5f                   	pop    edi
100733af:	33 c0                	xor    eax,eax
100733b1:	5e                   	pop    esi
100733b2:	83 c4 10             	add    esp,0x10
100733b5:	c2 0c 00             	ret    0xc
100733b8:	90                   	nop
100733b9:	90                   	nop
100733ba:	90                   	nop
100733bb:	90                   	nop
100733bc:	90                   	nop
100733bd:	90                   	nop
100733be:	90                   	nop
100733bf:	90                   	nop
100733c0:	83 ec 10             	sub    esp,0x10
100733c3:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100733c7:	53                   	push   ebx
100733c8:	56                   	push   esi
100733c9:	57                   	push   edi
100733ca:	8b f1                	mov    esi,ecx
100733cc:	50                   	push   eax
100733cd:	e8 3e fb ff ff       	call   0x10072f10
100733d2:	8d 4e 3c             	lea    ecx,[esi+0x3c]
100733d5:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
100733d8:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
100733dc:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100733df:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100733e3:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
100733e6:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
100733ea:	8b 41 0c             	mov    eax,DWORD PTR [ecx+0xc]
100733ed:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
100733f0:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
100733f4:	8b 11                	mov    edx,DWORD PTR [ecx]
100733f6:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
100733fc:	8b d8                	mov    ebx,eax
100733fe:	33 ff                	xor    edi,edi
10073400:	85 db                	test   ebx,ebx
10073402:	7e 15                	jle    0x10073419
10073404:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
10073407:	8d 44 24 0c          	lea    eax,[esp+0xc]
1007340b:	50                   	push   eax
1007340c:	8b 0c b9             	mov    ecx,DWORD PTR [ecx+edi*4]
1007340f:	e8 3c b2 ff ff       	call   0x1006e650
10073414:	47                   	inc    edi
10073415:	3b fb                	cmp    edi,ebx
10073417:	7c eb                	jl     0x10073404
10073419:	5f                   	pop    edi
1007341a:	5e                   	pop    esi
1007341b:	5b                   	pop    ebx
1007341c:	83 c4 10             	add    esp,0x10
1007341f:	c2 04 00             	ret    0x4
10073422:	90                   	nop
10073423:	90                   	nop
10073424:	90                   	nop
10073425:	90                   	nop
10073426:	90                   	nop
10073427:	90                   	nop
10073428:	90                   	nop
10073429:	90                   	nop
1007342a:	90                   	nop
1007342b:	90                   	nop
1007342c:	90                   	nop
1007342d:	90                   	nop
1007342e:	90                   	nop
1007342f:	90                   	nop
10073430:	53                   	push   ebx
10073431:	55                   	push   ebp
10073432:	8b 6c 24 0c          	mov    ebp,DWORD PTR [esp+0xc]
10073436:	56                   	push   esi
10073437:	8b f1                	mov    esi,ecx
10073439:	57                   	push   edi
1007343a:	55                   	push   ebp
1007343b:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
1007343e:	8b 01                	mov    eax,DWORD PTR [ecx]
10073440:	ff 90 88 00 00 00    	call   DWORD PTR [eax+0x88]
10073446:	8b d8                	mov    ebx,eax
10073448:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
1007344b:	83 f8 ff             	cmp    eax,0xffffffff
1007344e:	74 3e                	je     0x1007348e
10073450:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10073453:	50                   	push   eax
10073454:	8b 11                	mov    edx,DWORD PTR [ecx]
10073456:	ff 92 88 00 00 00    	call   DWORD PTR [edx+0x88]
1007345c:	8b f8                	mov    edi,eax
1007345e:	83 ff ff             	cmp    edi,0xffffffff
10073461:	74 2b                	je     0x1007348e
10073463:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
10073466:	8b 0c b8             	mov    ecx,DWORD PTR [eax+edi*4]
10073469:	e8 12 b5 ff ff       	call   0x1006e980
1007346e:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10073474:	e8 b7 86 fc ff       	call   0x1003bb30
10073479:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
1007347c:	3b 04 b9             	cmp    eax,DWORD PTR [ecx+edi*4]
1007347f:	75 0d                	jne    0x1007348e
10073481:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10073487:	6a 00                	push   0x0
10073489:	e8 72 bd ff ff       	call   0x1006f200
1007348e:	83 fb ff             	cmp    ebx,0xffffffff
10073491:	74 1d                	je     0x100734b0
10073493:	8b 56 60             	mov    edx,DWORD PTR [esi+0x60]
10073496:	8b 0c 9a             	mov    ecx,DWORD PTR [edx+ebx*4]
10073499:	e8 82 b5 ff ff       	call   0x1006ea20
1007349e:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
100734a1:	8b 0c 98             	mov    ecx,DWORD PTR [eax+ebx*4]
100734a4:	51                   	push   ecx
100734a5:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100734ab:	e8 50 bd ff ff       	call   0x1006f200
100734b0:	89 6e 5c             	mov    DWORD PTR [esi+0x5c],ebp
100734b3:	5f                   	pop    edi
100734b4:	5e                   	pop    esi
100734b5:	5d                   	pop    ebp
100734b6:	5b                   	pop    ebx
100734b7:	c2 04 00             	ret    0x4
100734ba:	90                   	nop
100734bb:	90                   	nop
100734bc:	90                   	nop
100734bd:	90                   	nop
100734be:	90                   	nop
100734bf:	90                   	nop

*/
void TabFolder::AddPage(void* pPage) {
    // Basic AddPage implementation
    if (pPage) {
        // Add to internal page array
    }
}

// 0x100734c0: TabFolder::AddTab
/*
100734c0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100734c6:	68 6d 0a 00 00       	push   0xa6d
100734cb:	68 f8 d6 0d 10       	push   0x100dd6f8
100734d0:	8b 01                	mov    eax,DWORD PTR [ecx]
100734d2:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
100734d8:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100734dd:	68 c8 d7 0d 10       	push   0x100dd7c8
100734e2:	68 7c 5d 0c 10       	push   0x100c5d7c
100734e7:	50                   	push   eax
100734e8:	8b 08                	mov    ecx,DWORD PTR [eax]
100734ea:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
100734f0:	83 c4 0c             	add    esp,0xc
100734f3:	33 c0                	xor    eax,eax
100734f5:	c2 08 00             	ret    0x8
100734f8:	90                   	nop
100734f9:	90                   	nop
100734fa:	90                   	nop
100734fb:	90                   	nop
100734fc:	90                   	nop
100734fd:	90                   	nop
100734fe:	90                   	nop
100734ff:	90                   	nop
10073500:	6a ff                	push   0xffffffff
10073502:	68 28 63 0b 10       	push   0x100b6328
10073507:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1007350d:	50                   	push   eax
1007350e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10073515:	51                   	push   ecx
10073516:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1007351a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1007351e:	56                   	push   esi
1007351f:	8b f1                	mov    esi,ecx
10073521:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10073525:	50                   	push   eax
10073526:	51                   	push   ecx
10073527:	52                   	push   edx
10073528:	8b ce                	mov    ecx,esi
1007352a:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
1007352e:	e8 4d ae ff ff       	call   0x1006e380
10073533:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10073537:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1007353b:	50                   	push   eax
1007353c:	51                   	push   ecx
1007353d:	8d 4e 2c             	lea    ecx,[esi+0x2c]
10073540:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
10073547:	00 
10073548:	e8 b3 59 fd ff       	call   0x10048f00
1007354d:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10073551:	c7 06 48 c1 0b 10    	mov    DWORD PTR [esi],0x100bc148
10073557:	8b c6                	mov    eax,esi
10073559:	5e                   	pop    esi
1007355a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10073561:	83 c4 10             	add    esp,0x10
10073564:	c2 14 00             	ret    0x14
10073567:	90                   	nop
10073568:	90                   	nop
10073569:	90                   	nop
1007356a:	90                   	nop
1007356b:	90                   	nop
1007356c:	90                   	nop
1007356d:	90                   	nop
1007356e:	90                   	nop
1007356f:	90                   	nop
10073570:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10073574:	8d 41 2c             	lea    eax,[ecx+0x2c]
10073577:	52                   	push   edx
10073578:	50                   	push   eax
10073579:	8b 08                	mov    ecx,DWORD PTR [eax]
1007357b:	ff 14 8d 20 a0 0d 10 	call   DWORD PTR [ecx*4+0x100da020]
10073582:	83 c4 08             	add    esp,0x8
10073585:	c2 08 00             	ret    0x8
10073588:	90                   	nop
10073589:	90                   	nop
1007358a:	90                   	nop
1007358b:	90                   	nop
1007358c:	90                   	nop
1007358d:	90                   	nop
1007358e:	90                   	nop
1007358f:	90                   	nop
10073590:	6a ff                	push   0xffffffff
10073592:	68 50 63 0b 10       	push   0x100b6350
10073597:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1007359d:	50                   	push   eax
1007359e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100735a5:	51                   	push   ecx
100735a6:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100735aa:	53                   	push   ebx
100735ab:	55                   	push   ebp
100735ac:	8b 6c 24 28          	mov    ebp,DWORD PTR [esp+0x28]
100735b0:	56                   	push   esi
100735b1:	57                   	push   edi
100735b2:	33 db                	xor    ebx,ebx
100735b4:	55                   	push   ebp
100735b5:	8b f1                	mov    esi,ecx
100735b7:	53                   	push   ebx
100735b8:	50                   	push   eax
100735b9:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
100735bd:	e8 be ad ff ff       	call   0x1006e380
100735c2:	8d 7e 2c             	lea    edi,[esi+0x2c]
100735c5:	6a 01                	push   0x1
100735c7:	6a 02                	push   0x2
100735c9:	8b cf                	mov    ecx,edi
100735cb:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
100735cf:	e8 2c 59 fd ff       	call   0x10048f00
100735d4:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
100735d8:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
100735dc:	3b c3                	cmp    eax,ebx
100735de:	c7 44 24 1c 01 00 00 	mov    DWORD PTR [esp+0x1c],0x1
100735e5:	00 
100735e6:	c7 06 b8 c1 0b 10    	mov    DWORD PTR [esi],0x100bc1b8
100735ec:	89 4e 34             	mov    DWORD PTR [esi+0x34],ecx
100735ef:	89 9e e8 00 00 00    	mov    DWORD PTR [esi+0xe8],ebx
100735f5:	89 9e ec 00 00 00    	mov    DWORD PTR [esi+0xec],ebx
100735fb:	75 05                	jne    0x10073602
100735fd:	b8 00 d0 10 10       	mov    eax,0x1010d000
10073602:	8d 5e 38             	lea    ebx,[esi+0x38]
10073605:	6a 7f                	push   0x7f
10073607:	50                   	push   eax
10073608:	53                   	push   ebx
10073609:	e8 12 02 03 00       	call   0x100a3820
1007360e:	83 c4 0c             	add    esp,0xc
10073611:	c6 43 7f 00          	mov    BYTE PTR [ebx+0x7f],0x0
10073615:	85 ed                	test   ebp,ebp
10073617:	0f 84 83 00 00 00    	je     0x100736a0
1007361d:	8b 17                	mov    edx,DWORD PTR [edi]
1007361f:	8d 9e b8 00 00 00    	lea    ebx,[esi+0xb8]
10073625:	53                   	push   ebx
10073626:	55                   	push   ebp
10073627:	57                   	push   edi
10073628:	ff 14 95 2c a0 0d 10 	call   DWORD PTR [edx*4+0x100da02c]
1007362f:	8b 03                	mov    eax,DWORD PTR [ebx]
10073631:	8b 8e bc 00 00 00    	mov    ecx,DWORD PTR [esi+0xbc]
10073637:	8b 96 c0 00 00 00    	mov    edx,DWORD PTR [esi+0xc0]
1007363d:	89 86 c8 00 00 00    	mov    DWORD PTR [esi+0xc8],eax
10073643:	89 8e cc 00 00 00    	mov    DWORD PTR [esi+0xcc],ecx
10073649:	89 96 d0 00 00 00    	mov    DWORD PTR [esi+0xd0],edx
1007364f:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10073655:	83 c4 0c             	add    esp,0xc
10073658:	e8 13 9c fd ff       	call   0x1004d270
1007365d:	83 c0 03             	add    eax,0x3
10073660:	89 86 d4 00 00 00    	mov    DWORD PTR [esi+0xd4],eax
10073666:	8b 8e c8 00 00 00    	mov    ecx,DWORD PTR [esi+0xc8]
1007366c:	8b 96 cc 00 00 00    	mov    edx,DWORD PTR [esi+0xcc]
10073672:	8d 86 d8 00 00 00    	lea    eax,[esi+0xd8]
10073678:	89 8e d8 00 00 00    	mov    DWORD PTR [esi+0xd8],ecx
1007367e:	8b 8e d0 00 00 00    	mov    ecx,DWORD PTR [esi+0xd0]
10073684:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
10073687:	8b 96 d4 00 00 00    	mov    edx,DWORD PTR [esi+0xd4]
1007368d:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
10073690:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
10073693:	8b 86 e4 00 00 00    	mov    eax,DWORD PTR [esi+0xe4]
10073699:	48                   	dec    eax
1007369a:	89 86 e4 00 00 00    	mov    DWORD PTR [esi+0xe4],eax
100736a0:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
100736a4:	8b c6                	mov    eax,esi
100736a6:	5f                   	pop    edi
100736a7:	5e                   	pop    esi
100736a8:	5d                   	pop    ebp
100736a9:	5b                   	pop    ebx
100736aa:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100736b1:	83 c4 10             	add    esp,0x10
100736b4:	c2 10 00             	ret    0x10
100736b7:	90                   	nop
100736b8:	90                   	nop
100736b9:	90                   	nop
100736ba:	90                   	nop
100736bb:	90                   	nop
100736bc:	90                   	nop
100736bd:	90                   	nop
100736be:	90                   	nop
100736bf:	90                   	nop
100736c0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100736c4:	85 c0                	test   eax,eax
100736c6:	75 05                	jne    0x100736cd
100736c8:	b8 00 d0 10 10       	mov    eax,0x1010d000
100736cd:	56                   	push   esi
100736ce:	8d 71 38             	lea    esi,[ecx+0x38]
100736d1:	6a 7f                	push   0x7f
100736d3:	50                   	push   eax
100736d4:	56                   	push   esi
100736d5:	e8 46 01 03 00       	call   0x100a3820
100736da:	83 c4 0c             	add    esp,0xc
100736dd:	c6 46 7f 00          	mov    BYTE PTR [esi+0x7f],0x0
100736e1:	5e                   	pop    esi
100736e2:	c2 04 00             	ret    0x4
100736e5:	90                   	nop
100736e6:	90                   	nop
100736e7:	90                   	nop
100736e8:	90                   	nop
100736e9:	90                   	nop
100736ea:	90                   	nop
100736eb:	90                   	nop
100736ec:	90                   	nop
100736ed:	90                   	nop
100736ee:	90                   	nop
100736ef:	90                   	nop
100736f0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
100736f4:	8b 91 c0 00 00 00    	mov    edx,DWORD PTR [ecx+0xc0]
100736fa:	56                   	push   esi
100736fb:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
100736fe:	8b 91 c4 00 00 00    	mov    edx,DWORD PTR [ecx+0xc4]
10073704:	2b 91 d4 00 00 00    	sub    edx,DWORD PTR [ecx+0xd4]
1007370a:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
1007370d:	8b 91 b8 00 00 00    	mov    edx,DWORD PTR [ecx+0xb8]
10073713:	89 10                	mov    DWORD PTR [eax],edx
10073715:	8b 91 bc 00 00 00    	mov    edx,DWORD PTR [ecx+0xbc]
1007371b:	8b b1 d4 00 00 00    	mov    esi,DWORD PTR [ecx+0xd4]
10073721:	03 d6                	add    edx,esi
10073723:	5e                   	pop    esi
10073724:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
10073727:	c2 08 00             	ret    0x8
1007372a:	90                   	nop
1007372b:	90                   	nop
1007372c:	90                   	nop
1007372d:	90                   	nop
1007372e:	90                   	nop
1007372f:	90                   	nop
10073730:	56                   	push   esi
10073731:	8b f1                	mov    esi,ecx
10073733:	8b 06                	mov    eax,DWORD PTR [esi]
10073735:	ff 50 70             	call   DWORD PTR [eax+0x70]
10073738:	6a 00                	push   0x0
1007373a:	6a 07                	push   0x7
1007373c:	8b ce                	mov    ecx,esi
1007373e:	e8 3d b0 ff ff       	call   0x1006e780
10073743:	8b ce                	mov    ecx,esi
10073745:	e8 66 b3 ff ff       	call   0x1006eab0
1007374a:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10073750:	e8 db 83 fc ff       	call   0x1003bb30
10073755:	89 86 e8 00 00 00    	mov    DWORD PTR [esi+0xe8],eax
1007375b:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10073761:	e8 fa ba ff ff       	call   0x1006f260
10073766:	89 86 ec 00 00 00    	mov    DWORD PTR [esi+0xec],eax
1007376c:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10073772:	56                   	push   esi
10073773:	e8 c8 ba ff ff       	call   0x1006f240
10073778:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1007377e:	56                   	push   esi
1007377f:	e8 7c ba ff ff       	call   0x1006f200
10073784:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1007378a:	e8 81 bc ff ff       	call   0x1006f410
1007378f:	8b 16                	mov    edx,DWORD PTR [esi]
10073791:	8b ce                	mov    ecx,esi
10073793:	ff 52 78             	call   DWORD PTR [edx+0x78]
10073796:	5e                   	pop    esi
10073797:	c3                   	ret
10073798:	90                   	nop
10073799:	90                   	nop
1007379a:	90                   	nop
1007379b:	90                   	nop
1007379c:	90                   	nop
1007379d:	90                   	nop
1007379e:	90                   	nop
1007379f:	90                   	nop
100737a0:	56                   	push   esi
100737a1:	57                   	push   edi
100737a2:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
100737a6:	8b f1                	mov    esi,ecx
100737a8:	85 ff                	test   edi,edi
100737aa:	75 13                	jne    0x100737bf
100737ac:	6a 18                	push   0x18
100737ae:	e8 8d 9a fc ff       	call   0x1003d240
100737b3:	8b 06                	mov    eax,DWORD PTR [esi]
100737b5:	83 c4 04             	add    esp,0x4
100737b8:	8b ce                	mov    ecx,esi
100737ba:	ff 50 7c             	call   DWORD PTR [eax+0x7c]
100737bd:	eb 0a                	jmp    0x100737c9
100737bf:	6a 19                	push   0x19
100737c1:	e8 7a 9a fc ff       	call   0x1003d240
100737c6:	83 c4 04             	add    esp,0x4
100737c9:	6a 07                	push   0x7
100737cb:	6a 00                	push   0x0
100737cd:	8b ce                	mov    ecx,esi
100737cf:	e8 ac af ff ff       	call   0x1006e780
100737d4:	8b 8e ec 00 00 00    	mov    ecx,DWORD PTR [esi+0xec]
100737da:	51                   	push   ecx
100737db:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100737e1:	e8 5a ba ff ff       	call   0x1006f240
100737e6:	8b 96 e8 00 00 00    	mov    edx,DWORD PTR [esi+0xe8]
100737ec:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100737f2:	52                   	push   edx
100737f3:	e8 08 ba ff ff       	call   0x1006f200
100737f8:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
100737fb:	57                   	push   edi
100737fc:	50                   	push   eax
100737fd:	8b ce                	mov    ecx,esi
100737ff:	e8 1c b1 ff ff       	call   0x1006e920
10073804:	5f                   	pop    edi
10073805:	5e                   	pop    esi
10073806:	c2 04 00             	ret    0x4
10073809:	90                   	nop
1007380a:	90                   	nop
1007380b:	90                   	nop
1007380c:	90                   	nop
1007380d:	90                   	nop
1007380e:	90                   	nop
1007380f:	90                   	nop
10073810:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10073814:	c2 04 00             	ret    0x4
10073817:	90                   	nop
10073818:	90                   	nop
10073819:	90                   	nop
1007381a:	90                   	nop
1007381b:	90                   	nop
1007381c:	90                   	nop
1007381d:	90                   	nop
1007381e:	90                   	nop
1007381f:	90                   	nop
10073820:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10073824:	56                   	push   esi
10073825:	8b f1                	mov    esi,ecx
10073827:	57                   	push   edi
10073828:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
1007382b:	8d 46 2c             	lea    eax,[esi+0x2c]
1007382e:	8d be b8 00 00 00    	lea    edi,[esi+0xb8]
10073834:	57                   	push   edi
10073835:	52                   	push   edx
10073836:	50                   	push   eax
10073837:	ff 14 8d 2c a0 0d 10 	call   DWORD PTR [ecx*4+0x100da02c]
1007383e:	8b 07                	mov    eax,DWORD PTR [edi]
10073840:	8b 8e bc 00 00 00    	mov    ecx,DWORD PTR [esi+0xbc]
10073846:	8b 96 c0 00 00 00    	mov    edx,DWORD PTR [esi+0xc0]
1007384c:	89 86 c8 00 00 00    	mov    DWORD PTR [esi+0xc8],eax
10073852:	89 8e cc 00 00 00    	mov    DWORD PTR [esi+0xcc],ecx
10073858:	89 96 d0 00 00 00    	mov    DWORD PTR [esi+0xd0],edx
1007385e:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10073864:	83 c4 0c             	add    esp,0xc
10073867:	e8 04 9a fd ff       	call   0x1004d270
1007386c:	83 c0 03             	add    eax,0x3
1007386f:	5f                   	pop    edi
10073870:	89 86 d4 00 00 00    	mov    DWORD PTR [esi+0xd4],eax
10073876:	8b 8e c8 00 00 00    	mov    ecx,DWORD PTR [esi+0xc8]
1007387c:	8b 96 cc 00 00 00    	mov    edx,DWORD PTR [esi+0xcc]
10073882:	8d 86 d8 00 00 00    	lea    eax,[esi+0xd8]
10073888:	89 8e d8 00 00 00    	mov    DWORD PTR [esi+0xd8],ecx
1007388e:	8b 8e d0 00 00 00    	mov    ecx,DWORD PTR [esi+0xd0]
10073894:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
10073897:	8b 96 d4 00 00 00    	mov    edx,DWORD PTR [esi+0xd4]
1007389d:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
100738a0:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
100738a3:	8b 86 e4 00 00 00    	mov    eax,DWORD PTR [esi+0xe4]
100738a9:	48                   	dec    eax
100738aa:	89 86 e4 00 00 00    	mov    DWORD PTR [esi+0xe4],eax
100738b0:	5e                   	pop    esi
100738b1:	c2 04 00             	ret    0x4
100738b4:	90                   	nop
100738b5:	90                   	nop
100738b6:	90                   	nop
100738b7:	90                   	nop
100738b8:	90                   	nop
100738b9:	90                   	nop
100738ba:	90                   	nop
100738bb:	90                   	nop
100738bc:	90                   	nop
100738bd:	90                   	nop
100738be:	90                   	nop
100738bf:	90                   	nop
100738c0:	a1 54 be 11 10       	mov    eax,ds:0x1011be54
100738c5:	53                   	push   ebx
100738c6:	56                   	push   esi
100738c7:	57                   	push   edi
100738c8:	8b f1                	mov    esi,ecx
100738ca:	68 00 00 00 70       	push   0x70000000
100738cf:	8b 0d 58 be 11 10    	mov    ecx,DWORD PTR ds:0x1011be58
100738d5:	6a 00                	push   0x0
100738d7:	50                   	push   eax
100738d8:	51                   	push   ecx
100738d9:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100738df:	6a 00                	push   0x0
100738e1:	6a 00                	push   0x0
100738e3:	e8 88 5c fd ff       	call   0x10049570
100738e8:	8b 96 d4 00 00 00    	mov    edx,DWORD PTR [esi+0xd4]
100738ee:	8b 86 c4 00 00 00    	mov    eax,DWORD PTR [esi+0xc4]
100738f4:	8b 8e bc 00 00 00    	mov    ecx,DWORD PTR [esi+0xbc]
100738fa:	8b be c0 00 00 00    	mov    edi,DWORD PTR [esi+0xc0]
10073900:	8b 9e b8 00 00 00    	mov    ebx,DWORD PTR [esi+0xb8]
10073906:	2b c2                	sub    eax,edx
10073908:	68 73 4b 18 ff       	push   0xff184b73
1007390d:	6a 00                	push   0x0
1007390f:	03 ca                	add    ecx,edx
10073911:	50                   	push   eax
10073912:	57                   	push   edi
10073913:	51                   	push   ecx
10073914:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1007391a:	53                   	push   ebx
1007391b:	e8 50 5c fd ff       	call   0x10049570
10073920:	8b 96 e4 00 00 00    	mov    edx,DWORD PTR [esi+0xe4]
10073926:	8b 86 e0 00 00 00    	mov    eax,DWORD PTR [esi+0xe0]
1007392c:	8b 8e dc 00 00 00    	mov    ecx,DWORD PTR [esi+0xdc]
10073932:	68 a8 7b 3a ff       	push   0xff3a7ba8
10073937:	6a 00                	push   0x0
10073939:	52                   	push   edx
1007393a:	8b 96 d8 00 00 00    	mov    edx,DWORD PTR [esi+0xd8]
10073940:	50                   	push   eax
10073941:	51                   	push   ecx
10073942:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10073948:	52                   	push   edx
10073949:	e8 22 5c fd ff       	call   0x10049570
1007394e:	8b 86 e4 00 00 00    	mov    eax,DWORD PTR [esi+0xe4]
10073954:	8b 8e e0 00 00 00    	mov    ecx,DWORD PTR [esi+0xe0]
1007395a:	8b 96 dc 00 00 00    	mov    edx,DWORD PTR [esi+0xdc]
10073960:	6a 05                	push   0x5
10073962:	6a ff                	push   0xffffffff
10073964:	50                   	push   eax
10073965:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
1007396b:	51                   	push   ecx
1007396c:	52                   	push   edx
1007396d:	8b 15 f0 b6 0d 10    	mov    edx,DWORD PTR ds:0x100db6f0
10073973:	8d 4e 38             	lea    ecx,[esi+0x38]
10073976:	50                   	push   eax
10073977:	51                   	push   ecx
10073978:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1007397e:	52                   	push   edx
1007397f:	e8 7c 67 fd ff       	call   0x1004a100
10073984:	8b 86 d4 00 00 00    	mov    eax,DWORD PTR [esi+0xd4]
1007398a:	8b 8e cc 00 00 00    	mov    ecx,DWORD PTR [esi+0xcc]
10073990:	8d 54 08 ff          	lea    edx,[eax+ecx*1-0x1]
10073994:	8b 86 c8 00 00 00    	mov    eax,DWORD PTR [esi+0xc8]
1007399a:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100739a0:	52                   	push   edx
100739a1:	50                   	push   eax
100739a2:	e8 49 5a fd ff       	call   0x100493f0
100739a7:	8b 8e d4 00 00 00    	mov    ecx,DWORD PTR [esi+0xd4]
100739ad:	8b 96 cc 00 00 00    	mov    edx,DWORD PTR [esi+0xcc]
100739b3:	68 2e 2e 2e ff       	push   0xff2e2e2e
100739b8:	68 2e 2e 2e ff       	push   0xff2e2e2e
100739bd:	8d 44 11 ff          	lea    eax,[ecx+edx*1-0x1]
100739c1:	8b 8e d0 00 00 00    	mov    ecx,DWORD PTR [esi+0xd0]
100739c7:	8b 96 c8 00 00 00    	mov    edx,DWORD PTR [esi+0xc8]
100739cd:	50                   	push   eax
100739ce:	8d 44 11 ff          	lea    eax,[ecx+edx*1-0x1]
100739d2:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100739d8:	50                   	push   eax
100739d9:	e8 d2 5a fd ff       	call   0x100494b0
100739de:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100739e2:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
100739e5:	8d 46 2c             	lea    eax,[esi+0x2c]
100739e8:	52                   	push   edx
100739e9:	50                   	push   eax
100739ea:	ff 14 8d 20 a0 0d 10 	call   DWORD PTR [ecx*4+0x100da020]
100739f1:	83 c4 08             	add    esp,0x8
100739f4:	5f                   	pop    edi
100739f5:	5e                   	pop    esi
100739f6:	5b                   	pop    ebx
100739f7:	c2 08 00             	ret    0x8
100739fa:	90                   	nop
100739fb:	90                   	nop
100739fc:	90                   	nop
100739fd:	90                   	nop
100739fe:	90                   	nop
100739ff:	90                   	nop
10073a00:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10073a04:	56                   	push   esi
10073a05:	83 f8 0d             	cmp    eax,0xd
10073a08:	57                   	push   edi
10073a09:	8b f1                	mov    esi,ecx
10073a0b:	74 12                	je     0x10073a1f
10073a0d:	83 f8 1b             	cmp    eax,0x1b
10073a10:	74 07                	je     0x10073a19
10073a12:	5f                   	pop    edi
10073a13:	33 c0                	xor    eax,eax
10073a15:	5e                   	pop    esi
10073a16:	c2 08 00             	ret    0x8
10073a19:	8b 06                	mov    eax,DWORD PTR [esi]
10073a1b:	6a 01                	push   0x1
10073a1d:	eb 04                	jmp    0x10073a23
10073a1f:	8b 06                	mov    eax,DWORD PTR [esi]
10073a21:	6a 00                	push   0x0
10073a23:	8b ce                	mov    ecx,esi
10073a25:	ff 50 74             	call   DWORD PTR [eax+0x74]
10073a28:	8b f8                	mov    edi,eax
10073a2a:	85 ff                	test   edi,edi
10073a2c:	75 13                	jne    0x10073a41
10073a2e:	6a 18                	push   0x18
10073a30:	e8 0b 98 fc ff       	call   0x1003d240
10073a35:	8b 16                	mov    edx,DWORD PTR [esi]
10073a37:	83 c4 04             	add    esp,0x4
10073a3a:	8b ce                	mov    ecx,esi
10073a3c:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
10073a3f:	eb 0a                	jmp    0x10073a4b
10073a41:	6a 19                	push   0x19
10073a43:	e8 f8 97 fc ff       	call   0x1003d240
10073a48:	83 c4 04             	add    esp,0x4
10073a4b:	6a 07                	push   0x7
10073a4d:	6a 00                	push   0x0
10073a4f:	8b ce                	mov    ecx,esi
10073a51:	e8 2a ad ff ff       	call   0x1006e780
10073a56:	8b 86 ec 00 00 00    	mov    eax,DWORD PTR [esi+0xec]
10073a5c:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10073a62:	50                   	push   eax
10073a63:	e8 d8 b7 ff ff       	call   0x1006f240
10073a68:	8b 8e e8 00 00 00    	mov    ecx,DWORD PTR [esi+0xe8]
10073a6e:	51                   	push   ecx
10073a6f:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10073a75:	e8 86 b7 ff ff       	call   0x1006f200
10073a7a:	8b 56 34             	mov    edx,DWORD PTR [esi+0x34]
10073a7d:	57                   	push   edi
10073a7e:	52                   	push   edx
10073a7f:	8b ce                	mov    ecx,esi
10073a81:	e8 9a ae ff ff       	call   0x1006e920
10073a86:	5f                   	pop    edi
10073a87:	b8 01 00 00 00       	mov    eax,0x1
10073a8c:	5e                   	pop    esi
10073a8d:	c2 08 00             	ret    0x8
10073a90:	6a ff                	push   0xffffffff
10073a92:	68 c7 63 0b 10       	push   0x100b63c7
10073a97:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10073a9d:	50                   	push   eax
10073a9e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10073aa5:	51                   	push   ecx
10073aa6:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10073aaa:	53                   	push   ebx
10073aab:	56                   	push   esi
10073aac:	33 db                	xor    ebx,ebx
10073aae:	57                   	push   edi
10073aaf:	53                   	push   ebx
10073ab0:	8b f1                	mov    esi,ecx
10073ab2:	53                   	push   ebx
10073ab3:	50                   	push   eax
10073ab4:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
10073ab8:	e8 c3 a8 ff ff       	call   0x1006e380
10073abd:	6a 01                	push   0x1
10073abf:	6a 02                	push   0x2
10073ac1:	8d 4e 2c             	lea    ecx,[esi+0x2c]
10073ac4:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
10073ac8:	e8 33 54 fd ff       	call   0x10048f00
10073acd:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10073ad1:	53                   	push   ebx
10073ad2:	89 4e 34             	mov    DWORD PTR [esi+0x34],ecx
10073ad5:	8b ce                	mov    ecx,esi
10073ad7:	c7 06 b8 c1 0b 10    	mov    DWORD PTR [esi],0x100bc1b8
10073add:	89 9e e8 00 00 00    	mov    DWORD PTR [esi+0xe8],ebx
10073ae3:	89 9e ec 00 00 00    	mov    DWORD PTR [esi+0xec],ebx
10073ae9:	e8 d2 fb ff ff       	call   0x100736c0
10073aee:	6a 38                	push   0x38
10073af0:	c7 44 24 1c 02 00 00 	mov    DWORD PTR [esp+0x1c],0x2
10073af7:	00 
10073af8:	c7 06 28 c3 0b 10    	mov    DWORD PTR [esi],0x100bc328
10073afe:	88 9e 00 01 00 00    	mov    BYTE PTR [esi+0x100],bl
10073b04:	e8 20 fe 02 00       	call   0x100a3929
10073b09:	8b f8                	mov    edi,eax
10073b0b:	83 c4 04             	add    esp,0x4
10073b0e:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
10073b12:	3b fb                	cmp    edi,ebx
10073b14:	c6 44 24 18 03       	mov    BYTE PTR [esp+0x18],0x3
10073b19:	74 4d                	je     0x10073b68
10073b1b:	53                   	push   ebx
10073b1c:	6a 01                	push   0x1
10073b1e:	56                   	push   esi
10073b1f:	8b cf                	mov    ecx,edi
10073b21:	e8 5a a8 ff ff       	call   0x1006e380
10073b26:	6a 18                	push   0x18
10073b28:	c6 44 24 1c 04       	mov    BYTE PTR [esp+0x1c],0x4
10073b2d:	c7 07 b8 c2 0b 10    	mov    DWORD PTR [edi],0x100bc2b8
10073b33:	c7 47 2c ff ff ff ff 	mov    DWORD PTR [edi+0x2c],0xffffffff
10073b3a:	e8 ea fd 02 00       	call   0x100a3929
10073b3f:	83 c4 04             	add    esp,0x4
10073b42:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10073b46:	3b c3                	cmp    eax,ebx
10073b48:	c6 44 24 18 05       	mov    BYTE PTR [esp+0x18],0x5
10073b4d:	74 0f                	je     0x10073b5e
10073b4f:	8b c8                	mov    ecx,eax
10073b51:	e8 ba 98 fd ff       	call   0x1004d410
10073b56:	89 47 34             	mov    DWORD PTR [edi+0x34],eax
10073b59:	89 5f 30             	mov    DWORD PTR [edi+0x30],ebx
10073b5c:	eb 0c                	jmp    0x10073b6a
10073b5e:	33 c0                	xor    eax,eax
10073b60:	89 5f 30             	mov    DWORD PTR [edi+0x30],ebx
10073b63:	89 47 34             	mov    DWORD PTR [edi+0x34],eax
10073b66:	eb 02                	jmp    0x10073b6a
10073b68:	33 ff                	xor    edi,edi
10073b6a:	68 48 01 00 00       	push   0x148
10073b6f:	c6 44 24 1c 02       	mov    BYTE PTR [esp+0x1c],0x2
10073b74:	89 be f0 00 00 00    	mov    DWORD PTR [esi+0xf0],edi
10073b7a:	e8 aa fd 02 00       	call   0x100a3929
10073b7f:	8b f8                	mov    edi,eax
10073b81:	83 c4 04             	add    esp,0x4
10073b84:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
10073b88:	3b fb                	cmp    edi,ebx
10073b8a:	c6 44 24 18 06       	mov    BYTE PTR [esp+0x18],0x6
10073b8f:	74 3d                	je     0x10073bce
10073b91:	53                   	push   ebx
10073b92:	6a 03                	push   0x3
10073b94:	56                   	push   esi
10073b95:	8b cf                	mov    ecx,edi
10073b97:	e8 e4 a7 ff ff       	call   0x1006e380
10073b9c:	c7 47 2c 02 00 00 00 	mov    DWORD PTR [edi+0x2c],0x2
10073ba3:	89 5f 30             	mov    DWORD PTR [edi+0x30],ebx
10073ba6:	89 5f 38             	mov    DWORD PTR [edi+0x38],ebx
10073ba9:	88 5f 3c             	mov    BYTE PTR [edi+0x3c],bl
10073bac:	c7 07 38 c2 0b 10    	mov    DWORD PTR [edi],0x100bc238
10073bb2:	89 9f 3c 01 00 00    	mov    DWORD PTR [edi+0x13c],ebx
10073bb8:	c7 87 40 01 00 00 ff 	mov    DWORD PTR [edi+0x140],0xffffffff
10073bbf:	ff ff ff 
10073bc2:	c7 87 44 01 00 00 00 	mov    DWORD PTR [edi+0x144],0x100
10073bc9:	01 00 00 
10073bcc:	eb 02                	jmp    0x10073bd0
10073bce:	33 ff                	xor    edi,edi
10073bd0:	6a 44                	push   0x44
10073bd2:	c6 44 24 1c 02       	mov    BYTE PTR [esp+0x1c],0x2
10073bd7:	89 be f4 00 00 00    	mov    DWORD PTR [esi+0xf4],edi
10073bdd:	e8 47 fd 02 00       	call   0x100a3929
10073be2:	8b f8                	mov    edi,eax
10073be4:	83 c4 04             	add    esp,0x4
10073be7:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
10073beb:	3b fb                	cmp    edi,ebx
10073bed:	c6 44 24 18 07       	mov    BYTE PTR [esp+0x18],0x7
10073bf2:	74 3c                	je     0x10073c30
10073bf4:	53                   	push   ebx
10073bf5:	53                   	push   ebx
10073bf6:	6a 01                	push   0x1
10073bf8:	53                   	push   ebx
10073bf9:	56                   	push   esi
10073bfa:	8b cf                	mov    ecx,edi
10073bfc:	e8 ff c9 ff ff       	call   0x10070600
10073c01:	6a 04                	push   0x4
10073c03:	8b cf                	mov    ecx,edi
10073c05:	c6 44 24 1c 08       	mov    BYTE PTR [esp+0x1c],0x8
10073c0a:	c7 07 88 bb 0b 10    	mov    DWORD PTR [edi],0x100bbb88
10073c10:	c7 47 38 48 41 12 10 	mov    DWORD PTR [edi+0x38],0x10124148
10073c17:	c7 47 3c 04 00 00 00 	mov    DWORD PTR [edi+0x3c],0x4
10073c1e:	ff 15 04 bc 0b 10    	call   DWORD PTR ds:0x100bbc04
10073c24:	89 47 40             	mov    DWORD PTR [edi+0x40],eax
10073c27:	c7 47 34 00 41 12 10 	mov    DWORD PTR [edi+0x34],0x10124100
10073c2e:	eb 02                	jmp    0x10073c32
10073c30:	33 ff                	xor    edi,edi
10073c32:	6a 44                	push   0x44
10073c34:	c6 44 24 1c 02       	mov    BYTE PTR [esp+0x1c],0x2
10073c39:	89 be f8 00 00 00    	mov    DWORD PTR [esi+0xf8],edi
10073c3f:	e8 e5 fc 02 00       	call   0x100a3929
10073c44:	8b f8                	mov    edi,eax
10073c46:	83 c4 04             	add    esp,0x4
10073c49:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
10073c4d:	3b fb                	cmp    edi,ebx
10073c4f:	c6 44 24 18 09       	mov    BYTE PTR [esp+0x18],0x9
10073c54:	74 3c                	je     0x10073c92
10073c56:	53                   	push   ebx
10073c57:	53                   	push   ebx
10073c58:	6a 03                	push   0x3
10073c5a:	6a 01                	push   0x1
10073c5c:	56                   	push   esi
10073c5d:	8b cf                	mov    ecx,edi
10073c5f:	e8 9c c9 ff ff       	call   0x10070600
10073c64:	53                   	push   ebx
10073c65:	53                   	push   ebx
10073c66:	8b cf                	mov    ecx,edi
10073c68:	c6 44 24 20 0a       	mov    BYTE PTR [esp+0x20],0xa
10073c6d:	c7 07 88 bb 0b 10    	mov    DWORD PTR [edi],0x100bbb88
10073c73:	89 5f 3c             	mov    DWORD PTR [edi+0x3c],ebx
10073c76:	e8 85 cd ff ff       	call   0x10070a00
10073c7b:	8b 47 3c             	mov    eax,DWORD PTR [edi+0x3c]
10073c7e:	8b 17                	mov    edx,DWORD PTR [edi]
10073c80:	50                   	push   eax
10073c81:	8b cf                	mov    ecx,edi
10073c83:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
10073c86:	89 47 40             	mov    DWORD PTR [edi+0x40],eax
10073c89:	c7 47 34 00 41 12 10 	mov    DWORD PTR [edi+0x34],0x10124100
10073c90:	eb 02                	jmp    0x10073c94
10073c92:	33 ff                	xor    edi,edi
10073c94:	89 be fc 00 00 00    	mov    DWORD PTR [esi+0xfc],edi
10073c9a:	8b be f8 00 00 00    	mov    edi,DWORD PTR [esi+0xf8]
10073ca0:	8b cf                	mov    ecx,edi
10073ca2:	c6 44 24 18 02       	mov    BYTE PTR [esp+0x18],0x2
10073ca7:	e8 14 cb ff ff       	call   0x100707c0
10073cac:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
10073cb1:	68 96 05 00 00       	push   0x596
10073cb6:	50                   	push   eax
10073cb7:	8b 08                	mov    ecx,DWORD PTR [eax]
10073cb9:	ff 91 b4 00 00 00    	call   DWORD PTR [ecx+0xb4]
10073cbf:	89 47 30             	mov    DWORD PTR [edi+0x30],eax
10073cc2:	8b be fc 00 00 00    	mov    edi,DWORD PTR [esi+0xfc]
10073cc8:	83 c4 08             	add    esp,0x8
10073ccb:	8b cf                	mov    ecx,edi
10073ccd:	e8 ee ca ff ff       	call   0x100707c0
10073cd2:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
10073cd7:	68 a0 05 00 00       	push   0x5a0
10073cdc:	50                   	push   eax
10073cdd:	8b 10                	mov    edx,DWORD PTR [eax]
10073cdf:	ff 92 b4 00 00 00    	call   DWORD PTR [edx+0xb4]
10073ce5:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10073ce9:	83 c4 08             	add    esp,0x8
10073cec:	89 47 30             	mov    DWORD PTR [edi+0x30],eax
10073cef:	8b c6                	mov    eax,esi
10073cf1:	5f                   	pop    edi
10073cf2:	5e                   	pop    esi
10073cf3:	5b                   	pop    ebx
10073cf4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10073cfb:	83 c4 10             	add    esp,0x10
10073cfe:	c2 08 00             	ret    0x8
10073d01:	90                   	nop
10073d02:	90                   	nop
10073d03:	90                   	nop
10073d04:	90                   	nop
10073d05:	90                   	nop
10073d06:	90                   	nop
10073d07:	90                   	nop
10073d08:	90                   	nop
10073d09:	90                   	nop
10073d0a:	90                   	nop
10073d0b:	90                   	nop
10073d0c:	90                   	nop
10073d0d:	90                   	nop
10073d0e:	90                   	nop
10073d0f:	90                   	nop
10073d10:	83 ec 10             	sub    esp,0x10
10073d13:	56                   	push   esi
10073d14:	57                   	push   edi
10073d15:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
10073d19:	85 ff                	test   edi,edi
10073d1b:	75 05                	jne    0x10073d22
10073d1d:	bf 00 d0 10 10       	mov    edi,0x1010d000
10073d22:	8b b1 f0 00 00 00    	mov    esi,DWORD PTR [ecx+0xf0]
10073d28:	8d 44 24 08          	lea    eax,[esp+0x8]
10073d2c:	50                   	push   eax
10073d2d:	8b ce                	mov    ecx,esi
10073d2f:	e8 8c a9 ff ff       	call   0x1006e6c0
10073d34:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10073d38:	c7 46 2c ff ff ff ff 	mov    DWORD PTR [esi+0x2c],0xffffffff
10073d3f:	8b 15 ec b6 0d 10    	mov    edx,DWORD PTR ds:0x100db6ec
10073d45:	57                   	push   edi
10073d46:	51                   	push   ecx
10073d47:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10073d4a:	52                   	push   edx
10073d4b:	e8 20 97 fd ff       	call   0x1004d470
10073d50:	5f                   	pop    edi
10073d51:	5e                   	pop    esi
10073d52:	83 c4 10             	add    esp,0x10
10073d55:	c2 04 00             	ret    0x4
10073d58:	90                   	nop
10073d59:	90                   	nop
10073d5a:	90                   	nop
10073d5b:	90                   	nop
10073d5c:	90                   	nop
10073d5d:	90                   	nop
10073d5e:	90                   	nop
10073d5f:	90                   	nop
10073d60:	8d 81 00 01 00 00    	lea    eax,[ecx+0x100]
10073d66:	c3                   	ret
10073d67:	90                   	nop
10073d68:	90                   	nop
10073d69:	90                   	nop
10073d6a:	90                   	nop
10073d6b:	90                   	nop
10073d6c:	90                   	nop
10073d6d:	90                   	nop
10073d6e:	90                   	nop
10073d6f:	90                   	nop
10073d70:	83 ec 40             	sub    esp,0x40
10073d73:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
10073d77:	53                   	push   ebx
10073d78:	55                   	push   ebp
10073d79:	56                   	push   esi
10073d7a:	8b f1                	mov    esi,ecx
10073d7c:	57                   	push   edi
10073d7d:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
10073d80:	8d 46 2c             	lea    eax,[esi+0x2c]
10073d83:	8d 9e b8 00 00 00    	lea    ebx,[esi+0xb8]
10073d89:	53                   	push   ebx
10073d8a:	52                   	push   edx
10073d8b:	50                   	push   eax
10073d8c:	ff 14 8d 2c a0 0d 10 	call   DWORD PTR [ecx*4+0x100da02c]
10073d93:	8b 03                	mov    eax,DWORD PTR [ebx]
10073d95:	8b 8e bc 00 00 00    	mov    ecx,DWORD PTR [esi+0xbc]
10073d9b:	8b 96 c0 00 00 00    	mov    edx,DWORD PTR [esi+0xc0]
10073da1:	89 86 c8 00 00 00    	mov    DWORD PTR [esi+0xc8],eax
10073da7:	89 8e cc 00 00 00    	mov    DWORD PTR [esi+0xcc],ecx
10073dad:	89 96 d0 00 00 00    	mov    DWORD PTR [esi+0xd0],edx
10073db3:	8b 0d f0 b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6f0
10073db9:	83 c4 0c             	add    esp,0xc
10073dbc:	e8 af 94 fd ff       	call   0x1004d270
10073dc1:	83 c0 03             	add    eax,0x3
10073dc4:	8d 8e d8 00 00 00    	lea    ecx,[esi+0xd8]
10073dca:	89 86 d4 00 00 00    	mov    DWORD PTR [esi+0xd4],eax
10073dd0:	8b 96 c8 00 00 00    	mov    edx,DWORD PTR [esi+0xc8]
10073dd6:	89 11                	mov    DWORD PTR [ecx],edx
10073dd8:	8b 96 cc 00 00 00    	mov    edx,DWORD PTR [esi+0xcc]
10073dde:	8b ae c0 00 00 00    	mov    ebp,DWORD PTR [esi+0xc0]
10073de4:	8b 1b                	mov    ebx,DWORD PTR [ebx]
10073de6:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
10073de9:	8b 96 d0 00 00 00    	mov    edx,DWORD PTR [esi+0xd0]
10073def:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
10073df2:	8b d0                	mov    edx,eax
10073df4:	89 51 0c             	mov    DWORD PTR [ecx+0xc],edx
10073df7:	8b be e4 00 00 00    	mov    edi,DWORD PTR [esi+0xe4]
10073dfd:	8b 8e bc 00 00 00    	mov    ecx,DWORD PTR [esi+0xbc]
10073e03:	4f                   	dec    edi
10073e04:	89 be e4 00 00 00    	mov    DWORD PTR [esi+0xe4],edi
10073e0a:	8b be c4 00 00 00    	mov    edi,DWORD PTR [esi+0xc4]
10073e10:	8b 15 58 be 11 10    	mov    edx,DWORD PTR ds:0x1011be58
10073e16:	2b f8                	sub    edi,eax
10073e18:	03 c1                	add    eax,ecx
10073e1a:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
10073e20:	81 fa 00 04 00 00    	cmp    edx,0x400
10073e26:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
10073e2a:	1b c0                	sbb    eax,eax
10073e2c:	24 d0                	and    al,0xd0
10073e2e:	05 80 00 00 00       	add    eax,0x80
10073e33:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10073e37:	8b 11                	mov    edx,DWORD PTR [ecx]
10073e39:	ff 52 74             	call   DWORD PTR [edx+0x74]
10073e3c:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10073e40:	2b f8                	sub    edi,eax
10073e42:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
10073e46:	8b d5                	mov    edx,ebp
10073e48:	8d 4c 07 fc          	lea    ecx,[edi+eax*1-0x4]
10073e4c:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
10073e50:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
10073e54:	2b d7                	sub    edx,edi
10073e56:	8d 4c 24 10          	lea    ecx,[esp+0x10]
10073e5a:	8d 44 1a fc          	lea    eax,[edx+ebx*1-0x4]
10073e5e:	51                   	push   ecx
10073e5f:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
10073e65:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10073e69:	e8 e2 a7 ff ff       	call   0x1006e650
10073e6e:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10073e72:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10073e76:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
10073e7c:	ba fc ff ff ff       	mov    edx,0xfffffffc
10073e81:	2b d0                	sub    edx,eax
10073e83:	8d 44 24 10          	lea    eax,[esp+0x10]
10073e87:	03 fa                	add    edi,edx
10073e89:	50                   	push   eax
10073e8a:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
10073e8e:	e8 bd a7 ff ff       	call   0x1006e650
10073e93:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
10073e97:	8d 7b 08             	lea    edi,[ebx+0x8]
10073e9a:	8d 5d f0             	lea    ebx,[ebp-0x10]
10073e9d:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
10073ea1:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
10073ea5:	83 c1 04             	add    ecx,0x4
10073ea8:	8d 54 24 20          	lea    edx,[esp+0x20]
10073eac:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
10073eb0:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
10073eb6:	52                   	push   edx
10073eb7:	c7 44 24 30 01 00 00 	mov    DWORD PTR [esp+0x30],0x1
10073ebe:	00 
10073ebf:	e8 8c a7 ff ff       	call   0x1006e650
10073ec4:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
10073eca:	8b 48 34             	mov    ecx,DWORD PTR [eax+0x34]
10073ecd:	e8 2e 98 fd ff       	call   0x1004d700
10073ed2:	8b 8e f0 00 00 00    	mov    ecx,DWORD PTR [esi+0xf0]
10073ed8:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10073edc:	8d 44 24 20          	lea    eax,[esp+0x20]
10073ee0:	50                   	push   eax
10073ee1:	e8 6a a7 ff ff       	call   0x1006e650
10073ee6:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10073eea:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
10073eee:	89 7c 24 30          	mov    DWORD PTR [esp+0x30],edi
10073ef2:	8d 44 0a 0a          	lea    eax,[edx+ecx*1+0xa]
10073ef6:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10073efc:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
10073f00:	e8 6b 93 fd ff       	call   0x1004d270
10073f05:	8d 4c 24 30          	lea    ecx,[esp+0x30]
10073f09:	83 c0 02             	add    eax,0x2
10073f0c:	51                   	push   ecx
10073f0d:	8b 8e f4 00 00 00    	mov    ecx,DWORD PTR [esi+0xf4]
10073f13:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
10073f17:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
10073f1b:	e8 30 a7 ff ff       	call   0x1006e650
10073f20:	5f                   	pop    edi
10073f21:	5e                   	pop    esi
10073f22:	5d                   	pop    ebp
10073f23:	5b                   	pop    ebx
10073f24:	83 c4 40             	add    esp,0x40
10073f27:	c2 04 00             	ret    0x4
10073f2a:	90                   	nop
10073f2b:	90                   	nop
10073f2c:	90                   	nop
10073f2d:	90                   	nop
10073f2e:	90                   	nop
10073f2f:	90                   	nop
10073f30:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10073f34:	85 c0                	test   eax,eax
10073f36:	75 1b                	jne    0x10073f53
10073f38:	8b 91 f4 00 00 00    	mov    edx,DWORD PTR [ecx+0xf4]
10073f3e:	8b 01                	mov    eax,DWORD PTR [ecx]
10073f40:	83 c2 3c             	add    edx,0x3c
10073f43:	52                   	push   edx
10073f44:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
10073f4a:	85 c0                	test   eax,eax
10073f4c:	74 05                	je     0x10073f53
10073f4e:	33 c0                	xor    eax,eax
10073f50:	c2 04 00             	ret    0x4
10073f53:	b8 01 00 00 00       	mov    eax,0x1
10073f58:	c2 04 00             	ret    0x4
10073f5b:	90                   	nop
10073f5c:	90                   	nop
10073f5d:	90                   	nop
10073f5e:	90                   	nop
10073f5f:	90                   	nop
10073f60:	83 ec 10             	sub    esp,0x10
10073f63:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
10073f68:	8b 15 1c a0 0d 10    	mov    edx,DWORD PTR ds:0x100da01c
10073f6e:	56                   	push   esi
10073f6f:	8b f0                	mov    esi,eax
10073f71:	d1 ee                	shr    esi,1
10073f73:	57                   	push   edi
10073f74:	8b fa                	mov    edi,edx
10073f76:	2b c6                	sub    eax,esi
10073f78:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
10073f7c:	8b 35 4c be 11 10    	mov    esi,DWORD PTR ds:0x1011be4c
10073f82:	c1 ef 02             	shr    edi,0x2
10073f85:	d1 e8                	shr    eax,1
10073f87:	03 c6                	add    eax,esi
10073f89:	8b 35 48 be 11 10    	mov    esi,DWORD PTR ds:0x1011be48
10073f8f:	2b d7                	sub    edx,edi
10073f91:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
10073f95:	d1 ea                	shr    edx,1
10073f97:	8d 44 24 08          	lea    eax,[esp+0x8]
10073f9b:	03 d6                	add    edx,esi
10073f9d:	50                   	push   eax
10073f9e:	89 7c 24 18          	mov    DWORD PTR [esp+0x18],edi
10073fa2:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10073fa6:	e8 a5 a6 ff ff       	call   0x1006e650
10073fab:	5f                   	pop    edi
10073fac:	5e                   	pop    esi
10073fad:	83 c4 10             	add    esp,0x10
10073fb0:	c3                   	ret
10073fb1:	90                   	nop
10073fb2:	90                   	nop
10073fb3:	90                   	nop
10073fb4:	90                   	nop
10073fb5:	90                   	nop
10073fb6:	90                   	nop
10073fb7:	90                   	nop
10073fb8:	90                   	nop
10073fb9:	90                   	nop
10073fba:	90                   	nop
10073fbb:	90                   	nop
10073fbc:	90                   	nop
10073fbd:	90                   	nop
10073fbe:	90                   	nop
10073fbf:	90                   	nop
10073fc0:	53                   	push   ebx
10073fc1:	55                   	push   ebp
10073fc2:	56                   	push   esi
10073fc3:	8b f1                	mov    esi,ecx
10073fc5:	57                   	push   edi
10073fc6:	68 ff 00 00 00       	push   0xff
10073fcb:	8b ae f4 00 00 00    	mov    ebp,DWORD PTR [esi+0xf4]
10073fd1:	8d 86 00 01 00 00    	lea    eax,[esi+0x100]
10073fd7:	50                   	push   eax
10073fd8:	8d 5d 3c             	lea    ebx,[ebp+0x3c]
10073fdb:	53                   	push   ebx
10073fdc:	e8 3f f8 02 00       	call   0x100a3820
10073fe1:	8b fb                	mov    edi,ebx
10073fe3:	83 c9 ff             	or     ecx,0xffffffff
10073fe6:	33 c0                	xor    eax,eax
10073fe8:	83 c4 0c             	add    esp,0xc
10073feb:	c6 83 ff 00 00 00 00 	mov    BYTE PTR [ebx+0xff],0x0
10073ff2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
10073ff4:	f7 d1                	not    ecx
10073ff6:	49                   	dec    ecx
10073ff7:	53                   	push   ebx
10073ff8:	89 4d 30             	mov    DWORD PTR [ebp+0x30],ecx
10073ffb:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10074001:	e8 1a 92 fd ff       	call   0x1004d220
10074006:	89 45 38             	mov    DWORD PTR [ebp+0x38],eax
10074009:	8b 86 f4 00 00 00    	mov    eax,DWORD PTR [esi+0xf4]
1007400f:	8b 16                	mov    edx,DWORD PTR [esi]
10074011:	83 c0 3c             	add    eax,0x3c
10074014:	50                   	push   eax
10074015:	8b ce                	mov    ecx,esi
10074017:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
1007401d:	85 c0                	test   eax,eax
1007401f:	74 14                	je     0x10074035
10074021:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
10074027:	6a 00                	push   0x0
10074029:	6a 02                	push   0x2
1007402b:	e8 50 a7 ff ff       	call   0x1006e780
10074030:	5f                   	pop    edi
10074031:	5e                   	pop    esi
10074032:	5d                   	pop    ebp
10074033:	5b                   	pop    ebx
10074034:	c3                   	ret
10074035:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
1007403b:	6a 02                	push   0x2
1007403d:	6a 00                	push   0x0
1007403f:	e8 3c a7 ff ff       	call   0x1006e780
10074044:	5f                   	pop    edi
10074045:	5e                   	pop    esi
10074046:	5d                   	pop    ebp
10074047:	5b                   	pop    ebx
10074048:	c3                   	ret
10074049:	90                   	nop
1007404a:	90                   	nop
1007404b:	90                   	nop
1007404c:	90                   	nop
1007404d:	90                   	nop
1007404e:	90                   	nop
1007404f:	90                   	nop
10074050:	8b 81 f4 00 00 00    	mov    eax,DWORD PTR [ecx+0xf4]
10074056:	56                   	push   esi
10074057:	83 c0 3c             	add    eax,0x3c
1007405a:	8d b1 00 01 00 00    	lea    esi,[ecx+0x100]
10074060:	68 ff 00 00 00       	push   0xff
10074065:	50                   	push   eax
10074066:	56                   	push   esi
10074067:	e8 b4 f7 02 00       	call   0x100a3820
1007406c:	83 c4 0c             	add    esp,0xc
1007406f:	c6 86 ff 00 00 00 00 	mov    BYTE PTR [esi+0xff],0x0
10074076:	5e                   	pop    esi
10074077:	c3                   	ret
10074078:	90                   	nop
10074079:	90                   	nop
1007407a:	90                   	nop
1007407b:	90                   	nop
1007407c:	90                   	nop
1007407d:	90                   	nop
1007407e:	90                   	nop
1007407f:	90                   	nop
10074080:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10074084:	56                   	push   esi
10074085:	83 e8 00             	sub    eax,0x0
10074088:	8b f1                	mov    esi,ecx
1007408a:	0f 84 ac 00 00 00    	je     0x1007413c
10074090:	48                   	dec    eax
10074091:	74 5a                	je     0x100740ed
10074093:	48                   	dec    eax
10074094:	0f 85 ef 00 00 00    	jne    0x10074189
1007409a:	83 7c 24 0c 02       	cmp    DWORD PTR [esp+0xc],0x2
1007409f:	0f 85 e4 00 00 00    	jne    0x10074189
100740a5:	8b 8e f4 00 00 00    	mov    ecx,DWORD PTR [esi+0xf4]
100740ab:	8b 06                	mov    eax,DWORD PTR [esi]
100740ad:	83 c1 3c             	add    ecx,0x3c
100740b0:	51                   	push   ecx
100740b1:	8b ce                	mov    ecx,esi
100740b3:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
100740b9:	85 c0                	test   eax,eax
100740bb:	74 18                	je     0x100740d5
100740bd:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
100740c3:	6a 00                	push   0x0
100740c5:	6a 02                	push   0x2
100740c7:	e8 b4 a6 ff ff       	call   0x1006e780
100740cc:	b8 01 00 00 00       	mov    eax,0x1
100740d1:	5e                   	pop    esi
100740d2:	c2 08 00             	ret    0x8
100740d5:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
100740db:	6a 02                	push   0x2
100740dd:	6a 00                	push   0x0
100740df:	e8 9c a6 ff ff       	call   0x1006e780
100740e4:	b8 01 00 00 00       	mov    eax,0x1
100740e9:	5e                   	pop    esi
100740ea:	c2 08 00             	ret    0x8
100740ed:	6a 19                	push   0x19
100740ef:	e8 4c 91 fc ff       	call   0x1003d240
100740f4:	83 c4 04             	add    esp,0x4
100740f7:	8b ce                	mov    ecx,esi
100740f9:	6a 07                	push   0x7
100740fb:	6a 00                	push   0x0
100740fd:	e8 7e a6 ff ff       	call   0x1006e780
10074102:	8b 96 ec 00 00 00    	mov    edx,DWORD PTR [esi+0xec]
10074108:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1007410e:	52                   	push   edx
1007410f:	e8 2c b1 ff ff       	call   0x1006f240
10074114:	8b 86 e8 00 00 00    	mov    eax,DWORD PTR [esi+0xe8]
1007411a:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10074120:	50                   	push   eax
10074121:	e8 da b0 ff ff       	call   0x1006f200
10074126:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
10074129:	6a 01                	push   0x1
1007412b:	51                   	push   ecx
1007412c:	8b ce                	mov    ecx,esi
1007412e:	e8 ed a7 ff ff       	call   0x1006e920
10074133:	b8 01 00 00 00       	mov    eax,0x1
10074138:	5e                   	pop    esi
10074139:	c2 08 00             	ret    0x8
1007413c:	6a 18                	push   0x18
1007413e:	e8 fd 90 fc ff       	call   0x1003d240
10074143:	8b 16                	mov    edx,DWORD PTR [esi]
10074145:	83 c4 04             	add    esp,0x4
10074148:	8b ce                	mov    ecx,esi
1007414a:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007414d:	6a 07                	push   0x7
1007414f:	6a 00                	push   0x0
10074151:	8b ce                	mov    ecx,esi
10074153:	e8 28 a6 ff ff       	call   0x1006e780
10074158:	8b 86 ec 00 00 00    	mov    eax,DWORD PTR [esi+0xec]
1007415e:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10074164:	50                   	push   eax
10074165:	e8 d6 b0 ff ff       	call   0x1006f240
1007416a:	8b 8e e8 00 00 00    	mov    ecx,DWORD PTR [esi+0xe8]
10074170:	51                   	push   ecx
10074171:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10074177:	e8 84 b0 ff ff       	call   0x1006f200
1007417c:	8b 56 34             	mov    edx,DWORD PTR [esi+0x34]
1007417f:	6a 00                	push   0x0
10074181:	52                   	push   edx
10074182:	8b ce                	mov    ecx,esi
10074184:	e8 97 a7 ff ff       	call   0x1006e920
10074189:	b8 01 00 00 00       	mov    eax,0x1
1007418e:	5e                   	pop    esi
1007418f:	c2 08 00             	ret    0x8
10074192:	90                   	nop
10074193:	90                   	nop
10074194:	90                   	nop
10074195:	90                   	nop
10074196:	90                   	nop
10074197:	90                   	nop
10074198:	90                   	nop
10074199:	90                   	nop
1007419a:	90                   	nop
1007419b:	90                   	nop
1007419c:	90                   	nop
1007419d:	90                   	nop
1007419e:	90                   	nop
1007419f:	90                   	nop
100741a0:	56                   	push   esi
100741a1:	8b f1                	mov    esi,ecx
100741a3:	e8 18 00 00 00       	call   0x100741c0
100741a8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
100741ad:	74 09                	je     0x100741b8
100741af:	56                   	push   esi
100741b0:	e8 69 f7 02 00       	call   0x100a391e
100741b5:	83 c4 04             	add    esp,0x4
100741b8:	8b c6                	mov    eax,esi
100741ba:	5e                   	pop    esi
100741bb:	c2 04 00             	ret    0x4
100741be:	90                   	nop
100741bf:	90                   	nop
100741c0:	6a ff                	push   0xffffffff
100741c2:	68 e8 63 0b 10       	push   0x100b63e8
100741c7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100741cd:	50                   	push   eax
100741ce:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100741d5:	51                   	push   ecx
100741d6:	56                   	push   esi
100741d7:	8b f1                	mov    esi,ecx
100741d9:	57                   	push   edi
100741da:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
100741de:	c7 06 ac c3 0b 10    	mov    DWORD PTR [esi],0x100bc3ac
100741e4:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
100741e7:	33 ff                	xor    edi,edi
100741e9:	3b c7                	cmp    eax,edi
100741eb:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
100741ef:	74 09                	je     0x100741fa
100741f1:	50                   	push   eax
100741f2:	e8 27 f7 02 00       	call   0x100a391e
100741f7:	83 c4 04             	add    esp,0x4
100741fa:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
100741fd:	3b c7                	cmp    eax,edi
100741ff:	74 09                	je     0x1007420a
10074201:	50                   	push   eax
10074202:	e8 17 f7 02 00       	call   0x100a391e
10074207:	83 c4 04             	add    esp,0x4
1007420a:	8b ce                	mov    ecx,esi
1007420c:	89 7e 38             	mov    DWORD PTR [esi+0x38],edi
1007420f:	89 7e 40             	mov    DWORD PTR [esi+0x40],edi
10074212:	89 7e 3c             	mov    DWORD PTR [esi+0x3c],edi
10074215:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
1007421c:	ff 
1007421d:	e8 fe a2 ff ff       	call   0x1006e520
10074222:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10074226:	5f                   	pop    edi
10074227:	5e                   	pop    esi
10074228:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1007422f:	83 c4 10             	add    esp,0x10
10074232:	c3                   	ret
10074233:	90                   	nop
10074234:	90                   	nop
10074235:	90                   	nop
10074236:	90                   	nop
10074237:	90                   	nop
10074238:	90                   	nop
10074239:	90                   	nop
1007423a:	90                   	nop
1007423b:	90                   	nop
1007423c:	90                   	nop
1007423d:	90                   	nop
1007423e:	90                   	nop
1007423f:	90                   	nop
10074240:	53                   	push   ebx
10074241:	55                   	push   ebp
10074242:	8b e9                	mov    ebp,ecx
10074244:	33 db                	xor    ebx,ebx
10074246:	56                   	push   esi
10074247:	57                   	push   edi
10074248:	8b 45 40             	mov    eax,DWORD PTR [ebp+0x40]
1007424b:	3b c3                	cmp    eax,ebx
1007424d:	74 09                	je     0x10074258
1007424f:	50                   	push   eax
10074250:	e8 c9 f6 02 00       	call   0x100a391e
10074255:	83 c4 04             	add    esp,0x4
10074258:	8b 45 3c             	mov    eax,DWORD PTR [ebp+0x3c]
1007425b:	3b c3                	cmp    eax,ebx
1007425d:	74 09                	je     0x10074268
1007425f:	50                   	push   eax
10074260:	e8 b9 f6 02 00       	call   0x100a391e
10074265:	83 c4 04             	add    esp,0x4
10074268:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
1007426c:	89 5d 38             	mov    DWORD PTR [ebp+0x38],ebx
1007426f:	3b f3                	cmp    esi,ebx
10074271:	89 5d 40             	mov    DWORD PTR [ebp+0x40],ebx
10074274:	89 5d 3c             	mov    DWORD PTR [ebp+0x3c],ebx
10074277:	0f 8e ac 00 00 00    	jle    0x10074329
1007427d:	8b c6                	mov    eax,esi
1007427f:	89 75 38             	mov    DWORD PTR [ebp+0x38],esi
10074282:	c1 e0 04             	shl    eax,0x4
10074285:	50                   	push   eax
10074286:	e8 9e f6 02 00       	call   0x100a3929
1007428b:	8b ce                	mov    ecx,esi
1007428d:	89 45 40             	mov    DWORD PTR [ebp+0x40],eax
10074290:	c1 e1 07             	shl    ecx,0x7
10074293:	51                   	push   ecx
10074294:	e8 90 f6 02 00       	call   0x100a3929
10074299:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1007429d:	8b 7d 40             	mov    edi,DWORD PTR [ebp+0x40]
100742a0:	83 c4 08             	add    esp,0x8
100742a3:	3b f3                	cmp    esi,ebx
100742a5:	89 45 3c             	mov    DWORD PTR [ebp+0x3c],eax
100742a8:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
100742ac:	7e 7b                	jle    0x10074329
100742ae:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
100742b2:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100742b6:	8b cf                	mov    ecx,edi
100742b8:	8b 10                	mov    edx,DWORD PTR [eax]
100742ba:	89 11                	mov    DWORD PTR [ecx],edx
100742bc:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
100742bf:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
100742c2:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
100742c5:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
100742c8:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
100742cb:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
100742ce:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100742d1:	85 c0                	test   eax,eax
100742d3:	7d 07                	jge    0x100742dc
100742d5:	c7 47 04 00 00 00 00 	mov    DWORD PTR [edi+0x4],0x0
100742dc:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
100742df:	85 c0                	test   eax,eax
100742e1:	75 07                	jne    0x100742ea
100742e3:	c7 47 08 00 d0 10 10 	mov    DWORD PTR [edi+0x8],0x1010d000
100742ea:	8b 4d 3c             	mov    ecx,DWORD PTR [ebp+0x3c]
100742ed:	8b f3                	mov    esi,ebx
100742ef:	03 f1                	add    esi,ecx
100742f1:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
100742f4:	68 80 00 00 00       	push   0x80
100742f9:	51                   	push   ecx
100742fa:	56                   	push   esi
100742fb:	e8 20 f5 02 00       	call   0x100a3820
10074300:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
10074304:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10074308:	c6 46 7f 00          	mov    BYTE PTR [esi+0x7f],0x0
1007430c:	89 77 08             	mov    DWORD PTR [edi+0x8],esi
1007430f:	83 c4 0c             	add    esp,0xc
10074312:	81 c3 80 00 00 00    	add    ebx,0x80
10074318:	83 c2 10             	add    edx,0x10
1007431b:	83 c7 10             	add    edi,0x10
1007431e:	48                   	dec    eax
1007431f:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10074323:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10074327:	75 89                	jne    0x100742b2
10074329:	5f                   	pop    edi
1007432a:	5e                   	pop    esi
1007432b:	5d                   	pop    ebp
1007432c:	5b                   	pop    ebx
1007432d:	c2 08 00             	ret    0x8
10074330:	83 ec 14             	sub    esp,0x14
10074333:	53                   	push   ebx
10074334:	55                   	push   ebp
10074335:	56                   	push   esi
10074336:	8b 74 24 28          	mov    esi,DWORD PTR [esp+0x28]
1007433a:	57                   	push   edi
1007433b:	8b e9                	mov    ebp,ecx
1007433d:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10074340:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10074343:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10074346:	68 73 4b 18 ff       	push   0xff184b73
1007434b:	6a 00                	push   0x0
1007434d:	50                   	push   eax
1007434e:	8b 06                	mov    eax,DWORD PTR [esi]
10074350:	51                   	push   ecx
10074351:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10074357:	52                   	push   edx
10074358:	50                   	push   eax
10074359:	e8 12 52 fd ff       	call   0x10049570
1007435e:	8b 1e                	mov    ebx,DWORD PTR [esi]
10074360:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10074363:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10074366:	8b 7d 38             	mov    edi,DWORD PTR [ebp+0x38]
10074369:	8d 54 19 ff          	lea    edx,[ecx+ebx*1-0x1]
1007436d:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10074370:	83 c1 02             	add    ecx,0x2
10074373:	83 e8 04             	sub    eax,0x4
10074376:	33 f6                	xor    esi,esi
10074378:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1007437c:	8b 55 40             	mov    edx,DWORD PTR [ebp+0x40]
1007437f:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
10074383:	85 ff                	test   edi,edi
10074385:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10074389:	7e 76                	jle    0x10074401
1007438b:	83 c2 08             	add    edx,0x8
1007438e:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
10074392:	eb 08                	jmp    0x1007439c
10074394:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10074398:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1007439c:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
100743a0:	8b 7a fc             	mov    edi,DWORD PTR [edx-0x4]
100743a3:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100743a7:	3b da                	cmp    ebx,edx
100743a9:	7d 56                	jge    0x10074401
100743ab:	8d 14 1f             	lea    edx,[edi+ebx*1]
100743ae:	3b 54 24 10          	cmp    edx,DWORD PTR [esp+0x10]
100743b2:	7c 06                	jl     0x100743ba
100743b4:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
100743b8:	2b fb                	sub    edi,ebx
100743ba:	39 75 34             	cmp    DWORD PTR [ebp+0x34],esi
100743bd:	75 0d                	jne    0x100743cc
100743bf:	f6 45 30 01          	test   BYTE PTR [ebp+0x30],0x1
100743c3:	74 07                	je     0x100743cc
100743c5:	ba 00 ff 00 ff       	mov    edx,0xff00ff00
100743ca:	eb 03                	jmp    0x100743cf
100743cc:	83 ca ff             	or     edx,0xffffffff
100743cf:	6a 04                	push   0x4
100743d1:	52                   	push   edx
100743d2:	8b 55 44             	mov    edx,DWORD PTR [ebp+0x44]
100743d5:	50                   	push   eax
100743d6:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
100743da:	57                   	push   edi
100743db:	51                   	push   ecx
100743dc:	53                   	push   ebx
100743dd:	8b 08                	mov    ecx,DWORD PTR [eax]
100743df:	51                   	push   ecx
100743e0:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100743e6:	52                   	push   edx
100743e7:	e8 14 5d fd ff       	call   0x1004a100
100743ec:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
100743f0:	8b 45 38             	mov    eax,DWORD PTR [ebp+0x38]
100743f3:	46                   	inc    esi
100743f4:	83 c2 10             	add    edx,0x10
100743f7:	03 df                	add    ebx,edi
100743f9:	3b f0                	cmp    esi,eax
100743fb:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
100743ff:	7c 93                	jl     0x10074394
10074401:	5f                   	pop    edi
10074402:	5e                   	pop    esi
10074403:	5d                   	pop    ebp
10074404:	5b                   	pop    ebx
10074405:	83 c4 14             	add    esp,0x14
10074408:	c2 08 00             	ret    0x8
1007440b:	90                   	nop
1007440c:	90                   	nop
1007440d:	90                   	nop
1007440e:	90                   	nop
1007440f:	90                   	nop
10074410:	83 ec 10             	sub    esp,0x10
10074413:	8d 44 24 00          	lea    eax,[esp+0x0]
10074417:	53                   	push   ebx
10074418:	56                   	push   esi
10074419:	57                   	push   edi
1007441a:	8b f9                	mov    edi,ecx
1007441c:	50                   	push   eax
1007441d:	e8 9e a2 ff ff       	call   0x1006e6c0
10074422:	8b 5c 24 24          	mov    ebx,DWORD PTR [esp+0x24]
10074426:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
1007442a:	3b de                	cmp    ebx,esi
1007442c:	7c 3a                	jl     0x10074468
1007442e:	8b 57 38             	mov    edx,DWORD PTR [edi+0x38]
10074431:	8b 4f 40             	mov    ecx,DWORD PTR [edi+0x40]
10074434:	33 c0                	xor    eax,eax
10074436:	85 d2                	test   edx,edx
10074438:	7e 2e                	jle    0x10074468
1007443a:	83 c1 04             	add    ecx,0x4
1007443d:	03 31                	add    esi,DWORD PTR [ecx]
1007443f:	3b de                	cmp    ebx,esi
10074441:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
10074445:	7c 11                	jl     0x10074458
10074447:	40                   	inc    eax
10074448:	83 c1 10             	add    ecx,0x10
1007444b:	3b c2                	cmp    eax,edx
1007444d:	7c ee                	jl     0x1007443d
1007444f:	5f                   	pop    edi
10074450:	5e                   	pop    esi
10074451:	5b                   	pop    ebx
10074452:	83 c4 10             	add    esp,0x10
10074455:	c2 0c 00             	ret    0xc
10074458:	83 f8 ff             	cmp    eax,0xffffffff
1007445b:	74 0b                	je     0x10074468
1007445d:	89 47 34             	mov    DWORD PTR [edi+0x34],eax
10074460:	8b 47 30             	mov    eax,DWORD PTR [edi+0x30]
10074463:	0c 01                	or     al,0x1
10074465:	89 47 30             	mov    DWORD PTR [edi+0x30],eax
10074468:	5f                   	pop    edi
10074469:	5e                   	pop    esi
1007446a:	5b                   	pop    ebx
1007446b:	83 c4 10             	add    esp,0x10
1007446e:	c2 0c 00             	ret    0xc
10074471:	90                   	nop
10074472:	90                   	nop
10074473:	90                   	nop
10074474:	90                   	nop
10074475:	90                   	nop
10074476:	90                   	nop
10074477:	90                   	nop
10074478:	90                   	nop
10074479:	90                   	nop
1007447a:	90                   	nop
1007447b:	90                   	nop
1007447c:	90                   	nop
1007447d:	90                   	nop
1007447e:	90                   	nop
1007447f:	90                   	nop
10074480:	56                   	push   esi
10074481:	8b f1                	mov    esi,ecx
10074483:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10074486:	a8 01                	test   al,0x1
10074488:	74 1e                	je     0x100744a8
1007448a:	24 fe                	and    al,0xfe
1007448c:	6a 1c                	push   0x1c
1007448e:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10074491:	e8 aa 8d fc ff       	call   0x1003d240
10074496:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10074499:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
1007449c:	83 c4 04             	add    esp,0x4
1007449f:	50                   	push   eax
100744a0:	51                   	push   ecx
100744a1:	8b ce                	mov    ecx,esi
100744a3:	e8 78 a4 ff ff       	call   0x1006e920
100744a8:	c7 46 34 ff ff ff ff 	mov    DWORD PTR [esi+0x34],0xffffffff
100744af:	5e                   	pop    esi
100744b0:	c2 0c 00             	ret    0xc
100744b3:	90                   	nop
100744b4:	90                   	nop
100744b5:	90                   	nop
100744b6:	90                   	nop
100744b7:	90                   	nop
100744b8:	90                   	nop
100744b9:	90                   	nop
100744ba:	90                   	nop
100744bb:	90                   	nop
100744bc:	90                   	nop
100744bd:	90                   	nop
100744be:	90                   	nop
100744bf:	90                   	nop
100744c0:	83 ec 10             	sub    esp,0x10
100744c3:	57                   	push   edi
100744c4:	8b f9                	mov    edi,ecx
100744c6:	83 7f 34 ff          	cmp    DWORD PTR [edi+0x34],0xffffffff
100744ca:	74 6d                	je     0x10074539
100744cc:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
100744d2:	e8 39 76 fc ff       	call   0x1003bb10
100744d7:	3b c7                	cmp    eax,edi
100744d9:	75 56                	jne    0x10074531
100744db:	53                   	push   ebx
100744dc:	8d 44 24 08          	lea    eax,[esp+0x8]
100744e0:	56                   	push   esi
100744e1:	50                   	push   eax
100744e2:	8b cf                	mov    ecx,edi
100744e4:	e8 d7 a1 ff ff       	call   0x1006e6c0
100744e9:	8b 5c 24 24          	mov    ebx,DWORD PTR [esp+0x24]
100744ed:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
100744f1:	3b de                	cmp    ebx,esi
100744f3:	7c 21                	jl     0x10074516
100744f5:	8b 57 38             	mov    edx,DWORD PTR [edi+0x38]
100744f8:	8b 4f 40             	mov    ecx,DWORD PTR [edi+0x40]
100744fb:	33 c0                	xor    eax,eax
100744fd:	85 d2                	test   edx,edx
100744ff:	7e 15                	jle    0x10074516
10074501:	83 c1 04             	add    ecx,0x4
10074504:	03 31                	add    esi,DWORD PTR [ecx]
10074506:	3b de                	cmp    ebx,esi
10074508:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
1007450c:	7c 0b                	jl     0x10074519
1007450e:	40                   	inc    eax
1007450f:	83 c1 10             	add    ecx,0x10
10074512:	3b c2                	cmp    eax,edx
10074514:	7c ee                	jl     0x10074504
10074516:	83 c8 ff             	or     eax,0xffffffff
10074519:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
1007451c:	5e                   	pop    esi
1007451d:	3b c1                	cmp    eax,ecx
1007451f:	5b                   	pop    ebx
10074520:	75 0f                	jne    0x10074531
10074522:	8b 47 30             	mov    eax,DWORD PTR [edi+0x30]
10074525:	0c 01                	or     al,0x1
10074527:	89 47 30             	mov    DWORD PTR [edi+0x30],eax
1007452a:	5f                   	pop    edi
1007452b:	83 c4 10             	add    esp,0x10
1007452e:	c2 0c 00             	ret    0xc
10074531:	8b 47 30             	mov    eax,DWORD PTR [edi+0x30]
10074534:	24 fe                	and    al,0xfe
10074536:	89 47 30             	mov    DWORD PTR [edi+0x30],eax
10074539:	5f                   	pop    edi
1007453a:	83 c4 10             	add    esp,0x10
1007453d:	c2 0c 00             	ret    0xc
10074540:	8b 41 30             	mov    eax,DWORD PTR [ecx+0x30]
10074543:	24 fe                	and    al,0xfe
10074545:	89 41 30             	mov    DWORD PTR [ecx+0x30],eax
10074548:	c3                   	ret
10074549:	90                   	nop
1007454a:	90                   	nop
1007454b:	90                   	nop
1007454c:	90                   	nop
1007454d:	90                   	nop
1007454e:	90                   	nop
1007454f:	90                   	nop
10074550:	56                   	push   esi
10074551:	8b f1                	mov    esi,ecx
10074553:	e8 18 00 00 00       	call   0x10074570
10074558:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1007455d:	74 09                	je     0x10074568
1007455f:	56                   	push   esi
10074560:	e8 b9 f3 02 00       	call   0x100a391e
10074565:	83 c4 04             	add    esp,0x4
10074568:	8b c6                	mov    eax,esi
1007456a:	5e                   	pop    esi
1007456b:	c2 04 00             	ret    0x4
1007456e:	90                   	nop
1007456f:	90                   	nop
10074570:	6a ff                	push   0xffffffff
10074572:	68 08 64 0b 10       	push   0x100b6408
10074577:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1007457d:	50                   	push   eax
1007457e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10074585:	51                   	push   ecx
10074586:	56                   	push   esi
10074587:	8b f1                	mov    esi,ecx
10074589:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
1007458d:	c7 06 1c c4 0b 10    	mov    DWORD PTR [esi],0x100bc41c
10074593:	8b 46 48             	mov    eax,DWORD PTR [esi+0x48]
10074596:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1007459d:	00 
1007459e:	85 c0                	test   eax,eax
100745a0:	74 09                	je     0x100745ab
100745a2:	50                   	push   eax
100745a3:	e8 76 f3 02 00       	call   0x100a391e
100745a8:	83 c4 04             	add    esp,0x4
100745ab:	8b ce                	mov    ecx,esi
100745ad:	c7 46 48 00 00 00 00 	mov    DWORD PTR [esi+0x48],0x0
100745b4:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
100745bb:	ff 
100745bc:	e8 5f 9f ff ff       	call   0x1006e520
100745c1:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100745c5:	5e                   	pop    esi
100745c6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100745cd:	83 c4 10             	add    esp,0x10
100745d0:	c3                   	ret
100745d1:	90                   	nop
100745d2:	90                   	nop
100745d3:	90                   	nop
100745d4:	90                   	nop
100745d5:	90                   	nop
100745d6:	90                   	nop
100745d7:	90                   	nop
100745d8:	90                   	nop
100745d9:	90                   	nop
100745da:	90                   	nop
100745db:	90                   	nop
100745dc:	90                   	nop
100745dd:	90                   	nop
100745de:	90                   	nop
100745df:	90                   	nop
100745e0:	83 ec 20             	sub    esp,0x20
100745e3:	53                   	push   ebx
100745e4:	55                   	push   ebp
100745e5:	8b 6c 24 30          	mov    ebp,DWORD PTR [esp+0x30]
100745e9:	56                   	push   esi
100745ea:	57                   	push   edi
100745eb:	8b f9                	mov    edi,ecx
100745ed:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100745f0:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100745f3:	8b 55 04             	mov    edx,DWORD PTR [ebp+0x4]
100745f6:	68 9e 72 33 ff       	push   0xff33729e
100745fb:	6a 00                	push   0x0
100745fd:	50                   	push   eax
100745fe:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
10074601:	51                   	push   ecx
10074602:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10074608:	52                   	push   edx
10074609:	50                   	push   eax
1007460a:	e8 61 4f fd ff       	call   0x10049570
1007460f:	8b 4f 30             	mov    ecx,DWORD PTR [edi+0x30]
10074612:	8b 47 3c             	mov    eax,DWORD PTR [edi+0x3c]
10074615:	8b 77 40             	mov    esi,DWORD PTR [edi+0x40]
10074618:	8b 51 38             	mov    edx,DWORD PTR [ecx+0x38]
1007461b:	8b 4f 44             	mov    ecx,DWORD PTR [edi+0x44]
1007461e:	2b c6                	sub    eax,esi
10074620:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
10074624:	3b c8                	cmp    ecx,eax
10074626:	8b d1                	mov    edx,ecx
10074628:	7c 02                	jl     0x1007462c
1007462a:	8b d0                	mov    edx,eax
1007462c:	83 fa 40             	cmp    edx,0x40
1007462f:	7d 10                	jge    0x10074641
10074631:	3b c8                	cmp    ecx,eax
10074633:	7d 06                	jge    0x1007463b
10074635:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10074639:	eb 0e                	jmp    0x10074649
1007463b:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1007463f:	eb 08                	jmp    0x10074649
10074641:	c7 44 24 10 40 00 00 	mov    DWORD PTR [esp+0x10],0x40
10074648:	00 
10074649:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
1007464c:	8b 47 4c             	mov    eax,DWORD PTR [edi+0x4c]
1007464f:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
10074653:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10074657:	33 db                	xor    ebx,ebx
10074659:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1007465d:	85 c9                	test   ecx,ecx
1007465f:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
10074663:	0f 8e d2 01 00 00    	jle    0x1007483b
10074669:	8b 57 30             	mov    edx,DWORD PTR [edi+0x30]
1007466c:	8b 72 38             	mov    esi,DWORD PTR [edx+0x38]
1007466f:	8b 57 48             	mov    edx,DWORD PTR [edi+0x48]
10074672:	0f af f3             	imul   esi,ebx
10074675:	c1 e6 04             	shl    esi,0x4
10074678:	03 f2                	add    esi,edx
1007467a:	f6 06 01             	test   BYTE PTR [esi],0x1
1007467d:	74 20                	je     0x1007469f
1007467f:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10074683:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
10074686:	68 b4 8f 45 ff       	push   0xff458fb4
1007468b:	6a 00                	push   0x0
1007468d:	50                   	push   eax
1007468e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10074691:	50                   	push   eax
10074692:	51                   	push   ecx
10074693:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10074699:	52                   	push   edx
1007469a:	e8 d1 4e fd ff       	call   0x10049570
1007469f:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
100746a2:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
100746a6:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100746aa:	85 c0                	test   eax,eax
100746ac:	0f 8e 6a 01 00 00    	jle    0x1007481c
100746b2:	8b c8                	mov    ecx,eax
100746b4:	33 db                	xor    ebx,ebx
100746b6:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
100746ba:	8b 57 30             	mov    edx,DWORD PTR [edi+0x30]
100746bd:	8b 42 40             	mov    eax,DWORD PTR [edx+0x40]
100746c0:	8b 54 18 04          	mov    edx,DWORD PTR [eax+ebx*1+0x4]
100746c4:	03 c3                	add    eax,ebx
100746c6:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
100746ca:	8b 08                	mov    ecx,DWORD PTR [eax]
100746cc:	83 f9 03             	cmp    ecx,0x3
100746cf:	0f 87 20 01 00 00    	ja     0x100747f5
100746d5:	ff 24 8d 48 48 07 10 	jmp    DWORD PTR [ecx*4+0x10074848]
100746dc:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
100746df:	85 c9                	test   ecx,ecx
100746e1:	0f 84 0e 01 00 00    	je     0x100747f5
100746e7:	8b 41 18             	mov    eax,DWORD PTR [ecx+0x18]
100746ea:	99                   	cdq
100746eb:	2b c2                	sub    eax,edx
100746ed:	8b e8                	mov    ebp,eax
100746ef:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
100746f3:	99                   	cdq
100746f4:	2b c2                	sub    eax,edx
100746f6:	d1 fd                	sar    ebp,1
100746f8:	d1 f8                	sar    eax,1
100746fa:	2b c5                	sub    eax,ebp
100746fc:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
10074700:	03 c5                	add    eax,ebp
10074702:	50                   	push   eax
10074703:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
10074706:	99                   	cdq
10074707:	2b c2                	sub    eax,edx
10074709:	8b e8                	mov    ebp,eax
1007470b:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1007470f:	99                   	cdq
10074710:	2b c2                	sub    eax,edx
10074712:	d1 fd                	sar    ebp,1
10074714:	d1 f8                	sar    eax,1
10074716:	2b c5                	sub    eax,ebp
10074718:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
1007471c:	03 c5                	add    eax,ebp
1007471e:	50                   	push   eax
1007471f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10074722:	50                   	push   eax
10074723:	6a 00                	push   0x0
10074725:	51                   	push   ecx
10074726:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1007472c:	e8 bf 6d fd ff       	call   0x1004b4f0
10074731:	8b 6c 24 38          	mov    ebp,DWORD PTR [esp+0x38]
10074735:	e9 bb 00 00 00       	jmp    0x100747f5
1007473a:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1007473d:	85 c9                	test   ecx,ecx
1007473f:	0f 84 b0 00 00 00    	je     0x100747f5
10074745:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10074748:	6a 14                	push   0x14
1007474a:	50                   	push   eax
1007474b:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
1007474f:	50                   	push   eax
10074750:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
10074755:	8d 2c c5 00 00 00 00 	lea    ebp,[eax*8+0x0]
1007475c:	c1 ed 0a             	shr    ebp,0xa
1007475f:	2b d5                	sub    edx,ebp
10074761:	52                   	push   edx
10074762:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
10074766:	c1 e0 02             	shl    eax,0x2
10074769:	52                   	push   edx
1007476a:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
1007476e:	c1 e8 0a             	shr    eax,0xa
10074771:	03 c2                	add    eax,edx
10074773:	50                   	push   eax
10074774:	51                   	push   ecx
10074775:	8b 4f 38             	mov    ecx,DWORD PTR [edi+0x38]
10074778:	51                   	push   ecx
10074779:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
1007477f:	e8 7c 59 fd ff       	call   0x1004a100
10074784:	8b 6c 24 38          	mov    ebp,DWORD PTR [esp+0x38]
10074788:	eb 6b                	jmp    0x100747f5
1007478a:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1007478d:	85 c0                	test   eax,eax
1007478f:	74 64                	je     0x100747f5
10074791:	a1 2c c9 11 10       	mov    eax,ds:0x1011c92c
10074796:	99                   	cdq
10074797:	2b c2                	sub    eax,edx
10074799:	8b c8                	mov    ecx,eax
1007479b:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1007479f:	99                   	cdq
100747a0:	2b c2                	sub    eax,edx
100747a2:	d1 f9                	sar    ecx,1
100747a4:	d1 f8                	sar    eax,1
100747a6:	2b c1                	sub    eax,ecx
100747a8:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
100747ac:	03 c1                	add    eax,ecx
100747ae:	50                   	push   eax
100747af:	a1 28 c9 11 10       	mov    eax,ds:0x1011c928
100747b4:	99                   	cdq
100747b5:	2b c2                	sub    eax,edx
100747b7:	8b c8                	mov    ecx,eax
100747b9:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
100747bd:	99                   	cdq
100747be:	2b c2                	sub    eax,edx
100747c0:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
100747c4:	d1 f9                	sar    ecx,1
100747c6:	d1 f8                	sar    eax,1
100747c8:	2b c1                	sub    eax,ecx
100747ca:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
100747d0:	03 c2                	add    eax,edx
100747d2:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100747d5:	50                   	push   eax
100747d6:	52                   	push   edx
100747d7:	6a 00                	push   0x0
100747d9:	68 14 c9 11 10       	push   0x1011c914
100747de:	e8 0d 6d fd ff       	call   0x1004b4f0
100747e3:	eb 10                	jmp    0x100747f5
100747e5:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
100747e8:	8d 54 24 20          	lea    edx,[esp+0x20]
100747ec:	51                   	push   ecx
100747ed:	56                   	push   esi
100747ee:	52                   	push   edx
100747ef:	ff 50 0c             	call   DWORD PTR [eax+0xc]
100747f2:	83 c4 0c             	add    esp,0xc
100747f5:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
100747f9:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
100747fd:	03 d0                	add    edx,eax
100747ff:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10074803:	83 c3 10             	add    ebx,0x10
10074806:	83 c6 10             	add    esi,0x10
10074809:	48                   	dec    eax
1007480a:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
1007480e:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10074812:	0f 85 a2 fe ff ff    	jne    0x100746ba
10074818:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
1007481c:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10074820:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
10074824:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10074828:	43                   	inc    ebx
10074829:	03 d0                	add    edx,eax
1007482b:	3b d9                	cmp    ebx,ecx
1007482d:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
10074831:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
10074835:	0f 8c 2e fe ff ff    	jl     0x10074669
1007483b:	5f                   	pop    edi
1007483c:	5e                   	pop    esi
1007483d:	5d                   	pop    ebp
1007483e:	5b                   	pop    ebx
1007483f:	83 c4 20             	add    esp,0x20
10074842:	c2 08 00             	ret    0x8
10074845:	8d 49 00             	lea    ecx,[ecx+0x0]
10074848:	dc 46 07             	fadd   QWORD PTR [esi+0x7]
1007484b:	10 3a                	adc    BYTE PTR [edx],bh
1007484d:	47                   	inc    edi
1007484e:	07                   	pop    es
1007484f:	10 8a 47 07 10 e5    	adc    BYTE PTR [edx-0x1aeff8b9],cl
10074855:	47                   	inc    edi
10074856:	07                   	pop    es
10074857:	10 90 90 90 90 90    	adc    BYTE PTR [eax-0x6f6f6f70],dl
1007485d:	90                   	nop
1007485e:	90                   	nop
1007485f:	90                   	nop
10074860:	56                   	push   esi
10074861:	8b 71 4c             	mov    esi,DWORD PTR [ecx+0x4c]
10074864:	85 f6                	test   esi,esi
10074866:	74 11                	je     0x10074879
10074868:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1007486c:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
1007486f:	99                   	cdq
10074870:	f7 fe                	idiv   esi
10074872:	5e                   	pop    esi
10074873:	89 41 44             	mov    DWORD PTR [ecx+0x44],eax
10074876:	c2 04 00             	ret    0x4
10074879:	33 c0                	xor    eax,eax
1007487b:	5e                   	pop    esi
1007487c:	89 41 44             	mov    DWORD PTR [ecx+0x44],eax
1007487f:	c2 04 00             	ret    0x4
10074882:	90                   	nop
10074883:	90                   	nop
10074884:	90                   	nop
10074885:	90                   	nop
10074886:	90                   	nop
10074887:	90                   	nop
10074888:	90                   	nop
10074889:	90                   	nop
1007488a:	90                   	nop
1007488b:	90                   	nop
1007488c:	90                   	nop
1007488d:	90                   	nop
1007488e:	90                   	nop
1007488f:	90                   	nop
10074890:	83 ec 2c             	sub    esp,0x2c
10074893:	8d 44 24 00          	lea    eax,[esp+0x0]
10074897:	53                   	push   ebx
10074898:	55                   	push   ebp
10074899:	56                   	push   esi
1007489a:	57                   	push   edi
1007489b:	8b d9                	mov    ebx,ecx
1007489d:	50                   	push   eax
1007489e:	e8 1d 9e ff ff       	call   0x1006e6c0
100748a3:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
100748a7:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100748ab:	3b ea                	cmp    ebp,edx
100748ad:	7c 7f                	jl     0x1007492e
100748af:	8b 4b 4c             	mov    ecx,DWORD PTR [ebx+0x4c]
100748b2:	85 c9                	test   ecx,ecx
100748b4:	74 78                	je     0x1007492e
100748b6:	8b c5                	mov    eax,ebp
100748b8:	8b 73 40             	mov    esi,DWORD PTR [ebx+0x40]
100748bb:	2b c2                	sub    eax,edx
100748bd:	99                   	cdq
100748be:	f7 f9                	idiv   ecx
100748c0:	8b 4b 3c             	mov    ecx,DWORD PTR [ebx+0x3c]
100748c3:	8b 53 44             	mov    edx,DWORD PTR [ebx+0x44]
100748c6:	2b ce                	sub    ecx,esi
100748c8:	8b fa                	mov    edi,edx
100748ca:	3b d1                	cmp    edx,ecx
100748cc:	7c 02                	jl     0x100748d0
100748ce:	8b f9                	mov    edi,ecx
100748d0:	83 ff 40             	cmp    edi,0x40
100748d3:	7d 08                	jge    0x100748dd
100748d5:	3b d1                	cmp    edx,ecx
100748d7:	7d 09                	jge    0x100748e2
100748d9:	8b ca                	mov    ecx,edx
100748db:	eb 05                	jmp    0x100748e2
100748dd:	b9 40 00 00 00       	mov    ecx,0x40
100748e2:	3b c1                	cmp    eax,ecx
100748e4:	7d 48                	jge    0x1007492e
100748e6:	03 c6                	add    eax,esi
100748e8:	83 f8 ff             	cmp    eax,0xffffffff
100748eb:	74 41                	je     0x1007492e
100748ed:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
100748f1:	33 c9                	xor    ecx,ecx
100748f3:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
100748f7:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
100748fb:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
100748ff:	8d 74 24 10          	lea    esi,[esp+0x10]
10074903:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
10074907:	b9 05 00 00 00       	mov    ecx,0x5
1007490c:	8d 7c 24 28          	lea    edi,[esp+0x28]
10074910:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10074914:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
10074918:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
1007491c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1007491e:	8b 4b 2c             	mov    ecx,DWORD PTR [ebx+0x2c]
10074921:	8d 44 24 24          	lea    eax,[esp+0x24]
10074925:	50                   	push   eax
10074926:	51                   	push   ecx
10074927:	8b cb                	mov    ecx,ebx
10074929:	e8 f2 9f ff ff       	call   0x1006e920
1007492e:	5f                   	pop    edi
1007492f:	5e                   	pop    esi
10074930:	5d                   	pop    ebp
10074931:	5b                   	pop    ebx
10074932:	83 c4 2c             	add    esp,0x2c
10074935:	c2 0c 00             	ret    0xc
10074938:	90                   	nop
10074939:	90                   	nop
1007493a:	90                   	nop
1007493b:	90                   	nop
1007493c:	90                   	nop
1007493d:	90                   	nop
1007493e:	90                   	nop
1007493f:	90                   	nop
10074940:	83 ec 2c             	sub    esp,0x2c
10074943:	8d 44 24 00          	lea    eax,[esp+0x0]
10074947:	53                   	push   ebx
10074948:	55                   	push   ebp
10074949:	56                   	push   esi
1007494a:	57                   	push   edi
1007494b:	8b d9                	mov    ebx,ecx
1007494d:	50                   	push   eax
1007494e:	e8 6d 9d ff ff       	call   0x1006e6c0
10074953:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
10074957:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1007495b:	3b ea                	cmp    ebp,edx
1007495d:	7d 05                	jge    0x10074964
1007495f:	83 c8 ff             	or     eax,0xffffffff
10074962:	eb 43                	jmp    0x100749a7
10074964:	8b 4b 4c             	mov    ecx,DWORD PTR [ebx+0x4c]
10074967:	85 c9                	test   ecx,ecx
10074969:	75 05                	jne    0x10074970
1007496b:	83 c8 ff             	or     eax,0xffffffff
1007496e:	eb 37                	jmp    0x100749a7
10074970:	8b c5                	mov    eax,ebp
10074972:	8b 73 40             	mov    esi,DWORD PTR [ebx+0x40]
10074975:	2b c2                	sub    eax,edx
10074977:	99                   	cdq
10074978:	f7 f9                	idiv   ecx
1007497a:	8b 4b 3c             	mov    ecx,DWORD PTR [ebx+0x3c]
1007497d:	8b 53 44             	mov    edx,DWORD PTR [ebx+0x44]
10074980:	2b ce                	sub    ecx,esi
10074982:	8b fa                	mov    edi,edx
10074984:	3b d1                	cmp    edx,ecx
10074986:	7c 02                	jl     0x1007498a
10074988:	8b f9                	mov    edi,ecx
1007498a:	83 ff 40             	cmp    edi,0x40
1007498d:	7d 08                	jge    0x10074997
1007498f:	3b d1                	cmp    edx,ecx
10074991:	7d 09                	jge    0x1007499c
10074993:	8b ca                	mov    ecx,edx
10074995:	eb 05                	jmp    0x1007499c
10074997:	b9 40 00 00 00       	mov    ecx,0x40
1007499c:	3b c1                	cmp    eax,ecx
1007499e:	7c 05                	jl     0x100749a5
100749a0:	83 c8 ff             	or     eax,0xffffffff
100749a3:	eb 02                	jmp    0x100749a7
100749a5:	03 c6                	add    eax,esi
100749a7:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
100749ab:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
100749af:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
100749b3:	b9 05 00 00 00       	mov    ecx,0x5
100749b8:	8d 74 24 10          	lea    esi,[esp+0x10]
100749bc:	8d 7c 24 28          	lea    edi,[esp+0x28]
100749c0:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
100749c7:	00 
100749c8:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
100749cf:	00 
100749d0:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
100749d4:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
100749d8:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
100749dc:	8d 44 24 24          	lea    eax,[esp+0x24]
100749e0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100749e2:	8b 4b 2c             	mov    ecx,DWORD PTR [ebx+0x2c]
100749e5:	50                   	push   eax
100749e6:	51                   	push   ecx
100749e7:	8b cb                	mov    ecx,ebx
100749e9:	e8 32 9f ff ff       	call   0x1006e920
100749ee:	5f                   	pop    edi
100749ef:	5e                   	pop    esi
100749f0:	5d                   	pop    ebp
100749f1:	5b                   	pop    ebx
100749f2:	83 c4 2c             	add    esp,0x2c
100749f5:	c2 0c 00             	ret    0xc
100749f8:	90                   	nop
100749f9:	90                   	nop
100749fa:	90                   	nop
100749fb:	90                   	nop
100749fc:	90                   	nop
100749fd:	90                   	nop
100749fe:	90                   	nop
100749ff:	90                   	nop
10074a00:	83 ec 18             	sub    esp,0x18
10074a03:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10074a07:	8d 54 24 00          	lea    edx,[esp+0x0]
10074a0b:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
10074a0f:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
10074a12:	52                   	push   edx
10074a13:	50                   	push   eax
10074a14:	c7 44 24 08 01 00 00 	mov    DWORD PTR [esp+0x8],0x1
10074a1b:	00 
10074a1c:	e8 ff 9e ff ff       	call   0x1006e920
10074a21:	83 c4 18             	add    esp,0x18
10074a24:	c2 10 00             	ret    0x10
10074a27:	90                   	nop
10074a28:	90                   	nop
10074a29:	90                   	nop
10074a2a:	90                   	nop
10074a2b:	90                   	nop
10074a2c:	90                   	nop
10074a2d:	90                   	nop
10074a2e:	90                   	nop
10074a2f:	90                   	nop
10074a30:	6a ff                	push   0xffffffff
10074a32:	68 59 64 0b 10       	push   0x100b6459
10074a37:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10074a3d:	50                   	push   eax
10074a3e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10074a45:	51                   	push   ecx
10074a46:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10074a4a:	53                   	push   ebx
10074a4b:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
10074a4f:	55                   	push   ebp
10074a50:	56                   	push   esi
10074a51:	8b f1                	mov    esi,ecx
10074a53:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
10074a57:	57                   	push   edi
10074a58:	0c 04                	or     al,0x4
10074a5a:	53                   	push   ebx
10074a5b:	50                   	push   eax
10074a5c:	51                   	push   ecx
10074a5d:	8b ce                	mov    ecx,esi
10074a5f:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
10074a63:	e8 18 99 ff ff       	call   0x1006e380
10074a68:	33 ed                	xor    ebp,ebp
10074a6a:	6a 01                	push   0x1
10074a6c:	6a 01                	push   0x1
10074a6e:	8d 4e 2c             	lea    ecx,[esi+0x2c]
10074a71:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
10074a75:	e8 86 44 fd ff       	call   0x10048f00
10074a7a:	8d 46 34             	lea    eax,[esi+0x34]
10074a7d:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
10074a81:	33 d2                	xor    edx,edx
10074a83:	c7 06 8c c4 0b 10    	mov    DWORD PTR [esi],0x100bc48c
10074a89:	89 10                	mov    DWORD PTR [eax],edx
10074a8b:	6a 48                	push   0x48
10074a8d:	c7 44 24 20 01 00 00 	mov    DWORD PTR [esp+0x20],0x1
10074a94:	00 
10074a95:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
10074a98:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
10074a9b:	89 4e 40             	mov    DWORD PTR [esi+0x40],ecx
10074a9e:	89 6e 44             	mov    DWORD PTR [esi+0x44],ebp
10074aa1:	e8 83 ee 02 00       	call   0x100a3929
10074aa6:	8b f8                	mov    edi,eax
10074aa8:	83 c4 04             	add    esp,0x4
10074aab:	89 7c 24 28          	mov    DWORD PTR [esp+0x28],edi
10074aaf:	3b fd                	cmp    edi,ebp
10074ab1:	c6 44 24 1c 02       	mov    BYTE PTR [esp+0x1c],0x2
10074ab6:	74 32                	je     0x10074aea
10074ab8:	55                   	push   ebp
10074ab9:	6a 05                	push   0x5
10074abb:	56                   	push   esi
10074abc:	8b cf                	mov    ecx,edi
10074abe:	e8 bd 98 ff ff       	call   0x1006e380
10074ac3:	c7 07 ac c3 0b 10    	mov    DWORD PTR [edi],0x100bc3ac
10074ac9:	89 6f 2c             	mov    DWORD PTR [edi+0x2c],ebp
10074acc:	89 6f 30             	mov    DWORD PTR [edi+0x30],ebp
10074acf:	c7 47 34 ff ff ff ff 	mov    DWORD PTR [edi+0x34],0xffffffff
10074ad6:	89 6f 38             	mov    DWORD PTR [edi+0x38],ebp
10074ad9:	89 6f 40             	mov    DWORD PTR [edi+0x40],ebp
10074adc:	89 6f 3c             	mov    DWORD PTR [edi+0x3c],ebp
10074adf:	8b 15 ec b6 0d 10    	mov    edx,DWORD PTR ds:0x100db6ec
10074ae5:	89 57 44             	mov    DWORD PTR [edi+0x44],edx
10074ae8:	eb 02                	jmp    0x10074aec
10074aea:	33 ff                	xor    edi,edi
10074aec:	6a 50                	push   0x50
10074aee:	c6 44 24 20 01       	mov    BYTE PTR [esp+0x20],0x1
10074af3:	89 7e 48             	mov    DWORD PTR [esi+0x48],edi
10074af6:	e8 2e ee 02 00       	call   0x100a3929
10074afb:	8b f8                	mov    edi,eax
10074afd:	83 c4 04             	add    esp,0x4
10074b00:	89 7c 24 28          	mov    DWORD PTR [esp+0x28],edi
10074b04:	3b fd                	cmp    edi,ebp
10074b06:	c6 44 24 1c 03       	mov    BYTE PTR [esp+0x1c],0x3
10074b0b:	74 4e                	je     0x10074b5b
10074b0d:	8b 5e 48             	mov    ebx,DWORD PTR [esi+0x48]
10074b10:	55                   	push   ebp
10074b11:	6a 01                	push   0x1
10074b13:	56                   	push   esi
10074b14:	8b cf                	mov    ecx,edi
10074b16:	e8 65 98 ff ff       	call   0x1006e380
10074b1b:	c7 07 1c c4 0b 10    	mov    DWORD PTR [edi],0x100bc41c
10074b21:	c7 47 2c 01 00 00 00 	mov    DWORD PTR [edi+0x2c],0x1
10074b28:	89 5f 30             	mov    DWORD PTR [edi+0x30],ebx
10074b2b:	89 6f 34             	mov    DWORD PTR [edi+0x34],ebp
10074b2e:	a1 ec b6 0d 10       	mov    eax,ds:0x100db6ec
10074b33:	89 6f 3c             	mov    DWORD PTR [edi+0x3c],ebp
10074b36:	89 47 38             	mov    DWORD PTR [edi+0x38],eax
10074b39:	89 6f 40             	mov    DWORD PTR [edi+0x40],ebp
10074b3c:	89 6f 44             	mov    DWORD PTR [edi+0x44],ebp
10074b3f:	89 6f 48             	mov    DWORD PTR [edi+0x48],ebp
10074b42:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10074b48:	c6 44 24 1c 04       	mov    BYTE PTR [esp+0x1c],0x4
10074b4d:	e8 1e 87 fd ff       	call   0x1004d270
10074b52:	8b 5c 24 2c          	mov    ebx,DWORD PTR [esp+0x2c]
10074b56:	89 47 4c             	mov    DWORD PTR [edi+0x4c],eax
10074b59:	eb 02                	jmp    0x10074b5d
10074b5b:	33 ff                	xor    edi,edi
10074b5d:	68 84 00 00 00       	push   0x84
10074b62:	c6 44 24 20 01       	mov    BYTE PTR [esp+0x20],0x1
10074b67:	89 7e 4c             	mov    DWORD PTR [esi+0x4c],edi
10074b6a:	e8 ba ed 02 00       	call   0x100a3929
10074b6f:	83 c4 04             	add    esp,0x4
10074b72:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10074b76:	3b c5                	cmp    eax,ebp
10074b78:	c6 44 24 1c 05       	mov    BYTE PTR [esp+0x1c],0x5
10074b7d:	74 10                	je     0x10074b8f
10074b7f:	6a 02                	push   0x2
10074b81:	55                   	push   ebp
10074b82:	55                   	push   ebp
10074b83:	6a 01                	push   0x1
10074b85:	56                   	push   esi
10074b86:	8b c8                	mov    ecx,eax
10074b88:	e8 93 1c 00 00       	call   0x10076820
10074b8d:	eb 02                	jmp    0x10074b91
10074b8f:	33 c0                	xor    eax,eax
10074b91:	3b dd                	cmp    ebx,ebp
10074b93:	c6 44 24 1c 01       	mov    BYTE PTR [esp+0x1c],0x1
10074b98:	89 46 50             	mov    DWORD PTR [esi+0x50],eax
10074b9b:	74 08                	je     0x10074ba5
10074b9d:	53                   	push   ebx
10074b9e:	8b ce                	mov    ecx,esi
10074ba0:	e8 fb 06 00 00       	call   0x100752a0
10074ba5:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10074ba9:	8b c6                	mov    eax,esi
10074bab:	5f                   	pop    edi
10074bac:	5e                   	pop    esi
10074bad:	5d                   	pop    ebp
10074bae:	5b                   	pop    ebx
10074baf:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10074bb6:	83 c4 10             	add    esp,0x10
10074bb9:	c2 10 00             	ret    0x10
10074bbc:	90                   	nop
10074bbd:	90                   	nop
10074bbe:	90                   	nop
10074bbf:	90                   	nop
10074bc0:	56                   	push   esi
10074bc1:	8b f1                	mov    esi,ecx
10074bc3:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
10074bc6:	e8 b5 9d ff ff       	call   0x1006e980
10074bcb:	8d 46 1c             	lea    eax,[esi+0x1c]
10074bce:	8b ce                	mov    ecx,esi
10074bd0:	50                   	push   eax
10074bd1:	e8 7a 9a ff ff       	call   0x1006e650
10074bd6:	5e                   	pop    esi
10074bd7:	c3                   	ret
10074bd8:	90                   	nop
10074bd9:	90                   	nop
10074bda:	90                   	nop
10074bdb:	90                   	nop
10074bdc:	90                   	nop
10074bdd:	90                   	nop
10074bde:	90                   	nop
10074bdf:	90                   	nop
10074be0:	8b 49 4c             	mov    ecx,DWORD PTR [ecx+0x4c]
10074be3:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10074be7:	8d 51 1c             	lea    edx,[ecx+0x1c]
10074bea:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
10074bed:	52                   	push   edx
10074bee:	e8 5d 9a ff ff       	call   0x1006e650
10074bf3:	c2 04 00             	ret    0x4
10074bf6:	90                   	nop
10074bf7:	90                   	nop
10074bf8:	90                   	nop
10074bf9:	90                   	nop
10074bfa:	90                   	nop
10074bfb:	90                   	nop
10074bfc:	90                   	nop
10074bfd:	90                   	nop
10074bfe:	90                   	nop
10074bff:	90                   	nop
10074c00:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10074c04:	8b 49 4c             	mov    ecx,DWORD PTR [ecx+0x4c]
10074c07:	50                   	push   eax
10074c08:	e8 b3 9a ff ff       	call   0x1006e6c0
10074c0d:	c2 04 00             	ret    0x4
10074c10:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10074c14:	56                   	push   esi
10074c15:	8b f1                	mov    esi,ecx
10074c17:	85 c0                	test   eax,eax
10074c19:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
10074c1c:	74 04                	je     0x10074c22
10074c1e:	0c 01                	or     al,0x1
10074c20:	eb 02                	jmp    0x10074c24
10074c22:	24 fe                	and    al,0xfe
10074c24:	8b ce                	mov    ecx,esi
10074c26:	89 46 44             	mov    DWORD PTR [esi+0x44],eax
10074c29:	e8 22 08 00 00       	call   0x10075450
10074c2e:	85 c0                	test   eax,eax
10074c30:	74 0b                	je     0x10074c3d
10074c32:	8d 46 1c             	lea    eax,[esi+0x1c]
10074c35:	8b ce                	mov    ecx,esi
10074c37:	50                   	push   eax
10074c38:	e8 13 9a ff ff       	call   0x1006e650
10074c3d:	5e                   	pop    esi
10074c3e:	c2 04 00             	ret    0x4
10074c41:	90                   	nop
10074c42:	90                   	nop
10074c43:	90                   	nop
10074c44:	90                   	nop
10074c45:	90                   	nop
10074c46:	90                   	nop
10074c47:	90                   	nop
10074c48:	90                   	nop
10074c49:	90                   	nop
10074c4a:	90                   	nop
10074c4b:	90                   	nop
10074c4c:	90                   	nop
10074c4d:	90                   	nop
10074c4e:	90                   	nop
10074c4f:	90                   	nop
10074c50:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
10074c53:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10074c57:	89 48 34             	mov    DWORD PTR [eax+0x34],ecx
10074c5a:	c2 04 00             	ret    0x4
10074c5d:	90                   	nop
10074c5e:	90                   	nop
10074c5f:	90                   	nop
10074c60:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10074c64:	83 ec 10             	sub    esp,0x10
10074c67:	85 c0                	test   eax,eax
10074c69:	56                   	push   esi
10074c6a:	8b f1                	mov    esi,ecx
10074c6c:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
10074c6f:	75 05                	jne    0x10074c76
10074c71:	a1 ec b6 0d 10       	mov    eax,ds:0x100db6ec
10074c76:	89 41 44             	mov    DWORD PTR [ecx+0x44],eax
10074c79:	8d 44 24 04          	lea    eax,[esp+0x4]
10074c7d:	50                   	push   eax
10074c7e:	8b ce                	mov    ecx,esi
10074c80:	e8 3b 9a ff ff       	call   0x1006e6c0
10074c85:	8d 4c 24 04          	lea    ecx,[esp+0x4]
10074c89:	51                   	push   ecx
10074c8a:	8b ce                	mov    ecx,esi
10074c8c:	e8 0f 06 00 00       	call   0x100752a0
10074c91:	5e                   	pop    esi
10074c92:	83 c4 10             	add    esp,0x10
10074c95:	c2 04 00             	ret    0x4
10074c98:	90                   	nop
10074c99:	90                   	nop
10074c9a:	90                   	nop
10074c9b:	90                   	nop
10074c9c:	90                   	nop
10074c9d:	90                   	nop
10074c9e:	90                   	nop
10074c9f:	90                   	nop
10074ca0:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
10074ca3:	8b 40 38             	mov    eax,DWORD PTR [eax+0x38]
10074ca6:	c3                   	ret
10074ca7:	90                   	nop
10074ca8:	90                   	nop
10074ca9:	90                   	nop
10074caa:	90                   	nop
10074cab:	90                   	nop
10074cac:	90                   	nop
10074cad:	90                   	nop
10074cae:	90                   	nop
10074caf:	90                   	nop
10074cb0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10074cb4:	83 ec 08             	sub    esp,0x8
10074cb7:	56                   	push   esi
10074cb8:	8b f1                	mov    esi,ecx
10074cba:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10074cbe:	57                   	push   edi
10074cbf:	50                   	push   eax
10074cc0:	51                   	push   ecx
10074cc1:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
10074cc4:	e8 77 f5 ff ff       	call   0x10074240
10074cc9:	8b 7e 4c             	mov    edi,DWORD PTR [esi+0x4c]
10074ccc:	8b 47 48             	mov    eax,DWORD PTR [edi+0x48]
10074ccf:	85 c0                	test   eax,eax
10074cd1:	74 09                	je     0x10074cdc
10074cd3:	50                   	push   eax
10074cd4:	e8 45 ec 02 00       	call   0x100a391e
10074cd9:	83 c4 04             	add    esp,0x4
10074cdc:	8b 57 30             	mov    edx,DWORD PTR [edi+0x30]
10074cdf:	c7 47 48 00 00 00 00 	mov    DWORD PTR [edi+0x48],0x0
10074ce6:	8b 42 38             	mov    eax,DWORD PTR [edx+0x38]
10074ce9:	85 c0                	test   eax,eax
10074ceb:	74 0f                	je     0x10074cfc
10074ced:	c1 e0 0a             	shl    eax,0xa
10074cf0:	50                   	push   eax
10074cf1:	e8 33 ec 02 00       	call   0x100a3929
10074cf6:	83 c4 04             	add    esp,0x4
10074cf9:	89 47 48             	mov    DWORD PTR [edi+0x48],eax
10074cfc:	8b 06                	mov    eax,DWORD PTR [esi]
10074cfe:	8b ce                	mov    ecx,esi
10074d00:	ff 50 70             	call   DWORD PTR [eax+0x70]
10074d03:	8b 56 40             	mov    edx,DWORD PTR [esi+0x40]
10074d06:	8d 4c 24 08          	lea    ecx,[esp+0x8]
10074d0a:	51                   	push   ecx
10074d0b:	52                   	push   edx
10074d0c:	8b ce                	mov    ecx,esi
10074d0e:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
10074d15:	00 
10074d16:	e8 05 9c ff ff       	call   0x1006e920
10074d1b:	5f                   	pop    edi
10074d1c:	5e                   	pop    esi
10074d1d:	83 c4 08             	add    esp,0x8
10074d20:	c2 08 00             	ret    0x8
10074d23:	90                   	nop
10074d24:	90                   	nop
10074d25:	90                   	nop
10074d26:	90                   	nop
10074d27:	90                   	nop
10074d28:	90                   	nop
10074d29:	90                   	nop
10074d2a:	90                   	nop
10074d2b:	90                   	nop
10074d2c:	90                   	nop
10074d2d:	90                   	nop
10074d2e:	90                   	nop
10074d2f:	90                   	nop
10074d30:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10074d34:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10074d38:	8b 49 48             	mov    ecx,DWORD PTR [ecx+0x48]
10074d3b:	85 c0                	test   eax,eax
10074d3d:	7c 19                	jl     0x10074d58
10074d3f:	56                   	push   esi
10074d40:	8b 71 38             	mov    esi,DWORD PTR [ecx+0x38]
10074d43:	3b c6                	cmp    eax,esi
10074d45:	5e                   	pop    esi
10074d46:	7d 10                	jge    0x10074d58
10074d48:	85 d2                	test   edx,edx
10074d4a:	7d 02                	jge    0x10074d4e
10074d4c:	33 d2                	xor    edx,edx
10074d4e:	8b 49 40             	mov    ecx,DWORD PTR [ecx+0x40]
10074d51:	c1 e0 04             	shl    eax,0x4
10074d54:	89 54 01 04          	mov    DWORD PTR [ecx+eax*1+0x4],edx
10074d58:	c2 08 00             	ret    0x8
10074d5b:	90                   	nop
10074d5c:	90                   	nop
10074d5d:	90                   	nop
10074d5e:	90                   	nop
10074d5f:	90                   	nop
10074d60:	83 ec 08             	sub    esp,0x8
10074d63:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10074d67:	57                   	push   edi
10074d68:	8b f9                	mov    edi,ecx
10074d6a:	8b 4f 4c             	mov    ecx,DWORD PTR [edi+0x4c]
10074d6d:	8b 51 40             	mov    edx,DWORD PTR [ecx+0x40]
10074d70:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
10074d73:	3b d0                	cmp    edx,eax
10074d75:	7c 07                	jl     0x10074d7e
10074d77:	c7 41 40 00 00 00 00 	mov    DWORD PTR [ecx+0x40],0x0
10074d7e:	33 c9                	xor    ecx,ecx
10074d80:	53                   	push   ebx
10074d81:	85 c0                	test   eax,eax
10074d83:	0f 9c c1             	setl   cl
10074d86:	49                   	dec    ecx
10074d87:	ba 00 00 00 00       	mov    edx,0x0
10074d8c:	23 c8                	and    ecx,eax
10074d8e:	56                   	push   esi
10074d8f:	8b 77 50             	mov    esi,DWORD PTR [edi+0x50]
10074d92:	41                   	inc    ecx
10074d93:	0f 98 c2             	sets   dl
10074d96:	8b 5e 7c             	mov    ebx,DWORD PTR [esi+0x7c]
10074d99:	8b c1                	mov    eax,ecx
10074d9b:	8b 4e 78             	mov    ecx,DWORD PTR [esi+0x78]
10074d9e:	4a                   	dec    edx
10074d9f:	23 c2                	and    eax,edx
10074da1:	8b d1                	mov    edx,ecx
10074da3:	03 d3                	add    edx,ebx
10074da5:	c7 46 70 00 00 00 00 	mov    DWORD PTR [esi+0x70],0x0
10074dac:	3b d0                	cmp    edx,eax
10074dae:	89 46 74             	mov    DWORD PTR [esi+0x74],eax
10074db1:	7e 13                	jle    0x10074dc6
10074db3:	2b c1                	sub    eax,ecx
10074db5:	b9 00 00 00 00       	mov    ecx,0x0
10074dba:	0f 98 c1             	sets   cl
10074dbd:	49                   	dec    ecx
10074dbe:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10074dc1:	23 c1                	and    eax,ecx
10074dc3:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10074dc6:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
10074dc9:	8b 56 7c             	mov    edx,DWORD PTR [esi+0x7c]
10074dcc:	8d 44 24 0c          	lea    eax,[esp+0xc]
10074dd0:	c7 44 24 0c 01 00 00 	mov    DWORD PTR [esp+0xc],0x1
10074dd7:	00 
10074dd8:	50                   	push   eax
10074dd9:	51                   	push   ecx
10074dda:	8b ce                	mov    ecx,esi
10074ddc:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10074de0:	e8 3b 9b ff ff       	call   0x1006e920
10074de5:	8b ce                	mov    ecx,esi
10074de7:	e8 74 27 00 00       	call   0x10077560
10074dec:	8b 4f 4c             	mov    ecx,DWORD PTR [edi+0x4c]
10074def:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
10074df2:	8b 71 40             	mov    esi,DWORD PTR [ecx+0x40]
10074df5:	8b 51 44             	mov    edx,DWORD PTR [ecx+0x44]
10074df8:	2b c6                	sub    eax,esi
10074dfa:	3b d0                	cmp    edx,eax
10074dfc:	8b ca                	mov    ecx,edx
10074dfe:	7c 02                	jl     0x10074e02
10074e00:	8b c8                	mov    ecx,eax
10074e02:	83 f9 40             	cmp    ecx,0x40
10074e05:	7d 08                	jge    0x10074e0f
10074e07:	3b d0                	cmp    edx,eax
10074e09:	7d 09                	jge    0x10074e14
10074e0b:	8b c2                	mov    eax,edx
10074e0d:	eb 05                	jmp    0x10074e14
10074e0f:	b8 40 00 00 00       	mov    eax,0x40
10074e14:	8b 77 50             	mov    esi,DWORD PTR [edi+0x50]
10074e17:	33 d2                	xor    edx,edx
10074e19:	85 c0                	test   eax,eax
10074e1b:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
10074e1e:	0f 9c c2             	setl   dl
10074e21:	4a                   	dec    edx
10074e22:	23 c2                	and    eax,edx
10074e24:	8b 56 7c             	mov    edx,DWORD PTR [esi+0x7c]
10074e27:	03 d0                	add    edx,eax
10074e29:	89 46 78             	mov    DWORD PTR [esi+0x78],eax
10074e2c:	3b d1                	cmp    edx,ecx
10074e2e:	7e 13                	jle    0x10074e43
10074e30:	2b c8                	sub    ecx,eax
10074e32:	b8 00 00 00 00       	mov    eax,0x0
10074e37:	0f 98 c0             	sets   al
10074e3a:	48                   	dec    eax
10074e3b:	89 4e 7c             	mov    DWORD PTR [esi+0x7c],ecx
10074e3e:	23 c1                	and    eax,ecx
10074e40:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10074e43:	8b 46 70             	mov    eax,DWORD PTR [esi+0x70]
10074e46:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10074e49:	8b 56 68             	mov    edx,DWORD PTR [esi+0x68]
10074e4c:	03 c1                	add    eax,ecx
10074e4e:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
10074e52:	c7 44 24 0c 01 00 00 	mov    DWORD PTR [esp+0xc],0x1
10074e59:	00 
10074e5a:	51                   	push   ecx
10074e5b:	52                   	push   edx
10074e5c:	8b ce                	mov    ecx,esi
10074e5e:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10074e62:	e8 b9 9a ff ff       	call   0x1006e920
10074e67:	8b ce                	mov    ecx,esi
10074e69:	e8 f2 26 00 00       	call   0x10077560
10074e6e:	8b cf                	mov    ecx,edi
10074e70:	e8 db 05 00 00       	call   0x10075450
10074e75:	5e                   	pop    esi
10074e76:	5b                   	pop    ebx
10074e77:	85 c0                	test   eax,eax
10074e79:	74 0b                	je     0x10074e86
10074e7b:	8d 47 1c             	lea    eax,[edi+0x1c]
10074e7e:	8b cf                	mov    ecx,edi
10074e80:	50                   	push   eax
10074e81:	e8 ca 97 ff ff       	call   0x1006e650
10074e86:	8b 17                	mov    edx,DWORD PTR [edi]
10074e88:	8b cf                	mov    ecx,edi
10074e8a:	ff 52 70             	call   DWORD PTR [edx+0x70]
10074e8d:	8b 4f 40             	mov    ecx,DWORD PTR [edi+0x40]
10074e90:	8d 44 24 04          	lea    eax,[esp+0x4]
10074e94:	50                   	push   eax
10074e95:	51                   	push   ecx
10074e96:	8b cf                	mov    ecx,edi
10074e98:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
10074e9f:	00 
10074ea0:	e8 7b 9a ff ff       	call   0x1006e920
10074ea5:	5f                   	pop    edi
10074ea6:	83 c4 08             	add    esp,0x8
10074ea9:	c2 04 00             	ret    0x4
10074eac:	90                   	nop
10074ead:	90                   	nop
10074eae:	90                   	nop
10074eaf:	90                   	nop
10074eb0:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
10074eb3:	53                   	push   ebx
10074eb4:	56                   	push   esi
10074eb5:	57                   	push   edi
10074eb6:	8b 48 30             	mov    ecx,DWORD PTR [eax+0x30]
10074eb9:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10074ebd:	8b 58 40             	mov    ebx,DWORD PTR [eax+0x40]
10074ec0:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
10074ec4:	8b 51 38             	mov    edx,DWORD PTR [ecx+0x38]
10074ec7:	2b fb                	sub    edi,ebx
10074ec9:	0f af fa             	imul   edi,edx
10074ecc:	8b ca                	mov    ecx,edx
10074ece:	8b 50 48             	mov    edx,DWORD PTR [eax+0x48]
10074ed1:	c1 e7 04             	shl    edi,0x4
10074ed4:	c1 e1 04             	shl    ecx,0x4
10074ed7:	03 fa                	add    edi,edx
10074ed9:	8b d1                	mov    edx,ecx
10074edb:	c1 e9 02             	shr    ecx,0x2
10074ede:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10074ee0:	8b ca                	mov    ecx,edx
10074ee2:	83 e1 03             	and    ecx,0x3
10074ee5:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
10074ee7:	5f                   	pop    edi
10074ee8:	5e                   	pop    esi
10074ee9:	5b                   	pop    ebx
10074eea:	c2 08 00             	ret    0x8
10074eed:	90                   	nop
10074eee:	90                   	nop
10074eef:	90                   	nop
10074ef0:	8b 41 48             	mov    eax,DWORD PTR [ecx+0x48]
10074ef3:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10074ef7:	c1 e1 04             	shl    ecx,0x4
10074efa:	8b 50 40             	mov    edx,DWORD PTR [eax+0x40]
10074efd:	8b 44 0a 04          	mov    eax,DWORD PTR [edx+ecx*1+0x4]
10074f01:	c2 04 00             	ret    0x4
10074f04:	90                   	nop
10074f05:	90                   	nop
10074f06:	90                   	nop
10074f07:	90                   	nop
10074f08:	90                   	nop
10074f09:	90                   	nop
10074f0a:	90                   	nop
10074f0b:	90                   	nop
10074f0c:	90                   	nop
10074f0d:	90                   	nop
10074f0e:	90                   	nop
10074f0f:	90                   	nop
10074f10:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
10074f13:	8b 40 40             	mov    eax,DWORD PTR [eax+0x40]
10074f16:	c3                   	ret
10074f17:	90                   	nop
10074f18:	90                   	nop
10074f19:	90                   	nop
10074f1a:	90                   	nop
10074f1b:	90                   	nop
10074f1c:	90                   	nop
10074f1d:	90                   	nop
10074f1e:	90                   	nop
10074f1f:	90                   	nop
10074f20:	8b 49 4c             	mov    ecx,DWORD PTR [ecx+0x4c]
10074f23:	56                   	push   esi
10074f24:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
10074f27:	8b 71 40             	mov    esi,DWORD PTR [ecx+0x40]
10074f2a:	8b 51 44             	mov    edx,DWORD PTR [ecx+0x44]
10074f2d:	2b c6                	sub    eax,esi
10074f2f:	3b d0                	cmp    edx,eax
10074f31:	5e                   	pop    esi
10074f32:	8b ca                	mov    ecx,edx
10074f34:	7c 02                	jl     0x10074f38
10074f36:	8b c8                	mov    ecx,eax
10074f38:	83 f9 40             	cmp    ecx,0x40
10074f3b:	7d 07                	jge    0x10074f44
10074f3d:	3b d0                	cmp    edx,eax
10074f3f:	7d 08                	jge    0x10074f49
10074f41:	8b c2                	mov    eax,edx
10074f43:	c3                   	ret
10074f44:	b8 40 00 00 00       	mov    eax,0x40
10074f49:	c3                   	ret
10074f4a:	90                   	nop
10074f4b:	90                   	nop
10074f4c:	90                   	nop
10074f4d:	90                   	nop
10074f4e:	90                   	nop
10074f4f:	90                   	nop
10074f50:	8b 41 4c             	mov    eax,DWORD PTR [ecx+0x4c]
10074f53:	8b 40 3c             	mov    eax,DWORD PTR [eax+0x3c]
10074f56:	c3                   	ret
10074f57:	90                   	nop
10074f58:	90                   	nop
10074f59:	90                   	nop
10074f5a:	90                   	nop
10074f5b:	90                   	nop
10074f5c:	90                   	nop
10074f5d:	90                   	nop
10074f5e:	90                   	nop
10074f5f:	90                   	nop
10074f60:	8b 41 48             	mov    eax,DWORD PTR [ecx+0x48]
10074f63:	8b 40 24             	mov    eax,DWORD PTR [eax+0x24]
10074f66:	c3                   	ret
10074f67:	90                   	nop
10074f68:	90                   	nop
10074f69:	90                   	nop
10074f6a:	90                   	nop
10074f6b:	90                   	nop
10074f6c:	90                   	nop
10074f6d:	90                   	nop
10074f6e:	90                   	nop
10074f6f:	90                   	nop
10074f70:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10074f74:	50                   	push   eax
10074f75:	e8 26 03 00 00       	call   0x100752a0
10074f7a:	c2 04 00             	ret    0x4
10074f7d:	90                   	nop
10074f7e:	90                   	nop
10074f7f:	90                   	nop
10074f80:	83 ec 08             	sub    esp,0x8
10074f83:	56                   	push   esi
10074f84:	8b 71 50             	mov    esi,DWORD PTR [ecx+0x50]
10074f87:	8b 46 74             	mov    eax,DWORD PTR [esi+0x74]
10074f8a:	8b 56 78             	mov    edx,DWORD PTR [esi+0x78]
10074f8d:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10074f90:	2b c2                	sub    eax,edx
10074f92:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10074f96:	48                   	dec    eax
10074f97:	2b ca                	sub    ecx,edx
10074f99:	3b c8                	cmp    ecx,eax
10074f9b:	7c 02                	jl     0x10074f9f
10074f9d:	8b c8                	mov    ecx,eax
10074f9f:	33 c0                	xor    eax,eax
10074fa1:	85 c9                	test   ecx,ecx
10074fa3:	0f 9e c0             	setle  al
10074fa6:	48                   	dec    eax
10074fa7:	23 c1                	and    eax,ecx
10074fa9:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10074fac:	3b c1                	cmp    eax,ecx
10074fae:	74 2b                	je     0x10074fdb
10074fb0:	8b 4e 70             	mov    ecx,DWORD PTR [esi+0x70]
10074fb3:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10074fb6:	03 c8                	add    ecx,eax
10074fb8:	8b 46 68             	mov    eax,DWORD PTR [esi+0x68]
10074fbb:	8d 54 24 04          	lea    edx,[esp+0x4]
10074fbf:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
10074fc3:	52                   	push   edx
10074fc4:	50                   	push   eax
10074fc5:	8b ce                	mov    ecx,esi
10074fc7:	c7 44 24 0c 01 00 00 	mov    DWORD PTR [esp+0xc],0x1
10074fce:	00 
10074fcf:	e8 4c 99 ff ff       	call   0x1006e920
10074fd4:	8b ce                	mov    ecx,esi
10074fd6:	e8 85 25 00 00       	call   0x10077560
10074fdb:	5e                   	pop    esi
10074fdc:	83 c4 08             	add    esp,0x8
10074fdf:	c2 10 00             	ret    0x10
10074fe2:	90                   	nop
10074fe3:	90                   	nop
10074fe4:	90                   	nop
10074fe5:	90                   	nop
10074fe6:	90                   	nop
10074fe7:	90                   	nop
10074fe8:	90                   	nop
10074fe9:	90                   	nop
10074fea:	90                   	nop
10074feb:	90                   	nop
10074fec:	90                   	nop
10074fed:	90                   	nop
10074fee:	90                   	nop
10074fef:	90                   	nop
10074ff0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10074ff4:	83 ec 08             	sub    esp,0x8
10074ff7:	83 e8 00             	sub    eax,0x0
10074ffa:	56                   	push   esi
10074ffb:	57                   	push   edi
10074ffc:	8b f1                	mov    esi,ecx
10074ffe:	0f 84 c3 01 00 00    	je     0x100751c7
10075004:	48                   	dec    eax
10075005:	74 69                	je     0x10075070
10075007:	48                   	dec    eax
10075008:	0f 85 c5 01 00 00    	jne    0x100751d3
1007500e:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10075012:	83 38 01             	cmp    DWORD PTR [eax],0x1
10075015:	0f 85 b8 01 00 00    	jne    0x100751d3
1007501b:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
1007501e:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
10075021:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
10075024:	8b 51 44             	mov    edx,DWORD PTR [ecx+0x44]
10075027:	2b c2                	sub    eax,edx
10075029:	33 d2                	xor    edx,edx
1007502b:	85 c0                	test   eax,eax
1007502d:	0f 9e c2             	setle  dl
10075030:	4a                   	dec    edx
10075031:	23 c2                	and    eax,edx
10075033:	85 ff                	test   edi,edi
10075035:	7d 04                	jge    0x1007503b
10075037:	33 c0                	xor    eax,eax
10075039:	eb 06                	jmp    0x10075041
1007503b:	3b f8                	cmp    edi,eax
1007503d:	7f 02                	jg     0x10075041
1007503f:	8b c7                	mov    eax,edi
10075041:	89 41 40             	mov    DWORD PTR [ecx+0x40],eax
10075044:	8b 06                	mov    eax,DWORD PTR [esi]
10075046:	8b ce                	mov    ecx,esi
10075048:	ff 50 70             	call   DWORD PTR [eax+0x70]
1007504b:	8b 56 40             	mov    edx,DWORD PTR [esi+0x40]
1007504e:	8d 4c 24 08          	lea    ecx,[esp+0x8]
10075052:	51                   	push   ecx
10075053:	52                   	push   edx
10075054:	8b ce                	mov    ecx,esi
10075056:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1007505d:	00 
1007505e:	e8 bd 98 ff ff       	call   0x1006e920
10075063:	5f                   	pop    edi
10075064:	b8 01 00 00 00       	mov    eax,0x1
10075069:	5e                   	pop    esi
1007506a:	83 c4 08             	add    esp,0x8
1007506d:	c2 08 00             	ret    0x8
10075070:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
10075074:	8b 07                	mov    eax,DWORD PTR [edi]
10075076:	83 e8 00             	sub    eax,0x0
10075079:	74 6e                	je     0x100750e9
1007507b:	48                   	dec    eax
1007507c:	0f 85 51 01 00 00    	jne    0x100751d3
10075082:	8b 76 50             	mov    esi,DWORD PTR [esi+0x50]
10075085:	8b 46 74             	mov    eax,DWORD PTR [esi+0x74]
10075088:	8b 56 78             	mov    edx,DWORD PTR [esi+0x78]
1007508b:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
1007508e:	2b c2                	sub    eax,edx
10075090:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10075093:	48                   	dec    eax
10075094:	2b ca                	sub    ecx,edx
10075096:	3b c8                	cmp    ecx,eax
10075098:	7c 02                	jl     0x1007509c
1007509a:	8b c8                	mov    ecx,eax
1007509c:	33 c0                	xor    eax,eax
1007509e:	85 c9                	test   ecx,ecx
100750a0:	0f 9e c0             	setle  al
100750a3:	48                   	dec    eax
100750a4:	23 c1                	and    eax,ecx
100750a6:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
100750a9:	3b c1                	cmp    eax,ecx
100750ab:	0f 84 22 01 00 00    	je     0x100751d3
100750b1:	8b 4e 70             	mov    ecx,DWORD PTR [esi+0x70]
100750b4:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
100750b7:	03 c8                	add    ecx,eax
100750b9:	8b 46 68             	mov    eax,DWORD PTR [esi+0x68]
100750bc:	8d 54 24 08          	lea    edx,[esp+0x8]
100750c0:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
100750c4:	52                   	push   edx
100750c5:	50                   	push   eax
100750c6:	8b ce                	mov    ecx,esi
100750c8:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
100750cf:	00 
100750d0:	e8 4b 98 ff ff       	call   0x1006e920
100750d5:	8b ce                	mov    ecx,esi
100750d7:	e8 84 24 00 00       	call   0x10077560
100750dc:	5f                   	pop    edi
100750dd:	b8 01 00 00 00       	mov    eax,0x1
100750e2:	5e                   	pop    esi
100750e3:	83 c4 08             	add    esp,0x8
100750e6:	c2 08 00             	ret    0x8
100750e9:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100750ec:	85 c0                	test   eax,eax
100750ee:	0f 85 a7 00 00 00    	jne    0x1007519b
100750f4:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
100750fa:	8b 11                	mov    edx,DWORD PTR [ecx]
100750fc:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
10075102:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10075105:	85 c9                	test   ecx,ecx
10075107:	74 23                	je     0x1007512c
10075109:	d8 56 34             	fcom   DWORD PTR [esi+0x34]
1007510c:	df e0                	fnstsw ax
1007510e:	f6 c4 41             	test   ah,0x41
10075111:	74 19                	je     0x1007512c
10075113:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
10075116:	8b 57 0c             	mov    edx,DWORD PTR [edi+0xc]
10075119:	3b c2                	cmp    eax,edx
1007511b:	75 27                	jne    0x10075144
1007511d:	d8 05 dc 83 0b 10    	fadd   DWORD PTR ds:0x100b83dc
10075123:	41                   	inc    ecx
10075124:	89 4e 38             	mov    DWORD PTR [esi+0x38],ecx
10075127:	d9 5e 34             	fstp   DWORD PTR [esi+0x34]
1007512a:	eb 1a                	jmp    0x10075146
1007512c:	d8 05 dc 83 0b 10    	fadd   DWORD PTR ds:0x100b83dc
10075132:	d9 5e 34             	fstp   DWORD PTR [esi+0x34]
10075135:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
10075138:	c7 46 38 01 00 00 00 	mov    DWORD PTR [esi+0x38],0x1
1007513f:	89 4e 3c             	mov    DWORD PTR [esi+0x3c],ecx
10075142:	eb 02                	jmp    0x10075146
10075144:	dd d8                	fstp   st(0)
10075146:	83 7e 38 02          	cmp    DWORD PTR [esi+0x38],0x2
1007514a:	7c 2b                	jl     0x10075177
1007514c:	8b 16                	mov    edx,DWORD PTR [esi]
1007514e:	c7 46 38 00 00 00 00 	mov    DWORD PTR [esi+0x38],0x0
10075155:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
10075158:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
1007515b:	50                   	push   eax
1007515c:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
1007515f:	51                   	push   ecx
10075160:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
10075163:	50                   	push   eax
10075164:	51                   	push   ecx
10075165:	8b ce                	mov    ecx,esi
10075167:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
1007516a:	5f                   	pop    edi
1007516b:	b8 01 00 00 00       	mov    eax,0x1
10075170:	5e                   	pop    esi
10075171:	83 c4 08             	add    esp,0x8
10075174:	c2 08 00             	ret    0x8
10075177:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
1007517a:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
1007517d:	8b 16                	mov    edx,DWORD PTR [esi]
1007517f:	50                   	push   eax
10075180:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
10075183:	51                   	push   ecx
10075184:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
10075187:	50                   	push   eax
10075188:	51                   	push   ecx
10075189:	8b ce                	mov    ecx,esi
1007518b:	ff 52 78             	call   DWORD PTR [edx+0x78]
1007518e:	5f                   	pop    edi
1007518f:	b8 01 00 00 00       	mov    eax,0x1
10075194:	5e                   	pop    esi
10075195:	83 c4 08             	add    esp,0x8
10075198:	c2 08 00             	ret    0x8
1007519b:	83 f8 01             	cmp    eax,0x1
1007519e:	75 33                	jne    0x100751d3
100751a0:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
100751a3:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
100751a6:	8b 16                	mov    edx,DWORD PTR [esi]
100751a8:	50                   	push   eax
100751a9:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
100751ac:	51                   	push   ecx
100751ad:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
100751b0:	50                   	push   eax
100751b1:	51                   	push   ecx
100751b2:	8b ce                	mov    ecx,esi
100751b4:	ff 92 80 00 00 00    	call   DWORD PTR [edx+0x80]
100751ba:	5f                   	pop    edi
100751bb:	b8 01 00 00 00       	mov    eax,0x1
100751c0:	5e                   	pop    esi
100751c1:	83 c4 08             	add    esp,0x8
100751c4:	c2 08 00             	ret    0x8
100751c7:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100751cb:	8b 16                	mov    edx,DWORD PTR [esi]
100751cd:	50                   	push   eax
100751ce:	8b ce                	mov    ecx,esi
100751d0:	ff 52 74             	call   DWORD PTR [edx+0x74]
100751d3:	5f                   	pop    edi
100751d4:	b8 01 00 00 00       	mov    eax,0x1
100751d9:	5e                   	pop    esi
100751da:	83 c4 08             	add    esp,0x8
100751dd:	c2 08 00             	ret    0x8
100751e0:	83 ec 08             	sub    esp,0x8
100751e3:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100751e7:	8d 54 24 00          	lea    edx,[esp+0x0]
100751eb:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
100751ef:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
100751f2:	52                   	push   edx
100751f3:	50                   	push   eax
100751f4:	c7 44 24 08 01 00 00 	mov    DWORD PTR [esp+0x8],0x1
100751fb:	00 
100751fc:	e8 1f 97 ff ff       	call   0x1006e920
10075201:	83 c4 08             	add    esp,0x8
10075204:	c2 04 00             	ret    0x4
10075207:	90                   	nop
10075208:	90                   	nop
10075209:	90                   	nop
1007520a:	90                   	nop
1007520b:	90                   	nop
1007520c:	90                   	nop
1007520d:	90                   	nop
1007520e:	90                   	nop
1007520f:	90                   	nop
10075210:	83 ec 08             	sub    esp,0x8
10075213:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10075217:	8d 54 24 00          	lea    edx,[esp+0x0]
1007521b:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1007521f:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
10075222:	52                   	push   edx
10075223:	50                   	push   eax
10075224:	c7 44 24 08 02 00 00 	mov    DWORD PTR [esp+0x8],0x2
1007522b:	00 
1007522c:	e8 ef 96 ff ff       	call   0x1006e920
10075231:	83 c4 08             	add    esp,0x8
10075234:	c2 10 00             	ret    0x10
10075237:	90                   	nop
10075238:	90                   	nop
10075239:	90                   	nop
1007523a:	90                   	nop
1007523b:	90                   	nop
1007523c:	90                   	nop
1007523d:	90                   	nop
1007523e:	90                   	nop
1007523f:	90                   	nop
10075240:	83 ec 08             	sub    esp,0x8
10075243:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10075247:	8d 54 24 00          	lea    edx,[esp+0x0]
1007524b:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1007524f:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
10075252:	52                   	push   edx
10075253:	50                   	push   eax
10075254:	c7 44 24 08 03 00 00 	mov    DWORD PTR [esp+0x8],0x3
1007525b:	00 
1007525c:	e8 bf 96 ff ff       	call   0x1006e920
10075261:	83 c4 08             	add    esp,0x8
10075264:	c2 10 00             	ret    0x10
10075267:	90                   	nop
10075268:	90                   	nop
10075269:	90                   	nop
1007526a:	90                   	nop
1007526b:	90                   	nop
1007526c:	90                   	nop
1007526d:	90                   	nop
1007526e:	90                   	nop
1007526f:	90                   	nop
10075270:	83 ec 08             	sub    esp,0x8
10075273:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10075277:	8d 54 24 00          	lea    edx,[esp+0x0]
1007527b:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1007527f:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
10075282:	52                   	push   edx
10075283:	50                   	push   eax
10075284:	c7 44 24 08 04 00 00 	mov    DWORD PTR [esp+0x8],0x4
1007528b:	00 
1007528c:	e8 8f 96 ff ff       	call   0x1006e920
10075291:	83 c4 08             	add    esp,0x8
10075294:	c2 10 00             	ret    0x10
10075297:	90                   	nop
10075298:	90                   	nop
10075299:	90                   	nop
1007529a:	90                   	nop
1007529b:	90                   	nop
1007529c:	90                   	nop
1007529d:	90                   	nop
1007529e:	90                   	nop
1007529f:	90                   	nop
100752a0:	83 ec 48             	sub    esp,0x48
100752a3:	8d 54 24 08          	lea    edx,[esp+0x8]
100752a7:	56                   	push   esi
100752a8:	57                   	push   edi
100752a9:	8b f9                	mov    edi,ecx
100752ab:	52                   	push   edx
100752ac:	8b 54 24 58          	mov    edx,DWORD PTR [esp+0x58]
100752b0:	8b 4f 2c             	mov    ecx,DWORD PTR [edi+0x2c]
100752b3:	8d 47 2c             	lea    eax,[edi+0x2c]
100752b6:	52                   	push   edx
100752b7:	50                   	push   eax
100752b8:	ff 14 8d 2c a0 0d 10 	call   DWORD PTR [ecx*4+0x100da02c]
100752bf:	8b 4f 50             	mov    ecx,DWORD PTR [edi+0x50]
100752c2:	83 c4 0c             	add    esp,0xc
100752c5:	e8 d6 95 ff ff       	call   0x1006e8a0
100752ca:	a8 01                	test   al,0x1
100752cc:	74 1d                	je     0x100752eb
100752ce:	8b 77 50             	mov    esi,DWORD PTR [edi+0x50]
100752d1:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
100752d4:	8b 01                	mov    eax,DWORD PTR [ecx]
100752d6:	ff 50 74             	call   DWORD PTR [eax+0x74]
100752d9:	f7 46 34 00 00 00 80 	test   DWORD PTR [esi+0x34],0x80000000
100752e0:	74 05                	je     0x100752e7
100752e2:	8d 0c 40             	lea    ecx,[eax+eax*2]
100752e5:	eb 06                	jmp    0x100752ed
100752e7:	8b c8                	mov    ecx,eax
100752e9:	eb 02                	jmp    0x100752ed
100752eb:	33 c9                	xor    ecx,ecx
100752ed:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100752f1:	8b 74 24 1c          	mov    esi,DWORD PTR [esp+0x1c]
100752f5:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
100752f9:	2b c1                	sub    eax,ecx
100752fb:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100752ff:	89 74 24 3c          	mov    DWORD PTR [esp+0x3c],esi
10075303:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
10075307:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1007530b:	8d 14 08             	lea    edx,[eax+ecx*1]
1007530e:	8b 4f 48             	mov    ecx,DWORD PTR [edi+0x48]
10075311:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
10075315:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10075319:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
1007531d:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
10075321:	e8 7a 95 ff ff       	call   0x1006e8a0
10075326:	a8 01                	test   al,0x1
10075328:	74 2d                	je     0x10075357
1007532a:	8b 47 48             	mov    eax,DWORD PTR [edi+0x48]
1007532d:	8b 48 38             	mov    ecx,DWORD PTR [eax+0x38]
10075330:	85 c9                	test   ecx,ecx
10075332:	74 0d                	je     0x10075341
10075334:	8b 48 44             	mov    ecx,DWORD PTR [eax+0x44]
10075337:	e8 34 7f fd ff       	call   0x1004d270
1007533c:	83 c0 04             	add    eax,0x4
1007533f:	eb 02                	jmp    0x10075343
10075341:	33 c0                	xor    eax,eax
10075343:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
10075347:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1007534b:	3b c1                	cmp    eax,ecx
1007534d:	7c 12                	jl     0x10075361
1007534f:	8b c1                	mov    eax,ecx
10075351:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10075355:	eb 0a                	jmp    0x10075361
10075357:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1007535b:	33 c0                	xor    eax,eax
1007535d:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10075361:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10075365:	2b c8                	sub    ecx,eax
10075367:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
1007536b:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1007536f:	03 d0                	add    edx,eax
10075371:	8d 44 24 30          	lea    eax,[esp+0x30]
10075375:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
10075379:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1007537d:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
10075381:	8b 4f 50             	mov    ecx,DWORD PTR [edi+0x50]
10075384:	50                   	push   eax
10075385:	89 54 24 4c          	mov    DWORD PTR [esp+0x4c],edx
10075389:	e8 c2 92 ff ff       	call   0x1006e650
1007538e:	8d 4c 24 20          	lea    ecx,[esp+0x20]
10075392:	51                   	push   ecx
10075393:	8b 4f 48             	mov    ecx,DWORD PTR [edi+0x48]
10075396:	e8 b5 92 ff ff       	call   0x1006e650
1007539b:	8b 4f 4c             	mov    ecx,DWORD PTR [edi+0x4c]
1007539e:	8d 54 24 40          	lea    edx,[esp+0x40]
100753a2:	52                   	push   edx
100753a3:	e8 a8 92 ff ff       	call   0x1006e650
100753a8:	8b 4f 4c             	mov    ecx,DWORD PTR [edi+0x4c]
100753ab:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
100753ae:	8b 71 40             	mov    esi,DWORD PTR [ecx+0x40]
100753b1:	8b 51 44             	mov    edx,DWORD PTR [ecx+0x44]
100753b4:	2b c6                	sub    eax,esi
100753b6:	3b d0                	cmp    edx,eax
100753b8:	8b ca                	mov    ecx,edx
100753ba:	7c 02                	jl     0x100753be
100753bc:	8b c8                	mov    ecx,eax
100753be:	83 f9 40             	cmp    ecx,0x40
100753c1:	7d 08                	jge    0x100753cb
100753c3:	3b d0                	cmp    edx,eax
100753c5:	7d 09                	jge    0x100753d0
100753c7:	8b c2                	mov    eax,edx
100753c9:	eb 05                	jmp    0x100753d0
100753cb:	b8 40 00 00 00       	mov    eax,0x40
100753d0:	8b 77 50             	mov    esi,DWORD PTR [edi+0x50]
100753d3:	33 c9                	xor    ecx,ecx
100753d5:	85 c0                	test   eax,eax
100753d7:	8b 56 7c             	mov    edx,DWORD PTR [esi+0x7c]
100753da:	0f 9c c1             	setl   cl
100753dd:	49                   	dec    ecx
100753de:	23 c1                	and    eax,ecx
100753e0:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
100753e3:	03 d0                	add    edx,eax
100753e5:	89 46 78             	mov    DWORD PTR [esi+0x78],eax
100753e8:	3b d1                	cmp    edx,ecx
100753ea:	7e 13                	jle    0x100753ff
100753ec:	2b c8                	sub    ecx,eax
100753ee:	b8 00 00 00 00       	mov    eax,0x0
100753f3:	0f 98 c0             	sets   al
100753f6:	48                   	dec    eax
100753f7:	89 4e 7c             	mov    DWORD PTR [esi+0x7c],ecx
100753fa:	23 c1                	and    eax,ecx
100753fc:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
100753ff:	8b 46 70             	mov    eax,DWORD PTR [esi+0x70]
10075402:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
10075405:	8b 56 68             	mov    edx,DWORD PTR [esi+0x68]
10075408:	03 c1                	add    eax,ecx
1007540a:	8d 4c 24 08          	lea    ecx,[esp+0x8]
1007540e:	c7 44 24 08 01 00 00 	mov    DWORD PTR [esp+0x8],0x1
10075415:	00 
10075416:	51                   	push   ecx
10075417:	52                   	push   edx
10075418:	8b ce                	mov    ecx,esi
1007541a:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1007541e:	e8 fd 94 ff ff       	call   0x1006e920
10075423:	8b ce                	mov    ecx,esi
10075425:	e8 36 21 00 00       	call   0x10077560
1007542a:	8b cf                	mov    ecx,edi
1007542c:	e8 1f 00 00 00       	call   0x10075450
10075431:	85 c0                	test   eax,eax
10075433:	74 0b                	je     0x10075440
10075435:	8d 47 1c             	lea    eax,[edi+0x1c]
10075438:	8b cf                	mov    ecx,edi
1007543a:	50                   	push   eax
1007543b:	e8 10 92 ff ff       	call   0x1006e650
10075440:	5f                   	pop    edi
10075441:	5e                   	pop    esi
10075442:	83 c4 48             	add    esp,0x48
10075445:	c2 04 00             	ret    0x4
10075448:	90                   	nop
10075449:	90                   	nop
1007544a:	90                   	nop
1007544b:	90                   	nop
1007544c:	90                   	nop
1007544d:	90                   	nop
1007544e:	90                   	nop
1007544f:	90                   	nop
10075450:	56                   	push   esi
10075451:	8b f1                	mov    esi,ecx
10075453:	8a 46 44             	mov    al,BYTE PTR [esi+0x44]
10075456:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10075459:	a8 01                	test   al,0x1
1007545b:	74 0d                	je     0x1007546a
1007545d:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
10075460:	8b 50 3c             	mov    edx,DWORD PTR [eax+0x3c]
10075463:	8b 41 78             	mov    eax,DWORD PTR [ecx+0x78]
10075466:	3b d0                	cmp    edx,eax
10075468:	7e 18                	jle    0x10075482
1007546a:	e8 31 94 ff ff       	call   0x1006e8a0
1007546f:	a8 01                	test   al,0x1
10075471:	75 27                	jne    0x1007549a
10075473:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
10075476:	e8 a5 95 ff ff       	call   0x1006ea20
1007547b:	b8 01 00 00 00       	mov    eax,0x1
10075480:	5e                   	pop    esi
10075481:	c3                   	ret
10075482:	e8 19 94 ff ff       	call   0x1006e8a0
10075487:	a8 01                	test   al,0x1
10075489:	74 0f                	je     0x1007549a
1007548b:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
1007548e:	e8 ed 94 ff ff       	call   0x1006e980
10075493:	b8 01 00 00 00       	mov    eax,0x1
10075498:	5e                   	pop    esi
10075499:	c3                   	ret
1007549a:	33 c0                	xor    eax,eax
1007549c:	5e                   	pop    esi
1007549d:	c3                   	ret
1007549e:	90                   	nop
1007549f:	90                   	nop
100754a0:	6a ff                	push   0xffffffff
100754a2:	68 83 64 0b 10       	push   0x100b6483
100754a7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100754ad:	50                   	push   eax
100754ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100754b5:	83 ec 1c             	sub    esp,0x1c
100754b8:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
100754bc:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
100754c0:	53                   	push   ebx
100754c1:	56                   	push   esi
100754c2:	8b f1                	mov    esi,ecx
100754c4:	57                   	push   edi
100754c5:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
100754c9:	6a ff                	push   0xffffffff
100754cb:	50                   	push   eax
100754cc:	51                   	push   ecx
100754cd:	52                   	push   edx
100754ce:	8b ce                	mov    ecx,esi
100754d0:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
100754d4:	e8 57 f5 ff ff       	call   0x10074a30
100754d9:	33 db                	xor    ebx,ebx
100754db:	6a 18                	push   0x18
100754dd:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
100754e1:	c7 06 10 c5 0b 10    	mov    DWORD PTR [esi],0x100bc510
100754e7:	e8 3d e4 02 00       	call   0x100a3929
100754ec:	83 c4 04             	add    esp,0x4
100754ef:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
100754f3:	3b c3                	cmp    eax,ebx
100754f5:	c6 44 24 30 01       	mov    BYTE PTR [esp+0x30],0x1
100754fa:	74 09                	je     0x10075505
100754fc:	8b c8                	mov    ecx,eax
100754fe:	e8 0d 7f fd ff       	call   0x1004d410
10075503:	eb 02                	jmp    0x10075507
10075505:	33 c0                	xor    eax,eax
10075507:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
1007550a:	88 5c 24 30          	mov    BYTE PTR [esp+0x30],bl
1007550e:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
10075511:	e8 6a 94 ff ff       	call   0x1006e980
10075516:	8d 46 1c             	lea    eax,[esi+0x1c]
10075519:	8b ce                	mov    ecx,esi
1007551b:	50                   	push   eax
1007551c:	e8 2f 91 ff ff       	call   0x1006e650
10075521:	8d 4c 24 18          	lea    ecx,[esp+0x18]
10075525:	6a 01                	push   0x1
10075527:	51                   	push   ecx
10075528:	8b 4e 48             	mov    ecx,DWORD PTR [esi+0x48]
1007552b:	c7 44 24 20 03 00 00 	mov    DWORD PTR [esp+0x20],0x3
10075532:	00 
10075533:	c7 44 24 24 0f 27 00 	mov    DWORD PTR [esp+0x24],0x270f
1007553a:	00 
1007553b:	c7 44 24 28 00 d0 10 	mov    DWORD PTR [esp+0x28],0x1010d000
10075542:	10 
10075543:	c7 44 24 2c e0 59 07 	mov    DWORD PTR [esp+0x2c],0x100759e0
1007554a:	10 
1007554b:	e8 f0 ec ff ff       	call   0x10074240
10075550:	8b 7e 4c             	mov    edi,DWORD PTR [esi+0x4c]
10075553:	8b 47 48             	mov    eax,DWORD PTR [edi+0x48]
10075556:	3b c3                	cmp    eax,ebx
10075558:	74 09                	je     0x10075563
1007555a:	50                   	push   eax
1007555b:	e8 be e3 02 00       	call   0x100a391e
10075560:	83 c4 04             	add    esp,0x4
10075563:	8b 57 30             	mov    edx,DWORD PTR [edi+0x30]
10075566:	89 5f 48             	mov    DWORD PTR [edi+0x48],ebx
10075569:	8b 42 38             	mov    eax,DWORD PTR [edx+0x38]
1007556c:	3b c3                	cmp    eax,ebx
1007556e:	74 0f                	je     0x1007557f
10075570:	c1 e0 0a             	shl    eax,0xa
10075573:	50                   	push   eax
10075574:	e8 b0 e3 02 00       	call   0x100a3929
10075579:	83 c4 04             	add    esp,0x4
1007557c:	89 47 48             	mov    DWORD PTR [edi+0x48],eax
1007557f:	8b 06                	mov    eax,DWORD PTR [esi]
10075581:	8b ce                	mov    ecx,esi
10075583:	ff 50 70             	call   DWORD PTR [eax+0x70]
10075586:	8b 56 40             	mov    edx,DWORD PTR [esi+0x40]
10075589:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1007558d:	51                   	push   ecx
1007558e:	52                   	push   edx
1007558f:	8b ce                	mov    ecx,esi
10075591:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
10075595:	e8 86 93 ff ff       	call   0x1006e920
1007559a:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
1007559d:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
100755a1:	5f                   	pop    edi
100755a2:	89 70 34             	mov    DWORD PTR [eax+0x34],esi
100755a5:	8b c6                	mov    eax,esi
100755a7:	5e                   	pop    esi
100755a8:	5b                   	pop    ebx
100755a9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100755b0:	83 c4 28             	add    esp,0x28
100755b3:	c2 0c 00             	ret    0xc
100755b6:	90                   	nop
100755b7:	90                   	nop
100755b8:	90                   	nop
100755b9:	90                   	nop
100755ba:	90                   	nop
100755bb:	90                   	nop
100755bc:	90                   	nop
100755bd:	90                   	nop
100755be:	90                   	nop
100755bf:	90                   	nop
100755c0:	56                   	push   esi
100755c1:	8b f1                	mov    esi,ecx
100755c3:	e8 18 00 00 00       	call   0x100755e0
100755c8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
100755cd:	74 09                	je     0x100755d8
100755cf:	56                   	push   esi
100755d0:	e8 49 e3 02 00       	call   0x100a391e
100755d5:	83 c4 04             	add    esp,0x4
100755d8:	8b c6                	mov    eax,esi
100755da:	5e                   	pop    esi
100755db:	c2 04 00             	ret    0x4
100755de:	90                   	nop
100755df:	90                   	nop
100755e0:	6a ff                	push   0xffffffff
100755e2:	68 98 64 0b 10       	push   0x100b6498
100755e7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100755ed:	50                   	push   eax
100755ee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
100755f5:	51                   	push   ecx
100755f6:	56                   	push   esi
100755f7:	8b f1                	mov    esi,ecx
100755f9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
100755fd:	c7 06 10 c5 0b 10    	mov    DWORD PTR [esi],0x100bc510
10075603:	8b 4e 54             	mov    ecx,DWORD PTR [esi+0x54]
10075606:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1007560d:	00 
1007560e:	85 c9                	test   ecx,ecx
10075610:	74 06                	je     0x10075618
10075612:	8b 01                	mov    eax,DWORD PTR [ecx]
10075614:	6a 01                	push   0x1
10075616:	ff 10                	call   DWORD PTR [eax]
10075618:	8b ce                	mov    ecx,esi
1007561a:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
10075621:	ff 
10075622:	e8 f9 8e ff ff       	call   0x1006e520
10075627:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1007562b:	5e                   	pop    esi
1007562c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10075633:	83 c4 10             	add    esp,0x10
10075636:	c3                   	ret
10075637:	90                   	nop
10075638:	90                   	nop
10075639:	90                   	nop
1007563a:	90                   	nop
1007563b:	90                   	nop
1007563c:	90                   	nop
1007563d:	90                   	nop
1007563e:	90                   	nop
1007563f:	90                   	nop
10075640:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10075644:	83 ec 08             	sub    esp,0x8
10075647:	85 c0                	test   eax,eax
10075649:	57                   	push   edi
1007564a:	8b f9                	mov    edi,ecx
1007564c:	75 05                	jne    0x10075653
1007564e:	b8 00 d0 10 10       	mov    eax,0x1010d000
10075653:	8b 15 ec b6 0d 10    	mov    edx,DWORD PTR ds:0x100db6ec
10075659:	50                   	push   eax
1007565a:	8b 47 48             	mov    eax,DWORD PTR [edi+0x48]
1007565d:	8b 48 24             	mov    ecx,DWORD PTR [eax+0x24]
10075660:	51                   	push   ecx
10075661:	8b 4f 54             	mov    ecx,DWORD PTR [edi+0x54]
10075664:	52                   	push   edx
10075665:	e8 06 7e fd ff       	call   0x1004d470
1007566a:	8b 4f 54             	mov    ecx,DWORD PTR [edi+0x54]
1007566d:	e8 7e 80 fd ff       	call   0x1004d6f0
10075672:	8b 4f 4c             	mov    ecx,DWORD PTR [edi+0x4c]
10075675:	8b 51 40             	mov    edx,DWORD PTR [ecx+0x40]
10075678:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
1007567b:	3b d0                	cmp    edx,eax
1007567d:	7c 07                	jl     0x10075686
1007567f:	c7 41 40 00 00 00 00 	mov    DWORD PTR [ecx+0x40],0x0
10075686:	33 c9                	xor    ecx,ecx
10075688:	ba 00 00 00 00       	mov    edx,0x0
1007568d:	85 c0                	test   eax,eax
1007568f:	0f 9c c1             	setl   cl
10075692:	49                   	dec    ecx
10075693:	56                   	push   esi
10075694:	8b 77 50             	mov    esi,DWORD PTR [edi+0x50]
10075697:	23 c8                	and    ecx,eax
10075699:	41                   	inc    ecx
1007569a:	0f 98 c2             	sets   dl
1007569d:	8b c1                	mov    eax,ecx
1007569f:	8b 4e 78             	mov    ecx,DWORD PTR [esi+0x78]
100756a2:	4a                   	dec    edx
100756a3:	c7 46 70 00 00 00 00 	mov    DWORD PTR [esi+0x70],0x0
100756aa:	23 c2                	and    eax,edx
100756ac:	8b 56 7c             	mov    edx,DWORD PTR [esi+0x7c]
100756af:	03 d1                	add    edx,ecx
100756b1:	89 46 74             	mov    DWORD PTR [esi+0x74],eax
100756b4:	3b d0                	cmp    edx,eax
100756b6:	7e 13                	jle    0x100756cb
100756b8:	2b c1                	sub    eax,ecx
100756ba:	b9 00 00 00 00       	mov    ecx,0x0
100756bf:	0f 98 c1             	sets   cl
100756c2:	49                   	dec    ecx
100756c3:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
100756c6:	23 c1                	and    eax,ecx
100756c8:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
100756cb:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
100756ce:	8b 56 7c             	mov    edx,DWORD PTR [esi+0x7c]
100756d1:	8d 44 24 08          	lea    eax,[esp+0x8]
100756d5:	c7 44 24 08 01 00 00 	mov    DWORD PTR [esp+0x8],0x1
100756dc:	00 
100756dd:	50                   	push   eax
100756de:	51                   	push   ecx
100756df:	8b ce                	mov    ecx,esi
100756e1:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
100756e5:	e8 36 92 ff ff       	call   0x1006e920
100756ea:	8b ce                	mov    ecx,esi
100756ec:	e8 6f 1e 00 00       	call   0x10077560
100756f1:	8b 4f 4c             	mov    ecx,DWORD PTR [edi+0x4c]
100756f4:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
100756f7:	8b 71 40             	mov    esi,DWORD PTR [ecx+0x40]
100756fa:	8b 51 44             	mov    edx,DWORD PTR [ecx+0x44]
100756fd:	2b c6                	sub    eax,esi
100756ff:	3b d0                	cmp    edx,eax
10075701:	8b ca                	mov    ecx,edx
10075703:	7c 02                	jl     0x10075707
10075705:	8b c8                	mov    ecx,eax
10075707:	83 f9 40             	cmp    ecx,0x40
1007570a:	7d 08                	jge    0x10075714
1007570c:	3b d0                	cmp    edx,eax
1007570e:	7d 09                	jge    0x10075719
10075710:	8b c2                	mov    eax,edx
10075712:	eb 05                	jmp    0x10075719
10075714:	b8 40 00 00 00       	mov    eax,0x40
10075719:	8b 77 50             	mov    esi,DWORD PTR [edi+0x50]
1007571c:	33 d2                	xor    edx,edx
1007571e:	85 c0                	test   eax,eax
10075720:	0f 9c c2             	setl   dl
10075723:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
10075726:	4a                   	dec    edx
10075727:	23 c2                	and    eax,edx
10075729:	8b d0                	mov    edx,eax
1007572b:	89 46 78             	mov    DWORD PTR [esi+0x78],eax
1007572e:	03 56 7c             	add    edx,DWORD PTR [esi+0x7c]
10075731:	3b d1                	cmp    edx,ecx
10075733:	7e 13                	jle    0x10075748
10075735:	2b c8                	sub    ecx,eax
10075737:	b8 00 00 00 00       	mov    eax,0x0
1007573c:	0f 98 c0             	sets   al
1007573f:	48                   	dec    eax
10075740:	89 4e 7c             	mov    DWORD PTR [esi+0x7c],ecx
10075743:	23 c1                	and    eax,ecx
10075745:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10075748:	8b 46 70             	mov    eax,DWORD PTR [esi+0x70]
1007574b:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
1007574e:	8b 56 68             	mov    edx,DWORD PTR [esi+0x68]
10075751:	03 c1                	add    eax,ecx
10075753:	8d 4c 24 08          	lea    ecx,[esp+0x8]
10075757:	c7 44 24 08 01 00 00 	mov    DWORD PTR [esp+0x8],0x1
1007575e:	00 
1007575f:	51                   	push   ecx
10075760:	52                   	push   edx
10075761:	8b ce                	mov    ecx,esi
10075763:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10075767:	e8 b4 91 ff ff       	call   0x1006e920
1007576c:	8b ce                	mov    ecx,esi
1007576e:	e8 ed 1d 00 00       	call   0x10077560
10075773:	8b cf                	mov    ecx,edi
10075775:	e8 d6 fc ff ff       	call   0x10075450
1007577a:	85 c0                	test   eax,eax
1007577c:	5e                   	pop    esi
1007577d:	74 0b                	je     0x1007578a
1007577f:	8d 47 1c             	lea    eax,[edi+0x1c]
10075782:	8b cf                	mov    ecx,edi
10075784:	50                   	push   eax
10075785:	e8 c6 8e ff ff       	call   0x1006e650
1007578a:	8b 17                	mov    edx,DWORD PTR [edi]
1007578c:	8b cf                	mov    ecx,edi
1007578e:	ff 52 70             	call   DWORD PTR [edx+0x70]
10075791:	8b 4f 40             	mov    ecx,DWORD PTR [edi+0x40]
10075794:	8d 44 24 04          	lea    eax,[esp+0x4]
10075798:	50                   	push   eax
10075799:	51                   	push   ecx
1007579a:	8b cf                	mov    ecx,edi
1007579c:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
100757a3:	00 
100757a4:	e8 77 91 ff ff       	call   0x1006e920
100757a9:	5f                   	pop    edi
100757aa:	83 c4 08             	add    esp,0x8
100757ad:	c2 04 00             	ret    0x4
100757b0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100757b4:	83 ec 08             	sub    esp,0x8
100757b7:	56                   	push   esi
100757b8:	57                   	push   edi
100757b9:	8b f9                	mov    edi,ecx
100757bb:	50                   	push   eax
100757bc:	e8 df fa ff ff       	call   0x100752a0
100757c1:	8b 47 48             	mov    eax,DWORD PTR [edi+0x48]
100757c4:	8b 70 38             	mov    esi,DWORD PTR [eax+0x38]
100757c7:	8b 48 24             	mov    ecx,DWORD PTR [eax+0x24]
100757ca:	85 f6                	test   esi,esi
100757cc:	8b d1                	mov    edx,ecx
100757ce:	7e 0c                	jle    0x100757dc
100757d0:	85 c9                	test   ecx,ecx
100757d2:	7d 02                	jge    0x100757d6
100757d4:	33 d2                	xor    edx,edx
100757d6:	8b 40 40             	mov    eax,DWORD PTR [eax+0x40]
100757d9:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
100757dc:	51                   	push   ecx
100757dd:	8b 4f 54             	mov    ecx,DWORD PTR [edi+0x54]
100757e0:	e8 cb 7d fd ff       	call   0x1004d5b0
100757e5:	8b 4f 54             	mov    ecx,DWORD PTR [edi+0x54]
100757e8:	e8 03 7f fd ff       	call   0x1004d6f0
100757ed:	8b 4f 4c             	mov    ecx,DWORD PTR [edi+0x4c]
100757f0:	8b 51 40             	mov    edx,DWORD PTR [ecx+0x40]
100757f3:	89 41 3c             	mov    DWORD PTR [ecx+0x3c],eax
100757f6:	3b d0                	cmp    edx,eax
100757f8:	7c 07                	jl     0x10075801
100757fa:	c7 41 40 00 00 00 00 	mov    DWORD PTR [ecx+0x40],0x0
10075801:	33 c9                	xor    ecx,ecx
10075803:	8b 77 50             	mov    esi,DWORD PTR [edi+0x50]
10075806:	85 c0                	test   eax,eax
10075808:	0f 9c c1             	setl   cl
1007580b:	49                   	dec    ecx
1007580c:	ba 00 00 00 00       	mov    edx,0x0
10075811:	23 c8                	and    ecx,eax
10075813:	c7 46 70 00 00 00 00 	mov    DWORD PTR [esi+0x70],0x0
1007581a:	41                   	inc    ecx
1007581b:	0f 98 c2             	sets   dl
1007581e:	8b c1                	mov    eax,ecx
10075820:	8b 4e 78             	mov    ecx,DWORD PTR [esi+0x78]
10075823:	4a                   	dec    edx
10075824:	23 c2                	and    eax,edx
10075826:	8b 56 7c             	mov    edx,DWORD PTR [esi+0x7c]
10075829:	03 d1                	add    edx,ecx
1007582b:	89 46 74             	mov    DWORD PTR [esi+0x74],eax
1007582e:	3b d0                	cmp    edx,eax
10075830:	7e 13                	jle    0x10075845
10075832:	2b c1                	sub    eax,ecx
10075834:	b9 00 00 00 00       	mov    ecx,0x0
10075839:	0f 98 c1             	sets   cl
1007583c:	49                   	dec    ecx
1007583d:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10075840:	23 c1                	and    eax,ecx
10075842:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10075845:	8b 4e 68             	mov    ecx,DWORD PTR [esi+0x68]
10075848:	8b 56 7c             	mov    edx,DWORD PTR [esi+0x7c]
1007584b:	8d 44 24 08          	lea    eax,[esp+0x8]
1007584f:	c7 44 24 08 01 00 00 	mov    DWORD PTR [esp+0x8],0x1
10075856:	00 
10075857:	50                   	push   eax
10075858:	51                   	push   ecx
10075859:	8b ce                	mov    ecx,esi
1007585b:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1007585f:	e8 bc 90 ff ff       	call   0x1006e920
10075864:	8b ce                	mov    ecx,esi
10075866:	e8 f5 1c 00 00       	call   0x10077560
1007586b:	8b 4f 4c             	mov    ecx,DWORD PTR [edi+0x4c]
1007586e:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
10075871:	8b 71 40             	mov    esi,DWORD PTR [ecx+0x40]
10075874:	8b 51 44             	mov    edx,DWORD PTR [ecx+0x44]
10075877:	2b c6                	sub    eax,esi
10075879:	3b d0                	cmp    edx,eax
1007587b:	8b ca                	mov    ecx,edx
1007587d:	7c 02                	jl     0x10075881
1007587f:	8b c8                	mov    ecx,eax
10075881:	83 f9 40             	cmp    ecx,0x40
10075884:	7d 08                	jge    0x1007588e
10075886:	3b d0                	cmp    edx,eax
10075888:	7d 09                	jge    0x10075893
1007588a:	8b c2                	mov    eax,edx
1007588c:	eb 05                	jmp    0x10075893
1007588e:	b8 40 00 00 00       	mov    eax,0x40
10075893:	8b 77 50             	mov    esi,DWORD PTR [edi+0x50]
10075896:	33 d2                	xor    edx,edx
10075898:	85 c0                	test   eax,eax
1007589a:	8b 4e 74             	mov    ecx,DWORD PTR [esi+0x74]
1007589d:	0f 9c c2             	setl   dl
100758a0:	4a                   	dec    edx
100758a1:	23 c2                	and    eax,edx
100758a3:	8b 56 7c             	mov    edx,DWORD PTR [esi+0x7c]
100758a6:	03 d0                	add    edx,eax
100758a8:	89 46 78             	mov    DWORD PTR [esi+0x78],eax
100758ab:	3b d1                	cmp    edx,ecx
100758ad:	7e 13                	jle    0x100758c2
100758af:	2b c8                	sub    ecx,eax
100758b1:	b8 00 00 00 00       	mov    eax,0x0
100758b6:	0f 98 c0             	sets   al
100758b9:	48                   	dec    eax
100758ba:	89 4e 7c             	mov    DWORD PTR [esi+0x7c],ecx
100758bd:	23 c1                	and    eax,ecx
100758bf:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
100758c2:	8b 46 70             	mov    eax,DWORD PTR [esi+0x70]
100758c5:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
100758c8:	8b 56 68             	mov    edx,DWORD PTR [esi+0x68]
100758cb:	03 c1                	add    eax,ecx
100758cd:	8d 4c 24 08          	lea    ecx,[esp+0x8]
100758d1:	c7 44 24 08 01 00 00 	mov    DWORD PTR [esp+0x8],0x1
100758d8:	00 
100758d9:	51                   	push   ecx
100758da:	52                   	push   edx
100758db:	8b ce                	mov    ecx,esi
100758dd:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
100758e1:	e8 3a 90 ff ff       	call   0x1006e920
100758e6:	8b ce                	mov    ecx,esi
100758e8:	e8 73 1c 00 00       	call   0x10077560
100758ed:	8b cf                	mov    ecx,edi
100758ef:	e8 5c fb ff ff       	call   0x10075450
100758f4:	85 c0                	test   eax,eax
100758f6:	74 0b                	je     0x10075903
100758f8:	8d 47 1c             	lea    eax,[edi+0x1c]
100758fb:	8b cf                	mov    ecx,edi
100758fd:	50                   	push   eax
100758fe:	e8 4d 8d ff ff       	call   0x1006e650
10075903:	8b 17                	mov    edx,DWORD PTR [edi]
10075905:	8b cf                	mov    ecx,edi
10075907:	ff 52 70             	call   DWORD PTR [edx+0x70]
1007590a:	8b 4f 40             	mov    ecx,DWORD PTR [edi+0x40]
1007590d:	8d 44 24 08          	lea    eax,[esp+0x8]
10075911:	50                   	push   eax
10075912:	51                   	push   ecx
10075913:	8b cf                	mov    ecx,edi
10075915:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1007591c:	00 
1007591d:	e8 fe 8f ff ff       	call   0x1006e920
10075922:	5f                   	pop    edi
10075923:	5e                   	pop    esi
10075924:	83 c4 08             	add    esp,0x8
10075927:	c2 04 00             	ret    0x4
1007592a:	90                   	nop
1007592b:	90                   	nop
1007592c:	90                   	nop
1007592d:	90                   	nop
1007592e:	90                   	nop
1007592f:	90                   	nop
10075930:	83 ec 14             	sub    esp,0x14
10075933:	53                   	push   ebx
10075934:	55                   	push   ebp
10075935:	56                   	push   esi
10075936:	57                   	push   edi
10075937:	8b f9                	mov    edi,ecx
10075939:	33 db                	xor    ebx,ebx
1007593b:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1007593f:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
10075943:	8b 4f 4c             	mov    ecx,DWORD PTR [edi+0x4c]
10075946:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
1007594d:	ff 
1007594e:	c7 44 24 1c 00 d0 10 	mov    DWORD PTR [esp+0x1c],0x1010d000
10075955:	10 
10075956:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
1007595a:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
1007595d:	8b 51 3c             	mov    edx,DWORD PTR [ecx+0x3c]
10075960:	8b 71 44             	mov    esi,DWORD PTR [ecx+0x44]
10075963:	8b e8                	mov    ebp,eax
10075965:	2b d5                	sub    edx,ebp
10075967:	8b ce                	mov    ecx,esi
10075969:	3b f2                	cmp    esi,edx
1007596b:	7c 02                	jl     0x1007596f
1007596d:	8b ca                	mov    ecx,edx
1007596f:	83 f9 40             	cmp    ecx,0x40
10075972:	7d 08                	jge    0x1007597c
10075974:	3b f2                	cmp    esi,edx
10075976:	7d 09                	jge    0x10075981
10075978:	8b d6                	mov    edx,esi
1007597a:	eb 05                	jmp    0x10075981
1007597c:	ba 40 00 00 00       	mov    edx,0x40
10075981:	8d 6c 02 ff          	lea    ebp,[edx+eax*1-0x1]
10075985:	3b c5                	cmp    eax,ebp
10075987:	7f 47                	jg     0x100759d0
10075989:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1007598d:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
10075991:	eb 04                	jmp    0x10075997
10075993:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10075997:	8b 57 4c             	mov    edx,DWORD PTR [edi+0x4c]
1007599a:	8b f8                	mov    edi,eax
1007599c:	8d 74 24 14          	lea    esi,[esp+0x14]
100759a0:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
100759a4:	8b 4a 30             	mov    ecx,DWORD PTR [edx+0x30]
100759a7:	2b 7a 40             	sub    edi,DWORD PTR [edx+0x40]
100759aa:	8b 59 38             	mov    ebx,DWORD PTR [ecx+0x38]
100759ad:	0f af fb             	imul   edi,ebx
100759b0:	8b cb                	mov    ecx,ebx
100759b2:	8b 5a 48             	mov    ebx,DWORD PTR [edx+0x48]
100759b5:	c1 e1 04             	shl    ecx,0x4
100759b8:	c1 e7 04             	shl    edi,0x4
100759bb:	8b d1                	mov    edx,ecx
100759bd:	03 fb                	add    edi,ebx
100759bf:	c1 e9 02             	shr    ecx,0x2
100759c2:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100759c4:	8b ca                	mov    ecx,edx
100759c6:	83 e1 03             	and    ecx,0x3
100759c9:	40                   	inc    eax
100759ca:	3b c5                	cmp    eax,ebp
100759cc:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100759ce:	7e c3                	jle    0x10075993
100759d0:	5f                   	pop    edi
100759d1:	5e                   	pop    esi
100759d2:	5d                   	pop    ebp
100759d3:	5b                   	pop    ebx
100759d4:	83 c4 14             	add    esp,0x14
100759d7:	c3                   	ret
100759d8:	90                   	nop
100759d9:	90                   	nop
100759da:	90                   	nop
100759db:	90                   	nop
100759dc:	90                   	nop
100759dd:	90                   	nop
100759de:	90                   	nop
100759df:	90                   	nop
100759e0:	a1 18 a0 0d 10       	mov    eax,ds:0x100da018
100759e5:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
100759e9:	c1 e0 02             	shl    eax,0x2
100759ec:	8b 51 0c             	mov    edx,DWORD PTR [ecx+0xc]
100759ef:	56                   	push   esi
100759f0:	8b 71 08             	mov    esi,DWORD PTR [ecx+0x8]
100759f3:	6a 00                	push   0x0
100759f5:	c1 e8 0a             	shr    eax,0xa
100759f8:	6a ff                	push   0xffffffff
100759fa:	52                   	push   edx
100759fb:	8d 14 00             	lea    edx,[eax+eax*1]
100759fe:	2b f2                	sub    esi,edx
10075a00:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
10075a03:	8b 09                	mov    ecx,DWORD PTR [ecx]
10075a05:	56                   	push   esi
10075a06:	03 c8                	add    ecx,eax
10075a08:	52                   	push   edx
10075a09:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
10075a0d:	51                   	push   ecx
10075a0e:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
10075a12:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
10075a15:	8b 51 54             	mov    edx,DWORD PTR [ecx+0x54]
10075a18:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10075a1e:	50                   	push   eax
10075a1f:	52                   	push   edx
10075a20:	e8 fb 4b fd ff       	call   0x1004a620
10075a25:	5e                   	pop    esi
10075a26:	c3                   	ret
10075a27:	90                   	nop
10075a28:	90                   	nop
10075a29:	90                   	nop
10075a2a:	90                   	nop
10075a2b:	90                   	nop
10075a2c:	90                   	nop
10075a2d:	90                   	nop
10075a2e:	90                   	nop
10075a2f:	90                   	nop
10075a30:	6a ff                	push   0xffffffff
10075a32:	68 b8 64 0b 10       	push   0x100b64b8
10075a37:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10075a3d:	50                   	push   eax
10075a3e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10075a45:	83 ec 14             	sub    esp,0x14
10075a48:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10075a4c:	53                   	push   ebx
10075a4d:	56                   	push   esi
10075a4e:	57                   	push   edi
10075a4f:	8b 7c 24 38          	mov    edi,DWORD PTR [esp+0x38]
10075a53:	8b f1                	mov    esi,ecx
10075a55:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
10075a59:	57                   	push   edi
10075a5a:	50                   	push   eax
10075a5b:	51                   	push   ecx
10075a5c:	8b ce                	mov    ecx,esi
10075a5e:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
10075a62:	e8 19 89 ff ff       	call   0x1006e380
10075a67:	c7 06 94 c5 0b 10    	mov    DWORD PTR [esi],0x100bc594
10075a6d:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10075a72:	8d 54 24 34          	lea    edx,[esp+0x34]
10075a76:	8d 4c 24 38          	lea    ecx,[esp+0x38]
10075a7a:	52                   	push   edx
10075a7b:	51                   	push   ecx
10075a7c:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
10075a83:	00 
10075a84:	8d 98 10 02 00 00    	lea    ebx,[eax+0x210]
10075a8a:	ff 90 e0 01 00 00    	call   DWORD PTR [eax+0x1e0]
10075a90:	50                   	push   eax
10075a91:	ff 13                	call   DWORD PTR [ebx]
10075a93:	83 c4 0c             	add    esp,0xc
10075a96:	85 ff                	test   edi,edi
10075a98:	75 24                	jne    0x10075abe
10075a9a:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
10075a9e:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
10075aa2:	8d 4c 24 10          	lea    ecx,[esp+0x10]
10075aa6:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
10075aaa:	51                   	push   ecx
10075aab:	8b ce                	mov    ecx,esi
10075aad:	89 7c 24 18          	mov    DWORD PTR [esp+0x18],edi
10075ab1:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
10075ab5:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10075ab9:	e8 92 8b ff ff       	call   0x1006e650
10075abe:	6a 00                	push   0x0
10075ac0:	6a 04                	push   0x4
10075ac2:	8b ce                	mov    ecx,esi
10075ac4:	e8 b7 8c ff ff       	call   0x1006e780
10075ac9:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
10075acd:	8b c6                	mov    eax,esi
10075acf:	5f                   	pop    edi
10075ad0:	5e                   	pop    esi
10075ad1:	5b                   	pop    ebx
10075ad2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10075ad9:	83 c4 20             	add    esp,0x20
10075adc:	c2 0c 00             	ret    0xc
10075adf:	90                   	nop
10075ae0:	83 ec 08             	sub    esp,0x8
10075ae3:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
10075ae7:	d8 0d c0 89 0b 10    	fmul   DWORD PTR ds:0x100b89c0
10075aed:	56                   	push   esi
10075aee:	d9 54 24 14          	fst    DWORD PTR [esp+0x14]
10075af2:	d9 ff                	fcos
10075af4:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10075af8:	d9 fe                	fsin
10075afa:	dd 54 24 04          	fst    QWORD PTR [esp+0x4]
10075afe:	d9 c0                	fld    st(0)
10075b00:	de c9                	fmulp  st(1),st
10075b02:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10075b06:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
10075b0a:	de f9                	fdivp  st(1),st
10075b0c:	d9 c1                	fld    st(1)
10075b0e:	d8 ca                	fmul   st,st(2)
10075b10:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
10075b14:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
10075b18:	de f9                	fdivp  st(1),st
10075b1a:	de c1                	faddp  st(1),st
10075b1c:	d9 fa                	fsqrt
10075b1e:	d8 3d c0 83 0b 10    	fdivr  DWORD PTR ds:0x100b83c0
10075b24:	d9 54 24 1c          	fst    DWORD PTR [esp+0x1c]
10075b28:	d8 c9                	fmul   st,st(1)
10075b2a:	e8 05 e3 02 00       	call   0x100a3e34
10075b2f:	dd d8                	fstp   st(0)
10075b31:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10075b35:	dc 4c 24 04          	fmul   QWORD PTR [esp+0x4]
10075b39:	8b f0                	mov    esi,eax
10075b3b:	e8 f4 e2 02 00       	call   0x100a3e34
10075b40:	8b c8                	mov    ecx,eax
10075b42:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10075b46:	89 30                	mov    DWORD PTR [eax],esi
10075b48:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
10075b4b:	5e                   	pop    esi
10075b4c:	83 c4 08             	add    esp,0x8
10075b4f:	c2 10 00             	ret    0x10
10075b52:	90                   	nop
10075b53:	90                   	nop
10075b54:	90                   	nop
10075b55:	90                   	nop
10075b56:	90                   	nop
10075b57:	90                   	nop
10075b58:	90                   	nop
10075b59:	90                   	nop
10075b5a:	90                   	nop
10075b5b:	90                   	nop
10075b5c:	90                   	nop
10075b5d:	90                   	nop
10075b5e:	90                   	nop
10075b5f:	90                   	nop
10075b60:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10075b64:	53                   	push   ebx
10075b65:	8b d9                	mov    ebx,ecx
10075b67:	56                   	push   esi
10075b68:	57                   	push   edi
10075b69:	68 ff 00 00 00       	push   0xff
10075b6e:	8d 73 3c             	lea    esi,[ebx+0x3c]
10075b71:	50                   	push   eax
10075b72:	56                   	push   esi
10075b73:	e8 a8 dc 02 00       	call   0x100a3820
10075b78:	8b fe                	mov    edi,esi
10075b7a:	83 c9 ff             	or     ecx,0xffffffff
10075b7d:	33 c0                	xor    eax,eax
10075b7f:	83 c4 0c             	add    esp,0xc
10075b82:	c6 86 ff 00 00 00 00 	mov    BYTE PTR [esi+0xff],0x0
10075b89:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
10075b8b:	f7 d1                	not    ecx
10075b8d:	49                   	dec    ecx
10075b8e:	56                   	push   esi
10075b8f:	89 4b 30             	mov    DWORD PTR [ebx+0x30],ecx
10075b92:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10075b98:	e8 83 76 fd ff       	call   0x1004d220
10075b9d:	5f                   	pop    edi
10075b9e:	89 43 38             	mov    DWORD PTR [ebx+0x38],eax
10075ba1:	5e                   	pop    esi
10075ba2:	5b                   	pop    ebx
10075ba3:	c2 04 00             	ret    0x4
10075ba6:	90                   	nop
10075ba7:	90                   	nop
10075ba8:	90                   	nop
10075ba9:	90                   	nop
10075baa:	90                   	nop
10075bab:	90                   	nop
10075bac:	90                   	nop
10075bad:	90                   	nop
10075bae:	90                   	nop
10075baf:	90                   	nop
10075bb0:	53                   	push   ebx
10075bb1:	56                   	push   esi
10075bb2:	8b f1                	mov    esi,ecx
10075bb4:	57                   	push   edi
10075bb5:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10075bbb:	e8 70 5f fc ff       	call   0x1003bb30
10075bc0:	3b c6                	cmp    eax,esi
10075bc2:	0f 85 c8 00 00 00    	jne    0x10075c90
10075bc8:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10075bcc:	83 ff 20             	cmp    edi,0x20
10075bcf:	72 3d                	jb     0x10075c0e
10075bd1:	83 ff 7f             	cmp    edi,0x7f
10075bd4:	73 38                	jae    0x10075c0e
10075bd6:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10075bda:	8b c8                	mov    ecx,eax
10075bdc:	48                   	dec    eax
10075bdd:	85 c9                	test   ecx,ecx
10075bdf:	74 0e                	je     0x10075bef
10075be1:	8d 58 01             	lea    ebx,[eax+0x1]
10075be4:	8b 16                	mov    edx,DWORD PTR [esi]
10075be6:	57                   	push   edi
10075be7:	8b ce                	mov    ecx,esi
10075be9:	ff 52 70             	call   DWORD PTR [edx+0x70]
10075bec:	4b                   	dec    ebx
10075bed:	75 f5                	jne    0x10075be4
10075bef:	8b 06                	mov    eax,DWORD PTR [esi]
10075bf1:	8b ce                	mov    ecx,esi
10075bf3:	ff 50 74             	call   DWORD PTR [eax+0x74]
10075bf6:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
10075bf9:	6a 02                	push   0x2
10075bfb:	51                   	push   ecx
10075bfc:	8b ce                	mov    ecx,esi
10075bfe:	e8 1d 8d ff ff       	call   0x1006e920
10075c03:	5f                   	pop    edi
10075c04:	5e                   	pop    esi
10075c05:	b8 01 00 00 00       	mov    eax,0x1
10075c0a:	5b                   	pop    ebx
10075c0b:	c2 08 00             	ret    0x8
10075c0e:	83 ff 08             	cmp    edi,0x8
10075c11:	74 34                	je     0x10075c47
10075c13:	83 ff 0d             	cmp    edi,0xd
10075c16:	74 24                	je     0x10075c3c
10075c18:	83 ff 1b             	cmp    edi,0x1b
10075c1b:	75 73                	jne    0x10075c90
10075c1d:	8b 16                	mov    edx,DWORD PTR [esi]
10075c1f:	8b ce                	mov    ecx,esi
10075c21:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
10075c24:	6a 01                	push   0x1
10075c26:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
10075c29:	8b ce                	mov    ecx,esi
10075c2b:	50                   	push   eax
10075c2c:	e8 ef 8c ff ff       	call   0x1006e920
10075c31:	5f                   	pop    edi
10075c32:	5e                   	pop    esi
10075c33:	b8 01 00 00 00       	mov    eax,0x1
10075c38:	5b                   	pop    ebx
10075c39:	c2 08 00             	ret    0x8
10075c3c:	8b 16                	mov    edx,DWORD PTR [esi]
10075c3e:	8b ce                	mov    ecx,esi
10075c40:	ff 52 78             	call   DWORD PTR [edx+0x78]
10075c43:	6a 00                	push   0x0
10075c45:	eb df                	jmp    0x10075c26
10075c47:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10075c4b:	8b c8                	mov    ecx,eax
10075c4d:	48                   	dec    eax
10075c4e:	85 c9                	test   ecx,ecx
10075c50:	74 33                	je     0x10075c85
10075c52:	8d 78 01             	lea    edi,[eax+0x1]
10075c55:	33 db                	xor    ebx,ebx
10075c57:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10075c5a:	3b c3                	cmp    eax,ebx
10075c5c:	74 24                	je     0x10075c82
10075c5e:	48                   	dec    eax
10075c5f:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10075c62:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10075c68:	0f be 54 30 3c       	movsx  edx,BYTE PTR [eax+esi*1+0x3c]
10075c6d:	52                   	push   edx
10075c6e:	e8 9d 75 fd ff       	call   0x1004d210
10075c73:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10075c76:	2b c8                	sub    ecx,eax
10075c78:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10075c7b:	89 4e 38             	mov    DWORD PTR [esi+0x38],ecx
10075c7e:	88 5c 30 3c          	mov    BYTE PTR [eax+esi*1+0x3c],bl
10075c82:	4f                   	dec    edi
10075c83:	75 d2                	jne    0x10075c57
10075c85:	8b 16                	mov    edx,DWORD PTR [esi]
10075c87:	8b ce                	mov    ecx,esi
10075c89:	ff 52 74             	call   DWORD PTR [edx+0x74]
10075c8c:	6a 02                	push   0x2
10075c8e:	eb 96                	jmp    0x10075c26
10075c90:	5f                   	pop    edi
10075c91:	5e                   	pop    esi
10075c92:	33 c0                	xor    eax,eax
10075c94:	5b                   	pop    ebx
10075c95:	c2 08 00             	ret    0x8
10075c98:	90                   	nop
10075c99:	90                   	nop
10075c9a:	90                   	nop
10075c9b:	90                   	nop
10075c9c:	90                   	nop
10075c9d:	90                   	nop
10075c9e:	90                   	nop
10075c9f:	90                   	nop
10075ca0:	83 ec 10             	sub    esp,0x10
10075ca3:	53                   	push   ebx
10075ca4:	8b 1d ec b6 0d 10    	mov    ebx,DWORD PTR ds:0x100db6ec
10075caa:	55                   	push   ebp
10075cab:	56                   	push   esi
10075cac:	57                   	push   edi
10075cad:	bf 04 00 00 00       	mov    edi,0x4
10075cb2:	8b e9                	mov    ebp,ecx
10075cb4:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
10075cb8:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
10075cbc:	e8 df 8b ff ff       	call   0x1006e8a0
10075cc1:	24 02                	and    al,0x2
10075cc3:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
10075cc9:	f6 d8                	neg    al
10075ccb:	1b c0                	sbb    eax,eax
10075ccd:	25 7f 7f 7f 00       	and    eax,0x7f7f7f
10075cd2:	05 80 80 80 ff       	add    eax,0xff808080
10075cd7:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10075cdb:	e8 50 5e fc ff       	call   0x1003bb30
10075ce0:	8b 74 24 28          	mov    esi,DWORD PTR [esp+0x28]
10075ce4:	3b c5                	cmp    eax,ebp
10075ce6:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
10075ce9:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
10075ced:	0f 85 9f 00 00 00    	jne    0x10075d92
10075cf3:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10075cf9:	8b 11                	mov    edx,DWORD PTR [ecx]
10075cfb:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
10075d01:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10075d05:	6a 20                	push   0x20
10075d07:	8b cb                	mov    ecx,ebx
10075d09:	e8 02 75 fd ff       	call   0x1004d210
10075d0e:	8b 4d 38             	mov    ecx,DWORD PTR [ebp+0x38]
10075d11:	8b 1e                	mov    ebx,DWORD PTR [esi]
10075d13:	8b f8                	mov    edi,eax
10075d15:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10075d18:	83 c7 02             	add    edi,0x2
10075d1b:	2b c7                	sub    eax,edi
10075d1d:	3b c8                	cmp    ecx,eax
10075d1f:	7e 16                	jle    0x10075d37
10075d21:	03 d8                	add    ebx,eax
10075d23:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10075d27:	2b c7                	sub    eax,edi
10075d29:	c7 44 24 10 06 00 00 	mov    DWORD PTR [esp+0x10],0x6
10075d30:	00 
10075d31:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10075d35:	eb 02                	jmp    0x10075d39
10075d37:	03 d9                	add    ebx,ecx
10075d39:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
10075d3d:	d8 0d 4c 86 0b 10    	fmul   DWORD PTR ds:0x100b864c
10075d43:	d9 fe                	fsin
10075d45:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
10075d4b:	d8 0d 04 c6 0b 10    	fmul   DWORD PTR ds:0x100bc604
10075d51:	e8 de e0 02 00       	call   0x100a3e34
10075d56:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10075d5a:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
10075d5d:	25 ff 00 00 00       	and    eax,0xff
10075d62:	81 e1 ff ff ff 00    	and    ecx,0xffffff
10075d68:	c1 e0 18             	shl    eax,0x18
10075d6b:	0b c1                	or     eax,ecx
10075d6d:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10075d73:	50                   	push   eax
10075d74:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10075d77:	83 ea 02             	sub    edx,0x2
10075d7a:	6a 00                	push   0x0
10075d7c:	83 c7 fe             	add    edi,0xfffffffe
10075d7f:	52                   	push   edx
10075d80:	40                   	inc    eax
10075d81:	57                   	push   edi
10075d82:	43                   	inc    ebx
10075d83:	50                   	push   eax
10075d84:	53                   	push   ebx
10075d85:	e8 e6 37 fd ff       	call   0x10049570
10075d8a:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
10075d8e:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10075d92:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10075d96:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
10075d99:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10075d9d:	83 cf 10             	or     edi,0x10
10075da0:	57                   	push   edi
10075da1:	51                   	push   ecx
10075da2:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10075da5:	52                   	push   edx
10075da6:	8b 16                	mov    edx,DWORD PTR [esi]
10075da8:	50                   	push   eax
10075da9:	51                   	push   ecx
10075daa:	8b 0d 5c be 11 10    	mov    ecx,DWORD PTR ds:0x1011be5c
10075db0:	83 c5 3c             	add    ebp,0x3c
10075db3:	52                   	push   edx
10075db4:	55                   	push   ebp
10075db5:	53                   	push   ebx
10075db6:	e8 45 43 fd ff       	call   0x1004a100
10075dbb:	5f                   	pop    edi
10075dbc:	5e                   	pop    esi
10075dbd:	5d                   	pop    ebp
10075dbe:	5b                   	pop    ebx
10075dbf:	83 c4 10             	add    esp,0x10
10075dc2:	c2 08 00             	ret    0x8
10075dc5:	90                   	nop
10075dc6:	90                   	nop
10075dc7:	90                   	nop
10075dc8:	90                   	nop
10075dc9:	90                   	nop
10075dca:	90                   	nop
10075dcb:	90                   	nop
10075dcc:	90                   	nop
10075dcd:	90                   	nop
10075dce:	90                   	nop
10075dcf:	90                   	nop
10075dd0:	56                   	push   esi
10075dd1:	8b f1                	mov    esi,ecx
10075dd3:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10075dd9:	8d 46 3c             	lea    eax,[esi+0x3c]
10075ddc:	50                   	push   eax
10075ddd:	e8 3e 74 fd ff       	call   0x1004d220
10075de2:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
10075de5:	5e                   	pop    esi
10075de6:	c2 04 00             	ret    0x4
10075de9:	90                   	nop
10075dea:	90                   	nop
10075deb:	90                   	nop
10075dec:	90                   	nop
10075ded:	90                   	nop
10075dee:	90                   	nop
10075def:	90                   	nop
10075df0:	56                   	push   esi
10075df1:	8b f1                	mov    esi,ecx
10075df3:	81 7e 30 ff 00 00 00 	cmp    DWORD PTR [esi+0x30],0xff
10075dfa:	74 30                	je     0x10075e2c
10075dfc:	8b 0d ec b6 0d 10    	mov    ecx,DWORD PTR ds:0x100db6ec
10075e02:	53                   	push   ebx
10075e03:	8a 5c 24 0c          	mov    bl,BYTE PTR [esp+0xc]
10075e07:	0f be c3             	movsx  eax,bl
10075e0a:	50                   	push   eax
10075e0b:	e8 00 74 fd ff       	call   0x1004d210
10075e10:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
10075e13:	03 c8                	add    ecx,eax
10075e15:	89 4e 38             	mov    DWORD PTR [esi+0x38],ecx
10075e18:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
10075e1b:	88 5c 0e 3c          	mov    BYTE PTR [esi+ecx*1+0x3c],bl
10075e1f:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10075e22:	40                   	inc    eax
10075e23:	5b                   	pop    ebx
10075e24:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
10075e27:	c6 44 30 3c 00       	mov    BYTE PTR [eax+esi*1+0x3c],0x0
10075e2c:	5e                   	pop    esi
10075e2d:	c2 04 00             	ret    0x4
10075e30:	6a ff                	push   0xffffffff
10075e32:	68 e3 64 0b 10       	push   0x100b64e3
10075e37:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10075e3d:	50                   	push   eax
10075e3e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10075e45:	51                   	push   ecx
10075e46:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10075e4a:	53                   	push   ebx
10075e4b:	55                   	push   ebp
10075e4c:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
10075e50:	56                   	push   esi
10075e51:	8b f1                	mov    esi,ecx
10075e53:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
10075e57:	57                   	push   edi
10075e58:	55                   	push   ebp
10075e59:	50                   	push   eax
10075e5a:	51                   	push   ecx
10075e5b:	8b ce                	mov    ecx,esi
10075e5d:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
10075e61:	e8 1a 85 ff ff       	call   0x1006e380
10075e66:	33 db                	xor    ebx,ebx
10075e68:	68 3c 01 00 00       	push   0x13c
10075e6d:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
10075e71:	c7 06 88 c6 0b 10    	mov    DWORD PTR [esi],0x100bc688
10075e77:	c7 46 2c ff ff ff ff 	mov    DWORD PTR [esi+0x2c],0xffffffff
10075e7e:	88 5e 30             	mov    BYTE PTR [esi+0x30],bl
10075e81:	e8 a3 da 02 00       	call   0x100a3929
10075e86:	8b f8                	mov    edi,eax
10075e88:	83 c4 04             	add    esp,0x4
10075e8b:	89 7c 24 2c          	mov    DWORD PTR [esp+0x2c],edi
10075e8f:	3b fb                	cmp    edi,ebx
10075e91:	c6 44 24 1c 01       	mov    BYTE PTR [esp+0x1c],0x1
10075e96:	74 22                	je     0x10075eba
10075e98:	55                   	push   ebp
10075e99:	6a 03                	push   0x3
10075e9b:	56                   	push   esi
10075e9c:	8b cf                	mov    ecx,edi
10075e9e:	e8 dd 84 ff ff       	call   0x1006e380
10075ea3:	89 5f 2c             	mov    DWORD PTR [edi+0x2c],ebx
10075ea6:	89 5f 30             	mov    DWORD PTR [edi+0x30],ebx
10075ea9:	89 5f 38             	mov    DWORD PTR [edi+0x38],ebx
10075eac:	88 5f 3c             	mov    BYTE PTR [edi+0x3c],bl
10075eaf:	c7 07 08 c6 0b 10    	mov    DWORD PTR [edi],0x100bc608
10075eb5:	89 7e 50             	mov    DWORD PTR [esi+0x50],edi
10075eb8:	eb 03                	jmp    0x10075ebd
10075eba:	89 5e 50             	mov    DWORD PTR [esi+0x50],ebx
10075ebd:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10075ec1:	8b c6                	mov    eax,esi
10075ec3:	5f                   	pop    edi
10075ec4:	5e                   	pop    esi
10075ec5:	5d                   	pop    ebp
10075ec6:	5b                   	pop    ebx
10075ec7:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10075ece:	83 c4 10             	add    esp,0x10
10075ed1:	c2 0c 00             	ret    0xc
10075ed4:	90                   	nop
10075ed5:	90                   	nop
10075ed6:	90                   	nop
10075ed7:	90                   	nop
10075ed8:	90                   	nop
10075ed9:	90                   	nop
10075eda:	90                   	nop
10075edb:	90                   	nop
10075edc:	90                   	nop
10075edd:	90                   	nop
10075ede:	90                   	nop
10075edf:	90                   	nop
10075ee0:	56                   	push   esi
10075ee1:	6a 00                	push   0x0
10075ee3:	8b f1                	mov    esi,ecx
10075ee5:	6a 02                	push   0x2
10075ee7:	e8 64 1f ff ff       	call   0x10067e50
10075eec:	8b c8                	mov    ecx,eax
10075eee:	e8 8d 88 ff ff       	call   0x1006e780
10075ef3:	6a 00                	push   0x0
10075ef5:	6a 02                	push   0x2
10075ef7:	8b ce                	mov    ecx,esi
10075ef9:	e8 82 88 ff ff       	call   0x1006e780
10075efe:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10075f04:	6a 00                	push   0x0
10075f06:	e8 25 2d fc ff       	call   0x10038c30
10075f0b:	5e                   	pop    esi
10075f0c:	c3                   	ret
10075f0d:	90                   	nop
10075f0e:	90                   	nop
10075f0f:	90                   	nop
10075f10:	56                   	push   esi
10075f11:	6a 03                	push   0x3
10075f13:	8b f1                	mov    esi,ecx
10075f15:	6a 00                	push   0x0
10075f17:	e8 34 1f ff ff       	call   0x10067e50
10075f1c:	8b c8                	mov    ecx,eax
10075f1e:	e8 5d 88 ff ff       	call   0x1006e780
10075f23:	6a 03                	push   0x3
10075f25:	6a 00                	push   0x0
10075f27:	8b ce                	mov    ecx,esi
10075f29:	e8 52 88 ff ff       	call   0x1006e780
10075f2e:	e8 ed b4 fd ff       	call   0x10051420
10075f33:	5e                   	pop    esi
10075f34:	c3                   	ret
10075f35:	90                   	nop
10075f36:	90                   	nop
10075f37:	90                   	nop
10075f38:	90                   	nop
10075f39:	90                   	nop
10075f3a:	90                   	nop
10075f3b:	90                   	nop
10075f3c:	90                   	nop
10075f3d:	90                   	nop
10075f3e:	90                   	nop
10075f3f:	90                   	nop

*/
void TabFolder::AddTab(const char* szTabName) {
    // Basic AddTab implementation
    if (szTabName) {
        // Add tab header logic
    }
}

