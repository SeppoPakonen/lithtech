#include "FXManager.h"

// 0x100275ff: FXManager::CreateSpriteFX
/*
100275ff:	8b 0b                	mov    ecx,DWORD PTR [ebx]
10027601:	89 4d 00             	mov    DWORD PTR [ebp+0x0],ecx
10027604:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
10027607:	89 55 04             	mov    DWORD PTR [ebp+0x4],edx
1002760a:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
1002760d:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10027610:	8b 4b 0c             	mov    ecx,DWORD PTR [ebx+0xc]
10027613:	89 4d 0c             	mov    DWORD PTR [ebp+0xc],ecx
10027616:	8b 53 10             	mov    edx,DWORD PTR [ebx+0x10]
10027619:	89 55 10             	mov    DWORD PTR [ebp+0x10],edx
1002761c:	8b 43 14             	mov    eax,DWORD PTR [ebx+0x14]
1002761f:	89 45 14             	mov    DWORD PTR [ebp+0x14],eax
10027622:	8b 4b 18             	mov    ecx,DWORD PTR [ebx+0x18]
10027625:	89 4d 18             	mov    DWORD PTR [ebp+0x18],ecx
10027628:	8b 53 1c             	mov    edx,DWORD PTR [ebx+0x1c]
1002762b:	89 55 1c             	mov    DWORD PTR [ebp+0x1c],edx
1002762e:	8b 43 20             	mov    eax,DWORD PTR [ebx+0x20]
10027631:	89 45 20             	mov    DWORD PTR [ebp+0x20],eax
10027634:	8b 4b 24             	mov    ecx,DWORD PTR [ebx+0x24]
10027637:	89 4d 24             	mov    DWORD PTR [ebp+0x24],ecx
1002763a:	8b 53 28             	mov    edx,DWORD PTR [ebx+0x28]
1002763d:	89 55 28             	mov    DWORD PTR [ebp+0x28],edx
10027640:	8b 43 2c             	mov    eax,DWORD PTR [ebx+0x2c]
10027643:	89 45 2c             	mov    DWORD PTR [ebp+0x2c],eax
10027646:	8b 4b 30             	mov    ecx,DWORD PTR [ebx+0x30]
10027649:	8b 7d 38             	mov    edi,DWORD PTR [ebp+0x38]
1002764c:	89 4d 30             	mov    DWORD PTR [ebp+0x30],ecx
1002764f:	8b 53 34             	mov    edx,DWORD PTR [ebx+0x34]
10027652:	c6 45 48 01          	mov    BYTE PTR [ebp+0x48],0x1
10027656:	89 55 34             	mov    DWORD PTR [ebp+0x34],edx
10027659:	8a 46 08             	mov    al,BYTE PTR [esi+0x8]
1002765c:	33 d2                	xor    edx,edx
1002765e:	89 7c 24 2c          	mov    DWORD PTR [esp+0x2c],edi
10027662:	a8 10                	test   al,0x10
10027664:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10027668:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
1002766c:	74 42                	je     0x100276b0
1002766e:	8b 43 24             	mov    eax,DWORD PTR [ebx+0x24]
10027671:	8d 54 24 10          	lea    edx,[esp+0x10]
10027675:	89 45 38             	mov    DWORD PTR [ebp+0x38],eax
10027678:	8b f8                	mov    edi,eax
1002767a:	33 c0                	xor    eax,eax
1002767c:	52                   	push   edx
1002767d:	89 43 24             	mov    DWORD PTR [ebx+0x24],eax
10027680:	8b 55 38             	mov    edx,DWORD PTR [ebp+0x38]
10027683:	89 45 24             	mov    DWORD PTR [ebp+0x24],eax
10027686:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1002768c:	6a 00                	push   0x0
1002768e:	52                   	push   edx
1002768f:	8b 01                	mov    eax,DWORD PTR [ecx]
10027691:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
10027695:	ff 50 0c             	call   DWORD PTR [eax+0xc]
10027698:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1002769e:	8d 54 24 24          	lea    edx,[esp+0x24]
100276a2:	52                   	push   edx
100276a3:	8b 55 38             	mov    edx,DWORD PTR [ebp+0x38]
100276a6:	8b 01                	mov    eax,DWORD PTR [ecx]
100276a8:	6a 01                	push   0x1
100276aa:	52                   	push   edx
100276ab:	ff 50 0c             	call   DWORD PTR [eax+0xc]
100276ae:	33 d2                	xor    edx,edx
100276b0:	8b 45 3c             	mov    eax,DWORD PTR [ebp+0x3c]
100276b3:	3b c2                	cmp    eax,edx
100276b5:	0f 85 e1 00 00 00    	jne    0x1002779c
100276bb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100276be:	33 c9                	xor    ecx,ecx
100276c0:	f6 c4 02             	test   ah,0x2
100276c3:	74 05                	je     0x100276ca
100276c5:	b9 10 00 00 00       	mov    ecx,0x10
100276ca:	a8 01                	test   al,0x1
100276cc:	74 03                	je     0x100276d1
100276ce:	83 c9 01             	or     ecx,0x1
100276d1:	f6 c4 08             	test   ah,0x8
100276d4:	74 03                	je     0x100276d9
100276d6:	83 c9 20             	or     ecx,0x20
100276d9:	a9 00 00 08 00       	test   eax,0x80000
100276de:	74 05                	je     0x100276e5
100276e0:	83 4c 24 10 04       	or     DWORD PTR [esp+0x10],0x4
100276e5:	a9 00 00 00 02       	test   eax,0x2000000
100276ea:	74 0a                	je     0x100276f6
100276ec:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
100276f0:	0c 20                	or     al,0x20
100276f2:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100276f6:	d9 86 9c 00 00 00    	fld    DWORD PTR [esi+0x9c]
100276fc:	d8 4b 20             	fmul   DWORD PTR [ebx+0x20]
100276ff:	8b 86 94 00 00 00    	mov    eax,DWORD PTR [esi+0x94]
10027705:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002770b:	51                   	push   ecx
1002770c:	d9 1c 24             	fstp   DWORD PTR [esp]
1002770f:	51                   	push   ecx
10027710:	8d 4e 0c             	lea    ecx,[esi+0xc]
10027713:	50                   	push   eax
10027714:	51                   	push   ecx
10027715:	57                   	push   edi
10027716:	ff 92 54 03 00 00    	call   DWORD PTR [edx+0x354]
1002771c:	83 c4 14             	add    esp,0x14
1002771f:	85 c0                	test   eax,eax
10027721:	74 29                	je     0x1002774c
10027723:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10027728:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
1002772b:	52                   	push   edx
1002772c:	68 64 6f 0d 10       	push   0x100d6f64
10027731:	8b 08                	mov    ecx,DWORD PTR [eax]
10027733:	50                   	push   eax
10027734:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
1002773a:	83 c4 0c             	add    esp,0xc
1002773d:	33 c0                	xor    eax,eax
1002773f:	5f                   	pop    edi
10027740:	5e                   	pop    esi
10027741:	5d                   	pop    ebp
10027742:	5b                   	pop    ebx
10027743:	81 c4 ac 06 00 00    	add    esp,0x6ac
10027749:	c2 04 00             	ret    0x4
1002774c:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
10027750:	6a 00                	push   0x0
10027752:	6a 00                	push   0x0
10027754:	8d 44 24 20          	lea    eax,[esp+0x20]
10027758:	6a 00                	push   0x0
1002775a:	50                   	push   eax
1002775b:	55                   	push   ebp
1002775c:	e8 5f 0c 00 00       	call   0x100283c0
10027761:	84 c0                	test   al,al
10027763:	75 1c                	jne    0x10027781
10027765:	8b 4d 50             	mov    ecx,DWORD PTR [ebp+0x50]
10027768:	51                   	push   ecx
10027769:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
1002776d:	e8 be 0a 00 00       	call   0x10028230
10027772:	5f                   	pop    edi
10027773:	5e                   	pop    esi
10027774:	5d                   	pop    ebp
10027775:	33 c0                	xor    eax,eax
10027777:	5b                   	pop    ebx
10027778:	81 c4 ac 06 00 00    	add    esp,0x6ac
1002777e:	c2 04 00             	ret    0x4

*/
void FXManager::CreateSpriteFX() {
    if (!g_pLTClient) return;
    ObjectCreateStruct ocs;
    ocs.m_ObjectType = OT_SPRITE;
    ocs.m_Flags = FLAG_VISIBLE | FLAG_NOLIGHTCOLOR;
    LTVector vPos;
    g_pLTClient->GetObjectPos(m_hObject, &vPos);
    ocs.m_Pos = vPos;
    g_pLTClient->CreateObject(&ocs);
}

// 0x10027781: FXManager::CreateSpriteFX
/*
10027781:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10027787:	8d 44 24 18          	lea    eax,[esp+0x18]
1002778b:	6a 00                	push   0x0
1002778d:	50                   	push   eax
1002778e:	8b 11                	mov    edx,DWORD PTR [ecx]
10027790:	57                   	push   edi
10027791:	ff 92 a8 01 00 00    	call   DWORD PTR [edx+0x1a8]
10027797:	e9 45 04 00 00       	jmp    0x10027be1
1002779c:	83 f8 01             	cmp    eax,0x1
1002779f:	0f 84 90 00 00 00    	je     0x10027835
100277a5:	83 f8 02             	cmp    eax,0x2
100277a8:	0f 84 87 00 00 00    	je     0x10027835
100277ae:	83 f8 04             	cmp    eax,0x4
100277b1:	0f 85 2a 04 00 00    	jne    0x10027be1
100277b7:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100277bb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100277be:	83 c9 40             	or     ecx,0x40
100277c1:	f6 c4 08             	test   ah,0x8
100277c4:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
100277c8:	74 08                	je     0x100277d2
100277ca:	8b c1                	mov    eax,ecx
100277cc:	0c 80                	or     al,0x80
100277ce:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100277d2:	33 c9                	xor    ecx,ecx
100277d4:	33 d2                	xor    edx,edx
100277d6:	8a 8e a4 00 00 00    	mov    cl,BYTE PTR [esi+0xa4]
100277dc:	8a 96 a5 00 00 00    	mov    dl,BYTE PTR [esi+0xa5]
100277e2:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
100277e6:	33 c0                	xor    eax,eax
100277e8:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
100277ec:	8a 86 a6 00 00 00    	mov    al,BYTE PTR [esi+0xa6]
100277f2:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
100277f6:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
100277fa:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
100277fe:	51                   	push   ecx
100277ff:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
10027803:	d8 0d fc 85 0b 10    	fmul   DWORD PTR ds:0x100b85fc
10027809:	d9 1c 24             	fstp   DWORD PTR [esp]
1002780c:	51                   	push   ecx
1002780d:	d8 0d fc 85 0b 10    	fmul   DWORD PTR ds:0x100b85fc
10027813:	d9 1c 24             	fstp   DWORD PTR [esp]
10027816:	51                   	push   ecx
10027817:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002781d:	d8 0d fc 85 0b 10    	fmul   DWORD PTR ds:0x100b85fc
10027823:	d9 1c 24             	fstp   DWORD PTR [esp]
10027826:	57                   	push   edi
10027827:	ff 91 b4 03 00 00    	call   DWORD PTR [ecx+0x3b4]
1002782d:	83 c4 10             	add    esp,0x10
10027830:	e9 ac 03 00 00       	jmp    0x10027be1
10027835:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10027838:	a8 10                	test   al,0x10
1002783a:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1002783e:	0f 85 20 03 00 00    	jne    0x10027b64
10027844:	8d 84 24 34 01 00 00 	lea    eax,[esp+0x134]
1002784b:	b9 0a 00 00 00       	mov    ecx,0xa
10027850:	c6 00 00             	mov    BYTE PTR [eax],0x0
10027853:	05 80 00 00 00       	add    eax,0x80
10027858:	49                   	dec    ecx
10027859:	75 f5                	jne    0x10027850
1002785b:	66 89 54 24 38       	mov    WORD PTR [esp+0x38],dx
10027860:	66 89 54 24 3a       	mov    WORD PTR [esp+0x3a],dx
10027865:	c7 44 24 3c 01 00 00 	mov    DWORD PTR [esp+0x3c],0x1
1002786c:	00 
1002786d:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
10027871:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
10027875:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
1002787c:	00 
1002787d:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
10027884:	00 
10027885:	c7 44 24 50 00 00 00 	mov    DWORD PTR [esp+0x50],0x0
1002788c:	00 
1002788d:	c7 44 24 54 00 00 80 	mov    DWORD PTR [esp+0x54],0x3f800000
10027894:	3f 
10027895:	c7 44 24 58 00 00 80 	mov    DWORD PTR [esp+0x58],0x3f800000
1002789c:	3f 
1002789d:	c7 44 24 5c 00 00 80 	mov    DWORD PTR [esp+0x5c],0x3f800000
100278a4:	3f 
100278a5:	c7 44 24 60 00 00 00 	mov    DWORD PTR [esp+0x60],0x0
100278ac:	00 
100278ad:	c7 44 24 64 00 00 00 	mov    DWORD PTR [esp+0x64],0x0
100278b4:	00 
100278b5:	c7 44 24 68 00 00 00 	mov    DWORD PTR [esp+0x68],0x0
100278bc:	00 
100278bd:	c7 44 24 6c 00 00 80 	mov    DWORD PTR [esp+0x6c],0x3f800000
100278c4:	3f 
100278c5:	89 54 24 70          	mov    DWORD PTR [esp+0x70],edx
100278c9:	c6 44 24 74 00       	mov    BYTE PTR [esp+0x74],0x0
100278ce:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x0
100278d5:	00 
100278d6:	8d 84 24 34 01 00 00 	lea    eax,[esp+0x134]
100278dd:	b9 0a 00 00 00       	mov    ecx,0xa
100278e2:	c6 00 00             	mov    BYTE PTR [eax],0x0
100278e5:	05 80 00 00 00       	add    eax,0x80
100278ea:	49                   	dec    ecx
100278eb:	75 f5                	jne    0x100278e2
100278ed:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
100278f1:	83 c9 ff             	or     ecx,0xffffffff
100278f4:	33 c0                	xor    eax,eax
100278f6:	8d b4 24 b4 00 00 00 	lea    esi,[esp+0xb4]
100278fd:	8d 7a 0c             	lea    edi,[edx+0xc]
10027900:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
10027904:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
10027906:	f7 d1                	not    ecx
10027908:	2b f9                	sub    edi,ecx
1002790a:	c6 84 24 34 06 00 00 	mov    BYTE PTR [esp+0x634],0x0
10027911:	00 
10027912:	8b c1                	mov    eax,ecx
10027914:	8b f7                	mov    esi,edi
10027916:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
1002791a:	c7 84 24 b4 06 00 00 	mov    DWORD PTR [esp+0x6b4],0x0
10027921:	00 00 00 00 
10027925:	c1 e9 02             	shr    ecx,0x2
10027928:	c7 84 24 b8 06 00 00 	mov    DWORD PTR [esp+0x6b8],0x0
1002792f:	00 00 00 00 
10027933:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10027935:	8b c8                	mov    ecx,eax
10027937:	8b 45 3c             	mov    eax,DWORD PTR [ebp+0x3c]
1002793a:	83 e1 03             	and    ecx,0x3
1002793d:	83 f8 01             	cmp    eax,0x1
10027940:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
10027942:	75 5a                	jne    0x1002799e
10027944:	8d 7a 48             	lea    edi,[edx+0x48]
10027947:	83 c9 ff             	or     ecx,0xffffffff
1002794a:	33 c0                	xor    eax,eax
1002794c:	8d b4 24 34 01 00 00 	lea    esi,[esp+0x134]
10027953:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
10027955:	f7 d1                	not    ecx
10027957:	2b f9                	sub    edi,ecx
10027959:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
1002795d:	8b c1                	mov    eax,ecx
1002795f:	8b f7                	mov    esi,edi
10027961:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
10027965:	8b 52 04             	mov    edx,DWORD PTR [edx+0x4]
10027968:	c1 e9 02             	shr    ecx,0x2
1002796b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1002796d:	8b c8                	mov    ecx,eax
1002796f:	83 e1 03             	and    ecx,0x3
10027972:	f7 c2 00 00 08 00    	test   edx,0x80000
10027978:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1002797a:	74 0a                	je     0x10027986
1002797c:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10027980:	0c 20                	or     al,0x20
10027982:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10027986:	f7 c2 00 00 04 00    	test   edx,0x40000
1002798c:	0f 84 12 01 00 00    	je     0x10027aa4
10027992:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10027996:	80 cc 04             	or     ah,0x4
10027999:	e9 02 01 00 00       	jmp    0x10027aa0
1002799e:	f7 42 04 00 00 02 00 	test   DWORD PTR [edx+0x4],0x20000
100279a5:	0f 84 c7 00 00 00    	je     0x10027a72
100279ab:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100279af:	83 c9 08             	or     ecx,0x8
100279b2:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
100279b6:	8b 4d 2c             	mov    ecx,DWORD PTR [ebp+0x2c]
100279b9:	85 c9                	test   ecx,ecx
100279bb:	0f 84 b1 00 00 00    	je     0x10027a72
100279c1:	f6 44 24 34 01       	test   BYTE PTR [esp+0x34],0x1
100279c6:	75 4c                	jne    0x10027a14
100279c8:	d9 82 98 00 00 00    	fld    DWORD PTR [edx+0x98]
100279ce:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
100279d4:	df e0                	fnstsw ax
100279d6:	f6 c4 40             	test   ah,0x40
100279d9:	74 39                	je     0x10027a14
100279db:	d9 82 94 00 00 00    	fld    DWORD PTR [edx+0x94]
100279e1:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
100279e7:	df e0                	fnstsw ax
100279e9:	f6 c4 40             	test   ah,0x40
100279ec:	74 26                	je     0x10027a14
100279ee:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
100279f4:	51                   	push   ecx
100279f5:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
100279f9:	51                   	push   ecx
100279fa:	ff 92 c0 03 00 00    	call   DWORD PTR [edx+0x3c0]
10027a00:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10027a04:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
10027a08:	83 c4 08             	add    esp,0x8
10027a0b:	0d 04 02 00 00       	or     eax,0x204
10027a10:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10027a14:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
10027a17:	f6 c4 01             	test   ah,0x1
10027a1a:	75 56                	jne    0x10027a72
10027a1c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10027a22:	8d 44 24 18          	lea    eax,[esp+0x18]
10027a26:	50                   	push   eax
10027a27:	8d 43 08             	lea    eax,[ebx+0x8]
10027a2a:	8b 11                	mov    edx,DWORD PTR [ecx]
10027a2c:	50                   	push   eax
10027a2d:	8b 45 2c             	mov    eax,DWORD PTR [ebp+0x2c]
10027a30:	50                   	push   eax
10027a31:	ff 92 48 01 00 00    	call   DWORD PTR [edx+0x148]
10027a37:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10027a3b:	68 ff 00 00 00       	push   0xff
10027a40:	e8 ef c3 07 00       	call   0x100a3e34
10027a45:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10027a49:	50                   	push   eax
10027a4a:	e8 e5 c3 07 00       	call   0x100a3e34
10027a4f:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10027a53:	50                   	push   eax
10027a54:	e8 db c3 07 00       	call   0x100a3e34
10027a59:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
10027a5d:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10027a63:	50                   	push   eax
10027a64:	51                   	push   ecx
10027a65:	ff 92 1c 03 00 00    	call   DWORD PTR [edx+0x31c]
10027a6b:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
10027a6f:	83 c4 14             	add    esp,0x14
10027a72:	8b 52 04             	mov    edx,DWORD PTR [edx+0x4]
10027a75:	f7 c2 00 00 08 00    	test   edx,0x80000
10027a7b:	74 0a                	je     0x10027a87
10027a7d:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10027a81:	0c 04                	or     al,0x4
10027a83:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10027a87:	f7 c2 00 00 00 02    	test   edx,0x2000000
10027a8d:	74 0a                	je     0x10027a99
10027a8f:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10027a93:	0c 20                	or     al,0x20
10027a95:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10027a99:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10027a9d:	80 cc 20             	or     ah,0x20
10027aa0:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10027aa4:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
10027aaa:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
10027aae:	8d 54 24 38          	lea    edx,[esp+0x38]
10027ab2:	8b 01                	mov    eax,DWORD PTR [ecx]
10027ab4:	52                   	push   edx
10027ab5:	57                   	push   edi
10027ab6:	ff 50 04             	call   DWORD PTR [eax+0x4]
10027ab9:	85 c0                	test   eax,eax
10027abb:	74 1a                	je     0x10027ad7
10027abd:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10027ac2:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
10027ac5:	52                   	push   edx
10027ac6:	68 14 6f 0d 10       	push   0x100d6f14
10027acb:	8b 08                	mov    ecx,DWORD PTR [eax]
10027acd:	50                   	push   eax
10027ace:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
10027ad4:	83 c4 0c             	add    esp,0xc
10027ad7:	8b 74 24 30          	mov    esi,DWORD PTR [esp+0x30]
10027adb:	8b 43 20             	mov    eax,DWORD PTR [ebx+0x20]
10027ade:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10027ae2:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10027ae8:	d9 86 9c 00 00 00    	fld    DWORD PTR [esi+0x9c]
10027aee:	d9 86 9c 00 00 00    	fld    DWORD PTR [esi+0x9c]
10027af4:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
10027af8:	d9 86 9c 00 00 00    	fld    DWORD PTR [esi+0x9c]
10027afe:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10027b02:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10027b06:	d8 c9                	fmul   st,st(1)
10027b08:	8d 4c 24 18          	lea    ecx,[esp+0x18]
10027b0c:	51                   	push   ecx
10027b0d:	57                   	push   edi
10027b0e:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10027b12:	dd d8                	fstp   st(0)
10027b14:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10027b18:	d8 4c 24 24          	fmul   DWORD PTR [esp+0x24]
10027b1c:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
10027b20:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10027b24:	d8 4c 24 28          	fmul   DWORD PTR [esp+0x28]
10027b28:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
10027b2c:	ff 92 04 03 00 00    	call   DWORD PTR [edx+0x304]
10027b32:	8a 86 a7 00 00 00    	mov    al,BYTE PTR [esi+0xa7]
10027b38:	8a 8e a6 00 00 00    	mov    cl,BYTE PTR [esi+0xa6]
10027b3e:	8a 96 a5 00 00 00    	mov    dl,BYTE PTR [esi+0xa5]
10027b44:	50                   	push   eax
10027b45:	8a 86 a4 00 00 00    	mov    al,BYTE PTR [esi+0xa4]
10027b4b:	51                   	push   ecx
10027b4c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10027b52:	52                   	push   edx
10027b53:	50                   	push   eax
10027b54:	57                   	push   edi
10027b55:	ff 91 1c 03 00 00    	call   DWORD PTR [ecx+0x31c]
10027b5b:	8b 7c 24 48          	mov    edi,DWORD PTR [esp+0x48]
10027b5f:	83 c4 1c             	add    esp,0x1c
10027b62:	33 d2                	xor    edx,edx
10027b64:	8b 45 4c             	mov    eax,DWORD PTR [ebp+0x4c]
10027b67:	89 10                	mov    DWORD PTR [eax],edx
10027b69:	8a 46 04             	mov    al,BYTE PTR [esi+0x4]
10027b6c:	a8 01                	test   al,0x1
10027b6e:	74 58                	je     0x10027bc8
10027b70:	8b 45 4c             	mov    eax,DWORD PTR [ebp+0x4c]
10027b73:	8b 08                	mov    ecx,DWORD PTR [eax]
10027b75:	83 c9 08             	or     ecx,0x8
10027b78:	89 08                	mov    DWORD PTR [eax],ecx
10027b7a:	8b 45 3c             	mov    eax,DWORD PTR [ebp+0x3c]
10027b7d:	83 f8 01             	cmp    eax,0x1
10027b80:	75 37                	jne    0x10027bb9
10027b82:	8b 0d d0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd0
10027b88:	8d 44 24 18          	lea    eax,[esp+0x18]
10027b8c:	50                   	push   eax
10027b8d:	57                   	push   edi
10027b8e:	8b 11                	mov    edx,DWORD PTR [ecx]
10027b90:	ff 52 30             	call   DWORD PTR [edx+0x30]
10027b93:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
10027b97:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
10027b9b:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10027b9f:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
10027ba3:	8b 4d 4c             	mov    ecx,DWORD PTR [ebp+0x4c]
10027ba6:	de c1                	faddp  st(1),st
10027ba8:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10027bac:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
10027bb0:	de c1                	faddp  st(1),st
10027bb2:	d9 fa                	fsqrt
10027bb4:	d9 59 50             	fstp   DWORD PTR [ecx+0x50]
10027bb7:	eb 0f                	jmp    0x10027bc8
10027bb9:	d9 86 9c 00 00 00    	fld    DWORD PTR [esi+0x9c]
10027bbf:	d8 4b 20             	fmul   DWORD PTR [ebx+0x20]
10027bc2:	8b 55 4c             	mov    edx,DWORD PTR [ebp+0x4c]
10027bc5:	d9 5a 50             	fstp   DWORD PTR [edx+0x50]
10027bc8:	d9 86 94 00 00 00    	fld    DWORD PTR [esi+0x94]
10027bce:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10027bd4:	df e0                	fnstsw ax
10027bd6:	f6 c4 40             	test   ah,0x40
10027bd9:	74 06                	je     0x10027be1
10027bdb:	8b 45 4c             	mov    eax,DWORD PTR [ebp+0x4c]
10027bde:	83 08 04             	or     DWORD PTR [eax],0x4
10027be1:	f6 03 01             	test   BYTE PTR [ebx],0x1
10027be4:	74 0a                	je     0x10027bf0
10027be6:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10027bea:	0c 40                	or     al,0x40
10027bec:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10027bf0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10027bf3:	f6 c4 01             	test   ah,0x1
10027bf6:	74 0b                	je     0x10027c03
10027bf8:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10027bfc:	80 cd 02             	or     ch,0x2
10027bff:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10027c03:	a8 40                	test   al,0x40
10027c05:	74 0a                	je     0x10027c11
10027c07:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10027c0b:	0c 04                	or     al,0x4
10027c0d:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10027c11:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
10027c17:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10027c1b:	52                   	push   edx
10027c1c:	6a 00                	push   0x0
10027c1e:	8b 01                	mov    eax,DWORD PTR [ecx]
10027c20:	57                   	push   edi
10027c21:	ff 50 10             	call   DWORD PTR [eax+0x10]
10027c24:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
10027c2a:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
10027c2e:	52                   	push   edx
10027c2f:	6a 01                	push   0x1
10027c31:	8b 01                	mov    eax,DWORD PTR [ecx]
10027c33:	57                   	push   edi
10027c34:	ff 50 10             	call   DWORD PTR [eax+0x10]
10027c37:	e9 de f8 ff ff       	jmp    0x1002751a
10027c3c:	90                   	nop
10027c3d:	90                   	nop
10027c3e:	90                   	nop
10027c3f:	90                   	nop
10027c40:	83 ec 7c             	sub    esp,0x7c
10027c43:	53                   	push   ebx
10027c44:	55                   	push   ebp
10027c45:	8b ac 24 88 00 00 00 	mov    ebp,DWORD PTR [esp+0x88]
10027c4c:	56                   	push   esi
10027c4d:	57                   	push   edi
10027c4e:	8b f9                	mov    edi,ecx
10027c50:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
10027c53:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10027c59:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
10027c5d:	8d 1c c5 00 00 00 00 	lea    ebx,[eax*8+0x0]
10027c64:	2b d8                	sub    ebx,eax
10027c66:	8b 07                	mov    eax,DWORD PTR [edi]
10027c68:	c1 e3 05             	shl    ebx,0x5
10027c6b:	03 d8                	add    ebx,eax
10027c6d:	8b 01                	mov    eax,DWORD PTR [ecx]
10027c6f:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
10027c75:	d9 55 40             	fst    DWORD PTR [ebp+0x40]
10027c78:	d9 5d 44             	fstp   DWORD PTR [ebp+0x44]
10027c7b:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10027c81:	8b 45 38             	mov    eax,DWORD PTR [ebp+0x38]
10027c84:	50                   	push   eax
10027c85:	8b 11                	mov    edx,DWORD PTR [ecx]
10027c87:	ff 92 ac 01 00 00    	call   DWORD PTR [edx+0x1ac]
10027c8d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10027c93:	0c 01                	or     al,0x1
10027c95:	50                   	push   eax
10027c96:	8b 45 38             	mov    eax,DWORD PTR [ebp+0x38]
10027c99:	8b 11                	mov    edx,DWORD PTR [ecx]
10027c9b:	50                   	push   eax
10027c9c:	ff 92 b0 01 00 00    	call   DWORD PTR [edx+0x1b0]
10027ca2:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10027ca5:	f6 c4 01             	test   ah,0x1
10027ca8:	0f 85 97 01 00 00    	jne    0x10027e45
10027cae:	8b 55 2c             	mov    edx,DWORD PTR [ebp+0x2c]
10027cb1:	83 fa ff             	cmp    edx,0xffffffff
10027cb4:	75 0a                	jne    0x10027cc0
10027cb6:	f6 45 00 28          	test   BYTE PTR [ebp+0x0],0x28
10027cba:	0f 84 85 01 00 00    	je     0x10027e45
10027cc0:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
10027cc3:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
10027cca:	00 
10027ccb:	a8 20                	test   al,0x20
10027ccd:	75 6c                	jne    0x10027d3b
10027ccf:	83 fa ff             	cmp    edx,0xffffffff
10027cd2:	74 46                	je     0x10027d1a
10027cd4:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10027cda:	8d 74 24 20          	lea    esi,[esp+0x20]
10027cde:	56                   	push   esi
10027cdf:	8d 75 08             	lea    esi,[ebp+0x8]
10027ce2:	8b 01                	mov    eax,DWORD PTR [ecx]
10027ce4:	56                   	push   esi
10027ce5:	52                   	push   edx
10027ce6:	ff 90 48 01 00 00    	call   DWORD PTR [eax+0x148]
10027cec:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10027cf0:	e8 3f c1 07 00       	call   0x100a3e34
10027cf5:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
10027cf9:	88 44 24 1a          	mov    BYTE PTR [esp+0x1a],al
10027cfd:	e8 32 c1 07 00       	call   0x100a3e34
10027d02:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
10027d06:	88 44 24 19          	mov    BYTE PTR [esp+0x19],al
10027d0a:	e8 25 c1 07 00       	call   0x100a3e34
10027d0f:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
10027d13:	c6 44 24 1b ff       	mov    BYTE PTR [esp+0x1b],0xff
10027d18:	eb 3d                	jmp    0x10027d57
10027d1a:	a8 08                	test   al,0x8
10027d1c:	0f 84 23 01 00 00    	je     0x10027e45
10027d22:	8b 55 24             	mov    edx,DWORD PTR [ebp+0x24]
10027d25:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10027d2a:	8d 4c 24 18          	lea    ecx,[esp+0x18]
10027d2e:	51                   	push   ecx
10027d2f:	52                   	push   edx
10027d30:	ff 90 10 03 00 00    	call   DWORD PTR [eax+0x310]
10027d36:	83 c4 08             	add    esp,0x8
10027d39:	eb 1c                	jmp    0x10027d57
10027d3b:	8a 4d 34             	mov    cl,BYTE PTR [ebp+0x34]
10027d3e:	8a 55 35             	mov    dl,BYTE PTR [ebp+0x35]
10027d41:	8a 45 36             	mov    al,BYTE PTR [ebp+0x36]
10027d44:	88 4c 24 1a          	mov    BYTE PTR [esp+0x1a],cl
10027d48:	8a 4d 37             	mov    cl,BYTE PTR [ebp+0x37]
10027d4b:	88 54 24 19          	mov    BYTE PTR [esp+0x19],dl
10027d4f:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
10027d53:	88 4c 24 1b          	mov    BYTE PTR [esp+0x1b],cl
10027d57:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10027d5b:	85 c0                	test   eax,eax
10027d5d:	0f 84 e2 00 00 00    	je     0x10027e45
10027d63:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10027d69:	8b 55 38             	mov    edx,DWORD PTR [ebp+0x38]
10027d6c:	52                   	push   edx
10027d6d:	8b 31                	mov    esi,DWORD PTR [ecx]
10027d6f:	ff 96 ac 01 00 00    	call   DWORD PTR [esi+0x1ac]
10027d75:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10027d7b:	80 cc 02             	or     ah,0x2
10027d7e:	50                   	push   eax
10027d7f:	8b 45 38             	mov    eax,DWORD PTR [ebp+0x38]
10027d82:	50                   	push   eax
10027d83:	ff 96 b0 01 00 00    	call   DWORD PTR [esi+0x1b0]
10027d89:	8a 4c 24 1a          	mov    cl,BYTE PTR [esp+0x1a]
10027d8d:	8a 54 24 19          	mov    dl,BYTE PTR [esp+0x19]
10027d91:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
10027d95:	88 4d 34             	mov    BYTE PTR [ebp+0x34],cl
10027d98:	8a 4c 24 1b          	mov    cl,BYTE PTR [esp+0x1b]
10027d9c:	88 55 35             	mov    BYTE PTR [ebp+0x35],dl
10027d9f:	88 45 36             	mov    BYTE PTR [ebp+0x36],al
10027da2:	88 4d 37             	mov    BYTE PTR [ebp+0x37],cl
10027da5:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
10027da8:	8b 45 3c             	mov    eax,DWORD PTR [ebp+0x3c]
10027dab:	83 ca 20             	or     edx,0x20
10027dae:	83 f8 02             	cmp    eax,0x2
10027db1:	89 55 00             	mov    DWORD PTR [ebp+0x0],edx
10027db4:	74 09                	je     0x10027dbf
10027db6:	83 f8 01             	cmp    eax,0x1
10027db9:	0f 85 86 00 00 00    	jne    0x10027e45
10027dbf:	f6 43 08 04          	test   BYTE PTR [ebx+0x8],0x4
10027dc3:	74 57                	je     0x10027e1c
10027dc5:	8b 54 24 1a          	mov    edx,DWORD PTR [esp+0x1a]
10027dc9:	33 c0                	xor    eax,eax
10027dcb:	8a 83 a4 00 00 00    	mov    al,BYTE PTR [ebx+0xa4]
10027dd1:	81 e2 ff 00 00 00    	and    edx,0xff
10027dd7:	03 c2                	add    eax,edx
10027dd9:	99                   	cdq
10027dda:	2b c2                	sub    eax,edx
10027ddc:	d1 f8                	sar    eax,1
10027dde:	88 44 24 1a          	mov    BYTE PTR [esp+0x1a],al
10027de2:	8b 4c 24 19          	mov    ecx,DWORD PTR [esp+0x19]
10027de6:	33 c0                	xor    eax,eax
10027de8:	81 e1 ff 00 00 00    	and    ecx,0xff
10027dee:	8a 83 a5 00 00 00    	mov    al,BYTE PTR [ebx+0xa5]
10027df4:	03 c1                	add    eax,ecx
10027df6:	99                   	cdq
10027df7:	2b c2                	sub    eax,edx
10027df9:	d1 f8                	sar    eax,1
10027dfb:	88 44 24 19          	mov    BYTE PTR [esp+0x19],al
10027dff:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
10027e03:	33 c0                	xor    eax,eax
10027e05:	81 e2 ff 00 00 00    	and    edx,0xff
10027e0b:	8a 83 a6 00 00 00    	mov    al,BYTE PTR [ebx+0xa6]
10027e11:	03 c2                	add    eax,edx
10027e13:	99                   	cdq
10027e14:	2b c2                	sub    eax,edx
10027e16:	d1 f8                	sar    eax,1
10027e18:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
10027e1c:	8a 83 a7 00 00 00    	mov    al,BYTE PTR [ebx+0xa7]
10027e22:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10027e26:	8b 54 24 19          	mov    edx,DWORD PTR [esp+0x19]
10027e2a:	50                   	push   eax
10027e2b:	8b 44 24 1e          	mov    eax,DWORD PTR [esp+0x1e]
10027e2f:	51                   	push   ecx
10027e30:	8b 4d 38             	mov    ecx,DWORD PTR [ebp+0x38]
10027e33:	52                   	push   edx
10027e34:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10027e3a:	50                   	push   eax
10027e3b:	51                   	push   ecx
10027e3c:	ff 92 1c 03 00 00    	call   DWORD PTR [edx+0x31c]
10027e42:	83 c4 14             	add    esp,0x14
10027e45:	55                   	push   ebp
10027e46:	8b cf                	mov    ecx,edi
10027e48:	e8 83 0a 00 00       	call   0x100288d0
10027e4d:	f6 43 04 08          	test   BYTE PTR [ebx+0x4],0x8
10027e51:	0f 84 40 01 00 00    	je     0x10027f97
10027e57:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
10027e5a:	f6 c1 08             	test   cl,0x8
10027e5d:	0f 85 34 01 00 00    	jne    0x10027f97
10027e63:	f6 c1 02             	test   cl,0x2
10027e66:	0f 84 2b 01 00 00    	je     0x10027f97
10027e6c:	8b 45 2c             	mov    eax,DWORD PTR [ebp+0x2c]
10027e6f:	83 f8 ff             	cmp    eax,0xffffffff
10027e72:	0f 85 e8 00 00 00    	jne    0x10027f60
10027e78:	f6 c1 40             	test   cl,0x40
10027e7b:	0f 85 e4 00 00 00    	jne    0x10027f65
10027e81:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10027e84:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
10027e88:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10027e8b:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10027e8e:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
10027e92:	89 4c 24 58          	mov    DWORD PTR [esp+0x58],ecx
10027e96:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
10027e9a:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
10027e9e:	d8 25 04 85 0b 10    	fsub   DWORD PTR ds:0x100b8504
10027ea4:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
10027ea8:	8d 54 24 2c          	lea    edx,[esp+0x2c]
10027eac:	33 f6                	xor    esi,esi
10027eae:	52                   	push   edx
10027eaf:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
10027eb3:	d9 44 24 60          	fld    DWORD PTR [esp+0x60]
10027eb7:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10027ebb:	89 b4 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],esi
10027ec2:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
10027ec6:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
10027eca:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
10027ece:	d9 5c 24 64          	fstp   DWORD PTR [esp+0x64]
10027ed2:	89 4c 24 6c          	mov    DWORD PTR [esp+0x6c],ecx
10027ed6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10027edc:	8d 44 24 58          	lea    eax,[esp+0x58]
10027ee0:	89 74 24 70          	mov    DWORD PTR [esp+0x70],esi
10027ee4:	50                   	push   eax
10027ee5:	89 74 24 78          	mov    DWORD PTR [esp+0x78],esi
10027ee9:	89 74 24 7c          	mov    DWORD PTR [esp+0x7c],esi
10027eed:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
10027ef1:	89 74 24 38          	mov    DWORD PTR [esp+0x38],esi
10027ef5:	89 74 24 3c          	mov    DWORD PTR [esp+0x3c],esi
10027ef9:	89 74 24 40          	mov    DWORD PTR [esp+0x40],esi
10027efd:	89 74 24 44          	mov    DWORD PTR [esp+0x44],esi
10027f01:	89 74 24 48          	mov    DWORD PTR [esp+0x48],esi
10027f05:	89 74 24 4c          	mov    DWORD PTR [esp+0x4c],esi
10027f09:	89 74 24 50          	mov    DWORD PTR [esp+0x50],esi
10027f0d:	89 74 24 58          	mov    DWORD PTR [esp+0x58],esi
10027f11:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x7
10027f18:	07 00 00 00 
10027f1c:	c7 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],0x10011650
10027f23:	50 16 01 10 
10027f27:	c7 84 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],0x10011760
10027f2e:	60 17 01 10 
10027f32:	ff 91 30 01 00 00    	call   DWORD PTR [ecx+0x130]
10027f38:	83 c4 08             	add    esp,0x8
10027f3b:	85 c0                	test   eax,eax
10027f3d:	74 58                	je     0x10027f97
10027f3f:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
10027f43:	83 f8 ff             	cmp    eax,0xffffffff
10027f46:	74 4f                	je     0x10027f97
10027f48:	8b 55 30             	mov    edx,DWORD PTR [ebp+0x30]
10027f4b:	8b 4d 20             	mov    ecx,DWORD PTR [ebp+0x20]
10027f4e:	56                   	push   esi
10027f4f:	52                   	push   edx
10027f50:	8b 54 24 50          	mov    edx,DWORD PTR [esp+0x50]
10027f54:	51                   	push   ecx
10027f55:	52                   	push   edx
10027f56:	89 45 2c             	mov    DWORD PTR [ebp+0x2c],eax
10027f59:	50                   	push   eax
10027f5a:	8d 44 24 40          	lea    eax,[esp+0x40]
10027f5e:	eb 2b                	jmp    0x10027f8b
10027f60:	f6 c1 40             	test   cl,0x40
10027f63:	74 14                	je     0x10027f79
10027f65:	8b 45 30             	mov    eax,DWORD PTR [ebp+0x30]
10027f68:	8b 4d 20             	mov    ecx,DWORD PTR [ebp+0x20]
10027f6b:	8d 55 14             	lea    edx,[ebp+0x14]
10027f6e:	52                   	push   edx
10027f6f:	8b 55 24             	mov    edx,DWORD PTR [ebp+0x24]
10027f72:	50                   	push   eax
10027f73:	51                   	push   ecx
10027f74:	52                   	push   edx
10027f75:	6a ff                	push   0xffffffff
10027f77:	eb 0f                	jmp    0x10027f88
10027f79:	8b 55 30             	mov    edx,DWORD PTR [ebp+0x30]
10027f7c:	8b 4d 20             	mov    ecx,DWORD PTR [ebp+0x20]
10027f7f:	6a 00                	push   0x0
10027f81:	52                   	push   edx
10027f82:	8b 55 24             	mov    edx,DWORD PTR [ebp+0x24]
10027f85:	51                   	push   ecx
10027f86:	52                   	push   edx
10027f87:	50                   	push   eax
10027f88:	8d 45 08             	lea    eax,[ebp+0x8]
10027f8b:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
10027f8e:	50                   	push   eax
10027f8f:	51                   	push   ecx
10027f90:	8b cf                	mov    ecx,edi
10027f92:	e8 f9 20 00 00       	call   0x1002a090
10027f97:	f6 43 04 02          	test   BYTE PTR [ebx+0x4],0x2
10027f9b:	74 6f                	je     0x1002800c
10027f9d:	8d 93 b0 00 00 00    	lea    edx,[ebx+0xb0]
10027fa3:	c7 44 24 18 04 00 00 	mov    DWORD PTR [esp+0x18],0x4
10027faa:	00 
10027fab:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10027faf:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10027fb3:	66 8b 00             	mov    ax,WORD PTR [eax]
10027fb6:	66 3d ff ff          	cmp    ax,0xffff
10027fba:	74 3a                	je     0x10027ff6
10027fbc:	b9 0e 00 00 00       	mov    ecx,0xe
10027fc1:	8b f5                	mov    esi,ebp
10027fc3:	8d 7c 24 54          	lea    edi,[esp+0x54]
10027fc7:	8d 54 24 54          	lea    edx,[esp+0x54]
10027fcb:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10027fcd:	8b 7c 24 54          	mov    edi,DWORD PTR [esp+0x54]
10027fd1:	52                   	push   edx
10027fd2:	0f bf c8             	movsx  ecx,ax
10027fd5:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
10027fd9:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10027fdd:	83 cf 02             	or     edi,0x2
10027fe0:	89 7c 24 58          	mov    DWORD PTR [esp+0x58],edi
10027fe4:	e8 47 f3 ff ff       	call   0x10027330
10027fe9:	85 c0                	test   eax,eax
10027feb:	74 09                	je     0x10027ff6
10027fed:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
10027ff0:	8b 4d 50             	mov    ecx,DWORD PTR [ebp+0x50]
10027ff3:	89 48 50             	mov    DWORD PTR [eax+0x50],ecx
10027ff6:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10027ffa:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10027ffe:	83 c1 02             	add    ecx,0x2
10028001:	48                   	dec    eax
10028002:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10028006:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1002800a:	75 a3                	jne    0x10027faf
1002800c:	f6 43 04 04          	test   BYTE PTR [ebx+0x4],0x4
10028010:	74 76                	je     0x10028088
10028012:	8d 93 b0 00 00 00    	lea    edx,[ebx+0xb0]
10028018:	c7 44 24 18 04 00 00 	mov    DWORD PTR [esp+0x18],0x4
1002801f:	00 
10028020:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10028024:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10028028:	66 8b 00             	mov    ax,WORD PTR [eax]
1002802b:	66 3d ff ff          	cmp    ax,0xffff
1002802f:	74 41                	je     0x10028072
10028031:	b9 0e 00 00 00       	mov    ecx,0xe
10028036:	8b f5                	mov    esi,ebp
10028038:	8d 7c 24 54          	lea    edi,[esp+0x54]
1002803c:	8b 55 38             	mov    edx,DWORD PTR [ebp+0x38]
1002803f:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10028041:	8b 74 24 54          	mov    esi,DWORD PTR [esp+0x54]
10028045:	89 54 24 78          	mov    DWORD PTR [esp+0x78],edx
10028049:	0f bf c8             	movsx  ecx,ax
1002804c:	8d 44 24 54          	lea    eax,[esp+0x54]
10028050:	89 4c 24 58          	mov    DWORD PTR [esp+0x58],ecx
10028054:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10028058:	83 ce 0a             	or     esi,0xa
1002805b:	50                   	push   eax
1002805c:	89 74 24 58          	mov    DWORD PTR [esp+0x58],esi
10028060:	e8 cb f2 ff ff       	call   0x10027330
10028065:	85 c0                	test   eax,eax
10028067:	74 09                	je     0x10028072
10028069:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1002806c:	8b 55 50             	mov    edx,DWORD PTR [ebp+0x50]
1002806f:	89 51 50             	mov    DWORD PTR [ecx+0x50],edx
10028072:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10028076:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1002807a:	83 c1 02             	add    ecx,0x2
1002807d:	48                   	dec    eax
1002807e:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10028082:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10028086:	75 9c                	jne    0x10028024
10028088:	8b 45 3c             	mov    eax,DWORD PTR [ebp+0x3c]
1002808b:	83 f8 01             	cmp    eax,0x1
1002808e:	74 05                	je     0x10028095
10028090:	83 f8 02             	cmp    eax,0x2
10028093:	75 5e                	jne    0x100280f3
10028095:	66 8b 83 b8 00 00 00 	mov    ax,WORD PTR [ebx+0xb8]
1002809c:	66 3d 01 00          	cmp    ax,0x1
100280a0:	76 51                	jbe    0x100280f3
100280a2:	f6 45 00 02          	test   BYTE PTR [ebp+0x0],0x2
100280a6:	74 4b                	je     0x100280f3
100280a8:	b9 0e 00 00 00       	mov    ecx,0xe
100280ad:	8b f5                	mov    esi,ebp
100280af:	8d 7c 24 54          	lea    edi,[esp+0x54]
100280b3:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100280b5:	8b 54 24 54          	mov    edx,DWORD PTR [esp+0x54]
100280b9:	be 01 00 00 00       	mov    esi,0x1
100280be:	83 e2 fd             	and    edx,0xfffffffd
100280c1:	66 3b c6             	cmp    ax,si
100280c4:	89 54 24 54          	mov    DWORD PTR [esp+0x54],edx
100280c8:	76 29                	jbe    0x100280f3
100280ca:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
100280ce:	8d 44 24 54          	lea    eax,[esp+0x54]
100280d2:	50                   	push   eax
100280d3:	e8 58 f2 ff ff       	call   0x10027330
100280d8:	85 c0                	test   eax,eax
100280da:	74 09                	je     0x100280e5
100280dc:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
100280df:	8b 55 50             	mov    edx,DWORD PTR [ebp+0x50]
100280e2:	89 51 50             	mov    DWORD PTR [ecx+0x50],edx
100280e5:	33 c0                	xor    eax,eax
100280e7:	46                   	inc    esi
100280e8:	66 8b 83 b8 00 00 00 	mov    ax,WORD PTR [ebx+0xb8]
100280ef:	3b f0                	cmp    esi,eax
100280f1:	72 d7                	jb     0x100280ca
100280f3:	5f                   	pop    edi
100280f4:	5e                   	pop    esi
100280f5:	5d                   	pop    ebp
100280f6:	5b                   	pop    ebx
100280f7:	83 c4 7c             	add    esp,0x7c
100280fa:	c2 04 00             	ret    0x4
100280fd:	90                   	nop
100280fe:	90                   	nop
100280ff:	90                   	nop
10028100:	57                   	push   edi
10028101:	8b f9                	mov    edi,ecx
10028103:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
10028106:	85 c0                	test   eax,eax
10028108:	74 24                	je     0x1002812e
1002810a:	53                   	push   ebx
1002810b:	8b 5c 24 0c          	mov    ebx,DWORD PTR [esp+0xc]
1002810f:	56                   	push   esi
10028110:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
10028113:	39 59 50             	cmp    DWORD PTR [ecx+0x50],ebx
10028116:	75 0e                	jne    0x10028126
10028118:	8b 30                	mov    esi,DWORD PTR [eax]
1002811a:	50                   	push   eax
1002811b:	8b cf                	mov    ecx,edi
1002811d:	e8 0e 01 00 00       	call   0x10028230
10028122:	8b c6                	mov    eax,esi
10028124:	eb 02                	jmp    0x10028128
10028126:	8b 00                	mov    eax,DWORD PTR [eax]
10028128:	85 c0                	test   eax,eax
1002812a:	75 e4                	jne    0x10028110
1002812c:	5e                   	pop    esi
1002812d:	5b                   	pop    ebx
1002812e:	5f                   	pop    edi
1002812f:	c2 04 00             	ret    0x4
10028132:	90                   	nop
10028133:	90                   	nop
10028134:	90                   	nop
10028135:	90                   	nop
10028136:	90                   	nop
10028137:	90                   	nop
10028138:	90                   	nop
10028139:	90                   	nop
1002813a:	90                   	nop
1002813b:	90                   	nop
1002813c:	90                   	nop
1002813d:	90                   	nop
1002813e:	90                   	nop
1002813f:	90                   	nop
10028140:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10028144:	53                   	push   ebx
10028145:	55                   	push   ebp
10028146:	56                   	push   esi
10028147:	8d 14 c5 00 00 00 00 	lea    edx,[eax*8+0x0]
1002814e:	8b f1                	mov    esi,ecx
10028150:	2b d0                	sub    edx,eax
10028152:	57                   	push   edi
10028153:	8b 0e                	mov    ecx,DWORD PTR [esi]
10028155:	c1 e2 05             	shl    edx,0x5
10028158:	8d 04 0a             	lea    eax,[edx+ecx*1]
1002815b:	8b 4c 0a 08          	mov    ecx,DWORD PTR [edx+ecx*1+0x8]
1002815f:	f6 c1 10             	test   cl,0x10
10028162:	74 0a                	je     0x1002816e
10028164:	ba 01 00 00 00       	mov    edx,0x1
10028169:	8d 6e 5c             	lea    ebp,[esi+0x5c]
1002816c:	eb 34                	jmp    0x100281a2
1002816e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10028171:	a8 20                	test   al,0x20
10028173:	74 0a                	je     0x1002817f
10028175:	ba 01 00 00 00       	mov    edx,0x1
1002817a:	8d 6e 2c             	lea    ebp,[esi+0x2c]
1002817d:	eb 23                	jmp    0x100281a2
1002817f:	f6 c4 10             	test   ah,0x10
10028182:	74 0a                	je     0x1002818e
10028184:	ba 04 00 00 00       	mov    edx,0x4
10028189:	8d 6e 50             	lea    ebp,[esi+0x50]
1002818c:	eb 14                	jmp    0x100281a2
1002818e:	f6 c1 08             	test   cl,0x8
10028191:	74 0a                	je     0x1002819d
10028193:	ba 02 00 00 00       	mov    edx,0x2
10028198:	8d 6e 38             	lea    ebp,[esi+0x38]
1002819b:	eb 05                	jmp    0x100281a2
1002819d:	33 d2                	xor    edx,edx
1002819f:	8d 6e 20             	lea    ebp,[esi+0x20]
100281a2:	83 7d 00 00          	cmp    DWORD PTR [ebp+0x0],0x0
100281a6:	75 4c                	jne    0x100281f4
100281a8:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
100281ab:	32 db                	xor    bl,bl
100281ad:	85 c9                	test   ecx,ecx
100281af:	74 32                	je     0x100281e3
100281b1:	84 db                	test   bl,bl
100281b3:	75 37                	jne    0x100281ec
100281b5:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
100281b8:	39 50 3c             	cmp    DWORD PTR [eax+0x3c],edx
100281bb:	75 1c                	jne    0x100281d9
100281bd:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100281c0:	8d 3c c5 00 00 00 00 	lea    edi,[eax*8+0x0]
100281c7:	2b f8                	sub    edi,eax
100281c9:	8b 06                	mov    eax,DWORD PTR [esi]
100281cb:	c1 e7 05             	shl    edi,0x5
100281ce:	f6 44 07 07 08       	test   BYTE PTR [edi+eax*1+0x7],0x8
100281d3:	75 04                	jne    0x100281d9
100281d5:	b3 01                	mov    bl,0x1
100281d7:	eb 02                	jmp    0x100281db
100281d9:	8b 09                	mov    ecx,DWORD PTR [ecx]
100281db:	85 c9                	test   ecx,ecx
100281dd:	75 d2                	jne    0x100281b1
100281df:	84 db                	test   bl,bl
100281e1:	75 09                	jne    0x100281ec
100281e3:	5f                   	pop    edi
100281e4:	5e                   	pop    esi
100281e5:	5d                   	pop    ebp
100281e6:	33 c0                	xor    eax,eax
100281e8:	5b                   	pop    ebx
100281e9:	c2 04 00             	ret    0x4
100281ec:	51                   	push   ecx
100281ed:	8b ce                	mov    ecx,esi
100281ef:	e8 3c 00 00 00       	call   0x10028230
100281f4:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
100281f7:	85 ff                	test   edi,edi
100281f9:	75 09                	jne    0x10028204
100281fb:	5f                   	pop    edi
100281fc:	5e                   	pop    esi
100281fd:	5d                   	pop    ebp
100281fe:	33 c0                	xor    eax,eax
10028200:	5b                   	pop    ebx
10028201:	c2 04 00             	ret    0x4
10028204:	57                   	push   edi
10028205:	8b cd                	mov    ecx,ebp
10028207:	e8 a4 44 fe ff       	call   0x1000c6b0
1002820c:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
1002820f:	57                   	push   edi
10028210:	50                   	push   eax
10028211:	8d 4e 14             	lea    ecx,[esi+0x14]
10028214:	e8 17 44 fe ff       	call   0x1000c630
10028219:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
1002821c:	89 79 50             	mov    DWORD PTR [ecx+0x50],edi
1002821f:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
10028222:	5f                   	pop    edi
10028223:	5e                   	pop    esi
10028224:	5d                   	pop    ebp
10028225:	5b                   	pop    ebx
10028226:	c2 04 00             	ret    0x4
10028229:	90                   	nop
1002822a:	90                   	nop
1002822b:	90                   	nop
1002822c:	90                   	nop
1002822d:	90                   	nop
1002822e:	90                   	nop
1002822f:	90                   	nop
10028230:	53                   	push   ebx
10028231:	55                   	push   ebp
10028232:	8b 6c 24 0c          	mov    ebp,DWORD PTR [esp+0xc]
10028236:	33 db                	xor    ebx,ebx
10028238:	57                   	push   edi
10028239:	3b eb                	cmp    ebp,ebx
1002823b:	8b f9                	mov    edi,ecx
1002823d:	0f 84 6c 01 00 00    	je     0x100283af
10028243:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
10028249:	56                   	push   esi
1002824a:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1002824d:	53                   	push   ebx
1002824e:	8b 01                	mov    eax,DWORD PTR [ecx]
10028250:	53                   	push   ebx
10028251:	8b 56 38             	mov    edx,DWORD PTR [esi+0x38]
10028254:	52                   	push   edx
10028255:	ff 50 10             	call   DWORD PTR [eax+0x10]
10028258:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1002825e:	8b 56 38             	mov    edx,DWORD PTR [esi+0x38]
10028261:	53                   	push   ebx
10028262:	6a 01                	push   0x1
10028264:	8b 01                	mov    eax,DWORD PTR [ecx]
10028266:	52                   	push   edx
10028267:	ff 50 10             	call   DWORD PTR [eax+0x10]
1002826a:	55                   	push   ebp
1002826b:	8d 4f 14             	lea    ecx,[edi+0x14]
1002826e:	e8 3d 44 fe ff       	call   0x1000c6b0
10028273:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10028276:	8b 17                	mov    edx,DWORD PTR [edi]
10028278:	8d 0c c5 00 00 00 00 	lea    ecx,[eax*8+0x0]
1002827f:	2b c8                	sub    ecx,eax
10028281:	c1 e1 05             	shl    ecx,0x5
10028284:	f6 44 11 08 10       	test   BYTE PTR [ecx+edx*1+0x8],0x10
10028289:	74 3d                	je     0x100282c8
1002828b:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1002828e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10028294:	50                   	push   eax
10028295:	ff 91 a8 01 00 00    	call   DWORD PTR [ecx+0x1a8]
1002829b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002829e:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100282a1:	83 c4 04             	add    esp,0x4
100282a4:	3b c1                	cmp    eax,ecx
100282a6:	77 10                	ja     0x100282b8
100282a8:	2b c1                	sub    eax,ecx
100282aa:	3d c8 00 00 00       	cmp    eax,0xc8
100282af:	72 07                	jb     0x100282b8
100282b1:	89 9c 87 e8 03 00 00 	mov    DWORD PTR [edi+eax*4+0x3e8],ebx
100282b8:	89 5e 38             	mov    DWORD PTR [esi+0x38],ebx
100282bb:	8b 57 64             	mov    edx,DWORD PTR [edi+0x64]
100282be:	55                   	push   ebp
100282bf:	52                   	push   edx
100282c0:	8d 4f 5c             	lea    ecx,[edi+0x5c]
100282c3:	e9 9c 00 00 00       	jmp    0x10028364
100282c8:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
100282cb:	3b c3                	cmp    eax,ebx
100282cd:	75 5b                	jne    0x1002832a
100282cf:	8b 47 28             	mov    eax,DWORD PTR [edi+0x28]
100282d2:	55                   	push   ebp
100282d3:	50                   	push   eax
100282d4:	8d 4f 20             	lea    ecx,[edi+0x20]
100282d7:	e8 54 43 fe ff       	call   0x1000c630
100282dc:	8b 56 38             	mov    edx,DWORD PTR [esi+0x38]
100282df:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100282e4:	8d 4c 24 14          	lea    ecx,[esp+0x14]
100282e8:	53                   	push   ebx
100282e9:	51                   	push   ecx
100282ea:	52                   	push   edx
100282eb:	ff 90 60 03 00 00    	call   DWORD PTR [eax+0x360]
100282f1:	83 c4 0c             	add    esp,0xc
100282f4:	85 c0                	test   eax,eax
100282f6:	74 71                	je     0x10028369
100282f8:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
100282fc:	8b 56 38             	mov    edx,DWORD PTR [esi+0x38]
100282ff:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10028304:	51                   	push   ecx
10028305:	52                   	push   edx
10028306:	ff 90 74 03 00 00    	call   DWORD PTR [eax+0x374]
1002830c:	8b 56 38             	mov    edx,DWORD PTR [esi+0x38]
1002830f:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10028314:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
10028318:	53                   	push   ebx
10028319:	51                   	push   ecx
1002831a:	52                   	push   edx
1002831b:	ff 90 60 03 00 00    	call   DWORD PTR [eax+0x360]
10028321:	83 c4 14             	add    esp,0x14
10028324:	85 c0                	test   eax,eax
10028326:	75 d0                	jne    0x100282f8
10028328:	eb 3f                	jmp    0x10028369
1002832a:	83 f8 01             	cmp    eax,0x1
1002832d:	75 0a                	jne    0x10028339
1002832f:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
10028332:	55                   	push   ebp
10028333:	51                   	push   ecx
10028334:	8d 4f 2c             	lea    ecx,[edi+0x2c]
10028337:	eb 2b                	jmp    0x10028364
10028339:	83 f8 02             	cmp    eax,0x2
1002833c:	75 0a                	jne    0x10028348
1002833e:	8b 57 40             	mov    edx,DWORD PTR [edi+0x40]
10028341:	55                   	push   ebp
10028342:	52                   	push   edx
10028343:	8d 4f 38             	lea    ecx,[edi+0x38]
10028346:	eb 1c                	jmp    0x10028364
10028348:	83 f8 03             	cmp    eax,0x3
1002834b:	75 0a                	jne    0x10028357
1002834d:	8b 47 4c             	mov    eax,DWORD PTR [edi+0x4c]
10028350:	55                   	push   ebp
10028351:	50                   	push   eax
10028352:	8d 4f 44             	lea    ecx,[edi+0x44]
10028355:	eb 0d                	jmp    0x10028364
10028357:	83 f8 04             	cmp    eax,0x4
1002835a:	75 0d                	jne    0x10028369
1002835c:	8b 4f 58             	mov    ecx,DWORD PTR [edi+0x58]
1002835f:	55                   	push   ebp
10028360:	51                   	push   ecx
10028361:	8d 4f 50             	lea    ecx,[edi+0x50]
10028364:	e8 c7 42 fe ff       	call   0x1000c630
10028369:	89 5e 04             	mov    DWORD PTR [esi+0x4],ebx
1002836c:	c7 46 20 00 00 80 3f 	mov    DWORD PTR [esi+0x20],0x3f800000
10028373:	89 5e 24             	mov    DWORD PTR [esi+0x24],ebx
10028376:	89 5e 28             	mov    DWORD PTR [esi+0x28],ebx
10028379:	89 5e 40             	mov    DWORD PTR [esi+0x40],ebx
1002837c:	89 5e 44             	mov    DWORD PTR [esi+0x44],ebx
1002837f:	c7 06 02 00 00 00    	mov    DWORD PTR [esi],0x2
10028385:	88 5e 48             	mov    BYTE PTR [esi+0x48],bl
10028388:	c7 46 2c ff ff ff ff 	mov    DWORD PTR [esi+0x2c],0xffffffff
1002838f:	c7 46 30 02 00 00 00 	mov    DWORD PTR [esi+0x30],0x2
10028396:	89 5e 34             	mov    DWORD PTR [esi+0x34],ebx
10028399:	89 5e 08             	mov    DWORD PTR [esi+0x8],ebx
1002839c:	89 5e 0c             	mov    DWORD PTR [esi+0xc],ebx
1002839f:	89 5e 10             	mov    DWORD PTR [esi+0x10],ebx
100283a2:	89 5e 14             	mov    DWORD PTR [esi+0x14],ebx
100283a5:	89 5e 18             	mov    DWORD PTR [esi+0x18],ebx
100283a8:	89 5e 1c             	mov    DWORD PTR [esi+0x1c],ebx
100283ab:	89 6e 50             	mov    DWORD PTR [esi+0x50],ebp
100283ae:	5e                   	pop    esi
100283af:	5f                   	pop    edi
100283b0:	5d                   	pop    ebp
100283b1:	5b                   	pop    ebx
100283b2:	c2 04 00             	ret    0x4
100283b5:	90                   	nop
100283b6:	90                   	nop
100283b7:	90                   	nop
100283b8:	90                   	nop
100283b9:	90                   	nop
100283ba:	90                   	nop
100283bb:	90                   	nop
100283bc:	90                   	nop
100283bd:	90                   	nop
100283be:	90                   	nop
100283bf:	90                   	nop
100283c0:	83 ec 58             	sub    esp,0x58
100283c3:	55                   	push   ebp
100283c4:	56                   	push   esi
100283c5:	8b 74 24 64          	mov    esi,DWORD PTR [esp+0x64]
100283c9:	57                   	push   edi
100283ca:	85 f6                	test   esi,esi
100283cc:	75 0b                	jne    0x100283d9
100283ce:	5f                   	pop    edi
100283cf:	5e                   	pop    esi
100283d0:	32 c0                	xor    al,al
100283d2:	5d                   	pop    ebp
100283d3:	83 c4 58             	add    esp,0x58
100283d6:	c2 14 00             	ret    0x14
100283d9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100283dc:	8b 11                	mov    edx,DWORD PTR [ecx]
100283de:	8d 3c c5 00 00 00 00 	lea    edi,[eax*8+0x0]
100283e5:	2b f8                	sub    edi,eax
100283e7:	8a 06                	mov    al,BYTE PTR [esi]
100283e9:	c1 e7 05             	shl    edi,0x5
100283ec:	03 fa                	add    edi,edx
100283ee:	a8 08                	test   al,0x8
100283f0:	0f 84 69 01 00 00    	je     0x1002855f
100283f6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100283fc:	8b 56 24             	mov    edx,DWORD PTR [esi+0x24]
100283ff:	52                   	push   edx
10028400:	8b 01                	mov    eax,DWORD PTR [ecx]
10028402:	ff 90 ac 01 00 00    	call   DWORD PTR [eax+0x1ac]
10028408:	a8 01                	test   al,0x1
1002840a:	75 0b                	jne    0x10028417
1002840c:	5f                   	pop    edi
1002840d:	5e                   	pop    esi
1002840e:	32 c0                	xor    al,al
10028410:	5d                   	pop    ebp
10028411:	83 c4 58             	add    esp,0x58
10028414:	c2 14 00             	ret    0x14
10028417:	8b 46 28             	mov    eax,DWORD PTR [esi+0x28]
1002841a:	83 f8 ff             	cmp    eax,0xffffffff
1002841d:	0f 84 cb 00 00 00    	je     0x100284ee
10028423:	8a 0e                	mov    cl,BYTE PTR [esi]
10028425:	8d 6c 24 48          	lea    ebp,[esp+0x48]
10028429:	6a 01                	push   0x1
1002842b:	55                   	push   ebp
1002842c:	f6 c1 10             	test   cl,0x10
1002842f:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
10028435:	50                   	push   eax
10028436:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
10028439:	8b 11                	mov    edx,DWORD PTR [ecx]
1002843b:	50                   	push   eax
1002843c:	74 14                	je     0x10028452
1002843e:	ff 52 24             	call   DWORD PTR [edx+0x24]
10028441:	8b e8                	mov    ebp,eax
10028443:	85 ed                	test   ebp,ebp
10028445:	74 1f                	je     0x10028466
10028447:	5f                   	pop    edi
10028448:	5e                   	pop    esi
10028449:	32 c0                	xor    al,al
1002844b:	5d                   	pop    ebp
1002844c:	83 c4 58             	add    esp,0x58
1002844f:	c2 14 00             	ret    0x14
10028452:	ff 52 04             	call   DWORD PTR [edx+0x4]
10028455:	8b e8                	mov    ebp,eax
10028457:	85 ed                	test   ebp,ebp
10028459:	74 0b                	je     0x10028466
1002845b:	5f                   	pop    edi
1002845c:	5e                   	pop    esi
1002845d:	32 c0                	xor    al,al
1002845f:	5d                   	pop    ebp
10028460:	83 c4 58             	add    esp,0x58
10028463:	c2 14 00             	ret    0x14
10028466:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
1002846a:	85 c0                	test   eax,eax
1002846c:	74 18                	je     0x10028486
1002846e:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
10028472:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
10028476:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
1002847a:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
1002847e:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10028482:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10028486:	8b 44 24 70          	mov    eax,DWORD PTR [esp+0x70]
1002848a:	85 c0                	test   eax,eax
1002848c:	75 06                	jne    0x10028494
1002848e:	f6 47 08 01          	test   BYTE PTR [edi+0x8],0x1
10028492:	74 2e                	je     0x100284c2
10028494:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
1002849a:	8d 44 24 18          	lea    eax,[esp+0x18]
1002849e:	50                   	push   eax
1002849f:	8d 44 24 40          	lea    eax,[esp+0x40]
100284a3:	8b 11                	mov    edx,DWORD PTR [ecx]
100284a5:	50                   	push   eax
100284a6:	8d 44 24 44          	lea    eax,[esp+0x44]
100284aa:	50                   	push   eax
100284ab:	8d 44 24 60          	lea    eax,[esp+0x60]
100284af:	50                   	push   eax
100284b0:	ff 52 10             	call   DWORD PTR [edx+0x10]
100284b3:	85 ed                	test   ebp,ebp
100284b5:	74 0b                	je     0x100284c2
100284b7:	5f                   	pop    edi
100284b8:	5e                   	pop    esi
100284b9:	32 c0                	xor    al,al
100284bb:	5d                   	pop    ebp
100284bc:	83 c4 58             	add    esp,0x58
100284bf:	c2 14 00             	ret    0x14
100284c2:	8b 44 24 74          	mov    eax,DWORD PTR [esp+0x74]
100284c6:	85 c0                	test   eax,eax
100284c8:	0f 84 bb 00 00 00    	je     0x10028589
100284ce:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
100284d2:	8b 54 24 58          	mov    edx,DWORD PTR [esp+0x58]
100284d6:	89 08                	mov    DWORD PTR [eax],ecx
100284d8:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
100284dc:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
100284df:	8b 54 24 60          	mov    edx,DWORD PTR [esp+0x60]
100284e3:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
100284e6:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
100284e9:	e9 9b 00 00 00       	jmp    0x10028589
100284ee:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
100284f1:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
100284f7:	8d 44 24 0c          	lea    eax,[esp+0xc]
100284fb:	50                   	push   eax
100284fc:	51                   	push   ecx
100284fd:	ff 92 f0 02 00 00    	call   DWORD PTR [edx+0x2f0]
10028503:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
10028506:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002850c:	8d 44 24 50          	lea    eax,[esp+0x50]
10028510:	50                   	push   eax
10028511:	51                   	push   ecx
10028512:	ff 92 f4 02 00 00    	call   DWORD PTR [edx+0x2f4]
10028518:	83 c4 10             	add    esp,0x10
1002851b:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10028521:	8d 54 24 18          	lea    edx,[esp+0x18]
10028525:	8b 01                	mov    eax,DWORD PTR [ecx]
10028527:	52                   	push   edx
10028528:	8d 54 24 40          	lea    edx,[esp+0x40]
1002852c:	52                   	push   edx
1002852d:	8d 54 24 44          	lea    edx,[esp+0x44]
10028531:	52                   	push   edx
10028532:	8d 54 24 54          	lea    edx,[esp+0x54]
10028536:	52                   	push   edx
10028537:	ff 50 10             	call   DWORD PTR [eax+0x10]
1002853a:	8b 44 24 74          	mov    eax,DWORD PTR [esp+0x74]
1002853e:	85 c0                	test   eax,eax
10028540:	74 47                	je     0x10028589
10028542:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
10028546:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
1002854a:	89 08                	mov    DWORD PTR [eax],ecx
1002854c:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
10028550:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
10028553:	8b 54 24 54          	mov    edx,DWORD PTR [esp+0x54]
10028557:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1002855a:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
1002855d:	eb 2a                	jmp    0x10028589
1002855f:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10028562:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
10028565:	8b 56 10             	mov    edx,DWORD PTR [esi+0x10]
10028568:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
1002856c:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
1002856f:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10028573:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
10028576:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
1002857a:	8b 56 1c             	mov    edx,DWORD PTR [esi+0x1c]
1002857d:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10028581:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
10028585:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
10028589:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
1002858d:	85 c0                	test   eax,eax
1002858f:	0f 84 11 03 00 00    	je     0x100288a6
10028595:	8b 44 24 78          	mov    eax,DWORD PTR [esp+0x78]
10028599:	85 c0                	test   eax,eax
1002859b:	74 14                	je     0x100285b1
1002859d:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
100285a1:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100285a5:	89 08                	mov    DWORD PTR [eax],ecx
100285a7:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
100285ab:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
100285ae:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
100285b1:	f6 47 08 01          	test   BYTE PTR [edi+0x8],0x1
100285b5:	0f 84 9c 02 00 00    	je     0x10028857
100285bb:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
100285c1:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
100285c5:	df e0                	fnstsw ax
100285c7:	f6 c4 40             	test   ah,0x40
100285ca:	0f 84 ca 00 00 00    	je     0x1002869a
100285d0:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
100285d6:	d8 5c 24 1c          	fcomp  DWORD PTR [esp+0x1c]
100285da:	df e0                	fnstsw ax
100285dc:	f6 c4 40             	test   ah,0x40
100285df:	74 50                	je     0x10028631
100285e1:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
100285e7:	d8 5c 24 20          	fcomp  DWORD PTR [esp+0x20]
100285eb:	df e0                	fnstsw ax
100285ed:	f6 c4 40             	test   ah,0x40
100285f0:	74 3f                	je     0x10028631
100285f2:	d9 87 c4 00 00 00    	fld    DWORD PTR [edi+0xc4]
100285f8:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
100285fc:	d8 c9                	fmul   st,st(1)
100285fe:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
10028602:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10028606:	d8 c9                	fmul   st,st(1)
10028608:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
1002860c:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
10028610:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
10028614:	d8 44 24 0c          	fadd   DWORD PTR [esp+0xc]
10028618:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1002861c:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
10028620:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
10028624:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10028628:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
1002862c:	e9 63 02 00 00       	jmp    0x10028894
10028631:	d9 05 00 85 0b 10    	fld    DWORD PTR ds:0x100b8500
10028637:	d8 5c 24 1c          	fcomp  DWORD PTR [esp+0x1c]
1002863b:	df e0                	fnstsw ax
1002863d:	f6 c4 40             	test   ah,0x40
10028640:	74 58                	je     0x1002869a
10028642:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
10028648:	d8 5c 24 20          	fcomp  DWORD PTR [esp+0x20]
1002864c:	df e0                	fnstsw ax
1002864e:	f6 c4 40             	test   ah,0x40
10028651:	74 47                	je     0x1002869a
10028653:	d9 87 c4 00 00 00    	fld    DWORD PTR [edi+0xc4]
10028659:	d9 c0                	fld    st(0)
1002865b:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1002865f:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
10028663:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10028667:	d8 c9                	fmul   st,st(1)
10028669:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
1002866d:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
10028671:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
10028675:	d8 64 24 3c          	fsub   DWORD PTR [esp+0x3c]
10028679:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1002867d:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
10028681:	d8 64 24 40          	fsub   DWORD PTR [esp+0x40]
10028685:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10028689:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002868d:	d8 e1                	fsub   st,st(1)
1002868f:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
10028693:	dd d8                	fstp   st(0)
10028695:	e9 fe 01 00 00       	jmp    0x10028898
1002869a:	d9 87 c4 00 00 00    	fld    DWORD PTR [edi+0xc4]
100286a0:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
100286a4:	d8 c9                	fmul   st,st(1)
100286a6:	51                   	push   ecx
100286a7:	d9 1c 24             	fstp   DWORD PTR [esp]
100286aa:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
100286ae:	d8 c9                	fmul   st,st(1)
100286b0:	51                   	push   ecx
100286b1:	d9 1c 24             	fstp   DWORD PTR [esp]
100286b4:	51                   	push   ecx
100286b5:	8d 4c 24 48          	lea    ecx,[esp+0x48]
100286b9:	d8 4c 24 24          	fmul   DWORD PTR [esp+0x24]
100286bd:	d9 1c 24             	fstp   DWORD PTR [esp]
100286c0:	e8 8b 59 fe ff       	call   0x1000e050
100286c5:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
100286cb:	8b 10                	mov    edx,DWORD PTR [eax]
100286cd:	d9 c0                	fld    st(0)
100286cf:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100286d2:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
100286d6:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
100286da:	51                   	push   ecx
100286db:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
100286de:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
100286e2:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
100286e6:	d9 1c 24             	fstp   DWORD PTR [esp]
100286e9:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
100286ed:	d8 e1                	fsub   st,st(1)
100286ef:	6a 00                	push   0x0
100286f1:	51                   	push   ecx
100286f2:	8d 4c 24 48          	lea    ecx,[esp+0x48]
100286f6:	d9 1c 24             	fstp   DWORD PTR [esp]
100286f9:	dd d8                	fstp   st(0)
100286fb:	e8 50 59 fe ff       	call   0x1000e050
10028700:	8b 08                	mov    ecx,DWORD PTR [eax]
10028702:	d9 87 bc 00 00 00    	fld    DWORD PTR [edi+0xbc]
10028708:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1002870b:	51                   	push   ecx
1002870c:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
10028710:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
10028714:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
10028717:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
1002871b:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1002871f:	d8 c9                	fmul   st,st(1)
10028721:	d9 1c 24             	fstp   DWORD PTR [esp]
10028724:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
10028728:	d8 c9                	fmul   st,st(1)
1002872a:	51                   	push   ecx
1002872b:	d9 1c 24             	fstp   DWORD PTR [esp]
1002872e:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
10028732:	d8 c9                	fmul   st,st(1)
10028734:	51                   	push   ecx
10028735:	8d 4c 24 54          	lea    ecx,[esp+0x54]
10028739:	d9 1c 24             	fstp   DWORD PTR [esp]
1002873c:	dd d8                	fstp   st(0)
1002873e:	e8 0d 59 fe ff       	call   0x1000e050
10028743:	8b 08                	mov    ecx,DWORD PTR [eax]
10028745:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
10028749:	51                   	push   ecx
1002874a:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
1002874e:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
10028752:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
10028755:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
10028759:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1002875c:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
10028760:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
10028764:	d8 44 24 44          	fadd   DWORD PTR [esp+0x44]
10028768:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
1002876c:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
10028770:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
10028774:	d8 44 24 48          	fadd   DWORD PTR [esp+0x48]
10028778:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1002877c:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
10028780:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
10028784:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10028788:	d8 4c 24 34          	fmul   DWORD PTR [esp+0x34]
1002878c:	de e9                	fsubp  st(1),st
1002878e:	d9 1c 24             	fstp   DWORD PTR [esp]
10028791:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
10028795:	d8 4c 24 34          	fmul   DWORD PTR [esp+0x34]
10028799:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1002879d:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
100287a1:	de e9                	fsubp  st(1),st
100287a3:	51                   	push   ecx
100287a4:	d9 1c 24             	fstp   DWORD PTR [esp]
100287a7:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
100287ab:	d8 4c 24 40          	fmul   DWORD PTR [esp+0x40]
100287af:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
100287b3:	d8 4c 24 3c          	fmul   DWORD PTR [esp+0x3c]
100287b7:	51                   	push   ecx
100287b8:	8d 4c 24 54          	lea    ecx,[esp+0x54]
100287bc:	de e9                	fsubp  st(1),st
100287be:	d9 1c 24             	fstp   DWORD PTR [esp]
100287c1:	e8 8a 58 fe ff       	call   0x1000e050
100287c6:	8b 08                	mov    ecx,DWORD PTR [eax]
100287c8:	d9 87 c0 00 00 00    	fld    DWORD PTR [edi+0xc0]
100287ce:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
100287d1:	51                   	push   ecx
100287d2:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
100287d6:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
100287da:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100287dd:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
100287e1:	d9 44 24 48          	fld    DWORD PTR [esp+0x48]
100287e5:	d8 c9                	fmul   st,st(1)
100287e7:	d9 1c 24             	fstp   DWORD PTR [esp]
100287ea:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
100287ee:	d8 c9                	fmul   st,st(1)
100287f0:	51                   	push   ecx
100287f1:	d9 1c 24             	fstp   DWORD PTR [esp]
100287f4:	51                   	push   ecx
100287f5:	8d 4c 24 54          	lea    ecx,[esp+0x54]
100287f9:	d8 4c 24 48          	fmul   DWORD PTR [esp+0x48]
100287fd:	d9 1c 24             	fstp   DWORD PTR [esp]
10028800:	e8 4b 58 fe ff       	call   0x1000e050
10028805:	8b 08                	mov    ecx,DWORD PTR [eax]
10028807:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
1002880b:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1002880f:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
10028813:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
10028816:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1002881a:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1002881d:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
10028821:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
10028825:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
10028829:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1002882d:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
10028831:	d8 44 24 44          	fadd   DWORD PTR [esp+0x44]
10028835:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
10028839:	d8 44 24 0c          	fadd   DWORD PTR [esp+0xc]
1002883d:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
10028841:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
10028845:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
10028849:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002884d:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
10028851:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
10028855:	eb 3d                	jmp    0x10028894
10028857:	f7 47 04 00 00 02 00 	test   DWORD PTR [edi+0x4],0x20000
1002885e:	75 38                	jne    0x10028898
10028860:	f6 06 01             	test   BYTE PTR [esi],0x1
10028863:	75 33                	jne    0x10028898
10028865:	8d 4c 24 48          	lea    ecx,[esp+0x48]
10028869:	68 0a d7 23 3c       	push   0x3c23d70a
1002886e:	51                   	push   ecx
1002886f:	8d 4c 24 20          	lea    ecx,[esp+0x20]
10028873:	e8 68 71 fe ff       	call   0x1000f9e0
10028878:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1002887c:	d8 00                	fadd   DWORD PTR [eax]
1002887e:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
10028882:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
10028886:	d8 40 04             	fadd   DWORD PTR [eax+0x4]
10028889:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002888d:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10028891:	d8 40 08             	fadd   DWORD PTR [eax+0x8]
10028894:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
10028898:	8b 4c 24 6c          	mov    ecx,DWORD PTR [esp+0x6c]
1002889c:	8d 54 24 0c          	lea    edx,[esp+0xc]
100288a0:	52                   	push   edx
100288a1:	e8 ca 57 fe ff       	call   0x1000e070
100288a6:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
100288aa:	85 c9                	test   ecx,ecx
100288ac:	74 0a                	je     0x100288b8
100288ae:	8d 44 24 18          	lea    eax,[esp+0x18]
100288b2:	50                   	push   eax
100288b3:	e8 b8 57 fe ff       	call   0x1000e070
100288b8:	5f                   	pop    edi
100288b9:	5e                   	pop    esi
100288ba:	b0 01                	mov    al,0x1
100288bc:	5d                   	pop    ebp
100288bd:	83 c4 58             	add    esp,0x58
100288c0:	c2 14 00             	ret    0x14
100288c3:	90                   	nop
100288c4:	90                   	nop
100288c5:	90                   	nop
100288c6:	90                   	nop
100288c7:	90                   	nop
100288c8:	90                   	nop
100288c9:	90                   	nop
100288ca:	90                   	nop
100288cb:	90                   	nop
100288cc:	90                   	nop
100288cd:	90                   	nop
100288ce:	90                   	nop
100288cf:	90                   	nop
100288d0:	81 ec b8 00 00 00    	sub    esp,0xb8
100288d6:	53                   	push   ebx
100288d7:	55                   	push   ebp
100288d8:	56                   	push   esi
100288d9:	57                   	push   edi
100288da:	8b bc 24 cc 00 00 00 	mov    edi,DWORD PTR [esp+0xcc]
100288e1:	33 ed                	xor    ebp,ebp
100288e3:	3b fd                	cmp    edi,ebp
100288e5:	75 0f                	jne    0x100288f6
100288e7:	5f                   	pop    edi
100288e8:	5e                   	pop    esi
100288e9:	5d                   	pop    ebp
100288ea:	32 c0                	xor    al,al
100288ec:	5b                   	pop    ebx
100288ed:	81 c4 b8 00 00 00    	add    esp,0xb8
100288f3:	c2 04 00             	ret    0x4
100288f6:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100288f9:	8b 11                	mov    edx,DWORD PTR [ecx]
100288fb:	bb 01 00 00 00       	mov    ebx,0x1
10028900:	8d 34 c5 00 00 00 00 	lea    esi,[eax*8+0x0]
10028907:	2b f0                	sub    esi,eax
10028909:	c1 e6 05             	shl    esi,0x5
1002890c:	03 f2                	add    esi,edx
1002890e:	66 39 9e b8 00 00 00 	cmp    WORD PTR [esi+0xb8],bx
10028915:	73 0f                	jae    0x10028926
10028917:	5f                   	pop    edi
10028918:	5e                   	pop    esi
10028919:	5d                   	pop    ebp
1002891a:	32 c0                	xor    al,al
1002891c:	5b                   	pop    ebx
1002891d:	81 c4 b8 00 00 00    	add    esp,0xb8
10028923:	c2 04 00             	ret    0x4
10028926:	55                   	push   ebp
10028927:	8d 44 24 28          	lea    eax,[esp+0x28]
1002892b:	55                   	push   ebp
1002892c:	8d 54 24 6c          	lea    edx,[esp+0x6c]
10028930:	50                   	push   eax
10028931:	52                   	push   edx
10028932:	57                   	push   edi
10028933:	e8 88 fa ff ff       	call   0x100283c0
10028938:	84 c0                	test   al,al
1002893a:	75 0d                	jne    0x10028949
1002893c:	5f                   	pop    edi
1002893d:	5e                   	pop    esi
1002893e:	5d                   	pop    ebp
1002893f:	5b                   	pop    ebx
10028940:	81 c4 b8 00 00 00    	add    esp,0xb8
10028946:	c2 04 00             	ret    0x4
10028949:	f7 46 04 00 00 01 00 	test   DWORD PTR [esi+0x4],0x10000
10028950:	74 42                	je     0x10028994
10028952:	f6 07 02             	test   BYTE PTR [edi],0x2
10028955:	74 3d                	je     0x10028994
10028957:	d9 86 a0 00 00 00    	fld    DWORD PTR [esi+0xa0]
1002895d:	d8 0d 78 89 0b 10    	fmul   DWORD PTR ds:0x100b8978
10028963:	51                   	push   ecx
10028964:	d9 1c 24             	fstp   DWORD PTR [esp]
10028967:	d9 86 a0 00 00 00    	fld    DWORD PTR [esi+0xa0]
1002896d:	d8 0d 00 84 0b 10    	fmul   DWORD PTR ds:0x100b8400
10028973:	51                   	push   ecx
10028974:	d9 1c 24             	fstp   DWORD PTR [esp]
10028977:	d9 86 a0 00 00 00    	fld    DWORD PTR [esi+0xa0]
1002897d:	e8 b2 b4 07 00       	call   0x100a3e34
10028982:	50                   	push   eax
10028983:	8d 44 24 70          	lea    eax,[esp+0x70]
10028987:	8d 4e 48             	lea    ecx,[esi+0x48]
1002898a:	50                   	push   eax
1002898b:	51                   	push   ecx
1002898c:	e8 3f 4c 01 00       	call   0x1003d5d0
10028991:	83 c4 14             	add    esp,0x14
10028994:	39 6f 3c             	cmp    DWORD PTR [edi+0x3c],ebp
10028997:	75 3c                	jne    0x100289d5
10028999:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
1002899c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100289a2:	8d 54 24 18          	lea    edx,[esp+0x18]
100289a6:	52                   	push   edx
100289a7:	50                   	push   eax
100289a8:	ff 91 f0 02 00 00    	call   DWORD PTR [ecx+0x2f0]
100289ae:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
100289b2:	d8 64 24 20          	fsub   DWORD PTR [esp+0x20]
100289b6:	83 c4 08             	add    esp,0x8
100289b9:	d9 5c 24 64          	fstp   DWORD PTR [esp+0x64]
100289bd:	d9 44 24 68          	fld    DWORD PTR [esp+0x68]
100289c1:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
100289c5:	d9 5c 24 68          	fstp   DWORD PTR [esp+0x68]
100289c9:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
100289cd:	d8 64 24 20          	fsub   DWORD PTR [esp+0x20]
100289d1:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
100289d5:	d9 86 ac 00 00 00    	fld    DWORD PTR [esi+0xac]
100289db:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
100289e1:	df e0                	fnstsw ax
100289e3:	f6 c4 41             	test   ah,0x41
100289e6:	74 1f                	je     0x10028a07
100289e8:	d9 86 84 00 00 00    	fld    DWORD PTR [esi+0x84]
100289ee:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
100289f4:	df e0                	fnstsw ax
100289f6:	f6 c4 40             	test   ah,0x40
100289f9:	75 0c                	jne    0x10028a07
100289fb:	8b 96 84 00 00 00    	mov    edx,DWORD PTR [esi+0x84]
10028a01:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
10028a05:	eb 0a                	jmp    0x10028a11
10028a07:	8b 86 ac 00 00 00    	mov    eax,DWORD PTR [esi+0xac]
10028a0d:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
10028a11:	66 39 9e b8 00 00 00 	cmp    WORD PTR [esi+0xb8],bx
10028a18:	0f 86 1a 06 00 00    	jbe    0x10029038
10028a1e:	39 6f 3c             	cmp    DWORD PTR [edi+0x3c],ebp
10028a21:	0f 85 11 06 00 00    	jne    0x10029038
10028a27:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10028a2a:	b1 04                	mov    cl,0x4
10028a2c:	25 00 01 00 00       	and    eax,0x100
10028a31:	74 46                	je     0x10028a79
10028a33:	84 4e 08             	test   BYTE PTR [esi+0x8],cl
10028a36:	74 41                	je     0x10028a79
10028a38:	33 c9                	xor    ecx,ecx
10028a3a:	33 d2                	xor    edx,edx
10028a3c:	8a 8e a4 00 00 00    	mov    cl,BYTE PTR [esi+0xa4]
10028a42:	8a 96 a5 00 00 00    	mov    dl,BYTE PTR [esi+0xa5]
10028a48:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10028a4c:	33 c0                	xor    eax,eax
10028a4e:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028a52:	8a 86 a6 00 00 00    	mov    al,BYTE PTR [esi+0xa6]
10028a58:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10028a5c:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10028a60:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028a64:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10028a68:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
10028a6c:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028a70:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10028a74:	e9 3b 01 00 00       	jmp    0x10028bb4
10028a79:	3b c5                	cmp    eax,ebp
10028a7b:	74 1d                	je     0x10028a9a
10028a7d:	c7 44 24 18 00 00 7f 	mov    DWORD PTR [esp+0x18],0x437f0000
10028a84:	43 
10028a85:	c7 44 24 1c 00 00 7f 	mov    DWORD PTR [esp+0x1c],0x437f0000
10028a8c:	43 
10028a8d:	c7 44 24 20 00 00 7f 	mov    DWORD PTR [esp+0x20],0x437f0000
10028a94:	43 
10028a95:	e9 1a 01 00 00       	jmp    0x10028bb4
10028a9a:	8b 07                	mov    eax,DWORD PTR [edi]
10028a9c:	83 e0 20             	and    eax,0x20
10028a9f:	74 7f                	je     0x10028b20
10028aa1:	84 4e 08             	test   BYTE PTR [esi+0x8],cl
10028aa4:	74 7a                	je     0x10028b20
10028aa6:	33 c9                	xor    ecx,ecx
10028aa8:	33 d2                	xor    edx,edx
10028aaa:	8a 8e a4 00 00 00    	mov    cl,BYTE PTR [esi+0xa4]
10028ab0:	8a 57 34             	mov    dl,BYTE PTR [edi+0x34]
10028ab3:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10028ab7:	33 c0                	xor    eax,eax
10028ab9:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028abd:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10028ac1:	8a 86 a5 00 00 00    	mov    al,BYTE PTR [esi+0xa5]
10028ac7:	33 c9                	xor    ecx,ecx
10028ac9:	33 d2                	xor    edx,edx
10028acb:	da 44 24 10          	fiadd  DWORD PTR [esp+0x10]
10028acf:	8a 4f 35             	mov    cl,BYTE PTR [edi+0x35]
10028ad2:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10028ad6:	8a 96 a6 00 00 00    	mov    dl,BYTE PTR [esi+0xa6]
10028adc:	33 c0                	xor    eax,eax
10028ade:	8a 47 36             	mov    al,BYTE PTR [edi+0x36]
10028ae1:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
10028ae7:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10028aeb:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028aef:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10028af3:	da 44 24 10          	fiadd  DWORD PTR [esp+0x10]
10028af7:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10028afb:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
10028b01:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
10028b05:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028b09:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10028b0d:	da 44 24 10          	fiadd  DWORD PTR [esp+0x10]
10028b11:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
10028b17:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10028b1b:	e9 94 00 00 00       	jmp    0x10028bb4
10028b20:	3b c5                	cmp    eax,ebp
10028b22:	74 35                	je     0x10028b59
10028b24:	33 c9                	xor    ecx,ecx
10028b26:	33 d2                	xor    edx,edx
10028b28:	8a 4f 34             	mov    cl,BYTE PTR [edi+0x34]
10028b2b:	8a 57 35             	mov    dl,BYTE PTR [edi+0x35]
10028b2e:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10028b32:	33 c0                	xor    eax,eax
10028b34:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028b38:	8a 47 36             	mov    al,BYTE PTR [edi+0x36]
10028b3b:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10028b3f:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10028b43:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028b47:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10028b4b:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
10028b4f:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028b53:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10028b57:	eb 5b                	jmp    0x10028bb4
10028b59:	84 4e 08             	test   BYTE PTR [esi+0x8],cl
10028b5c:	74 3e                	je     0x10028b9c
10028b5e:	33 c9                	xor    ecx,ecx
10028b60:	33 d2                	xor    edx,edx
10028b62:	8a 8e a4 00 00 00    	mov    cl,BYTE PTR [esi+0xa4]
10028b68:	8a 96 a5 00 00 00    	mov    dl,BYTE PTR [esi+0xa5]
10028b6e:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10028b72:	33 c0                	xor    eax,eax
10028b74:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028b78:	8a 86 a6 00 00 00    	mov    al,BYTE PTR [esi+0xa6]
10028b7e:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10028b82:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10028b86:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028b8a:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10028b8e:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
10028b92:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028b96:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10028b9a:	eb 18                	jmp    0x10028bb4
10028b9c:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
10028ba3:	00 
10028ba4:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
10028bab:	00 
10028bac:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
10028bb3:	00 
10028bb4:	d9 86 c8 00 00 00    	fld    DWORD PTR [esi+0xc8]
10028bba:	d9 e0                	fchs
10028bbc:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
10028bc0:	d9 86 cc 00 00 00    	fld    DWORD PTR [esi+0xcc]
10028bc6:	d9 e0                	fchs
10028bc8:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
10028bcc:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
10028bd0:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10028bd6:	55                   	push   ebp
10028bd7:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
10028bdd:	51                   	push   ecx
10028bde:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
10028be5:	00 
10028be6:	8b 11                	mov    edx,DWORD PTR [ecx]
10028be8:	8d 44 24 78          	lea    eax,[esp+0x78]
10028bec:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
10028bf2:	d9 1c 24             	fstp   DWORD PTR [esp]
10028bf5:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
10028bf9:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
10028bff:	51                   	push   ecx
10028c00:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
10028c06:	d9 1c 24             	fstp   DWORD PTR [esp]
10028c09:	50                   	push   eax
10028c0a:	ff 52 18             	call   DWORD PTR [edx+0x18]
10028c0d:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10028c13:	8d 44 24 30          	lea    eax,[esp+0x30]
10028c17:	50                   	push   eax
10028c18:	8d 44 24 44          	lea    eax,[esp+0x44]
10028c1c:	8b 11                	mov    edx,DWORD PTR [ecx]
10028c1e:	50                   	push   eax
10028c1f:	8d 44 24 48          	lea    eax,[esp+0x48]
10028c23:	50                   	push   eax
10028c24:	8d 44 24 7c          	lea    eax,[esp+0x7c]
10028c28:	50                   	push   eax
10028c29:	ff 52 10             	call   DWORD PTR [edx+0x10]
10028c2c:	d9 86 c8 00 00 00    	fld    DWORD PTR [esi+0xc8]
10028c32:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
10028c36:	d9 86 cc 00 00 00    	fld    DWORD PTR [esi+0xcc]
10028c3c:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
10028c40:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
10028c44:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10028c4a:	55                   	push   ebp
10028c4b:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
10028c51:	51                   	push   ecx
10028c52:	c7 44 24 5c 00 00 00 	mov    DWORD PTR [esp+0x5c],0x0
10028c59:	00 
10028c5a:	8b 11                	mov    edx,DWORD PTR [ecx]
10028c5c:	8d 44 24 78          	lea    eax,[esp+0x78]
10028c60:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
10028c66:	d9 1c 24             	fstp   DWORD PTR [esp]
10028c69:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
10028c6d:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
10028c73:	51                   	push   ecx
10028c74:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
10028c7a:	d9 1c 24             	fstp   DWORD PTR [esp]
10028c7d:	50                   	push   eax
10028c7e:	ff 52 18             	call   DWORD PTR [edx+0x18]
10028c81:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10028c87:	8d 44 24 4c          	lea    eax,[esp+0x4c]
10028c8b:	50                   	push   eax
10028c8c:	8d 44 24 44          	lea    eax,[esp+0x44]
10028c90:	8b 11                	mov    edx,DWORD PTR [ecx]
10028c92:	50                   	push   eax
10028c93:	8d 44 24 48          	lea    eax,[esp+0x48]
10028c97:	50                   	push   eax
10028c98:	8d 44 24 7c          	lea    eax,[esp+0x7c]
10028c9c:	50                   	push   eax
10028c9d:	ff 52 10             	call   DWORD PTR [edx+0x10]
10028ca0:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
10028ca6:	d8 5c 24 24          	fcomp  DWORD PTR [esp+0x24]
10028caa:	df e0                	fnstsw ax
10028cac:	f6 c4 40             	test   ah,0x40
10028caf:	74 4c                	je     0x10028cfd
10028cb1:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
10028cb7:	d8 5c 24 28          	fcomp  DWORD PTR [esp+0x28]
10028cbb:	df e0                	fnstsw ax
10028cbd:	f6 c4 40             	test   ah,0x40
10028cc0:	74 15                	je     0x10028cd7
10028cc2:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
10028cc8:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
10028ccc:	df e0                	fnstsw ax
10028cce:	f6 c4 40             	test   ah,0x40
10028cd1:	0f 85 6a 01 00 00    	jne    0x10028e41
10028cd7:	d9 05 00 85 0b 10    	fld    DWORD PTR ds:0x100b8500
10028cdd:	d8 5c 24 28          	fcomp  DWORD PTR [esp+0x28]
10028ce1:	df e0                	fnstsw ax
10028ce3:	f6 c4 40             	test   ah,0x40
10028ce6:	74 15                	je     0x10028cfd
10028ce8:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
10028cee:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
10028cf2:	df e0                	fnstsw ax
10028cf4:	f6 c4 40             	test   ah,0x40
10028cf7:	0f 85 44 01 00 00    	jne    0x10028e41
10028cfd:	8d 4c 24 58          	lea    ecx,[esp+0x58]
10028d01:	c7 44 24 58 00 00 00 	mov    DWORD PTR [esp+0x58],0x0
10028d08:	00 
10028d09:	51                   	push   ecx
10028d0a:	8d 4c 24 28          	lea    ecx,[esp+0x28]
10028d0e:	c7 44 24 60 00 00 80 	mov    DWORD PTR [esp+0x60],0x3f800000
10028d15:	3f 
10028d16:	c7 44 24 64 00 00 00 	mov    DWORD PTR [esp+0x64],0x0
10028d1d:	00 
10028d1e:	e8 bd 0f ff ff       	call   0x10019ce0
10028d23:	84 c0                	test   al,al
10028d25:	74 1d                	je     0x10028d44
10028d27:	c7 44 24 24 00 00 b4 	mov    DWORD PTR [esp+0x24],0x42b40000
10028d2e:	42 
10028d2f:	c7 44 24 28 00 00 00 	mov    DWORD PTR [esp+0x28],0x0
10028d36:	00 
10028d37:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
10028d3e:	00 
10028d3f:	e9 aa 00 00 00       	jmp    0x10028dee
10028d44:	8d 4c 24 24          	lea    ecx,[esp+0x24]
10028d48:	e8 93 26 fe ff       	call   0x1000b3e0
10028d4d:	d8 1d c0 83 0b 10    	fcomp  DWORD PTR ds:0x100b83c0
10028d53:	df e0                	fnstsw ax
10028d55:	f6 c4 40             	test   ah,0x40
10028d58:	75 19                	jne    0x10028d73
10028d5a:	68 00 00 80 3f       	push   0x3f800000
10028d5f:	8d 4c 24 28          	lea    ecx,[esp+0x28]
10028d63:	e8 a8 26 fe ff       	call   0x1000b410
10028d68:	8d 4c 24 24          	lea    ecx,[esp+0x24]
10028d6c:	e8 6f 26 fe ff       	call   0x1000b3e0
10028d71:	dd d8                	fstp   st(0)
10028d73:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
10028d77:	e8 a4 b6 07 00       	call   0x100a4420
10028d7c:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
10028d82:	d9 e0                	fchs
10028d84:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10028d88:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
10028d8c:	d8 74 24 2c          	fdiv   DWORD PTR [esp+0x2c]
10028d90:	d9 e8                	fld1
10028d92:	d9 f3                	fpatan
10028d94:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
10028d9a:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
10028d9e:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
10028da2:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10028da8:	df e0                	fnstsw ax
10028daa:	f6 c4 01             	test   ah,0x1
10028dad:	74 0c                	je     0x10028dbb
10028daf:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10028db3:	d8 05 20 85 0b 10    	fadd   DWORD PTR ds:0x100b8520
10028db9:	eb 1b                	jmp    0x10028dd6
10028dbb:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
10028dbf:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10028dc5:	df e0                	fnstsw ax
10028dc7:	f6 c4 01             	test   ah,0x1
10028dca:	74 0e                	je     0x10028dda
10028dcc:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10028dd0:	d8 05 1c 85 0b 10    	fadd   DWORD PTR ds:0x100b851c
10028dd6:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
10028dda:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10028dde:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10028de2:	55                   	push   ebp
10028de3:	52                   	push   edx
10028de4:	50                   	push   eax
10028de5:	8d 4c 24 30          	lea    ecx,[esp+0x30]
10028de9:	e8 d2 25 fe ff       	call   0x1000b3c0
10028dee:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
10028df2:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
10028df8:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10028dfe:	55                   	push   ebp
10028dff:	51                   	push   ecx
10028e00:	8d 44 24 78          	lea    eax,[esp+0x78]
10028e04:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
10028e0a:	8b 11                	mov    edx,DWORD PTR [ecx]
10028e0c:	d9 1c 24             	fstp   DWORD PTR [esp]
10028e0f:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
10028e13:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
10028e19:	51                   	push   ecx
10028e1a:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
10028e20:	d9 1c 24             	fstp   DWORD PTR [esp]
10028e23:	50                   	push   eax
10028e24:	ff 52 18             	call   DWORD PTR [edx+0x18]
10028e27:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10028e2d:	8d 44 24 70          	lea    eax,[esp+0x70]
10028e31:	50                   	push   eax
10028e32:	8d 84 24 8c 00 00 00 	lea    eax,[esp+0x8c]
10028e39:	8b 11                	mov    edx,DWORD PTR [ecx]
10028e3b:	50                   	push   eax
10028e3c:	ff 52 20             	call   DWORD PTR [edx+0x20]
10028e3f:	eb 34                	jmp    0x10028e75
10028e41:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
10028e45:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
10028e49:	68 00 00 80 3f       	push   0x3f800000
10028e4e:	55                   	push   ebp
10028e4f:	55                   	push   ebp
10028e50:	55                   	push   ebp
10028e51:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
10028e55:	55                   	push   ebp
10028e56:	51                   	push   ecx
10028e57:	55                   	push   ebp
10028e58:	68 00 00 80 3f       	push   0x3f800000
10028e5d:	55                   	push   ebp
10028e5e:	52                   	push   edx
10028e5f:	55                   	push   ebp
10028e60:	55                   	push   ebp
10028e61:	55                   	push   ebp
10028e62:	50                   	push   eax
10028e63:	68 00 00 80 3f       	push   0x3f800000
10028e68:	55                   	push   ebp
10028e69:	8d 8c 24 c8 00 00 00 	lea    ecx,[esp+0xc8]
10028e70:	e8 0b 0d 00 00       	call   0x10029b80
10028e75:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
10028e79:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
10028e7d:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
10028e81:	89 4c 24 58          	mov    DWORD PTR [esp+0x58],ecx
10028e85:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
10028e89:	8d 4c 24 58          	lea    ecx,[esp+0x58]
10028e8d:	89 44 24 60          	mov    DWORD PTR [esp+0x60],eax
10028e91:	8d 94 24 88 00 00 00 	lea    edx,[esp+0x88]
10028e98:	51                   	push   ecx
10028e99:	8d 44 24 44          	lea    eax,[esp+0x44]
10028e9d:	52                   	push   edx
10028e9e:	50                   	push   eax
10028e9f:	e8 3c 22 fe ff       	call   0x1000b0e0
10028ea4:	dd d8                	fstp   st(0)
10028ea6:	d9 47 20             	fld    DWORD PTR [edi+0x20]
10028ea9:	d8 8e 98 00 00 00    	fmul   DWORD PTR [esi+0x98]
10028eaf:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
10028eb3:	d8 0d dc 83 0b 10    	fmul   DWORD PTR ds:0x100b83dc
10028eb9:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
10028ebd:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
10028ec1:	8d 44 24 4c          	lea    eax,[esp+0x4c]
10028ec5:	d8 c9                	fmul   st,st(1)
10028ec7:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
10028ecb:	d8 ca                	fmul   st,st(2)
10028ecd:	50                   	push   eax
10028ece:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
10028ed2:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
10028ed6:	8b 4c 24 6c          	mov    ecx,DWORD PTR [esp+0x6c]
10028eda:	d8 ca                	fmul   st,st(2)
10028edc:	89 4c 24 44          	mov    DWORD PTR [esp+0x44],ecx
10028ee0:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
10028ee4:	89 4c 24 54          	mov    DWORD PTR [esp+0x54],ecx
10028ee8:	8d 8c 24 98 00 00 00 	lea    ecx,[esp+0x98]
10028eef:	d9 5c 24 70          	fstp   DWORD PTR [esp+0x70]
10028ef3:	8b 54 24 70          	mov    edx,DWORD PTR [esp+0x70]
10028ef7:	51                   	push   ecx
10028ef8:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
10028efc:	89 54 24 4c          	mov    DWORD PTR [esp+0x4c],edx
10028f00:	8b 54 24 68          	mov    edx,DWORD PTR [esp+0x68]
10028f04:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
10028f08:	8d 54 24 6c          	lea    edx,[esp+0x6c]
10028f0c:	dd d8                	fstp   st(0)
10028f0e:	52                   	push   edx
10028f0f:	e8 cc 21 fe ff       	call   0x1000b0e0
10028f14:	dd d8                	fstp   st(0)
10028f16:	d9 47 20             	fld    DWORD PTR [edi+0x20]
10028f19:	d8 8e 98 00 00 00    	fmul   DWORD PTR [esi+0x98]
10028f1f:	8d 54 24 30          	lea    edx,[esp+0x30]
10028f23:	d8 0d d4 83 0b 10    	fmul   DWORD PTR ds:0x100b83d4
10028f29:	d9 44 24 70          	fld    DWORD PTR [esp+0x70]
10028f2d:	d8 c9                	fmul   st,st(1)
10028f2f:	d9 44 24 74          	fld    DWORD PTR [esp+0x74]
10028f33:	d8 ca                	fmul   st,st(2)
10028f35:	d9 5c 24 5c          	fstp   DWORD PTR [esp+0x5c]
10028f39:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
10028f3d:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
10028f41:	d8 ca                	fmul   st,st(2)
10028f43:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
10028f47:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
10028f4b:	50                   	push   eax
10028f4c:	50                   	push   eax
10028f4d:	d9 5c 24 68          	fstp   DWORD PTR [esp+0x68]
10028f51:	8b 4c 24 68          	mov    ecx,DWORD PTR [esp+0x68]
10028f55:	8d 44 24 38          	lea    eax,[esp+0x38]
10028f59:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
10028f5d:	89 4c 24 74          	mov    DWORD PTR [esp+0x74],ecx
10028f61:	52                   	push   edx
10028f62:	8d 4c 24 70          	lea    ecx,[esp+0x70]
10028f66:	50                   	push   eax
10028f67:	8d 54 24 58          	lea    edx,[esp+0x58]
10028f6b:	51                   	push   ecx
10028f6c:	dd d8                	fstp   st(0)
10028f6e:	52                   	push   edx
10028f6f:	33 d2                	xor    edx,edx
10028f71:	8d 84 24 94 00 00 00 	lea    eax,[esp+0x94]
10028f78:	66 8b 96 b8 00 00 00 	mov    dx,WORD PTR [esi+0xb8]
10028f7f:	8d 8c 24 94 00 00 00 	lea    ecx,[esp+0x94]
10028f86:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
10028f8a:	50                   	push   eax
10028f8b:	db 44 24 44          	fild   DWORD PTR [esp+0x44]
10028f8f:	51                   	push   ecx
10028f90:	d8 4f 20             	fmul   DWORD PTR [edi+0x20]
10028f93:	e8 9c ae 07 00       	call   0x100a3e34
10028f98:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10028f9e:	50                   	push   eax
10028f9f:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
10028fa2:	50                   	push   eax
10028fa3:	ff 91 5c 03 00 00    	call   DWORD PTR [ecx+0x35c]
10028fa9:	8a 86 a7 00 00 00    	mov    al,BYTE PTR [esi+0xa7]
10028faf:	83 c4 40             	add    esp,0x40
10028fb2:	3c ff                	cmp    al,0xff
10028fb4:	0f 83 b4 0b 00 00    	jae    0x10029b6e
10028fba:	8b 4f 38             	mov    ecx,DWORD PTR [edi+0x38]
10028fbd:	8d 54 24 3c          	lea    edx,[esp+0x3c]
10028fc1:	8d 44 24 14          	lea    eax,[esp+0x14]
10028fc5:	52                   	push   edx
10028fc6:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10028fcc:	50                   	push   eax
10028fcd:	51                   	push   ecx
10028fce:	ff 92 60 03 00 00    	call   DWORD PTR [edx+0x360]
10028fd4:	83 c4 0c             	add    esp,0xc
10028fd7:	85 c0                	test   eax,eax
10028fd9:	0f 84 8f 0b 00 00    	je     0x10029b6e
10028fdf:	33 c0                	xor    eax,eax
10028fe1:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
10028fe5:	8a 86 a7 00 00 00    	mov    al,BYTE PTR [esi+0xa7]
10028feb:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10028fef:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10028ff3:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10028ff7:	8b 48 20             	mov    ecx,DWORD PTR [eax+0x20]
10028ffa:	3b ca                	cmp    ecx,edx
10028ffc:	d8 0d fc 85 0b 10    	fmul   DWORD PTR ds:0x100b85fc
10029002:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10029006:	0f 84 62 0b 00 00    	je     0x10029b6e
1002900c:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10029010:	89 50 18             	mov    DWORD PTR [eax+0x18],edx
10029013:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10029017:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
1002901b:	8b 40 20             	mov    eax,DWORD PTR [eax+0x20]
1002901e:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10029022:	8b 48 20             	mov    ecx,DWORD PTR [eax+0x20]
10029025:	3b ca                	cmp    ecx,edx
10029027:	75 e3                	jne    0x1002900c
10029029:	5f                   	pop    edi
1002902a:	5e                   	pop    esi
1002902b:	5d                   	pop    ebp
1002902c:	b0 01                	mov    al,0x1
1002902e:	5b                   	pop    ebx
1002902f:	81 c4 b8 00 00 00    	add    esp,0xb8
10029035:	c2 04 00             	ret    0x4
10029038:	d9 86 c8 00 00 00    	fld    DWORD PTR [esi+0xc8]
1002903e:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10029044:	df e0                	fnstsw ax
10029046:	f6 c4 40             	test   ah,0x40
10029049:	74 41                	je     0x1002908c
1002904b:	d9 86 cc 00 00 00    	fld    DWORD PTR [esi+0xcc]
10029051:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10029057:	df e0                	fnstsw ax
10029059:	f6 c4 40             	test   ah,0x40
1002905c:	74 2e                	je     0x1002908c
1002905e:	d9 47 20             	fld    DWORD PTR [edi+0x20]
10029061:	d8 8e 98 00 00 00    	fmul   DWORD PTR [esi+0x98]
10029067:	d9 c0                	fld    st(0)
10029069:	d8 4c 24 24          	fmul   DWORD PTR [esp+0x24]
1002906d:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
10029071:	d9 c0                	fld    st(0)
10029073:	d8 4c 24 28          	fmul   DWORD PTR [esp+0x28]
10029077:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1002907b:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
1002907f:	d8 c9                	fmul   st,st(1)
10029081:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
10029085:	dd d8                	fstp   st(0)
10029087:	e9 19 03 00 00       	jmp    0x100293a5
1002908c:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
10029092:	d8 5c 24 24          	fcomp  DWORD PTR [esp+0x24]
10029096:	df e0                	fnstsw ax
10029098:	f6 c4 40             	test   ah,0x40
1002909b:	74 7a                	je     0x10029117
1002909d:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
100290a3:	d8 5c 24 28          	fcomp  DWORD PTR [esp+0x28]
100290a7:	df e0                	fnstsw ax
100290a9:	f6 c4 40             	test   ah,0x40
100290ac:	74 15                	je     0x100290c3
100290ae:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
100290b4:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
100290b8:	df e0                	fnstsw ax
100290ba:	f6 c4 40             	test   ah,0x40
100290bd:	0f 85 51 01 00 00    	jne    0x10029214
100290c3:	d9 05 00 85 0b 10    	fld    DWORD PTR ds:0x100b8500
100290c9:	d8 5c 24 28          	fcomp  DWORD PTR [esp+0x28]
100290cd:	df e0                	fnstsw ax
100290cf:	f6 c4 40             	test   ah,0x40
100290d2:	74 15                	je     0x100290e9
100290d4:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
100290da:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
100290de:	df e0                	fnstsw ax
100290e0:	f6 c4 40             	test   ah,0x40
100290e3:	0f 85 2b 01 00 00    	jne    0x10029214
100290e9:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
100290ef:	d8 5c 24 28          	fcomp  DWORD PTR [esp+0x28]
100290f3:	df e0                	fnstsw ax
100290f5:	f6 c4 40             	test   ah,0x40
100290f8:	74 1d                	je     0x10029117
100290fa:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
10029100:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
10029104:	df e0                	fnstsw ax
10029106:	f6 c4 40             	test   ah,0x40
10029109:	74 0c                	je     0x10029117
1002910b:	55                   	push   ebp
1002910c:	55                   	push   ebp
1002910d:	68 00 00 b4 42       	push   0x42b40000
10029112:	e9 a1 00 00 00       	jmp    0x100291b8
10029117:	8d 4c 24 24          	lea    ecx,[esp+0x24]
1002911b:	e8 c0 22 fe ff       	call   0x1000b3e0
10029120:	d8 1d c0 83 0b 10    	fcomp  DWORD PTR ds:0x100b83c0
10029126:	df e0                	fnstsw ax
10029128:	f6 c4 40             	test   ah,0x40
1002912b:	75 19                	jne    0x10029146
1002912d:	68 00 00 80 3f       	push   0x3f800000
10029132:	8d 4c 24 28          	lea    ecx,[esp+0x28]
10029136:	e8 d5 22 fe ff       	call   0x1000b410
1002913b:	8d 4c 24 24          	lea    ecx,[esp+0x24]
1002913f:	e8 9c 22 fe ff       	call   0x1000b3e0
10029144:	dd d8                	fstp   st(0)
10029146:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1002914a:	e8 d1 b2 07 00       	call   0x100a4420
1002914f:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
10029155:	d9 e0                	fchs
10029157:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002915b:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1002915f:	d8 74 24 2c          	fdiv   DWORD PTR [esp+0x2c]
10029163:	d9 e8                	fld1
10029165:	d9 f3                	fpatan
10029167:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
1002916d:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
10029171:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
10029175:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002917b:	df e0                	fnstsw ax
1002917d:	f6 c4 01             	test   ah,0x1
10029180:	74 0c                	je     0x1002918e
10029182:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10029186:	d8 05 20 85 0b 10    	fadd   DWORD PTR ds:0x100b8520
1002918c:	eb 1b                	jmp    0x100291a9
1002918e:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
10029192:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10029198:	df e0                	fnstsw ax
1002919a:	f6 c4 01             	test   ah,0x1
1002919d:	74 0e                	je     0x100291ad
1002919f:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
100291a3:	d8 05 1c 85 0b 10    	fadd   DWORD PTR ds:0x100b851c
100291a9:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
100291ad:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100291b1:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
100291b5:	55                   	push   ebp
100291b6:	52                   	push   edx
100291b7:	50                   	push   eax
100291b8:	8d 4c 24 30          	lea    ecx,[esp+0x30]
100291bc:	e8 ff 21 fe ff       	call   0x1000b3c0
100291c1:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
100291c5:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
100291cb:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
100291d1:	55                   	push   ebp
100291d2:	51                   	push   ecx
100291d3:	8d 44 24 78          	lea    eax,[esp+0x78]
100291d7:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
100291dd:	8b 11                	mov    edx,DWORD PTR [ecx]
100291df:	d9 1c 24             	fstp   DWORD PTR [esp]
100291e2:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
100291e6:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
100291ec:	51                   	push   ecx
100291ed:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
100291f3:	d9 1c 24             	fstp   DWORD PTR [esp]
100291f6:	50                   	push   eax
100291f7:	ff 52 18             	call   DWORD PTR [edx+0x18]
100291fa:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10029200:	8d 44 24 70          	lea    eax,[esp+0x70]
10029204:	50                   	push   eax
10029205:	8d 84 24 8c 00 00 00 	lea    eax,[esp+0x8c]
1002920c:	8b 11                	mov    edx,DWORD PTR [ecx]
1002920e:	50                   	push   eax
1002920f:	ff 52 20             	call   DWORD PTR [edx+0x20]
10029212:	eb 34                	jmp    0x10029248
10029214:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
10029218:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1002921c:	68 00 00 80 3f       	push   0x3f800000
10029221:	55                   	push   ebp
10029222:	55                   	push   ebp
10029223:	55                   	push   ebp
10029224:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
10029228:	55                   	push   ebp
10029229:	51                   	push   ecx
1002922a:	55                   	push   ebp
1002922b:	68 00 00 80 3f       	push   0x3f800000
10029230:	55                   	push   ebp
10029231:	52                   	push   edx
10029232:	55                   	push   ebp
10029233:	55                   	push   ebp
10029234:	55                   	push   ebp
10029235:	50                   	push   eax
10029236:	68 00 00 80 3f       	push   0x3f800000
1002923b:	55                   	push   ebp
1002923c:	8d 8c 24 c8 00 00 00 	lea    ecx,[esp+0xc8]
10029243:	e8 38 09 00 00       	call   0x10029b80
10029248:	d9 86 cc 00 00 00    	fld    DWORD PTR [esi+0xcc]
1002924e:	8b 8e cc 00 00 00    	mov    ecx,DWORD PTR [esi+0xcc]
10029254:	d9 e0                	fchs
10029256:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002925a:	89 8c 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],ecx
10029261:	e8 fa f0 fd ff       	call   0x10008360
10029266:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1002926a:	89 6c 24 34          	mov    DWORD PTR [esp+0x34],ebp
1002926e:	df 6c 24 30          	fild   QWORD PTR [esp+0x30]
10029272:	8b 96 c8 00 00 00    	mov    edx,DWORD PTR [esi+0xc8]
10029278:	89 94 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],edx
1002927f:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
10029285:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
10029289:	d9 86 c8 00 00 00    	fld    DWORD PTR [esi+0xc8]
1002928f:	d9 e0                	fchs
10029291:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
10029295:	e8 c6 f0 fd ff       	call   0x10008360
1002929a:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
1002929e:	89 6c 24 50          	mov    DWORD PTR [esp+0x50],ebp
100292a2:	df 6c 24 4c          	fild   QWORD PTR [esp+0x4c]
100292a6:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
100292ac:	55                   	push   ebp
100292ad:	51                   	push   ecx
100292ae:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
100292b5:	00 
100292b6:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
100292bc:	d9 84 24 88 00 00 00 	fld    DWORD PTR [esp+0x88]
100292c3:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
100292c7:	8d 54 24 78          	lea    edx,[esp+0x78]
100292cb:	de c9                	fmulp  st(1),st
100292cd:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
100292d1:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
100292d5:	d9 84 24 8c 00 00 00 	fld    DWORD PTR [esp+0x8c]
100292dc:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
100292e0:	d8 4c 24 38          	fmul   DWORD PTR [esp+0x38]
100292e4:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
100292e8:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
100292ec:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
100292f0:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
100292f6:	8b 01                	mov    eax,DWORD PTR [ecx]
100292f8:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
100292fe:	d9 1c 24             	fstp   DWORD PTR [esp]
10029301:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
10029305:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
1002930b:	51                   	push   ecx
1002930c:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
10029312:	d9 1c 24             	fstp   DWORD PTR [esp]
10029315:	52                   	push   edx
10029316:	ff 50 18             	call   DWORD PTR [eax+0x18]
10029319:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
1002931f:	8d 54 24 24          	lea    edx,[esp+0x24]
10029323:	52                   	push   edx
10029324:	8d 54 24 44          	lea    edx,[esp+0x44]
10029328:	8b 01                	mov    eax,DWORD PTR [ecx]
1002932a:	52                   	push   edx
1002932b:	8d 54 24 48          	lea    edx,[esp+0x48]
1002932f:	52                   	push   edx
10029330:	8d 54 24 7c          	lea    edx,[esp+0x7c]
10029334:	52                   	push   edx
10029335:	ff 50 10             	call   DWORD PTR [eax+0x10]
10029338:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1002933c:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
10029340:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
10029344:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
10029348:	89 4c 24 44          	mov    DWORD PTR [esp+0x44],ecx
1002934c:	8d 44 24 40          	lea    eax,[esp+0x40]
10029350:	89 54 24 48          	mov    DWORD PTR [esp+0x48],edx
10029354:	8d 8c 24 88 00 00 00 	lea    ecx,[esp+0x88]
1002935b:	50                   	push   eax
1002935c:	8d 54 24 5c          	lea    edx,[esp+0x5c]
10029360:	51                   	push   ecx
10029361:	52                   	push   edx
10029362:	e8 79 1d fe ff       	call   0x1000b0e0
10029367:	dd d8                	fstp   st(0)
10029369:	d9 47 20             	fld    DWORD PTR [edi+0x20]
1002936c:	d8 8e 98 00 00 00    	fmul   DWORD PTR [esi+0x98]
10029372:	d9 44 24 64          	fld    DWORD PTR [esp+0x64]
10029376:	83 c4 0c             	add    esp,0xc
10029379:	d8 c9                	fmul   st,st(1)
1002937b:	d9 44 24 5c          	fld    DWORD PTR [esp+0x5c]
1002937f:	d8 ca                	fmul   st,st(2)
10029381:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
10029385:	d9 44 24 60          	fld    DWORD PTR [esp+0x60]
10029389:	d8 ca                	fmul   st,st(2)
1002938b:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
1002938f:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10029393:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
10029397:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
1002939b:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1002939f:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
100293a3:	dd d8                	fstp   st(0)
100293a5:	8b 47 3c             	mov    eax,DWORD PTR [edi+0x3c]
100293a8:	3b c5                	cmp    eax,ebp
100293aa:	0f 85 e8 01 00 00    	jne    0x10029598
100293b0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100293b3:	b1 04                	mov    cl,0x4
100293b5:	25 00 01 00 00       	and    eax,0x100
100293ba:	74 46                	je     0x10029402
100293bc:	84 4e 08             	test   BYTE PTR [esi+0x8],cl
100293bf:	74 41                	je     0x10029402
100293c1:	33 d2                	xor    edx,edx
100293c3:	33 c0                	xor    eax,eax
100293c5:	8a 96 a4 00 00 00    	mov    dl,BYTE PTR [esi+0xa4]
100293cb:	8a 86 a5 00 00 00    	mov    al,BYTE PTR [esi+0xa5]
100293d1:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
100293d5:	33 c9                	xor    ecx,ecx
100293d7:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
100293db:	8a 8e a6 00 00 00    	mov    cl,BYTE PTR [esi+0xa6]
100293e1:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
100293e5:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
100293e9:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
100293ed:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
100293f1:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
100293f5:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
100293f9:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
100293fd:	e9 3b 01 00 00       	jmp    0x1002953d
10029402:	3b c5                	cmp    eax,ebp
10029404:	74 1d                	je     0x10029423
10029406:	c7 44 24 18 00 00 7f 	mov    DWORD PTR [esp+0x18],0x437f0000
1002940d:	43 
1002940e:	c7 44 24 1c 00 00 7f 	mov    DWORD PTR [esp+0x1c],0x437f0000
10029415:	43 
10029416:	c7 44 24 20 00 00 7f 	mov    DWORD PTR [esp+0x20],0x437f0000
1002941d:	43 
1002941e:	e9 1a 01 00 00       	jmp    0x1002953d
10029423:	8b 07                	mov    eax,DWORD PTR [edi]
10029425:	83 e0 20             	and    eax,0x20
10029428:	74 7f                	je     0x100294a9
1002942a:	84 4e 08             	test   BYTE PTR [esi+0x8],cl
1002942d:	74 7a                	je     0x100294a9
1002942f:	33 d2                	xor    edx,edx
10029431:	33 c0                	xor    eax,eax
10029433:	8a 96 a4 00 00 00    	mov    dl,BYTE PTR [esi+0xa4]
10029439:	8a 47 34             	mov    al,BYTE PTR [edi+0x34]
1002943c:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
10029440:	33 c9                	xor    ecx,ecx
10029442:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
10029446:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1002944a:	8a 8e a5 00 00 00    	mov    cl,BYTE PTR [esi+0xa5]
10029450:	33 d2                	xor    edx,edx
10029452:	33 c0                	xor    eax,eax
10029454:	da 44 24 30          	fiadd  DWORD PTR [esp+0x30]
10029458:	8a 57 35             	mov    dl,BYTE PTR [edi+0x35]
1002945b:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
1002945f:	8a 86 a6 00 00 00    	mov    al,BYTE PTR [esi+0xa6]
10029465:	33 c9                	xor    ecx,ecx
10029467:	8a 4f 36             	mov    cl,BYTE PTR [edi+0x36]
1002946a:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
10029470:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10029474:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
10029478:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
1002947c:	da 44 24 30          	fiadd  DWORD PTR [esp+0x30]
10029480:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10029484:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
1002948a:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1002948e:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
10029492:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
10029496:	da 44 24 30          	fiadd  DWORD PTR [esp+0x30]
1002949a:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
100294a0:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
100294a4:	e9 94 00 00 00       	jmp    0x1002953d
100294a9:	3b c5                	cmp    eax,ebp
100294ab:	74 35                	je     0x100294e2
100294ad:	33 d2                	xor    edx,edx
100294af:	33 c0                	xor    eax,eax
100294b1:	8a 57 34             	mov    dl,BYTE PTR [edi+0x34]
100294b4:	8a 47 35             	mov    al,BYTE PTR [edi+0x35]
100294b7:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
100294bb:	33 c9                	xor    ecx,ecx
100294bd:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
100294c1:	8a 4f 36             	mov    cl,BYTE PTR [edi+0x36]
100294c4:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
100294c8:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
100294cc:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
100294d0:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
100294d4:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
100294d8:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
100294dc:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
100294e0:	eb 5b                	jmp    0x1002953d
100294e2:	84 4e 08             	test   BYTE PTR [esi+0x8],cl
100294e5:	74 3e                	je     0x10029525
100294e7:	33 d2                	xor    edx,edx
100294e9:	33 c0                	xor    eax,eax
100294eb:	8a 96 a4 00 00 00    	mov    dl,BYTE PTR [esi+0xa4]
100294f1:	8a 86 a5 00 00 00    	mov    al,BYTE PTR [esi+0xa5]
100294f7:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
100294fb:	33 c9                	xor    ecx,ecx
100294fd:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
10029501:	8a 8e a6 00 00 00    	mov    cl,BYTE PTR [esi+0xa6]
10029507:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1002950b:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1002950f:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
10029513:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
10029517:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1002951b:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
1002951f:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10029523:	eb 18                	jmp    0x1002953d
10029525:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
1002952c:	00 
1002952d:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
10029534:	00 
10029535:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
1002953c:	00 
1002953d:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
10029541:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10029547:	50                   	push   eax
10029548:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1002954c:	8b 11                	mov    edx,DWORD PTR [ecx]
1002954e:	50                   	push   eax
1002954f:	8d 44 24 2c          	lea    eax,[esp+0x2c]
10029553:	50                   	push   eax
10029554:	8d 44 24 70          	lea    eax,[esp+0x70]
10029558:	50                   	push   eax
10029559:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
1002955c:	50                   	push   eax
1002955d:	ff 92 b4 01 00 00    	call   DWORD PTR [edx+0x1b4]
10029563:	8a 8e a7 00 00 00    	mov    cl,BYTE PTR [esi+0xa7]
10029569:	80 f9 ff             	cmp    cl,0xff
1002956c:	0f 83 fc 05 00 00    	jae    0x10029b6e
10029572:	81 e1 ff 00 00 00    	and    ecx,0xff
10029578:	5f                   	pop    edi
10029579:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
1002957d:	5e                   	pop    esi
1002957e:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
10029582:	5d                   	pop    ebp
10029583:	5b                   	pop    ebx
10029584:	d8 0d fc 85 0b 10    	fmul   DWORD PTR ds:0x100b85fc
1002958a:	d9 58 18             	fstp   DWORD PTR [eax+0x18]
1002958d:	b0 01                	mov    al,0x1
1002958f:	81 c4 b8 00 00 00    	add    esp,0xb8
10029595:	c2 04 00             	ret    0x4
10029598:	3b c3                	cmp    eax,ebx
1002959a:	74 7d                	je     0x10029619
1002959c:	83 f8 02             	cmp    eax,0x2
1002959f:	74 78                	je     0x10029619
100295a1:	83 f8 04             	cmp    eax,0x4
100295a4:	0f 85 c4 05 00 00    	jne    0x10029b6e
100295aa:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100295b0:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
100295b3:	50                   	push   eax
100295b4:	8b 11                	mov    edx,DWORD PTR [ecx]
100295b6:	ff 92 ac 01 00 00    	call   DWORD PTR [edx+0x1ac]
100295bc:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100295c2:	0c 01                	or     al,0x1
100295c4:	50                   	push   eax
100295c5:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
100295c8:	8b 11                	mov    edx,DWORD PTR [ecx]
100295ca:	50                   	push   eax
100295cb:	ff 92 b0 01 00 00    	call   DWORD PTR [edx+0x1b0]
100295d1:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100295d7:	8d 44 24 64          	lea    eax,[esp+0x64]
100295db:	6a 01                	push   0x1
100295dd:	50                   	push   eax
100295de:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
100295e1:	8b 11                	mov    edx,DWORD PTR [ecx]
100295e3:	50                   	push   eax
100295e4:	ff 92 a8 01 00 00    	call   DWORD PTR [edx+0x1a8]
100295ea:	d9 86 9c 00 00 00    	fld    DWORD PTR [esi+0x9c]
100295f0:	d8 4f 20             	fmul   DWORD PTR [edi+0x20]
100295f3:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
100295f9:	51                   	push   ecx
100295fa:	8b 4f 38             	mov    ecx,DWORD PTR [edi+0x38]
100295fd:	d9 1c 24             	fstp   DWORD PTR [esp]
10029600:	51                   	push   ecx
10029601:	ff 92 bc 03 00 00    	call   DWORD PTR [edx+0x3bc]
10029607:	83 c4 08             	add    esp,0x8
1002960a:	b0 01                	mov    al,0x1
1002960c:	5f                   	pop    edi
1002960d:	5e                   	pop    esi
1002960e:	5d                   	pop    ebp
1002960f:	5b                   	pop    ebx
10029610:	81 c4 b8 00 00 00    	add    esp,0xb8
10029616:	c2 04 00             	ret    0x4
10029619:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002961f:	8d 54 24 64          	lea    edx,[esp+0x64]
10029623:	53                   	push   ebx
10029624:	52                   	push   edx
10029625:	8b 57 38             	mov    edx,DWORD PTR [edi+0x38]
10029628:	8b 01                	mov    eax,DWORD PTR [ecx]
1002962a:	52                   	push   edx
1002962b:	ff 90 a8 01 00 00    	call   DWORD PTR [eax+0x1a8]
10029631:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10029637:	8b 57 38             	mov    edx,DWORD PTR [edi+0x38]
1002963a:	52                   	push   edx
1002963b:	8b 01                	mov    eax,DWORD PTR [ecx]
1002963d:	ff 90 ac 01 00 00    	call   DWORD PTR [eax+0x1ac]
10029643:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10029649:	0b c3                	or     eax,ebx
1002964b:	50                   	push   eax
1002964c:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
1002964f:	8b 11                	mov    edx,DWORD PTR [ecx]
10029651:	50                   	push   eax
10029652:	ff 92 b0 01 00 00    	call   DWORD PTR [edx+0x1b0]
10029658:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1002965e:	8d 4f 14             	lea    ecx,[edi+0x14]
10029661:	8b 57 14             	mov    edx,DWORD PTR [edi+0x14]
10029664:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10029668:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
1002966c:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1002966f:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10029673:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
10029676:	df e0                	fnstsw ax
10029678:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
1002967c:	f6 c4 40             	test   ah,0x40
1002967f:	74 3f                	je     0x100296c0
10029681:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
10029687:	d8 5c 24 1c          	fcomp  DWORD PTR [esp+0x1c]
1002968b:	df e0                	fnstsw ax
1002968d:	f6 c4 40             	test   ah,0x40
10029690:	74 2e                	je     0x100296c0
10029692:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
10029698:	d8 5c 24 20          	fcomp  DWORD PTR [esp+0x20]
1002969c:	df e0                	fnstsw ax
1002969e:	f6 c4 40             	test   ah,0x40
100296a1:	74 1d                	je     0x100296c0
100296a3:	c7 44 24 18 00 00 b4 	mov    DWORD PTR [esp+0x18],0x42b40000
100296aa:	42 
100296ab:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
100296b2:	00 
100296b3:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
100296ba:	00 
100296bb:	e9 bf 00 00 00       	jmp    0x1002977f
100296c0:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
100296c4:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
100296c8:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
100296cc:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
100296d0:	de c1                	faddp  st(1),st
100296d2:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
100296d6:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
100296da:	de c1                	faddp  st(1),st
100296dc:	d9 fa                	fsqrt
100296de:	d8 1d c0 83 0b 10    	fcomp  DWORD PTR ds:0x100b83c0
100296e4:	df e0                	fnstsw ax
100296e6:	f6 c4 40             	test   ah,0x40
100296e9:	75 19                	jne    0x10029704
100296eb:	68 00 00 80 3f       	push   0x3f800000
100296f0:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
100296f4:	e8 17 1d fe ff       	call   0x1000b410
100296f9:	8d 4c 24 18          	lea    ecx,[esp+0x18]
100296fd:	e8 de 1c fe ff       	call   0x1000b3e0
10029702:	dd d8                	fstp   st(0)
10029704:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10029708:	e8 13 ad 07 00       	call   0x100a4420
1002970d:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
10029713:	d9 e0                	fchs
10029715:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
10029719:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002971d:	d8 74 24 20          	fdiv   DWORD PTR [esp+0x20]
10029721:	d9 e8                	fld1
10029723:	d9 f3                	fpatan
10029725:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
1002972b:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002972f:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10029733:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10029739:	df e0                	fnstsw ax
1002973b:	f6 c4 01             	test   ah,0x1
1002973e:	74 0c                	je     0x1002974c
10029740:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10029744:	d8 05 20 85 0b 10    	fadd   DWORD PTR ds:0x100b8520
1002974a:	eb 1b                	jmp    0x10029767
1002974c:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
10029750:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10029756:	df e0                	fnstsw ax
10029758:	f6 c4 01             	test   ah,0x1
1002975b:	74 0e                	je     0x1002976b
1002975d:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
10029761:	d8 05 1c 85 0b 10    	fadd   DWORD PTR ds:0x100b851c
10029767:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002976b:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1002976f:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
10029773:	55                   	push   ebp
10029774:	52                   	push   edx
10029775:	50                   	push   eax
10029776:	8d 4c 24 24          	lea    ecx,[esp+0x24]
1002977a:	e8 41 1c fe ff       	call   0x1000b3c0
1002977f:	8a 46 08             	mov    al,BYTE PTR [esi+0x8]
10029782:	8b 6f 4c             	mov    ebp,DWORD PTR [edi+0x4c]
10029785:	b3 10                	mov    bl,0x10
10029787:	84 c3                	test   bl,al
10029789:	0f 84 82 00 00 00    	je     0x10029811
1002978f:	8b 57 38             	mov    edx,DWORD PTR [edi+0x38]
10029792:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10029797:	8d 4c 24 70          	lea    ecx,[esp+0x70]
1002979b:	51                   	push   ecx
1002979c:	52                   	push   edx
1002979d:	ff 90 f4 02 00 00    	call   DWORD PTR [eax+0x2f4]
100297a3:	83 c4 08             	add    esp,0x8
100297a6:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
100297ac:	8d 44 24 40          	lea    eax,[esp+0x40]
100297b0:	8b 11                	mov    edx,DWORD PTR [ecx]
100297b2:	50                   	push   eax
100297b3:	8d 44 24 5c          	lea    eax,[esp+0x5c]
100297b7:	50                   	push   eax
100297b8:	8d 44 24 54          	lea    eax,[esp+0x54]
100297bc:	50                   	push   eax
100297bd:	8d 44 24 7c          	lea    eax,[esp+0x7c]
100297c1:	50                   	push   eax
100297c2:	ff 52 10             	call   DWORD PTR [edx+0x10]
100297c5:	d9 44 24 48          	fld    DWORD PTR [esp+0x48]
100297c9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
100297d0:	00 
100297d1:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
100297d5:	e8 b6 a1 07 00       	call   0x100a3990
100297da:	d9 55 3c             	fst    DWORD PTR [ebp+0x3c]
100297dd:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
100297e1:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
100297e7:	df e0                	fnstsw ax
100297e9:	f6 c4 01             	test   ah,0x1
100297ec:	74 07                	je     0x100297f5
100297ee:	d9 e0                	fchs
100297f0:	d9 5d 3c             	fstp   DWORD PTR [ebp+0x3c]
100297f3:	eb 02                	jmp    0x100297f7
100297f5:	dd d8                	fstp   st(0)
100297f7:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
100297fb:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
100297ff:	e8 8c a1 07 00       	call   0x100a3990
10029804:	d8 2d 48 83 0b 10    	fsubr  DWORD PTR ds:0x100b8348
1002980a:	d9 e0                	fchs
1002980c:	d9 5d 38             	fstp   DWORD PTR [ebp+0x38]
1002980f:	eb 26                	jmp    0x10029837
10029811:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
10029815:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
1002981b:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
10029821:	d9 5d 38             	fstp   DWORD PTR [ebp+0x38]
10029824:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10029828:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
1002982e:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
10029834:	d9 5d 3c             	fstp   DWORD PTR [ebp+0x3c]
10029837:	d9 86 94 00 00 00    	fld    DWORD PTR [esi+0x94]
1002983d:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10029843:	df e0                	fnstsw ax
10029845:	f6 c4 40             	test   ah,0x40
10029848:	74 17                	je     0x10029861
1002984a:	d9 86 98 00 00 00    	fld    DWORD PTR [esi+0x98]
10029850:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10029856:	df e0                	fnstsw ax
10029858:	f6 c4 40             	test   ah,0x40
1002985b:	0f 85 2c 01 00 00    	jne    0x1002998d
10029861:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
10029865:	89 4d 10             	mov    DWORD PTR [ebp+0x10],ecx
10029868:	8b 54 24 68          	mov    edx,DWORD PTR [esp+0x68]
1002986c:	89 55 14             	mov    DWORD PTR [ebp+0x14],edx
1002986f:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
10029873:	89 45 18             	mov    DWORD PTR [ebp+0x18],eax
10029876:	89 4d 04             	mov    DWORD PTR [ebp+0x4],ecx
10029879:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
1002987c:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
1002987f:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
10029882:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
10029885:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10029889:	89 4d 1c             	mov    DWORD PTR [ebp+0x1c],ecx
1002988c:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
10029890:	89 55 20             	mov    DWORD PTR [ebp+0x20],edx
10029893:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10029897:	89 45 24             	mov    DWORD PTR [ebp+0x24],eax
1002989a:	33 c0                	xor    eax,eax
1002989c:	89 45 28             	mov    DWORD PTR [ebp+0x28],eax
1002989f:	89 45 2c             	mov    DWORD PTR [ebp+0x2c],eax
100298a2:	89 45 30             	mov    DWORD PTR [ebp+0x30],eax
100298a5:	8b 8e 94 00 00 00    	mov    ecx,DWORD PTR [esi+0x94]
100298ab:	89 4d 34             	mov    DWORD PTR [ebp+0x34],ecx
100298ae:	8b 96 d0 00 00 00    	mov    edx,DWORD PTR [esi+0xd0]
100298b4:	d9 86 d0 00 00 00    	fld    DWORD PTR [esi+0xd0]
100298ba:	d9 e0                	fchs
100298bc:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
100298c0:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
100298c4:	e8 97 ea fd ff       	call   0x10008360
100298c9:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
100298cd:	c7 44 24 50 00 00 00 	mov    DWORD PTR [esp+0x50],0x0
100298d4:	00 
100298d5:	df 6c 24 4c          	fild   QWORD PTR [esp+0x4c]
100298d9:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
100298df:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
100298e3:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
100298e7:	de c9                	fmulp  st(1),st
100298e9:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
100298ed:	d9 5d 44             	fstp   DWORD PTR [ebp+0x44]
100298f0:	d9 86 d4 00 00 00    	fld    DWORD PTR [esi+0xd4]
100298f6:	8b 86 d4 00 00 00    	mov    eax,DWORD PTR [esi+0xd4]
100298fc:	d9 e0                	fchs
100298fe:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10029902:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10029906:	e8 55 ea fd ff       	call   0x10008360
1002990b:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
1002990f:	c7 44 24 50 00 00 00 	mov    DWORD PTR [esp+0x50],0x0
10029916:	00 
10029917:	df 6c 24 4c          	fild   QWORD PTR [esp+0x4c]
1002991b:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
10029921:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
10029925:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
10029929:	de c9                	fmulp  st(1),st
1002992b:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
1002992f:	d9 5d 48             	fstp   DWORD PTR [ebp+0x48]
10029932:	d9 86 d8 00 00 00    	fld    DWORD PTR [esi+0xd8]
10029938:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
1002993e:	d9 e0                	fchs
10029940:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10029944:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
10029948:	e8 13 ea fd ff       	call   0x10008360
1002994d:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
10029951:	c7 44 24 50 00 00 00 	mov    DWORD PTR [esp+0x50],0x0
10029958:	00 
10029959:	df 6c 24 4c          	fild   QWORD PTR [esp+0x4c]
1002995d:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
10029963:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
10029967:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
1002996b:	de c9                	fmulp  st(1),st
1002996d:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
10029971:	d9 5d 4c             	fstp   DWORD PTR [ebp+0x4c]
10029974:	f7 46 04 00 00 10 00 	test   DWORD PTR [esi+0x4],0x100000
1002997b:	74 09                	je     0x10029986
1002997d:	c7 45 54 01 00 00 00 	mov    DWORD PTR [ebp+0x54],0x1
10029984:	eb 07                	jmp    0x1002998d
10029986:	c7 45 54 03 00 00 00 	mov    DWORD PTR [ebp+0x54],0x3
1002998d:	84 5e 08             	test   BYTE PTR [esi+0x8],bl
10029990:	75 31                	jne    0x100299c3
10029992:	8b 45 3c             	mov    eax,DWORD PTR [ebp+0x3c]
10029995:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
1002999b:	6a 00                	push   0x0
1002999d:	50                   	push   eax
1002999e:	8b 45 38             	mov    eax,DWORD PTR [ebp+0x38]
100299a1:	8b 11                	mov    edx,DWORD PTR [ecx]
100299a3:	50                   	push   eax
100299a4:	8d 44 24 7c          	lea    eax,[esp+0x7c]
100299a8:	50                   	push   eax
100299a9:	ff 52 18             	call   DWORD PTR [edx+0x18]
100299ac:	8b 57 38             	mov    edx,DWORD PTR [edi+0x38]
100299af:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
100299b4:	8d 4c 24 70          	lea    ecx,[esp+0x70]
100299b8:	51                   	push   ecx
100299b9:	52                   	push   edx
100299ba:	ff 90 f8 02 00 00    	call   DWORD PTR [eax+0x2f8]
100299c0:	83 c4 08             	add    esp,0x8
100299c3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100299c6:	8b c8                	mov    ecx,eax
100299c8:	81 e1 00 04 00 00    	and    ecx,0x400
100299ce:	0f 85 9d 00 00 00    	jne    0x10029a71
100299d4:	f6 c4 02             	test   ah,0x2
100299d7:	0f 85 94 00 00 00    	jne    0x10029a71
100299dd:	f6 c4 08             	test   ah,0x8
100299e0:	0f 84 88 01 00 00    	je     0x10029b6e
100299e6:	83 7f 3c 02          	cmp    DWORD PTR [edi+0x3c],0x2
100299ea:	0f 85 7e 01 00 00    	jne    0x10029b6e
100299f0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100299f6:	8d 44 24 3c          	lea    eax,[esp+0x3c]
100299fa:	50                   	push   eax
100299fb:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
100299fe:	8b 11                	mov    edx,DWORD PTR [ecx]
10029a00:	50                   	push   eax
10029a01:	ff 92 b8 01 00 00    	call   DWORD PTR [edx+0x1b8]
10029a07:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
10029a0b:	8d 44 24 30          	lea    eax,[esp+0x30]
10029a0f:	50                   	push   eax
10029a10:	6a 00                	push   0x0
10029a12:	8b 11                	mov    edx,DWORD PTR [ecx]
10029a14:	ff 52 04             	call   DWORD PTR [edx+0x4]
10029a17:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
10029a1b:	83 f8 01             	cmp    eax,0x1
10029a1e:	0f 86 4a 01 00 00    	jbe    0x10029b6e
10029a24:	8d 70 ff             	lea    esi,[eax-0x1]
10029a27:	8d 4e 01             	lea    ecx,[esi+0x1]
10029a2a:	85 c9                	test   ecx,ecx
10029a2c:	75 13                	jne    0x10029a41
10029a2e:	e8 2d e9 fd ff       	call   0x10008360
10029a33:	24 01                	and    al,0x1
10029a35:	f6 d8                	neg    al
10029a37:	1b c0                	sbb    eax,eax
10029a39:	f7 d0                	not    eax
10029a3b:	23 c6                	and    eax,esi
10029a3d:	8b d0                	mov    edx,eax
10029a3f:	eb 0a                	jmp    0x10029a4b
10029a41:	e8 1a e9 fd ff       	call   0x10008360
10029a46:	46                   	inc    esi
10029a47:	33 d2                	xor    edx,edx
10029a49:	f7 f6                	div    esi
10029a4b:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
10029a4f:	52                   	push   edx
10029a50:	6a 00                	push   0x0
10029a52:	8b 01                	mov    eax,DWORD PTR [ecx]
10029a54:	ff 50 0c             	call   DWORD PTR [eax+0xc]
10029a57:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
10029a5b:	6a 00                	push   0x0
10029a5d:	8b 11                	mov    edx,DWORD PTR [ecx]
10029a5f:	ff 52 14             	call   DWORD PTR [edx+0x14]
10029a62:	5f                   	pop    edi
10029a63:	5e                   	pop    esi
10029a64:	5d                   	pop    ebp
10029a65:	b0 01                	mov    al,0x1
10029a67:	5b                   	pop    ebx
10029a68:	81 c4 b8 00 00 00    	add    esp,0xb8
10029a6e:	c2 04 00             	ret    0x4
10029a71:	85 c9                	test   ecx,ecx
10029a73:	74 45                	je     0x10029aba
10029a75:	8b 47 3c             	mov    eax,DWORD PTR [edi+0x3c]
10029a78:	83 f8 01             	cmp    eax,0x1
10029a7b:	75 16                	jne    0x10029a93
10029a7d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10029a83:	8b 57 38             	mov    edx,DWORD PTR [edi+0x38]
10029a86:	6a 00                	push   0x0
10029a88:	52                   	push   edx
10029a89:	8b 01                	mov    eax,DWORD PTR [ecx]
10029a8b:	ff 90 88 00 00 00    	call   DWORD PTR [eax+0x88]
10029a91:	eb 27                	jmp    0x10029aba
10029a93:	83 f8 02             	cmp    eax,0x2
10029a96:	75 22                	jne    0x10029aba
10029a98:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10029a9e:	8d 54 24 30          	lea    edx,[esp+0x30]
10029aa2:	52                   	push   edx
10029aa3:	8b 57 38             	mov    edx,DWORD PTR [edi+0x38]
10029aa6:	8b 01                	mov    eax,DWORD PTR [ecx]
10029aa8:	52                   	push   edx
10029aa9:	ff 90 b8 01 00 00    	call   DWORD PTR [eax+0x1b8]
10029aaf:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
10029ab3:	6a 01                	push   0x1
10029ab5:	8b 01                	mov    eax,DWORD PTR [ecx]
10029ab7:	ff 50 14             	call   DWORD PTR [eax+0x14]
10029aba:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10029abd:	f6 c4 02             	test   ah,0x2
10029ac0:	0f 84 a8 00 00 00    	je     0x10029b6e
10029ac6:	8b 47 3c             	mov    eax,DWORD PTR [edi+0x3c]
10029ac9:	83 f8 01             	cmp    eax,0x1
10029acc:	75 47                	jne    0x10029b15
10029ace:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
10029ad4:	8d 44 24 30          	lea    eax,[esp+0x30]
10029ad8:	50                   	push   eax
10029ad9:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
10029adc:	8b 11                	mov    edx,DWORD PTR [ecx]
10029ade:	50                   	push   eax
10029adf:	ff 52 30             	call   DWORD PTR [edx+0x30]
10029ae2:	d9 86 84 00 00 00    	fld    DWORD PTR [esi+0x84]
10029ae8:	8b 3d d4 cf 10 10    	mov    edi,DWORD PTR ds:0x1010cfd4
10029aee:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
10029af4:	8b 1f                	mov    ebx,DWORD PTR [edi]
10029af6:	e8 39 a3 07 00       	call   0x100a3e34
10029afb:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
10029aff:	50                   	push   eax
10029b00:	51                   	push   ecx
10029b01:	8b cf                	mov    ecx,edi
10029b03:	ff 53 64             	call   DWORD PTR [ebx+0x64]
10029b06:	5f                   	pop    edi
10029b07:	5e                   	pop    esi
10029b08:	5d                   	pop    ebp
10029b09:	b0 01                	mov    al,0x1
10029b0b:	5b                   	pop    ebx
10029b0c:	81 c4 b8 00 00 00    	add    esp,0xb8
10029b12:	c2 04 00             	ret    0x4
10029b15:	83 f8 02             	cmp    eax,0x2
10029b18:	75 54                	jne    0x10029b6e
10029b1a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10029b20:	8d 44 24 3c          	lea    eax,[esp+0x3c]
10029b24:	50                   	push   eax
10029b25:	8b 47 38             	mov    eax,DWORD PTR [edi+0x38]
10029b28:	8b 11                	mov    edx,DWORD PTR [ecx]
10029b2a:	50                   	push   eax
10029b2b:	ff 92 b8 01 00 00    	call   DWORD PTR [edx+0x1b8]
10029b31:	d9 86 84 00 00 00    	fld    DWORD PTR [esi+0x84]
10029b37:	8b 7c 24 3c          	mov    edi,DWORD PTR [esp+0x3c]
10029b3b:	d8 0d 50 83 0b 10    	fmul   DWORD PTR ds:0x100b8350
10029b41:	8b 1f                	mov    ebx,DWORD PTR [edi]
10029b43:	e8 ec a2 07 00       	call   0x100a3e34
10029b48:	50                   	push   eax
10029b49:	6a 00                	push   0x0
10029b4b:	8b cf                	mov    ecx,edi
10029b4d:	ff 53 20             	call   DWORD PTR [ebx+0x20]
10029b50:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
10029b54:	8d 44 24 30          	lea    eax,[esp+0x30]
10029b58:	50                   	push   eax
10029b59:	8b 11                	mov    edx,DWORD PTR [ecx]
10029b5b:	ff 52 10             	call   DWORD PTR [edx+0x10]
10029b5e:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
10029b62:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
10029b66:	0c 04                	or     al,0x4
10029b68:	8b 11                	mov    edx,DWORD PTR [ecx]
10029b6a:	50                   	push   eax
10029b6b:	ff 52 14             	call   DWORD PTR [edx+0x14]
10029b6e:	5f                   	pop    edi
10029b6f:	5e                   	pop    esi
10029b70:	5d                   	pop    ebp
10029b71:	b0 01                	mov    al,0x1
10029b73:	5b                   	pop    ebx
10029b74:	81 c4 b8 00 00 00    	add    esp,0xb8
10029b7a:	c2 04 00             	ret    0x4
10029b7d:	90                   	nop
10029b7e:	90                   	nop
10029b7f:	90                   	nop
10029b80:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10029b84:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10029b88:	89 01                	mov    DWORD PTR [ecx],eax
10029b8a:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10029b8e:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
10029b91:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10029b95:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10029b98:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10029b9c:	89 51 0c             	mov    DWORD PTR [ecx+0xc],edx
10029b9f:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
10029ba3:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
10029ba6:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10029baa:	89 51 14             	mov    DWORD PTR [ecx+0x14],edx
10029bad:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
10029bb1:	89 41 18             	mov    DWORD PTR [ecx+0x18],eax
10029bb4:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10029bb8:	89 51 1c             	mov    DWORD PTR [ecx+0x1c],edx
10029bbb:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
10029bbf:	89 41 20             	mov    DWORD PTR [ecx+0x20],eax
10029bc2:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10029bc6:	89 51 24             	mov    DWORD PTR [ecx+0x24],edx
10029bc9:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
10029bcd:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
10029bd0:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
10029bd4:	89 51 2c             	mov    DWORD PTR [ecx+0x2c],edx
10029bd7:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
10029bdb:	89 41 30             	mov    DWORD PTR [ecx+0x30],eax
10029bde:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
10029be2:	89 51 34             	mov    DWORD PTR [ecx+0x34],edx
10029be5:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
10029be9:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
10029bec:	89 51 3c             	mov    DWORD PTR [ecx+0x3c],edx
10029bef:	c2 40 00             	ret    0x40
10029bf2:	90                   	nop
10029bf3:	90                   	nop
10029bf4:	90                   	nop
10029bf5:	90                   	nop
10029bf6:	90                   	nop
10029bf7:	90                   	nop
10029bf8:	90                   	nop
10029bf9:	90                   	nop
10029bfa:	90                   	nop
10029bfb:	90                   	nop
10029bfc:	90                   	nop
10029bfd:	90                   	nop
10029bfe:	90                   	nop
10029bff:	90                   	nop

*/
void FXManager::CreateSpriteFX() {
    if (!g_pLTClient) return;
    ObjectCreateStruct ocs;
    ocs.m_ObjectType = OT_SPRITE;
    ocs.m_Flags = FLAG_VISIBLE | FLAG_NOLIGHTCOLOR;
    LTVector vPos;
    g_pLTClient->GetObjectPos(m_hObject, &vPos);
    ocs.m_Pos = vPos;
    g_pLTClient->CreateObject(&ocs);
}

// 0x10029c00: FXManager::ShatterGlassPane
/*
10029c00:	51                   	push   ecx
10029c01:	53                   	push   ebx
10029c02:	55                   	push   ebp
10029c03:	8b e9                	mov    ebp,ecx
10029c05:	56                   	push   esi
10029c06:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
10029c0c:	8d 54 24 0c          	lea    edx,[esp+0xc]
10029c10:	57                   	push   edi
10029c11:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
10029c15:	8b 01                	mov    eax,DWORD PTR [ecx]
10029c17:	52                   	push   edx
10029c18:	6a 00                	push   0x0
10029c1a:	57                   	push   edi
10029c1b:	ff 50 0c             	call   DWORD PTR [eax+0xc]
10029c1e:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
10029c24:	8d 54 24 18          	lea    edx,[esp+0x18]
10029c28:	52                   	push   edx
10029c29:	6a 01                	push   0x1
10029c2b:	8b 01                	mov    eax,DWORD PTR [ecx]
10029c2d:	57                   	push   edi
10029c2e:	ff 50 0c             	call   DWORD PTR [eax+0xc]
10029c31:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10029c35:	f6 c4 10             	test   ah,0x10
10029c38:	0f 84 d7 00 00 00    	je     0x10029d15
10029c3e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10029c42:	f6 c4 20             	test   ah,0x20
10029c45:	0f 84 ca 00 00 00    	je     0x10029d15
10029c4b:	85 ff                	test   edi,edi
10029c4d:	0f 84 c2 00 00 00    	je     0x10029d15
10029c53:	8b 85 b4 00 00 00    	mov    eax,DWORD PTR [ebp+0xb4]
10029c59:	32 db                	xor    bl,bl
10029c5b:	85 c0                	test   eax,eax
10029c5d:	74 11                	je     0x10029c70
10029c5f:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
10029c62:	39 39                	cmp    DWORD PTR [ecx],edi
10029c64:	74 08                	je     0x10029c6e
10029c66:	8b 00                	mov    eax,DWORD PTR [eax]
10029c68:	85 c0                	test   eax,eax
10029c6a:	74 04                	je     0x10029c70
10029c6c:	eb f1                	jmp    0x10029c5f
10029c6e:	b3 01                	mov    bl,0x1
10029c70:	8b cd                	mov    ecx,ebp
10029c72:	e8 19 2f 00 00       	call   0x1002cb90
10029c77:	8b f0                	mov    esi,eax
10029c79:	84 db                	test   bl,bl
10029c7b:	89 3e                	mov    DWORD PTR [esi],edi
10029c7d:	74 13                	je     0x10029c92
10029c7f:	e8 dc e6 fd ff       	call   0x10008360
10029c84:	33 d2                	xor    edx,edx
10029c86:	b9 03 00 00 00       	mov    ecx,0x3
10029c8b:	f7 f1                	div    ecx
10029c8d:	83 c2 04             	add    edx,0x4
10029c90:	eb 11                	jmp    0x10029ca3
10029c92:	e8 c9 e6 fd ff       	call   0x10008360
10029c97:	33 d2                	xor    edx,edx
10029c99:	b9 03 00 00 00       	mov    ecx,0x3
10029c9e:	f7 f1                	div    ecx
10029ca0:	83 c2 06             	add    edx,0x6
10029ca3:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
10029ca7:	8d 46 04             	lea    eax,[esi+0x4]
10029caa:	89 56 24             	mov    DWORD PTR [esi+0x24],edx
10029cad:	52                   	push   edx
10029cae:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
10029cb2:	50                   	push   eax
10029cb3:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10029cb8:	51                   	push   ecx
10029cb9:	52                   	push   edx
10029cba:	57                   	push   edi
10029cbb:	ff 90 a4 01 00 00    	call   DWORD PTR [eax+0x1a4]
10029cc1:	8b d8                	mov    ebx,eax
10029cc3:	83 c4 14             	add    esp,0x14
10029cc6:	85 db                	test   ebx,ebx
10029cc8:	74 4b                	je     0x10029d15
10029cca:	83 3e 00             	cmp    DWORD PTR [esi],0x0
10029ccd:	74 2f                	je     0x10029cfe
10029ccf:	8b 7e 28             	mov    edi,DWORD PTR [esi+0x28]
10029cd2:	8d 8d b0 00 00 00    	lea    ecx,[ebp+0xb0]
10029cd8:	57                   	push   edi
10029cd9:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
10029cdf:	c7 46 24 00 00 00 00 	mov    DWORD PTR [esi+0x24],0x0
10029ce6:	e8 c5 29 fe ff       	call   0x1000c6b0
10029ceb:	8b 8d c4 00 00 00    	mov    ecx,DWORD PTR [ebp+0xc4]
10029cf1:	57                   	push   edi
10029cf2:	51                   	push   ecx
10029cf3:	8d 8d bc 00 00 00    	lea    ecx,[ebp+0xbc]
10029cf9:	e8 32 29 fe ff       	call   0x1000c630
10029cfe:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10029d03:	53                   	push   ebx
10029d04:	68 b0 6f 0d 10       	push   0x100d6fb0
10029d09:	50                   	push   eax
10029d0a:	8b 10                	mov    edx,DWORD PTR [eax]
10029d0c:	ff 92 9c 00 00 00    	call   DWORD PTR [edx+0x9c]
10029d12:	83 c4 0c             	add    esp,0xc
10029d15:	5f                   	pop    edi
10029d16:	5e                   	pop    esi
10029d17:	5d                   	pop    ebp
10029d18:	5b                   	pop    ebx
10029d19:	59                   	pop    ecx
10029d1a:	c2 0c 00             	ret    0xc
10029d1d:	90                   	nop
10029d1e:	90                   	nop
10029d1f:	90                   	nop
10029d20:	83 ec 40             	sub    esp,0x40
10029d23:	53                   	push   ebx
10029d24:	56                   	push   esi
10029d25:	8b 74 24 4c          	mov    esi,DWORD PTR [esp+0x4c]
10029d29:	57                   	push   edi
10029d2a:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10029d2e:	83 7e 34 08          	cmp    DWORD PTR [esi+0x34],0x8
10029d32:	0f 84 4a 03 00 00    	je     0x1002a082
10029d38:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
10029d3d:	8b 56 44             	mov    edx,DWORD PTR [esi+0x44]
10029d40:	52                   	push   edx
10029d41:	c7 44 24 54 06 00 00 	mov    DWORD PTR [esp+0x54],0x6
10029d48:	00 
10029d49:	8b 88 d0 83 01 00    	mov    ecx,DWORD PTR [eax+0x183d0]
10029d4f:	e8 8c 72 fe ff       	call   0x10010fe0
10029d54:	8b f8                	mov    edi,eax
10029d56:	f6 47 24 01          	test   BYTE PTR [edi+0x24],0x1
10029d5a:	0f 85 22 03 00 00    	jne    0x1002a082
10029d60:	33 db                	xor    ebx,ebx
10029d62:	b8 02 00 00 00       	mov    eax,0x2
10029d67:	53                   	push   ebx
10029d68:	53                   	push   ebx
10029d69:	53                   	push   ebx
10029d6a:	8d 4c 24 28          	lea    ecx,[esp+0x28]
10029d6e:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
10029d72:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
10029d76:	c7 44 24 40 00 00 80 	mov    DWORD PTR [esp+0x40],0x3f800000
10029d7d:	3f 
10029d7e:	89 5c 24 44          	mov    DWORD PTR [esp+0x44],ebx
10029d82:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
10029d89:	ff 
10029d8a:	c7 44 24 4c ff ff ff 	mov    DWORD PTR [esp+0x4c],0xffffffff
10029d91:	ff 
10029d92:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
10029d96:	89 5c 24 54          	mov    DWORD PTR [esp+0x54],ebx
10029d9a:	e8 21 16 fe ff       	call   0x1000b3c0
10029d9f:	53                   	push   ebx
10029da0:	53                   	push   ebx
10029da1:	53                   	push   ebx
10029da2:	8d 4c 24 34          	lea    ecx,[esp+0x34]
10029da6:	e8 15 16 fe ff       	call   0x1000b3c0
10029dab:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10029dae:	8b 06                	mov    eax,DWORD PTR [esi]
10029db0:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10029db3:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
10029db7:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
10029dba:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10029dbe:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
10029dc1:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
10029dc5:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
10029dc9:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
10029dcd:	8b 56 20             	mov    edx,DWORD PTR [esi+0x20]
10029dd0:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10029dd4:	8b 41 0c             	mov    eax,DWORD PTR [ecx+0xc]
10029dd7:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
10029ddb:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
10029dde:	3d ff 00 00 00       	cmp    eax,0xff
10029de3:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
10029de7:	74 11                	je     0x10029dfa
10029de9:	8b 49 18             	mov    ecx,DWORD PTR [ecx+0x18]
10029dec:	3b cb                	cmp    ecx,ebx
10029dee:	74 0f                	je     0x10029dff
10029df0:	83 f9 01             	cmp    ecx,0x1
10029df3:	75 05                	jne    0x10029dfa
10029df5:	83 c0 40             	add    eax,0x40
10029df8:	eb 05                	jmp    0x10029dff
10029dfa:	b8 ff 00 00 00       	mov    eax,0xff
10029dff:	3b 05 70 cf 10 10    	cmp    eax,DWORD PTR ds:0x1010cf70
10029e05:	72 04                	jb     0x10029e0b
10029e07:	33 c0                	xor    eax,eax
10029e09:	eb 12                	jmp    0x10029e1d
10029e0b:	8d 0c 80             	lea    ecx,[eax+eax*4]
10029e0e:	8d 0c c9             	lea    ecx,[ecx+ecx*8]
10029e11:	8d 04 48             	lea    eax,[eax+ecx*2]
10029e14:	8b 0d 6c cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cf6c
10029e1a:	8d 04 81             	lea    eax,[ecx+eax*4]
10029e1d:	8b 88 c0 00 00 00    	mov    ecx,DWORD PTR [eax+0xc0]
10029e23:	83 f9 06             	cmp    ecx,0x6
10029e26:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
10029e2a:	75 33                	jne    0x10029e5f
10029e2c:	66 8b 47 68          	mov    ax,WORD PTR [edi+0x68]
10029e30:	66 3d ff ff          	cmp    ax,0xffff
10029e34:	0f 84 48 02 00 00    	je     0x1002a082
10029e3a:	0f bf d0             	movsx  edx,ax
10029e3d:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
10029e40:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10029e44:	8b 56 1c             	mov    edx,DWORD PTR [esi+0x1c]
10029e47:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10029e4b:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
10029e4e:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
10029e52:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
10029e56:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10029e5a:	e9 70 01 00 00       	jmp    0x10029fcf
10029e5f:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10029e62:	83 f8 03             	cmp    eax,0x3
10029e65:	0f 84 d3 00 00 00    	je     0x10029f3e
10029e6b:	83 f8 06             	cmp    eax,0x6
10029e6e:	0f 84 cf 00 00 00    	je     0x10029f43
10029e74:	83 f8 04             	cmp    eax,0x4
10029e77:	75 2f                	jne    0x10029ea8
10029e79:	66 8b 7f 66          	mov    di,WORD PTR [edi+0x66]
10029e7d:	66 83 ff ff          	cmp    di,0xffff
10029e81:	0f 84 fb 01 00 00    	je     0x1002a082
10029e87:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10029e8a:	0f bf d7             	movsx  edx,di
10029e8d:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10029e91:	8b 56 10             	mov    edx,DWORD PTR [esi+0x10]
10029e94:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10029e98:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
10029e9b:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
10029e9f:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10029ea3:	e9 27 01 00 00       	jmp    0x10029fcf
10029ea8:	83 f8 01             	cmp    eax,0x1
10029eab:	74 3d                	je     0x10029eea
10029ead:	83 f8 05             	cmp    eax,0x5
10029eb0:	74 3d                	je     0x10029eef
10029eb2:	83 f8 02             	cmp    eax,0x2
10029eb5:	0f 85 14 01 00 00    	jne    0x10029fcf
10029ebb:	66 8b 7f 66          	mov    di,WORD PTR [edi+0x66]
10029ebf:	66 83 ff ff          	cmp    di,0xffff
10029ec3:	0f 84 b9 01 00 00    	je     0x1002a082
10029ec9:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
10029ecc:	0f bf d7             	movsx  edx,di
10029ecf:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10029ed3:	8b 56 1c             	mov    edx,DWORD PTR [esi+0x1c]
10029ed6:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10029eda:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
10029edd:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
10029ee1:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10029ee5:	e9 e5 00 00 00       	jmp    0x10029fcf
10029eea:	83 f8 05             	cmp    eax,0x5
10029eed:	75 1c                	jne    0x10029f0b
10029eef:	66 8b 47 6a          	mov    ax,WORD PTR [edi+0x6a]
10029ef3:	66 3b c3             	cmp    ax,bx
10029ef6:	74 13                	je     0x10029f0b
10029ef8:	66 3d ff ff          	cmp    ax,0xffff
10029efc:	0f 84 80 01 00 00    	je     0x1002a082
10029f02:	0f bf d0             	movsx  edx,ax
10029f05:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
10029f09:	eb 15                	jmp    0x10029f20
10029f0b:	66 8b 7f 64          	mov    di,WORD PTR [edi+0x64]
10029f0f:	66 83 ff ff          	cmp    di,0xffff
10029f13:	0f 84 69 01 00 00    	je     0x1002a082
10029f19:	0f bf c7             	movsx  eax,di
10029f1c:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10029f20:	8b 56 18             	mov    edx,DWORD PTR [esi+0x18]
10029f23:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
10029f26:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
10029f2a:	8b 56 20             	mov    edx,DWORD PTR [esi+0x20]
10029f2d:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10029f31:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
10029f35:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
10029f39:	e9 91 00 00 00       	jmp    0x10029fcf
10029f3e:	83 f8 06             	cmp    eax,0x6
10029f41:	75 18                	jne    0x10029f5b
10029f43:	66 8b 47 6a          	mov    ax,WORD PTR [edi+0x6a]
10029f47:	66 3b c3             	cmp    ax,bx
10029f4a:	74 0f                	je     0x10029f5b
10029f4c:	66 3d ff ff          	cmp    ax,0xffff
10029f50:	0f 84 2c 01 00 00    	je     0x1002a082
10029f56:	0f bf c0             	movsx  eax,ax
10029f59:	eb 11                	jmp    0x10029f6c
10029f5b:	66 8b 7f 64          	mov    di,WORD PTR [edi+0x64]
10029f5f:	66 83 ff ff          	cmp    di,0xffff
10029f63:	0f 84 19 01 00 00    	je     0x1002a082
10029f69:	0f bf c7             	movsx  eax,di
10029f6c:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10029f70:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
10029f73:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
10029f77:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
10029f7a:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10029f7e:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
10029f81:	3b d3                	cmp    edx,ebx
10029f83:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
10029f87:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10029f8b:	74 42                	je     0x10029fcf
10029f8d:	d9 46 24             	fld    DWORD PTR [esi+0x24]
10029f90:	d8 1d 4c 86 0b 10    	fcomp  DWORD PTR ds:0x100b864c
10029f96:	df e0                	fnstsw ax
10029f98:	f6 c4 41             	test   ah,0x41
10029f9b:	75 32                	jne    0x10029fcf
10029f9d:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
10029fa3:	8d 7c 24 54          	lea    edi,[esp+0x54]
10029fa7:	57                   	push   edi
10029fa8:	6a 01                	push   0x1
10029faa:	8b 01                	mov    eax,DWORD PTR [ecx]
10029fac:	52                   	push   edx
10029fad:	ff 50 0c             	call   DWORD PTR [eax+0xc]
10029fb0:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
10029fb4:	f6 c4 10             	test   ah,0x10
10029fb7:	74 12                	je     0x10029fcb
10029fb9:	8b 56 3c             	mov    edx,DWORD PTR [esi+0x3c]
10029fbc:	8d 4e 0c             	lea    ecx,[esi+0xc]
10029fbf:	51                   	push   ecx
10029fc0:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10029fc4:	56                   	push   esi
10029fc5:	52                   	push   edx
10029fc6:	e8 35 fc ff ff       	call   0x10029c00
10029fcb:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10029fcf:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10029fd2:	83 f8 02             	cmp    eax,0x2
10029fd5:	74 0a                	je     0x10029fe1
10029fd7:	83 f8 01             	cmp    eax,0x1
10029fda:	74 05                	je     0x10029fe1
10029fdc:	83 f8 05             	cmp    eax,0x5
10029fdf:	75 42                	jne    0x1002a023
10029fe1:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
10029fe4:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10029fea:	8d 44 24 54          	lea    eax,[esp+0x54]
10029fee:	50                   	push   eax
10029fef:	51                   	push   ecx
10029ff0:	ff 92 10 03 00 00    	call   DWORD PTR [edx+0x310]
10029ff6:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10029ffa:	8a 4c 24 5f          	mov    cl,BYTE PTR [esp+0x5f]
10029ffe:	83 c4 08             	add    esp,0x8
1002a001:	0c 60                	or     al,0x60
1002a003:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1002a007:	8a 44 24 56          	mov    al,BYTE PTR [esp+0x56]
1002a00b:	88 44 24 48          	mov    BYTE PTR [esp+0x48],al
1002a00f:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
1002a013:	88 4c 24 4b          	mov    BYTE PTR [esp+0x4b],cl
1002a017:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1002a01b:	88 64 24 49          	mov    BYTE PTR [esp+0x49],ah
1002a01f:	88 44 24 4a          	mov    BYTE PTR [esp+0x4a],al
1002a023:	8b 56 40             	mov    edx,DWORD PTR [esi+0x40]
1002a026:	83 f9 06             	cmp    ecx,0x6
1002a029:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
1002a02d:	74 2e                	je     0x1002a05d
1002a02f:	83 f9 02             	cmp    ecx,0x2
1002a032:	75 0c                	jne    0x1002a040
1002a034:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
1002a038:	d8 0d 80 89 0b 10    	fmul   DWORD PTR ds:0x100b8980
1002a03e:	eb 19                	jmp    0x1002a059
1002a040:	83 f9 01             	cmp    ecx,0x1
1002a043:	74 0a                	je     0x1002a04f
1002a045:	83 f9 04             	cmp    ecx,0x4
1002a048:	74 05                	je     0x1002a04f
1002a04a:	83 f9 05             	cmp    ecx,0x5
1002a04d:	75 0e                	jne    0x1002a05d
1002a04f:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
1002a053:	d8 0d 7c 89 0b 10    	fmul   DWORD PTR ds:0x100b897c
1002a059:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
1002a05d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1002a061:	8d 44 24 14          	lea    eax,[esp+0x14]
1002a065:	50                   	push   eax
1002a066:	e8 c5 d2 ff ff       	call   0x10027330
1002a06b:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
1002a06f:	83 f8 06             	cmp    eax,0x6
1002a072:	74 0e                	je     0x1002a082
1002a074:	8b 4e 44             	mov    ecx,DWORD PTR [esi+0x44]
1002a077:	51                   	push   ecx
1002a078:	50                   	push   eax
1002a079:	56                   	push   esi
1002a07a:	e8 a1 32 01 00       	call   0x1003d320
1002a07f:	83 c4 0c             	add    esp,0xc
1002a082:	5f                   	pop    edi
1002a083:	5e                   	pop    esi
1002a084:	5b                   	pop    ebx
1002a085:	83 c4 40             	add    esp,0x40
1002a088:	c2 08 00             	ret    0x8
1002a08b:	90                   	nop
1002a08c:	90                   	nop
1002a08d:	90                   	nop
1002a08e:	90                   	nop
1002a08f:	90                   	nop
1002a090:	81 ec c4 06 00 00    	sub    esp,0x6c4
1002a096:	53                   	push   ebx
1002a097:	55                   	push   ebp
1002a098:	56                   	push   esi
1002a099:	8b f1                	mov    esi,ecx
1002a09b:	57                   	push   edi
1002a09c:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
1002a09f:	85 c0                	test   eax,eax
1002a0a1:	0f 84 f2 04 00 00    	je     0x1002a599
1002a0a7:	8b ac 24 e4 06 00 00 	mov    ebp,DWORD PTR [esp+0x6e4]
1002a0ae:	85 ed                	test   ebp,ebp
1002a0b0:	74 18                	je     0x1002a0ca
1002a0b2:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002a0b7:	55                   	push   ebp
1002a0b8:	ff 90 20 03 00 00    	call   DWORD PTR [eax+0x320]
1002a0be:	83 c4 04             	add    esp,0x4
1002a0c1:	f6 c4 02             	test   ah,0x2
1002a0c4:	0f 85 cf 04 00 00    	jne    0x1002a599
1002a0ca:	83 7e 10 ff          	cmp    DWORD PTR [esi+0x10],0xffffffff
1002a0ce:	75 12                	jne    0x1002a0e2
1002a0d0:	6a 00                	push   0x0
1002a0d2:	6a ff                	push   0xffffffff
1002a0d4:	8b ce                	mov    ecx,esi
1002a0d6:	c7 46 10 2c 01 00 00 	mov    DWORD PTR [esi+0x10],0x12c
1002a0dd:	e8 5e bb ff ff       	call   0x10025c40
1002a0e2:	8b 9c 24 d8 06 00 00 	mov    ebx,DWORD PTR [esp+0x6d8]
1002a0e9:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002a0eb:	d9 84 24 e8 06 00 00 	fld    DWORD PTR [esp+0x6e8]
1002a0f2:	8d 3c dd 00 00 00 00 	lea    edi,[ebx*8+0x0]
1002a0f9:	8b 84 24 f0 06 00 00 	mov    eax,DWORD PTR [esp+0x6f0]
1002a100:	2b fb                	sub    edi,ebx
1002a102:	c1 e7 05             	shl    edi,0x5
1002a105:	85 c0                	test   eax,eax
1002a107:	d8 8c 0f a0 00 00 00 	fmul   DWORD PTR [edi+ecx*1+0xa0]
1002a10e:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002a112:	75 03                	jne    0x1002a117
1002a114:	50                   	push   eax
1002a115:	eb 01                	jmp    0x1002a118
1002a117:	50                   	push   eax
1002a118:	8b 94 24 e4 06 00 00 	mov    edx,DWORD PTR [esp+0x6e4]
1002a11f:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1002a123:	8b 8c 24 e0 06 00 00 	mov    ecx,DWORD PTR [esp+0x6e0]
1002a12a:	55                   	push   ebp
1002a12b:	52                   	push   edx
1002a12c:	50                   	push   eax
1002a12d:	51                   	push   ecx
1002a12e:	8b ce                	mov    ecx,esi
1002a130:	e8 7b 04 00 00       	call   0x1002a5b0
1002a135:	8b e8                	mov    ebp,eax
1002a137:	85 ed                	test   ebp,ebp
1002a139:	0f 84 5a 04 00 00    	je     0x1002a599
1002a13f:	3b 5e 04             	cmp    ebx,DWORD PTR [esi+0x4]
1002a142:	0f 83 51 04 00 00    	jae    0x1002a599
1002a148:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002a14e:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1002a151:	68 0d 02 00 00       	push   0x20d
1002a156:	50                   	push   eax
1002a157:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a159:	ff 92 b0 01 00 00    	call   DWORD PTR [edx+0x1b0]
1002a15f:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002a161:	33 db                	xor    ebx,ebx
1002a163:	f7 44 0f 04 00 00 00 	test   DWORD PTR [edi+ecx*1+0x4],0x4000000
1002a16a:	04 
1002a16b:	74 05                	je     0x1002a172
1002a16d:	bb 04 00 00 00       	mov    ebx,0x4
1002a172:	8d 4c 24 50          	lea    ecx,[esp+0x50]
1002a176:	e8 35 cc fd ff       	call   0x10006db0
1002a17b:	8b 8c 24 f0 06 00 00 	mov    ecx,DWORD PTR [esp+0x6f0]
1002a182:	33 c0                	xor    eax,eax
1002a184:	3b c8                	cmp    ecx,eax
1002a186:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
1002a18d:	00 
1002a18e:	c7 44 24 28 00 00 80 	mov    DWORD PTR [esp+0x28],0x3f800000
1002a195:	3f 
1002a196:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
1002a19d:	00 
1002a19e:	74 16                	je     0x1002a1b6
1002a1a0:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a1a2:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
1002a1a6:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
1002a1a9:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
1002a1ac:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
1002a1b0:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
1002a1b4:	eb 23                	jmp    0x1002a1d9
1002a1b6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002a1bc:	8d 44 24 34          	lea    eax,[esp+0x34]
1002a1c0:	50                   	push   eax
1002a1c1:	8b 84 24 e4 06 00 00 	mov    eax,DWORD PTR [esp+0x6e4]
1002a1c8:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a1ca:	50                   	push   eax
1002a1cb:	ff 92 50 01 00 00    	call   DWORD PTR [edx+0x150]
1002a1d1:	85 c0                	test   eax,eax
1002a1d3:	0f 85 c0 03 00 00    	jne    0x1002a599
1002a1d9:	66 89 44 24 50       	mov    WORD PTR [esp+0x50],ax
1002a1de:	66 89 44 24 52       	mov    WORD PTR [esp+0x52],ax
1002a1e3:	89 44 24 58          	mov    DWORD PTR [esp+0x58],eax
1002a1e7:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
1002a1eb:	89 84 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],eax
1002a1f2:	c7 44 24 54 01 00 00 	mov    DWORD PTR [esp+0x54],0x1
1002a1f9:	00 
1002a1fa:	c7 44 24 60 00 00 00 	mov    DWORD PTR [esp+0x60],0x0
1002a201:	00 
1002a202:	c7 44 24 64 00 00 00 	mov    DWORD PTR [esp+0x64],0x0
1002a209:	00 
1002a20a:	c7 44 24 68 00 00 00 	mov    DWORD PTR [esp+0x68],0x0
1002a211:	00 
1002a212:	c7 44 24 6c 00 00 80 	mov    DWORD PTR [esp+0x6c],0x3f800000
1002a219:	3f 
1002a21a:	c7 44 24 70 00 00 80 	mov    DWORD PTR [esp+0x70],0x3f800000
1002a221:	3f 
1002a222:	c7 44 24 74 00 00 80 	mov    DWORD PTR [esp+0x74],0x3f800000
1002a229:	3f 
1002a22a:	c7 44 24 78 00 00 00 	mov    DWORD PTR [esp+0x78],0x0
1002a231:	00 
1002a232:	c7 44 24 7c 00 00 00 	mov    DWORD PTR [esp+0x7c],0x0
1002a239:	00 
1002a23a:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x0
1002a241:	00 00 00 00 
1002a245:	c7 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],0x3f800000
1002a24c:	00 00 80 3f 
1002a250:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x0
1002a257:	00 
1002a258:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x0
1002a25f:	00 
1002a260:	8d 84 24 4c 01 00 00 	lea    eax,[esp+0x14c]
1002a267:	b9 0a 00 00 00       	mov    ecx,0xa
1002a26c:	c6 00 00             	mov    BYTE PTR [eax],0x0
1002a26f:	05 80 00 00 00       	add    eax,0x80
1002a274:	49                   	dec    ecx
1002a275:	75 f5                	jne    0x1002a26c
1002a277:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002a279:	33 c0                	xor    eax,eax
1002a27b:	c6 84 24 4c 06 00 00 	mov    BYTE PTR [esp+0x64c],0x0
1002a282:	00 
1002a283:	c7 84 24 cc 06 00 00 	mov    DWORD PTR [esp+0x6cc],0x0
1002a28a:	00 00 00 00 
1002a28e:	8d 7c 0f 48          	lea    edi,[edi+ecx*1+0x48]
1002a292:	83 c9 ff             	or     ecx,0xffffffff
1002a295:	c7 84 24 d0 06 00 00 	mov    DWORD PTR [esp+0x6d0],0x0
1002a29c:	00 00 00 00 
1002a2a0:	8d 94 24 cc 00 00 00 	lea    edx,[esp+0xcc]
1002a2a7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
1002a2a9:	f7 d1                	not    ecx
1002a2ab:	2b f9                	sub    edi,ecx
1002a2ad:	8b c1                	mov    eax,ecx
1002a2af:	8b f7                	mov    esi,edi
1002a2b1:	8b fa                	mov    edi,edx
1002a2b3:	c1 e9 02             	shr    ecx,0x2
1002a2b6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1002a2b8:	8b c8                	mov    ecx,eax
1002a2ba:	8d 44 24 50          	lea    eax,[esp+0x50]
1002a2be:	83 e1 03             	and    ecx,0x3
1002a2c1:	50                   	push   eax
1002a2c2:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1002a2c4:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1002a2ca:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1002a2cd:	50                   	push   eax
1002a2ce:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a2d0:	ff 52 04             	call   DWORD PTR [edx+0x4]
1002a2d3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002a2d9:	8b bc 24 dc 06 00 00 	mov    edi,DWORD PTR [esp+0x6dc]
1002a2e0:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1002a2e3:	6a 00                	push   0x0
1002a2e5:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a2e7:	57                   	push   edi
1002a2e8:	50                   	push   eax
1002a2e9:	ff 92 a8 01 00 00    	call   DWORD PTR [edx+0x1a8]
1002a2ef:	8b b4 24 ec 06 00 00 	mov    esi,DWORD PTR [esp+0x6ec]
1002a2f6:	83 fe 02             	cmp    esi,0x2
1002a2f9:	75 27                	jne    0x1002a322
1002a2fb:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002a301:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a303:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1002a309:	d8 0d 04 85 0b 10    	fmul   DWORD PTR ds:0x100b8504
1002a30f:	e8 20 9b 07 00       	call   0x100a3e34
1002a314:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1002a31a:	a8 01                	test   al,0x1
1002a31c:	8b 01                	mov    eax,DWORD PTR [ecx]
1002a31e:	74 12                	je     0x1002a332
1002a320:	eb 0d                	jmp    0x1002a32f
1002a322:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1002a328:	83 fe 01             	cmp    esi,0x1
1002a32b:	8b 01                	mov    eax,DWORD PTR [ecx]
1002a32d:	75 03                	jne    0x1002a332
1002a32f:	80 cf 40             	or     bh,0x40
1002a332:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1002a335:	53                   	push   ebx
1002a336:	6a 01                	push   0x1
1002a338:	52                   	push   edx
1002a339:	ff 50 10             	call   DWORD PTR [eax+0x10]
1002a33c:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1002a340:	d8 4c 24 28          	fmul   DWORD PTR [esp+0x28]
1002a344:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
1002a348:	d8 4c 24 2c          	fmul   DWORD PTR [esp+0x2c]
1002a34c:	de e9                	fsubp  st(1),st
1002a34e:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
1002a352:	d8 4c 24 34          	fmul   DWORD PTR [esp+0x34]
1002a356:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
1002a35a:	d8 4c 24 24          	fmul   DWORD PTR [esp+0x24]
1002a35e:	de e9                	fsubp  st(1),st
1002a360:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1002a364:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
1002a368:	d8 4c 24 24          	fmul   DWORD PTR [esp+0x24]
1002a36c:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1002a370:	d8 4c 24 34          	fmul   DWORD PTR [esp+0x34]
1002a374:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1002a378:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1002a37c:	8d 44 24 24          	lea    eax,[esp+0x24]
1002a380:	de e9                	fsubp  st(1),st
1002a382:	50                   	push   eax
1002a383:	8d 44 24 38          	lea    eax,[esp+0x38]
1002a387:	50                   	push   eax
1002a388:	8d 84 24 80 00 00 00 	lea    eax,[esp+0x80]
1002a38f:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1002a393:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1002a397:	50                   	push   eax
1002a398:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1002a39c:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
1002a3a0:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
1002a3a6:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a3a8:	ff 12                	call   DWORD PTR [edx]
1002a3aa:	83 fe 02             	cmp    esi,0x2
1002a3ad:	75 31                	jne    0x1002a3e0
1002a3af:	e8 ac df fd ff       	call   0x10008360
1002a3b4:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1002a3b8:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
1002a3bf:	00 
1002a3c0:	df 6c 24 18          	fild   QWORD PTR [esp+0x18]
1002a3c4:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
1002a3ca:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002a3d0:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a3d2:	d8 0d fc 83 0b 10    	fmul   DWORD PTR ds:0x100b83fc
1002a3d8:	d8 25 c0 85 0b 10    	fsub   DWORD PTR ds:0x100b85c0
1002a3de:	eb 2f                	jmp    0x1002a40f
1002a3e0:	e8 7b df fd ff       	call   0x10008360
1002a3e5:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1002a3e9:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
1002a3f0:	00 
1002a3f1:	df 6c 24 18          	fild   QWORD PTR [esp+0x18]
1002a3f5:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
1002a3fb:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002a401:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a403:	d8 0d c0 85 0b 10    	fmul   DWORD PTR ds:0x100b85c0
1002a409:	d8 25 e8 84 0b 10    	fsub   DWORD PTR ds:0x100b84e8
1002a40f:	d8 05 f8 85 0b 10    	fadd   DWORD PTR ds:0x100b85f8
1002a415:	51                   	push   ecx
1002a416:	8d 44 24 7c          	lea    eax,[esp+0x7c]
1002a41a:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
1002a420:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
1002a426:	d9 1c 24             	fstp   DWORD PTR [esp]
1002a429:	50                   	push   eax
1002a42a:	ff 52 0c             	call   DWORD PTR [edx+0xc]
1002a42d:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1002a430:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002a435:	8d 4c 24 78          	lea    ecx,[esp+0x78]
1002a439:	51                   	push   ecx
1002a43a:	52                   	push   edx
1002a43b:	ff 90 f8 02 00 00    	call   DWORD PTR [eax+0x2f8]
1002a441:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1002a445:	8b d1                	mov    edx,ecx
1002a447:	8b c1                	mov    eax,ecx
1002a449:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
1002a44d:	89 54 24 50          	mov    DWORD PTR [esp+0x50],edx
1002a451:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
1002a455:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1002a458:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002a45d:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
1002a461:	51                   	push   ecx
1002a462:	52                   	push   edx
1002a463:	ff 90 04 03 00 00    	call   DWORD PTR [eax+0x304]
1002a469:	8b 9c 24 00 07 00 00 	mov    ebx,DWORD PTR [esp+0x700]
1002a470:	83 c4 10             	add    esp,0x10
1002a473:	85 db                	test   ebx,ebx
1002a475:	75 16                	jne    0x1002a48d
1002a477:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1002a47a:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1002a47d:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002a482:	51                   	push   ecx
1002a483:	52                   	push   edx
1002a484:	ff 90 c0 03 00 00    	call   DWORD PTR [eax+0x3c0]
1002a48a:	83 c4 08             	add    esp,0x8
1002a48d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002a493:	8d 44 24 30          	lea    eax,[esp+0x30]
1002a497:	50                   	push   eax
1002a498:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1002a49b:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a49d:	50                   	push   eax
1002a49e:	ff 92 b8 01 00 00    	call   DWORD PTR [edx+0x1b8]
1002a4a4:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1002a4a8:	8d 44 24 40          	lea    eax,[esp+0x40]
1002a4ac:	50                   	push   eax
1002a4ad:	6a 00                	push   0x0
1002a4af:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a4b1:	ff 52 04             	call   DWORD PTR [edx+0x4]
1002a4b4:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
1002a4b8:	83 f8 01             	cmp    eax,0x1
1002a4bb:	76 3e                	jbe    0x1002a4fb
1002a4bd:	8d 70 ff             	lea    esi,[eax-0x1]
1002a4c0:	8d 4e 01             	lea    ecx,[esi+0x1]
1002a4c3:	85 c9                	test   ecx,ecx
1002a4c5:	75 13                	jne    0x1002a4da
1002a4c7:	e8 94 de fd ff       	call   0x10008360
1002a4cc:	24 01                	and    al,0x1
1002a4ce:	f6 d8                	neg    al
1002a4d0:	1b c0                	sbb    eax,eax
1002a4d2:	f7 d0                	not    eax
1002a4d4:	23 c6                	and    eax,esi
1002a4d6:	8b d0                	mov    edx,eax
1002a4d8:	eb 0a                	jmp    0x1002a4e4
1002a4da:	e8 81 de fd ff       	call   0x10008360
1002a4df:	46                   	inc    esi
1002a4e0:	33 d2                	xor    edx,edx
1002a4e2:	f7 f6                	div    esi
1002a4e4:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1002a4e8:	52                   	push   edx
1002a4e9:	6a 00                	push   0x0
1002a4eb:	8b 01                	mov    eax,DWORD PTR [ecx]
1002a4ed:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1002a4f0:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1002a4f4:	6a 00                	push   0x0
1002a4f6:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a4f8:	ff 52 14             	call   DWORD PTR [edx+0x14]
1002a4fb:	85 db                	test   ebx,ebx
1002a4fd:	75 5f                	jne    0x1002a55e
1002a4ff:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002a505:	8d 54 24 18          	lea    edx,[esp+0x18]
1002a509:	52                   	push   edx
1002a50a:	8b 94 24 e4 06 00 00 	mov    edx,DWORD PTR [esp+0x6e4]
1002a511:	8b 01                	mov    eax,DWORD PTR [ecx]
1002a513:	57                   	push   edi
1002a514:	52                   	push   edx
1002a515:	ff 90 48 01 00 00    	call   DWORD PTR [eax+0x148]
1002a51b:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1002a51f:	68 ff 00 00 00       	push   0xff
1002a524:	e8 0b 99 07 00       	call   0x100a3e34
1002a529:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1002a52d:	50                   	push   eax
1002a52e:	e8 01 99 07 00       	call   0x100a3e34
1002a533:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1002a537:	50                   	push   eax
1002a538:	e8 f7 98 07 00       	call   0x100a3e34
1002a53d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002a543:	50                   	push   eax
1002a544:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1002a547:	50                   	push   eax
1002a548:	ff 91 1c 03 00 00    	call   DWORD PTR [ecx+0x31c]
1002a54e:	83 c4 14             	add    esp,0x14
1002a551:	5f                   	pop    edi
1002a552:	5e                   	pop    esi
1002a553:	5d                   	pop    ebp
1002a554:	5b                   	pop    ebx
1002a555:	81 c4 c4 06 00 00    	add    esp,0x6c4
1002a55b:	c2 1c 00             	ret    0x1c
1002a55e:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
1002a561:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002a567:	8d 54 24 10          	lea    edx,[esp+0x10]
1002a56b:	52                   	push   edx
1002a56c:	50                   	push   eax
1002a56d:	ff 91 10 03 00 00    	call   DWORD PTR [ecx+0x310]
1002a573:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1002a577:	8b 44 24 19          	mov    eax,DWORD PTR [esp+0x19]
1002a57b:	8b 4c 24 1a          	mov    ecx,DWORD PTR [esp+0x1a]
1002a57f:	68 ff 00 00 00       	push   0xff
1002a584:	52                   	push   edx
1002a585:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1002a588:	50                   	push   eax
1002a589:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002a58e:	51                   	push   ecx
1002a58f:	52                   	push   edx
1002a590:	ff 90 1c 03 00 00    	call   DWORD PTR [eax+0x31c]
1002a596:	83 c4 1c             	add    esp,0x1c
1002a599:	5f                   	pop    edi
1002a59a:	5e                   	pop    esi
1002a59b:	5d                   	pop    ebp
1002a59c:	5b                   	pop    ebx
1002a59d:	81 c4 c4 06 00 00    	add    esp,0x6c4
1002a5a3:	c2 1c 00             	ret    0x1c
1002a5a6:	90                   	nop
1002a5a7:	90                   	nop
1002a5a8:	90                   	nop
1002a5a9:	90                   	nop
1002a5aa:	90                   	nop
1002a5ab:	90                   	nop
1002a5ac:	90                   	nop
1002a5ad:	90                   	nop
1002a5ae:	90                   	nop
1002a5af:	90                   	nop
1002a5b0:	83 ec 18             	sub    esp,0x18
1002a5b3:	53                   	push   ebx
1002a5b4:	8b d9                	mov    ebx,ecx
1002a5b6:	8b 4b 68             	mov    ecx,DWORD PTR [ebx+0x68]
1002a5b9:	55                   	push   ebp
1002a5ba:	8d 43 68             	lea    eax,[ebx+0x68]
1002a5bd:	56                   	push   esi
1002a5be:	57                   	push   edi
1002a5bf:	8b 7b 6c             	mov    edi,DWORD PTR [ebx+0x6c]
1002a5c2:	85 c9                	test   ecx,ecx
1002a5c4:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002a5c8:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1002a5cc:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
1002a5d3:	00 
1002a5d4:	0f 86 0e 01 00 00    	jbe    0x1002a6e8
1002a5da:	8b 77 08             	mov    esi,DWORD PTR [edi+0x8]
1002a5dd:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
1002a5e1:	39 46 08             	cmp    DWORD PTR [esi+0x8],eax
1002a5e4:	0f 85 e3 00 00 00    	jne    0x1002a6cd
1002a5ea:	8b 6c 24 38          	mov    ebp,DWORD PTR [esp+0x38]
1002a5ee:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002a5f1:	3b c5                	cmp    eax,ebp
1002a5f3:	0f 85 d4 00 00 00    	jne    0x1002a6cd
1002a5f9:	8b 16                	mov    edx,DWORD PTR [esi]
1002a5fb:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002a600:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
1002a604:	51                   	push   ecx
1002a605:	52                   	push   edx
1002a606:	ff 90 f0 02 00 00    	call   DWORD PTR [eax+0x2f0]
1002a60c:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
1002a610:	83 c4 08             	add    esp,0x8
1002a613:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
1002a617:	d8 60 08             	fsub   DWORD PTR [eax+0x8]
1002a61a:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
1002a61e:	d8 60 04             	fsub   DWORD PTR [eax+0x4]
1002a621:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1002a625:	d8 20                	fsub   DWORD PTR [eax]
1002a627:	d9 c0                	fld    st(0)
1002a629:	d8 c9                	fmul   st,st(1)
1002a62b:	d9 c2                	fld    st(2)
1002a62d:	d8 cb                	fmul   st,st(3)
1002a62f:	de c1                	faddp  st(1),st
1002a631:	d9 c3                	fld    st(3)
1002a633:	d8 cc                	fmul   st,st(4)
1002a635:	de c1                	faddp  st(1),st
1002a637:	d9 fa                	fsqrt
1002a639:	dd db                	fstp   st(3)
1002a63b:	dd d8                	fstp   st(0)
1002a63d:	dd d8                	fstp   st(0)
1002a63f:	d8 66 0c             	fsub   DWORD PTR [esi+0xc]
1002a642:	d8 64 24 30          	fsub   DWORD PTR [esp+0x30]
1002a646:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002a64c:	df e0                	fnstsw ax
1002a64e:	f6 c4 41             	test   ah,0x41
1002a651:	74 7a                	je     0x1002a6cd
1002a653:	85 ed                	test   ebp,ebp
1002a655:	74 2a                	je     0x1002a681
1002a657:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
1002a65b:	85 c0                	test   eax,eax
1002a65d:	74 22                	je     0x1002a681
1002a65f:	d9 46 18             	fld    DWORD PTR [esi+0x18]
1002a662:	d8 48 08             	fmul   DWORD PTR [eax+0x8]
1002a665:	d9 46 14             	fld    DWORD PTR [esi+0x14]
1002a668:	d8 48 04             	fmul   DWORD PTR [eax+0x4]
1002a66b:	de c1                	faddp  st(1),st
1002a66d:	d9 46 10             	fld    DWORD PTR [esi+0x10]
1002a670:	d8 08                	fmul   DWORD PTR [eax]
1002a672:	de c1                	faddp  st(1),st
1002a674:	d8 1d e0 83 0b 10    	fcomp  DWORD PTR ds:0x100b83e0
1002a67a:	df e0                	fnstsw ax
1002a67c:	f6 c4 01             	test   ah,0x1
1002a67f:	75 4c                	jne    0x1002a6cd
1002a681:	d9 46 0c             	fld    DWORD PTR [esi+0xc]
1002a684:	d8 5c 24 30          	fcomp  DWORD PTR [esp+0x30]
1002a688:	df e0                	fnstsw ax
1002a68a:	f6 c4 01             	test   ah,0x1
1002a68d:	74 7a                	je     0x1002a709
1002a68f:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1002a693:	8b ef                	mov    ebp,edi
1002a695:	8b 3f                	mov    edi,DWORD PTR [edi]
1002a697:	55                   	push   ebp
1002a698:	e8 13 20 fe ff       	call   0x1000c6b0
1002a69d:	8b 4b 7c             	mov    ecx,DWORD PTR [ebx+0x7c]
1002a6a0:	55                   	push   ebp
1002a6a1:	51                   	push   ecx
1002a6a2:	8d 4b 74             	lea    ecx,[ebx+0x74]
1002a6a5:	e8 86 1f fe ff       	call   0x1000c630
1002a6aa:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002a6b0:	8b 06                	mov    eax,DWORD PTR [esi]
1002a6b2:	6a 00                	push   0x0
1002a6b4:	50                   	push   eax
1002a6b5:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a6b7:	ff 92 b0 01 00 00    	call   DWORD PTR [edx+0x1b0]
1002a6bd:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
1002a6c4:	c7 46 08 ff ff ff ff 	mov    DWORD PTR [esi+0x8],0xffffffff
1002a6cb:	eb 02                	jmp    0x1002a6cf
1002a6cd:	8b 3f                	mov    edi,DWORD PTR [edi]
1002a6cf:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1002a6d3:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1002a6d7:	40                   	inc    eax
1002a6d8:	3b c1                	cmp    eax,ecx
1002a6da:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1002a6de:	0f 82 f6 fe ff ff    	jb     0x1002a5da
1002a6e4:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1002a6e8:	8b 53 74             	mov    edx,DWORD PTR [ebx+0x74]
1002a6eb:	8d 4b 74             	lea    ecx,[ebx+0x74]
1002a6ee:	85 d2                	test   edx,edx
1002a6f0:	74 10                	je     0x1002a702
1002a6f2:	8b 73 78             	mov    esi,DWORD PTR [ebx+0x78]
1002a6f5:	56                   	push   esi
1002a6f6:	e8 b5 1f fe ff       	call   0x1000c6b0
1002a6fb:	8b 4b 70             	mov    ecx,DWORD PTR [ebx+0x70]
1002a6fe:	56                   	push   esi
1002a6ff:	51                   	push   ecx
1002a700:	eb 20                	jmp    0x1002a722
1002a702:	8b 73 6c             	mov    esi,DWORD PTR [ebx+0x6c]
1002a705:	85 f6                	test   esi,esi
1002a707:	75 0c                	jne    0x1002a715
1002a709:	5f                   	pop    edi
1002a70a:	5e                   	pop    esi
1002a70b:	5d                   	pop    ebp
1002a70c:	33 c0                	xor    eax,eax
1002a70e:	5b                   	pop    ebx
1002a70f:	83 c4 18             	add    esp,0x18
1002a712:	c2 14 00             	ret    0x14
1002a715:	56                   	push   esi
1002a716:	8b c8                	mov    ecx,eax
1002a718:	e8 93 1f fe ff       	call   0x1000c6b0
1002a71d:	8b 53 70             	mov    edx,DWORD PTR [ebx+0x70]
1002a720:	56                   	push   esi
1002a721:	52                   	push   edx
1002a722:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1002a726:	e8 05 1f fe ff       	call   0x1000c630
1002a72b:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
1002a72e:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
1002a732:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
1002a736:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
1002a73a:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1002a73d:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
1002a741:	85 c0                	test   eax,eax
1002a743:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
1002a746:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
1002a749:	74 11                	je     0x1002a75c
1002a74b:	8b 08                	mov    ecx,DWORD PTR [eax]
1002a74d:	89 4e 10             	mov    DWORD PTR [esi+0x10],ecx
1002a750:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1002a753:	89 56 14             	mov    DWORD PTR [esi+0x14],edx
1002a756:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1002a759:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
1002a75c:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002a75e:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002a764:	6a ff                	push   0xffffffff
1002a766:	51                   	push   ecx
1002a767:	ff 92 c0 03 00 00    	call   DWORD PTR [edx+0x3c0]
1002a76d:	83 c4 08             	add    esp,0x8
1002a770:	8b c6                	mov    eax,esi
1002a772:	5f                   	pop    edi
1002a773:	5e                   	pop    esi
1002a774:	5d                   	pop    ebp
1002a775:	5b                   	pop    ebx
1002a776:	83 c4 18             	add    esp,0x18
1002a779:	c2 14 00             	ret    0x14
1002a77c:	90                   	nop
1002a77d:	90                   	nop
1002a77e:	90                   	nop
1002a77f:	90                   	nop
1002a780:	55                   	push   ebp
1002a781:	56                   	push   esi
1002a782:	57                   	push   edi
1002a783:	8b f9                	mov    edi,ecx
1002a785:	8b 47 68             	mov    eax,DWORD PTR [edi+0x68]
1002a788:	8d 6f 68             	lea    ebp,[edi+0x68]
1002a78b:	85 c0                	test   eax,eax
1002a78d:	74 54                	je     0x1002a7e3
1002a78f:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1002a793:	85 c0                	test   eax,eax
1002a795:	74 4c                	je     0x1002a7e3
1002a797:	8b 77 6c             	mov    esi,DWORD PTR [edi+0x6c]
1002a79a:	85 f6                	test   esi,esi
1002a79c:	74 45                	je     0x1002a7e3
1002a79e:	53                   	push   ebx
1002a79f:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1002a7a2:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1002a7a6:	39 48 04             	cmp    DWORD PTR [eax+0x4],ecx
1002a7a9:	75 31                	jne    0x1002a7dc
1002a7ab:	8b 1e                	mov    ebx,DWORD PTR [esi]
1002a7ad:	56                   	push   esi
1002a7ae:	8b cd                	mov    ecx,ebp
1002a7b0:	e8 fb 1e fe ff       	call   0x1000c6b0
1002a7b5:	8b 57 7c             	mov    edx,DWORD PTR [edi+0x7c]
1002a7b8:	56                   	push   esi
1002a7b9:	52                   	push   edx
1002a7ba:	8d 4f 74             	lea    ecx,[edi+0x74]
1002a7bd:	e8 6e 1e fe ff       	call   0x1000c630
1002a7c2:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1002a7c5:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002a7cb:	6a 00                	push   0x0
1002a7cd:	8b 12                	mov    edx,DWORD PTR [edx]
1002a7cf:	8b 01                	mov    eax,DWORD PTR [ecx]
1002a7d1:	52                   	push   edx
1002a7d2:	ff 90 b0 01 00 00    	call   DWORD PTR [eax+0x1b0]
1002a7d8:	8b f3                	mov    esi,ebx
1002a7da:	eb 02                	jmp    0x1002a7de
1002a7dc:	8b 36                	mov    esi,DWORD PTR [esi]
1002a7de:	85 f6                	test   esi,esi
1002a7e0:	75 bd                	jne    0x1002a79f
1002a7e2:	5b                   	pop    ebx
1002a7e3:	5f                   	pop    edi
1002a7e4:	5e                   	pop    esi
1002a7e5:	5d                   	pop    ebp
1002a7e6:	c2 04 00             	ret    0x4
1002a7e9:	90                   	nop
1002a7ea:	90                   	nop
1002a7eb:	90                   	nop
1002a7ec:	90                   	nop
1002a7ed:	90                   	nop
1002a7ee:	90                   	nop
1002a7ef:	90                   	nop
1002a7f0:	53                   	push   ebx
1002a7f1:	57                   	push   edi
1002a7f2:	8b f9                	mov    edi,ecx
1002a7f4:	8b 47 68             	mov    eax,DWORD PTR [edi+0x68]
1002a7f7:	8d 5f 68             	lea    ebx,[edi+0x68]
1002a7fa:	85 c0                	test   eax,eax
1002a7fc:	7e 51                	jle    0x1002a84f
1002a7fe:	55                   	push   ebp
1002a7ff:	56                   	push   esi
1002a800:	8b e8                	mov    ebp,eax
1002a802:	83 3b 00             	cmp    DWORD PTR [ebx],0x0
1002a805:	74 43                	je     0x1002a84a
1002a807:	8b 77 6c             	mov    esi,DWORD PTR [edi+0x6c]
1002a80a:	8b cb                	mov    ecx,ebx
1002a80c:	56                   	push   esi
1002a80d:	e8 9e 1e fe ff       	call   0x1000c6b0
1002a812:	8b 47 7c             	mov    eax,DWORD PTR [edi+0x7c]
1002a815:	56                   	push   esi
1002a816:	50                   	push   eax
1002a817:	8d 4f 74             	lea    ecx,[edi+0x74]
1002a81a:	e8 11 1e fe ff       	call   0x1000c630
1002a81f:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1002a822:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002a828:	6a 00                	push   0x0
1002a82a:	8b 00                	mov    eax,DWORD PTR [eax]
1002a82c:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a82e:	50                   	push   eax
1002a82f:	ff 92 b0 01 00 00    	call   DWORD PTR [edx+0x1b0]
1002a835:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1002a838:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1002a83e:	6a 00                	push   0x0
1002a840:	6a 01                	push   0x1
1002a842:	8b 00                	mov    eax,DWORD PTR [eax]
1002a844:	8b 11                	mov    edx,DWORD PTR [ecx]
1002a846:	50                   	push   eax
1002a847:	ff 52 10             	call   DWORD PTR [edx+0x10]
1002a84a:	4d                   	dec    ebp
1002a84b:	75 b5                	jne    0x1002a802
1002a84d:	5e                   	pop    esi
1002a84e:	5d                   	pop    ebp
1002a84f:	5f                   	pop    edi
1002a850:	5b                   	pop    ebx
1002a851:	c3                   	ret
1002a852:	90                   	nop
1002a853:	90                   	nop
1002a854:	90                   	nop
1002a855:	90                   	nop
1002a856:	90                   	nop
1002a857:	90                   	nop
1002a858:	90                   	nop
1002a859:	90                   	nop
1002a85a:	90                   	nop
1002a85b:	90                   	nop
1002a85c:	90                   	nop
1002a85d:	90                   	nop
1002a85e:	90                   	nop
1002a85f:	90                   	nop
1002a860:	83 ec 08             	sub    esp,0x8
1002a863:	53                   	push   ebx
1002a864:	55                   	push   ebp
1002a865:	8b e9                	mov    ebp,ecx
1002a867:	56                   	push   esi
1002a868:	57                   	push   edi
1002a869:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
1002a86c:	85 c0                	test   eax,eax
1002a86e:	0f 84 6f 01 00 00    	je     0x1002a9e3
1002a874:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
1002a877:	85 c0                	test   eax,eax
1002a879:	74 1c                	je     0x1002a897
1002a87b:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1002a87e:	f6 01 04             	test   BYTE PTR [ecx],0x4
1002a881:	75 0e                	jne    0x1002a891
1002a883:	8b 30                	mov    esi,DWORD PTR [eax]
1002a885:	50                   	push   eax
1002a886:	8b cd                	mov    ecx,ebp
1002a888:	e8 a3 d9 ff ff       	call   0x10028230
1002a88d:	8b c6                	mov    eax,esi
1002a88f:	eb 02                	jmp    0x1002a893
1002a891:	8b 00                	mov    eax,DWORD PTR [eax]
1002a893:	85 c0                	test   eax,eax
1002a895:	75 e4                	jne    0x1002a87b
1002a897:	8b 85 84 00 00 00    	mov    eax,DWORD PTR [ebp+0x84]
1002a89d:	85 c0                	test   eax,eax
1002a89f:	0f 84 bb 00 00 00    	je     0x1002a960
1002a8a5:	8d b5 80 00 00 00    	lea    esi,[ebp+0x80]
1002a8ab:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002a8ad:	8b 38                	mov    edi,DWORD PTR [eax]
1002a8af:	85 c9                	test   ecx,ecx
1002a8b1:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
1002a8b5:	0f 84 9b 00 00 00    	je     0x1002a956
1002a8bb:	85 c0                	test   eax,eax
1002a8bd:	74 06                	je     0x1002a8c5
1002a8bf:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002a8c3:	eb 0a                	jmp    0x1002a8cf
1002a8c5:	8b 95 84 00 00 00    	mov    edx,DWORD PTR [ebp+0x84]
1002a8cb:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1002a8cf:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1002a8d3:	8b 58 08             	mov    ebx,DWORD PTR [eax+0x8]
1002a8d6:	8b 43 14             	mov    eax,DWORD PTR [ebx+0x14]
1002a8d9:	85 c0                	test   eax,eax
1002a8db:	74 09                	je     0x1002a8e6
1002a8dd:	50                   	push   eax
1002a8de:	e8 4d 37 01 00       	call   0x1003e030
1002a8e3:	83 c4 04             	add    esp,0x4
1002a8e6:	8b 43 1c             	mov    eax,DWORD PTR [ebx+0x1c]
1002a8e9:	83 ca ff             	or     edx,0xffffffff
1002a8ec:	3b c2                	cmp    eax,edx
1002a8ee:	c7 43 14 00 00 00 00 	mov    DWORD PTR [ebx+0x14],0x0
1002a8f5:	74 36                	je     0x1002a92d
1002a8f7:	8b 85 9c 00 00 00    	mov    eax,DWORD PTR [ebp+0x9c]
1002a8fd:	8b 3b                	mov    edi,DWORD PTR [ebx]
1002a8ff:	85 c0                	test   eax,eax
1002a901:	74 23                	je     0x1002a926
1002a903:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1002a906:	39 39                	cmp    DWORD PTR [ecx],edi
1002a908:	75 16                	jne    0x1002a920
1002a90a:	39 51 08             	cmp    DWORD PTR [ecx+0x8],edx
1002a90d:	74 11                	je     0x1002a920
1002a90f:	8b 30                	mov    esi,DWORD PTR [eax]
1002a911:	51                   	push   ecx
1002a912:	8b cd                	mov    ecx,ebp
1002a914:	e8 17 22 00 00       	call   0x1002cb30
1002a919:	8b c6                	mov    eax,esi
1002a91b:	83 ca ff             	or     edx,0xffffffff
1002a91e:	eb 02                	jmp    0x1002a922
1002a920:	8b 00                	mov    eax,DWORD PTR [eax]
1002a922:	85 c0                	test   eax,eax
1002a924:	75 dd                	jne    0x1002a903
1002a926:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
1002a92a:	89 53 1c             	mov    DWORD PTR [ebx+0x1c],edx
1002a92d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1002a931:	8d b5 80 00 00 00    	lea    esi,[ebp+0x80]
1002a937:	51                   	push   ecx
1002a938:	8b ce                	mov    ecx,esi
1002a93a:	e8 71 1d fe ff       	call   0x1000c6b0
1002a93f:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1002a943:	8b 85 94 00 00 00    	mov    eax,DWORD PTR [ebp+0x94]
1002a949:	52                   	push   edx
1002a94a:	50                   	push   eax
1002a94b:	8d 8d 8c 00 00 00    	lea    ecx,[ebp+0x8c]
1002a951:	e8 da 1c fe ff       	call   0x1000c630
1002a956:	85 ff                	test   edi,edi
1002a958:	8b c7                	mov    eax,edi
1002a95a:	0f 85 4b ff ff ff    	jne    0x1002a8ab
1002a960:	8b 85 b4 00 00 00    	mov    eax,DWORD PTR [ebp+0xb4]
1002a966:	85 c0                	test   eax,eax
1002a968:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002a96c:	74 75                	je     0x1002a9e3
1002a96e:	eb 04                	jmp    0x1002a974
1002a970:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1002a974:	8b 70 08             	mov    esi,DWORD PTR [eax+0x8]
1002a977:	33 ff                	xor    edi,edi
1002a979:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
1002a97c:	85 c9                	test   ecx,ecx
1002a97e:	76 24                	jbe    0x1002a9a4
1002a980:	8d 5e 04             	lea    ebx,[esi+0x4]
1002a983:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1002a985:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002a98b:	51                   	push   ecx
1002a98c:	ff 92 a8 01 00 00    	call   DWORD PTR [edx+0x1a8]
1002a992:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
1002a995:	83 c4 04             	add    esp,0x4
1002a998:	47                   	inc    edi
1002a999:	83 c3 04             	add    ebx,0x4
1002a99c:	3b f8                	cmp    edi,eax
1002a99e:	72 e3                	jb     0x1002a983
1002a9a0:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1002a9a4:	8b 38                	mov    edi,DWORD PTR [eax]
1002a9a6:	8b 06                	mov    eax,DWORD PTR [esi]
1002a9a8:	85 c0                	test   eax,eax
1002a9aa:	74 2f                	je     0x1002a9db
1002a9ac:	8b 5e 28             	mov    ebx,DWORD PTR [esi+0x28]
1002a9af:	8d 8d b0 00 00 00    	lea    ecx,[ebp+0xb0]
1002a9b5:	53                   	push   ebx
1002a9b6:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1002a9bc:	c7 46 24 00 00 00 00 	mov    DWORD PTR [esi+0x24],0x0
1002a9c3:	e8 e8 1c fe ff       	call   0x1000c6b0
1002a9c8:	8b 85 c4 00 00 00    	mov    eax,DWORD PTR [ebp+0xc4]
1002a9ce:	53                   	push   ebx
1002a9cf:	50                   	push   eax
1002a9d0:	8d 8d bc 00 00 00    	lea    ecx,[ebp+0xbc]
1002a9d6:	e8 55 1c fe ff       	call   0x1000c630
1002a9db:	85 ff                	test   edi,edi
1002a9dd:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1002a9e1:	75 8d                	jne    0x1002a970
1002a9e3:	5f                   	pop    edi
1002a9e4:	5e                   	pop    esi
1002a9e5:	5d                   	pop    ebp
1002a9e6:	5b                   	pop    ebx
1002a9e7:	83 c4 08             	add    esp,0x8
1002a9ea:	c3                   	ret
1002a9eb:	90                   	nop
1002a9ec:	90                   	nop
1002a9ed:	90                   	nop
1002a9ee:	90                   	nop
1002a9ef:	90                   	nop
1002a9f0:	53                   	push   ebx
1002a9f1:	55                   	push   ebp
1002a9f2:	56                   	push   esi
1002a9f3:	57                   	push   edi
1002a9f4:	8b f9                	mov    edi,ecx
1002a9f6:	8b b7 ec 03 00 00    	mov    esi,DWORD PTR [edi+0x3ec]
1002a9fc:	85 f6                	test   esi,esi
1002a9fe:	74 3d                	je     0x1002aa3d
1002aa00:	8b 5e 08             	mov    ebx,DWORD PTR [esi+0x8]
1002aa03:	8b 2e                	mov    ebp,DWORD PTR [esi]
1002aa05:	85 db                	test   ebx,ebx
1002aa07:	74 22                	je     0x1002aa2b
1002aa09:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002aa0f:	8b 53 14             	mov    edx,DWORD PTR [ebx+0x14]
1002aa12:	52                   	push   edx
1002aa13:	8b 01                	mov    eax,DWORD PTR [ecx]
1002aa15:	ff 90 e0 00 00 00    	call   DWORD PTR [eax+0xe0]
1002aa1b:	8b cb                	mov    ecx,ebx
1002aa1d:	e8 be 39 01 00       	call   0x1003e3e0
1002aa22:	53                   	push   ebx
1002aa23:	e8 f6 8e 07 00       	call   0x100a391e
1002aa28:	83 c4 04             	add    esp,0x4
1002aa2b:	56                   	push   esi
1002aa2c:	8d 8f e8 03 00 00    	lea    ecx,[edi+0x3e8]
1002aa32:	e8 69 1b fe ff       	call   0x1000c5a0
1002aa37:	85 ed                	test   ebp,ebp
1002aa39:	8b f5                	mov    esi,ebp
1002aa3b:	75 c3                	jne    0x1002aa00
1002aa3d:	8b 47 68             	mov    eax,DWORD PTR [edi+0x68]
1002aa40:	8d 5f 68             	lea    ebx,[edi+0x68]
1002aa43:	85 c0                	test   eax,eax
1002aa45:	7e 4d                	jle    0x1002aa94
1002aa47:	8b e8                	mov    ebp,eax
1002aa49:	83 3b 00             	cmp    DWORD PTR [ebx],0x0
1002aa4c:	74 43                	je     0x1002aa91
1002aa4e:	8b 77 6c             	mov    esi,DWORD PTR [edi+0x6c]
1002aa51:	8b cb                	mov    ecx,ebx
1002aa53:	56                   	push   esi
1002aa54:	e8 57 1c fe ff       	call   0x1000c6b0
1002aa59:	8b 47 7c             	mov    eax,DWORD PTR [edi+0x7c]
1002aa5c:	56                   	push   esi
1002aa5d:	50                   	push   eax
1002aa5e:	8d 4f 74             	lea    ecx,[edi+0x74]
1002aa61:	e8 ca 1b fe ff       	call   0x1000c630
1002aa66:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1002aa69:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002aa6f:	6a 00                	push   0x0
1002aa71:	8b 00                	mov    eax,DWORD PTR [eax]
1002aa73:	8b 11                	mov    edx,DWORD PTR [ecx]
1002aa75:	50                   	push   eax
1002aa76:	ff 92 b0 01 00 00    	call   DWORD PTR [edx+0x1b0]
1002aa7c:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1002aa7f:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1002aa85:	6a 00                	push   0x0
1002aa87:	6a 01                	push   0x1
1002aa89:	8b 00                	mov    eax,DWORD PTR [eax]
1002aa8b:	8b 11                	mov    edx,DWORD PTR [ecx]
1002aa8d:	50                   	push   eax
1002aa8e:	ff 52 10             	call   DWORD PTR [edx+0x10]
1002aa91:	4d                   	dec    ebp
1002aa92:	75 b5                	jne    0x1002aa49
1002aa94:	8b cf                	mov    ecx,edi
1002aa96:	e8 c5 fd ff ff       	call   0x1002a860
1002aa9b:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
1002aa9e:	85 c0                	test   eax,eax
1002aaa0:	74 17                	je     0x1002aab9
1002aaa2:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
1002aaa5:	85 c0                	test   eax,eax
1002aaa7:	74 10                	je     0x1002aab9
1002aaa9:	8b 30                	mov    esi,DWORD PTR [eax]
1002aaab:	50                   	push   eax
1002aaac:	8b cf                	mov    ecx,edi
1002aaae:	e8 7d d7 ff ff       	call   0x10028230
1002aab3:	85 f6                	test   esi,esi
1002aab5:	8b c6                	mov    eax,esi
1002aab7:	75 f0                	jne    0x1002aaa9
1002aab9:	5f                   	pop    edi
1002aaba:	5e                   	pop    esi
1002aabb:	5d                   	pop    ebp
1002aabc:	5b                   	pop    ebx
1002aabd:	c3                   	ret
1002aabe:	90                   	nop
1002aabf:	90                   	nop

*/
void FXManager::ShatterGlassPane() {
    if (!m_hObject) return;
    LTVector vPos, vDir;
    uint32 nFlags = 0;
    LTVector vScale(1.0f, 1.0f, 1.0f);
    g_pLTClient->BreakWorldModel(m_hObject, &vPos, &vDir, nFlags, &vScale);
    void* pShard = GetShardGroup();
}

// 0x1002b830: FXManager::BreakGlass
/*
1002b830:	81 ec 90 00 00 00    	sub    esp,0x90
1002b836:	53                   	push   ebx
1002b837:	8b 9c 24 98 00 00 00 	mov    ebx,DWORD PTR [esp+0x98]
1002b83e:	55                   	push   ebp
1002b83f:	56                   	push   esi
1002b840:	85 db                	test   ebx,ebx
1002b842:	57                   	push   edi
1002b843:	8b f1                	mov    esi,ecx
1002b845:	0f 84 36 0a 00 00    	je     0x1002c281
1002b84b:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1002b851:	8d 54 24 58          	lea    edx,[esp+0x58]
1002b855:	52                   	push   edx
1002b856:	6a 01                	push   0x1
1002b858:	8b 01                	mov    eax,DWORD PTR [ecx]
1002b85a:	53                   	push   ebx
1002b85b:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1002b85e:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
1002b862:	33 ff                	xor    edi,edi
1002b864:	f6 c4 10             	test   ah,0x10
1002b867:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
1002b86b:	89 7c 24 44          	mov    DWORD PTR [esp+0x44],edi
1002b86f:	74 24                	je     0x1002b895
1002b871:	8b be b8 00 00 00    	mov    edi,DWORD PTR [esi+0xb8]
1002b877:	85 ff                	test   edi,edi
1002b879:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
1002b87d:	74 16                	je     0x1002b895
1002b87f:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
1002b882:	39 18                	cmp    DWORD PTR [eax],ebx
1002b884:	0f 84 c9 00 00 00    	je     0x1002b953
1002b88a:	8b 7f 04             	mov    edi,DWORD PTR [edi+0x4]
1002b88d:	85 ff                	test   edi,edi
1002b88f:	75 ee                	jne    0x1002b87f
1002b891:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
1002b895:	8b 6c 24 3c          	mov    ebp,DWORD PTR [esp+0x3c]
1002b899:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002b89e:	8d 54 24 4c          	lea    edx,[esp+0x4c]
1002b8a2:	52                   	push   edx
1002b8a3:	53                   	push   ebx
1002b8a4:	ff 90 f0 02 00 00    	call   DWORD PTR [eax+0x2f0]
1002b8aa:	8b 84 24 b0 00 00 00 	mov    eax,DWORD PTR [esp+0xb0]
1002b8b1:	83 c4 08             	add    esp,0x8
1002b8b4:	85 c0                	test   eax,eax
1002b8b6:	0f 84 bd 00 00 00    	je     0x1002b979
1002b8bc:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002b8c2:	8d 4c 24 28          	lea    ecx,[esp+0x28]
1002b8c6:	51                   	push   ecx
1002b8c7:	50                   	push   eax
1002b8c8:	ff 92 f0 02 00 00    	call   DWORD PTR [edx+0x2f0]
1002b8ce:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
1002b8d2:	d8 64 24 30          	fsub   DWORD PTR [esp+0x30]
1002b8d6:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
1002b8da:	d8 64 24 34          	fsub   DWORD PTR [esp+0x34]
1002b8de:	83 c4 08             	add    esp,0x8
1002b8e1:	d9 9c 24 98 00 00 00 	fstp   DWORD PTR [esp+0x98]
1002b8e8:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
1002b8ec:	d8 64 24 30          	fsub   DWORD PTR [esp+0x30]
1002b8f0:	d9 c1                	fld    st(1)
1002b8f2:	8b 84 24 98 00 00 00 	mov    eax,DWORD PTR [esp+0x98]
1002b8f9:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1002b8fd:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1002b901:	d9 54 24 30          	fst    DWORD PTR [esp+0x30]
1002b905:	d9 c1                	fld    st(1)
1002b907:	d8 ca                	fmul   st,st(2)
1002b909:	d9 c1                	fld    st(1)
1002b90b:	d8 ca                	fmul   st,st(2)
1002b90d:	de c1                	faddp  st(1),st
1002b90f:	d9 84 24 98 00 00 00 	fld    DWORD PTR [esp+0x98]
1002b916:	d8 8c 24 98 00 00 00 	fmul   DWORD PTR [esp+0x98]
1002b91d:	de c1                	faddp  st(1),st
1002b91f:	d9 fa                	fsqrt
1002b921:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
1002b927:	df e0                	fnstsw ax
1002b929:	f6 c4 40             	test   ah,0x40
1002b92c:	75 65                	jne    0x1002b993
1002b92e:	d8 3d c0 83 0b 10    	fdivr  DWORD PTR ds:0x100b83c0
1002b934:	d9 c0                	fld    st(0)
1002b936:	d8 cb                	fmul   st,st(3)
1002b938:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1002b93c:	d9 84 24 98 00 00 00 	fld    DWORD PTR [esp+0x98]
1002b943:	d8 c9                	fmul   st,st(1)
1002b945:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
1002b949:	d9 c9                	fxch   st(1)
1002b94b:	d8 c9                	fmul   st,st(1)
1002b94d:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1002b951:	eb 42                	jmp    0x1002b995
1002b953:	85 ff                	test   edi,edi
1002b955:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
1002b959:	0f 84 36 ff ff ff    	je     0x1002b895
1002b95f:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
1002b962:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
1002b966:	8b 68 24             	mov    ebp,DWORD PTR [eax+0x24]
1002b969:	8d 48 04             	lea    ecx,[eax+0x4]
1002b96c:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
1002b970:	89 6c 24 3c          	mov    DWORD PTR [esp+0x3c],ebp
1002b974:	e9 20 ff ff ff       	jmp    0x1002b899
1002b979:	c7 44 24 28 00 00 00 	mov    DWORD PTR [esp+0x28],0x0
1002b980:	00 
1002b981:	c7 44 24 2c 00 00 80 	mov    DWORD PTR [esp+0x2c],0x3f800000
1002b988:	3f 
1002b989:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
1002b990:	00 
1002b991:	eb 06                	jmp    0x1002b999
1002b993:	dd d8                	fstp   st(0)
1002b995:	dd d8                	fstp   st(0)
1002b997:	dd d8                	fstp   st(0)
1002b999:	85 ff                	test   edi,edi
1002b99b:	0f 85 b0 00 00 00    	jne    0x1002ba51
1002b9a1:	8b ce                	mov    ecx,esi
1002b9a3:	e8 e8 11 00 00       	call   0x1002cb90
1002b9a8:	8b f8                	mov    edi,eax
1002b9aa:	89 7c 24 44          	mov    DWORD PTR [esp+0x44],edi
1002b9ae:	e8 ad c9 fd ff       	call   0x10008360
1002b9b3:	33 d2                	xor    edx,edx
1002b9b5:	b9 03 00 00 00       	mov    ecx,0x3
1002b9ba:	f7 f1                	div    ecx
1002b9bc:	8d 47 04             	lea    eax,[edi+0x4]
1002b9bf:	89 1f                	mov    DWORD PTR [edi],ebx
1002b9c1:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1002b9c5:	8b ea                	mov    ebp,edx
1002b9c7:	8d 54 24 28          	lea    edx,[esp+0x28]
1002b9cb:	83 c5 04             	add    ebp,0x4
1002b9ce:	55                   	push   ebp
1002b9cf:	50                   	push   eax
1002b9d0:	8d 44 24 54          	lea    eax,[esp+0x54]
1002b9d4:	89 6f 24             	mov    DWORD PTR [edi+0x24],ebp
1002b9d7:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002b9dd:	52                   	push   edx
1002b9de:	50                   	push   eax
1002b9df:	53                   	push   ebx
1002b9e0:	89 6c 24 50          	mov    DWORD PTR [esp+0x50],ebp
1002b9e4:	ff 91 a4 01 00 00    	call   DWORD PTR [ecx+0x1a4]
1002b9ea:	8b d8                	mov    ebx,eax
1002b9ec:	83 c4 14             	add    esp,0x14
1002b9ef:	85 db                	test   ebx,ebx
1002b9f1:	74 58                	je     0x1002ba4b
1002b9f3:	83 3f 00             	cmp    DWORD PTR [edi],0x0
1002b9f6:	74 2f                	je     0x1002ba27
1002b9f8:	8b 6f 28             	mov    ebp,DWORD PTR [edi+0x28]
1002b9fb:	8d 8e b0 00 00 00    	lea    ecx,[esi+0xb0]
1002ba01:	55                   	push   ebp
1002ba02:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
1002ba08:	c7 47 24 00 00 00 00 	mov    DWORD PTR [edi+0x24],0x0
1002ba0f:	e8 9c 0c fe ff       	call   0x1000c6b0
1002ba14:	8b 96 c4 00 00 00    	mov    edx,DWORD PTR [esi+0xc4]
1002ba1a:	55                   	push   ebp
1002ba1b:	52                   	push   edx
1002ba1c:	8d 8e bc 00 00 00    	lea    ecx,[esi+0xbc]
1002ba22:	e8 09 0c fe ff       	call   0x1000c630
1002ba27:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002ba2c:	53                   	push   ebx
1002ba2d:	68 10 70 0d 10       	push   0x100d7010
1002ba32:	50                   	push   eax
1002ba33:	8b 08                	mov    ecx,DWORD PTR [eax]
1002ba35:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
1002ba3b:	83 c4 0c             	add    esp,0xc
1002ba3e:	5f                   	pop    edi
1002ba3f:	5e                   	pop    esi
1002ba40:	5d                   	pop    ebp
1002ba41:	5b                   	pop    ebx
1002ba42:	81 c4 90 00 00 00    	add    esp,0x90
1002ba48:	c2 08 00             	ret    0x8
1002ba4b:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
1002ba4f:	eb 04                	jmp    0x1002ba55
1002ba51:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
1002ba55:	33 db                	xor    ebx,ebx
1002ba57:	83 c9 ff             	or     ecx,0xffffffff
1002ba5a:	53                   	push   ebx
1002ba5b:	b8 02 00 00 00       	mov    eax,0x2
1002ba60:	89 8c 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],ecx
1002ba67:	89 8c 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],ecx
1002ba6e:	53                   	push   ebx
1002ba6f:	53                   	push   ebx
1002ba70:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
1002ba74:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
1002ba78:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
1002ba7c:	89 5c 24 6c          	mov    DWORD PTR [esp+0x6c],ebx
1002ba80:	c7 84 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],0x3f800000
1002ba87:	00 00 80 3f 
1002ba8b:	89 9c 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],ebx
1002ba92:	89 84 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],eax
1002ba99:	89 9c 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],ebx
1002baa0:	89 5c 24 70          	mov    DWORD PTR [esp+0x70],ebx
1002baa4:	89 5c 24 74          	mov    DWORD PTR [esp+0x74],ebx
1002baa8:	89 5c 24 78          	mov    DWORD PTR [esp+0x78],ebx
1002baac:	e8 0f f9 fd ff       	call   0x1000b3c0
1002bab1:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1002bab7:	d8 5c 24 28          	fcomp  DWORD PTR [esp+0x28]
1002babb:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1002babf:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1002bac3:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1002bac7:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1002bacb:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1002bacf:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1002bad3:	df e0                	fnstsw ax
1002bad5:	f6 c4 40             	test   ah,0x40
1002bad8:	74 37                	je     0x1002bb11
1002bada:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1002bae0:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
1002bae4:	df e0                	fnstsw ax
1002bae6:	f6 c4 40             	test   ah,0x40
1002bae9:	74 26                	je     0x1002bb11
1002baeb:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1002baf1:	d8 5c 24 30          	fcomp  DWORD PTR [esp+0x30]
1002baf5:	df e0                	fnstsw ax
1002baf7:	f6 c4 40             	test   ah,0x40
1002bafa:	74 15                	je     0x1002bb11
1002bafc:	c7 44 24 10 00 00 b4 	mov    DWORD PTR [esp+0x10],0x42b40000
1002bb03:	42 
1002bb04:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1002bb08:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
1002bb0c:	e9 cc 00 00 00       	jmp    0x1002bbdd
1002bb11:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1002bb15:	e8 c6 f8 fd ff       	call   0x1000b3e0
1002bb1a:	d8 1d c0 83 0b 10    	fcomp  DWORD PTR ds:0x100b83c0
1002bb20:	df e0                	fnstsw ax
1002bb22:	f6 c4 40             	test   ah,0x40
1002bb25:	75 19                	jne    0x1002bb40
1002bb27:	68 00 00 80 3f       	push   0x3f800000
1002bb2c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1002bb30:	e8 db f8 fd ff       	call   0x1000b410
1002bb35:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1002bb39:	e8 a2 f8 fd ff       	call   0x1000b3e0
1002bb3e:	dd d8                	fstp   st(0)
1002bb40:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bb44:	e8 d7 88 07 00       	call   0x100a4420
1002bb49:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
1002bb4f:	d9 e0                	fchs
1002bb51:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
1002bb55:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002bb59:	d8 74 24 18          	fdiv   DWORD PTR [esp+0x18]
1002bb5d:	d9 e8                	fld1
1002bb5f:	d9 f3                	fpatan
1002bb61:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
1002bb67:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1002bb6b:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002bb6f:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002bb75:	df e0                	fnstsw ax
1002bb77:	f6 c4 01             	test   ah,0x1
1002bb7a:	74 0c                	je     0x1002bb88
1002bb7c:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1002bb80:	d8 05 20 85 0b 10    	fadd   DWORD PTR ds:0x100b8520
1002bb86:	eb 1b                	jmp    0x1002bba3
1002bb88:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002bb8c:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002bb92:	df e0                	fnstsw ax
1002bb94:	f6 c4 01             	test   ah,0x1
1002bb97:	74 0e                	je     0x1002bba7
1002bb99:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1002bb9d:	d8 05 1c 85 0b 10    	fadd   DWORD PTR ds:0x100b851c
1002bba3:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1002bba7:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1002bbab:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1002bbaf:	53                   	push   ebx
1002bbb0:	52                   	push   edx
1002bbb1:	50                   	push   eax
1002bbb2:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
1002bbb6:	e8 05 f8 fd ff       	call   0x1000b3c0
1002bbbb:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bbbf:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002bbc5:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bbc9:	df e0                	fnstsw ax
1002bbcb:	d8 1d f8 85 0b 10    	fcomp  DWORD PTR ds:0x100b85f8
1002bbd1:	f6 c4 01             	test   ah,0x1
1002bbd4:	df e0                	fnstsw ax
1002bbd6:	75 26                	jne    0x1002bbfe
1002bbd8:	f6 c4 01             	test   ah,0x1
1002bbdb:	74 26                	je     0x1002bc03
1002bbdd:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bbe1:	d8 0d 9c 89 0b 10    	fmul   DWORD PTR ds:0x100b899c
1002bbe7:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1002bbeb:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1002bbf1:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
1002bbf5:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1002bbf9:	e9 8a 00 00 00       	jmp    0x1002bc88
1002bbfe:	f6 c4 01             	test   ah,0x1
1002bc01:	75 1d                	jne    0x1002bc20
1002bc03:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bc07:	d8 1d 20 85 0b 10    	fcomp  DWORD PTR ds:0x100b8520
1002bc0d:	df e0                	fnstsw ax
1002bc0f:	f6 c4 01             	test   ah,0x1
1002bc12:	74 1d                	je     0x1002bc31
1002bc14:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bc18:	d8 25 f8 85 0b 10    	fsub   DWORD PTR ds:0x100b85f8
1002bc1e:	eb 50                	jmp    0x1002bc70
1002bc20:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bc24:	d8 1d 20 85 0b 10    	fcomp  DWORD PTR ds:0x100b8520
1002bc2a:	df e0                	fnstsw ax
1002bc2c:	f6 c4 01             	test   ah,0x1
1002bc2f:	75 35                	jne    0x1002bc66
1002bc31:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bc35:	d8 1d 98 89 0b 10    	fcomp  DWORD PTR ds:0x100b8998
1002bc3b:	df e0                	fnstsw ax
1002bc3d:	f6 c4 01             	test   ah,0x1
1002bc40:	74 24                	je     0x1002bc66
1002bc42:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bc46:	d8 25 20 85 0b 10    	fsub   DWORD PTR ds:0x100b8520
1002bc4c:	d8 0d 9c 89 0b 10    	fmul   DWORD PTR ds:0x100b899c
1002bc52:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1002bc56:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1002bc5c:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
1002bc60:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1002bc64:	eb 22                	jmp    0x1002bc88
1002bc66:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bc6a:	d8 25 98 89 0b 10    	fsub   DWORD PTR ds:0x100b8998
1002bc70:	d8 0d 9c 89 0b 10    	fmul   DWORD PTR ds:0x100b899c
1002bc76:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1002bc7a:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1002bc80:	d8 64 24 38          	fsub   DWORD PTR [esp+0x38]
1002bc84:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1002bc88:	3b eb                	cmp    ebp,ebx
1002bc8a:	0f 8e 7c 02 00 00    	jle    0x1002bf0c
1002bc90:	8b ef                	mov    ebp,edi
1002bc92:	33 c9                	xor    ecx,ecx
1002bc94:	32 d2                	xor    dl,dl
1002bc96:	8d 86 c8 00 00 00    	lea    eax,[esi+0xc8]
1002bc9c:	84 d2                	test   dl,dl
1002bc9e:	75 22                	jne    0x1002bcc2
1002bca0:	39 18                	cmp    DWORD PTR [eax],ebx
1002bca2:	75 0a                	jne    0x1002bcae
1002bca4:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
1002bcaa:	b2 01                	mov    dl,0x1
1002bcac:	eb 04                	jmp    0x1002bcb2
1002bcae:	41                   	inc    ecx
1002bcaf:	83 c0 04             	add    eax,0x4
1002bcb2:	81 f9 c8 00 00 00    	cmp    ecx,0xc8
1002bcb8:	72 e2                	jb     0x1002bc9c
1002bcba:	84 d2                	test   dl,dl
1002bcbc:	0f 84 46 02 00 00    	je     0x1002bf08
1002bcc2:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1002bcc5:	8d 8c 0a 38 ff ff ff 	lea    ecx,[edx+ecx*1-0xc8]
1002bccc:	83 f9 ff             	cmp    ecx,0xffffffff
1002bccf:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
1002bcd3:	0f 84 2f 02 00 00    	je     0x1002bf08
1002bcd9:	8b c1                	mov    eax,ecx
1002bcdb:	8b 16                	mov    edx,DWORD PTR [esi]
1002bcdd:	b9 38 00 00 00       	mov    ecx,0x38
1002bce2:	8d 1c c5 00 00 00 00 	lea    ebx,[eax*8+0x0]
1002bce9:	2b d8                	sub    ebx,eax
1002bceb:	33 c0                	xor    eax,eax
1002bced:	c1 e3 05             	shl    ebx,0x5
1002bcf0:	8b fb                	mov    edi,ebx
1002bcf2:	03 fa                	add    edi,edx
1002bcf4:	8d 54 24 10          	lea    edx,[esp+0x10]
1002bcf8:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1002bcfa:	8b 0d d0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd0
1002bd00:	52                   	push   edx
1002bd01:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1002bd04:	8b 01                	mov    eax,DWORD PTR [ecx]
1002bd06:	52                   	push   edx
1002bd07:	ff 50 30             	call   DWORD PTR [eax+0x30]
1002bd0a:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002bd0e:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
1002bd12:	df e0                	fnstsw ax
1002bd14:	f6 c4 41             	test   ah,0x41
1002bd17:	75 29                	jne    0x1002bd42
1002bd19:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bd1d:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
1002bd21:	df e0                	fnstsw ax
1002bd23:	f6 c4 01             	test   ah,0x1
1002bd26:	74 43                	je     0x1002bd6b
1002bd28:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bd2c:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bd30:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002bd34:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002bd38:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002bd3c:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1002bd40:	eb 39                	jmp    0x1002bd7b
1002bd42:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002bd46:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
1002bd4a:	df e0                	fnstsw ax
1002bd4c:	f6 c4 01             	test   ah,0x1
1002bd4f:	74 1a                	je     0x1002bd6b
1002bd51:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002bd55:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002bd59:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002bd5d:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002bd61:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002bd65:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1002bd69:	eb 10                	jmp    0x1002bd7b
1002bd6b:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002bd6f:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002bd73:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002bd77:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002bd7b:	8b 0d d0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd0
1002bd81:	8d 54 24 10          	lea    edx,[esp+0x10]
1002bd85:	6a 00                	push   0x0
1002bd87:	52                   	push   edx
1002bd88:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1002bd8b:	8b 01                	mov    eax,DWORD PTR [ecx]
1002bd8d:	52                   	push   edx
1002bd8e:	ff 50 34             	call   DWORD PTR [eax+0x34]
1002bd91:	8b 06                	mov    eax,DWORD PTR [esi]
1002bd93:	c7 44 03 04 21 00 10 	mov    DWORD PTR [ebx+eax*1+0x4],0x100021
1002bd9a:	00 
1002bd9b:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002bd9d:	c7 44 0b 08 12 00 00 	mov    DWORD PTR [ebx+ecx*1+0x8],0x12
1002bda4:	00 
1002bda5:	8b 16                	mov    edx,DWORD PTR [esi]
1002bda7:	c7 84 13 84 00 00 00 	mov    DWORD PTR [ebx+edx*1+0x84],0x40800000
1002bdae:	00 00 80 40 
1002bdb2:	8b 06                	mov    eax,DWORD PTR [esi]
1002bdb4:	03 c3                	add    eax,ebx
1002bdb6:	8b 88 84 00 00 00    	mov    ecx,DWORD PTR [eax+0x84]
1002bdbc:	89 88 dc 00 00 00    	mov    DWORD PTR [eax+0xdc],ecx
1002bdc2:	8b 16                	mov    edx,DWORD PTR [esi]
1002bdc4:	66 c7 84 13 b8 00 00 	mov    WORD PTR [ebx+edx*1+0xb8],0x1
1002bdcb:	00 01 00 
1002bdce:	8b 06                	mov    eax,DWORD PTR [esi]
1002bdd0:	c7 84 03 8c 00 00 00 	mov    DWORD PTR [ebx+eax*1+0x8c],0x40400000
1002bdd7:	00 00 40 40 
1002bddb:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002bddd:	8b 84 24 a8 00 00 00 	mov    eax,DWORD PTR [esp+0xa8]
1002bde4:	85 c0                	test   eax,eax
1002bde6:	c7 84 0b 94 00 00 00 	mov    DWORD PTR [ebx+ecx*1+0x94],0x3f99999a
1002bded:	9a 99 99 3f 
1002bdf1:	74 3a                	je     0x1002be2d
1002bdf3:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002bdf7:	d8 0d 94 89 0b 10    	fmul   DWORD PTR ds:0x100b8994
1002bdfd:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1002be01:	85 c0                	test   eax,eax
1002be03:	d8 2d c0 83 0b 10    	fsubr  DWORD PTR ds:0x100b83c0
1002be09:	74 11                	je     0x1002be1c
1002be0b:	d8 0d 90 89 0b 10    	fmul   DWORD PTR ds:0x100b8990
1002be11:	8b 16                	mov    edx,DWORD PTR [esi]
1002be13:	d9 9c 13 98 00 00 00 	fstp   DWORD PTR [ebx+edx*1+0x98]
1002be1a:	eb 1e                	jmp    0x1002be3a
1002be1c:	d8 0d f4 83 0b 10    	fmul   DWORD PTR ds:0x100b83f4
1002be22:	8b 06                	mov    eax,DWORD PTR [esi]
1002be24:	d9 9c 03 98 00 00 00 	fstp   DWORD PTR [ebx+eax*1+0x98]
1002be2b:	eb 0d                	jmp    0x1002be3a
1002be2d:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002be2f:	c7 84 0b 98 00 00 00 	mov    DWORD PTR [ebx+ecx*1+0x98],0x3f800000
1002be36:	00 00 80 3f 
1002be3a:	8b 16                	mov    edx,DWORD PTR [esi]
1002be3c:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
1002be40:	d8 0d 8c 89 0b 10    	fmul   DWORD PTR ds:0x100b898c
1002be46:	c7 84 13 9c 00 00 00 	mov    DWORD PTR [ebx+edx*1+0x9c],0x3f800000
1002be4d:	00 00 80 3f 
1002be51:	8b 06                	mov    eax,DWORD PTR [esi]
1002be53:	c7 84 03 d4 00 00 00 	mov    DWORD PTR [ebx+eax*1+0xd4],0x3fb2b8c3
1002be5a:	c3 b8 b2 3f 
1002be5e:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002be60:	8d 44 24 40          	lea    eax,[esp+0x40]
1002be64:	d9 9c 0b d0 00 00 00 	fstp   DWORD PTR [ebx+ecx*1+0xd0]
1002be6b:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1002be6f:	d8 0d 8c 89 0b 10    	fmul   DWORD PTR ds:0x100b898c
1002be75:	8b 16                	mov    edx,DWORD PTR [esi]
1002be77:	50                   	push   eax
1002be78:	d9 9c 13 d8 00 00 00 	fstp   DWORD PTR [ebx+edx*1+0xd8]
1002be7f:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
1002be82:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002be88:	51                   	push   ecx
1002be89:	ff 92 0c 03 00 00    	call   DWORD PTR [edx+0x30c]
1002be8f:	8b 06                	mov    eax,DWORD PTR [esi]
1002be91:	8a 4c 24 4b          	mov    cl,BYTE PTR [esp+0x4b]
1002be95:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1002be99:	88 8c 03 a7 00 00 00 	mov    BYTE PTR [ebx+eax*1+0xa7],cl
1002bea0:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
1002bea4:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
1002bea8:	89 54 24 68          	mov    DWORD PTR [esp+0x68],edx
1002beac:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
1002beb0:	89 44 24 78          	mov    DWORD PTR [esp+0x78],eax
1002beb4:	89 4c 24 7c          	mov    DWORD PTR [esp+0x7c],ecx
1002beb8:	89 94 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],edx
1002bebf:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
1002bec2:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002bec8:	8d 44 24 6c          	lea    eax,[esp+0x6c]
1002becc:	50                   	push   eax
1002becd:	51                   	push   ecx
1002bece:	ff 92 f0 02 00 00    	call   DWORD PTR [edx+0x2f0]
1002bed4:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1002bed7:	83 c4 10             	add    esp,0x10
1002beda:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
1002bede:	89 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],eax
1002bee5:	51                   	push   ecx
1002bee6:	8b ce                	mov    ecx,esi
1002bee8:	e8 43 b4 ff ff       	call   0x10027330
1002beed:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
1002bef1:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
1002bef5:	40                   	inc    eax
1002bef6:	83 c5 04             	add    ebp,0x4
1002bef9:	3b c1                	cmp    eax,ecx
1002befb:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1002beff:	7d 0b                	jge    0x1002bf0c
1002bf01:	33 db                	xor    ebx,ebx
1002bf03:	e9 8a fd ff ff       	jmp    0x1002bc92
1002bf08:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
1002bf0c:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
1002bf10:	83 38 00             	cmp    DWORD PTR [eax],0x0
1002bf13:	74 2f                	je     0x1002bf44
1002bf15:	8b 78 28             	mov    edi,DWORD PTR [eax+0x28]
1002bf18:	8d 8e b0 00 00 00    	lea    ecx,[esi+0xb0]
1002bf1e:	57                   	push   edi
1002bf1f:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
1002bf25:	c7 40 24 00 00 00 00 	mov    DWORD PTR [eax+0x24],0x0
1002bf2c:	e8 7f 07 fe ff       	call   0x1000c6b0
1002bf31:	8b 96 c4 00 00 00    	mov    edx,DWORD PTR [esi+0xc4]
1002bf37:	57                   	push   edi
1002bf38:	52                   	push   edx
1002bf39:	8d 8e bc 00 00 00    	lea    ecx,[esi+0xbc]
1002bf3f:	e8 ec 06 fe ff       	call   0x1000c630
1002bf44:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1002bf48:	85 c0                	test   eax,eax
1002bf4a:	0f 84 ce 02 00 00    	je     0x1002c21e
1002bf50:	8b 8e b4 00 00 00    	mov    ecx,DWORD PTR [esi+0xb4]
1002bf56:	85 c9                	test   ecx,ecx
1002bf58:	0f 84 c0 02 00 00    	je     0x1002c21e
1002bf5e:	eb 04                	jmp    0x1002bf64
1002bf60:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1002bf64:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
1002bf67:	8b bc 24 a4 00 00 00 	mov    edi,DWORD PTR [esp+0xa4]
1002bf6e:	8b 10                	mov    edx,DWORD PTR [eax]
1002bf70:	3b d7                	cmp    edx,edi
1002bf72:	0f 85 94 02 00 00    	jne    0x1002c20c
1002bf78:	8b 29                	mov    ebp,DWORD PTR [ecx]
1002bf7a:	8b 08                	mov    ecx,DWORD PTR [eax]
1002bf7c:	8b 58 24             	mov    ebx,DWORD PTR [eax+0x24]
1002bf7f:	8d 50 04             	lea    edx,[eax+0x4]
1002bf82:	85 c9                	test   ecx,ecx
1002bf84:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
1002bf88:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
1002bf8c:	74 2f                	je     0x1002bfbd
1002bf8e:	8b 78 28             	mov    edi,DWORD PTR [eax+0x28]
1002bf91:	8d 8e b0 00 00 00    	lea    ecx,[esi+0xb0]
1002bf97:	57                   	push   edi
1002bf98:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
1002bf9e:	c7 40 24 00 00 00 00 	mov    DWORD PTR [eax+0x24],0x0
1002bfa5:	e8 06 07 fe ff       	call   0x1000c6b0
1002bfaa:	8b 86 c4 00 00 00    	mov    eax,DWORD PTR [esi+0xc4]
1002bfb0:	57                   	push   edi
1002bfb1:	50                   	push   eax
1002bfb2:	8d 8e bc 00 00 00    	lea    ecx,[esi+0xbc]
1002bfb8:	e8 73 06 fe ff       	call   0x1000c630
1002bfbd:	85 db                	test   ebx,ebx
1002bfbf:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
1002bfc3:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
1002bfca:	00 
1002bfcb:	0f 8e 41 02 00 00    	jle    0x1002c212
1002bfd1:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
1002bfd5:	33 ff                	xor    edi,edi
1002bfd7:	32 c9                	xor    cl,cl
1002bfd9:	8d 86 c8 00 00 00    	lea    eax,[esi+0xc8]
1002bfdf:	84 c9                	test   cl,cl
1002bfe1:	75 23                	jne    0x1002c006
1002bfe3:	83 38 00             	cmp    DWORD PTR [eax],0x0
1002bfe6:	75 0a                	jne    0x1002bff2
1002bfe8:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
1002bfee:	b1 01                	mov    cl,0x1
1002bff0:	eb 04                	jmp    0x1002bff6
1002bff2:	47                   	inc    edi
1002bff3:	83 c0 04             	add    eax,0x4
1002bff6:	81 ff c8 00 00 00    	cmp    edi,0xc8
1002bffc:	72 e1                	jb     0x1002bfdf
1002bffe:	84 c9                	test   cl,cl
1002c000:	0f 84 0c 02 00 00    	je     0x1002c212
1002c006:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1002c009:	8d 84 39 38 ff ff ff 	lea    eax,[ecx+edi*1-0xc8]
1002c010:	83 f8 ff             	cmp    eax,0xffffffff
1002c013:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
1002c017:	0f 84 f5 01 00 00    	je     0x1002c212
1002c01d:	8b 16                	mov    edx,DWORD PTR [esi]
1002c01f:	8d 2c c5 00 00 00 00 	lea    ebp,[eax*8+0x0]
1002c026:	2b e8                	sub    ebp,eax
1002c028:	b9 38 00 00 00       	mov    ecx,0x38
1002c02d:	c1 e5 05             	shl    ebp,0x5
1002c030:	8b fd                	mov    edi,ebp
1002c032:	33 c0                	xor    eax,eax
1002c034:	03 fa                	add    edi,edx
1002c036:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1002c038:	8b 0d d0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd0
1002c03e:	8d 44 24 10          	lea    eax,[esp+0x10]
1002c042:	50                   	push   eax
1002c043:	8b 03                	mov    eax,DWORD PTR [ebx]
1002c045:	8b 11                	mov    edx,DWORD PTR [ecx]
1002c047:	50                   	push   eax
1002c048:	ff 52 30             	call   DWORD PTR [edx+0x30]
1002c04b:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002c04f:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
1002c053:	df e0                	fnstsw ax
1002c055:	f6 c4 41             	test   ah,0x41
1002c058:	75 29                	jne    0x1002c083
1002c05a:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002c05e:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
1002c062:	df e0                	fnstsw ax
1002c064:	f6 c4 01             	test   ah,0x1
1002c067:	74 43                	je     0x1002c0ac
1002c069:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002c06d:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002c071:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002c075:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002c079:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002c07d:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1002c081:	eb 39                	jmp    0x1002c0bc
1002c083:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002c087:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
1002c08b:	df e0                	fnstsw ax
1002c08d:	f6 c4 01             	test   ah,0x1
1002c090:	74 1a                	je     0x1002c0ac
1002c092:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002c096:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002c09a:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002c09e:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002c0a2:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002c0a6:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1002c0aa:	eb 10                	jmp    0x1002c0bc
1002c0ac:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002c0b0:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002c0b4:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002c0b8:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002c0bc:	8b 0d d0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd0
1002c0c2:	8d 44 24 10          	lea    eax,[esp+0x10]
1002c0c6:	6a 00                	push   0x0
1002c0c8:	50                   	push   eax
1002c0c9:	8b 03                	mov    eax,DWORD PTR [ebx]
1002c0cb:	8b 11                	mov    edx,DWORD PTR [ecx]
1002c0cd:	50                   	push   eax
1002c0ce:	ff 52 34             	call   DWORD PTR [edx+0x34]
1002c0d1:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002c0d3:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
1002c0d7:	c7 44 29 04 21 00 10 	mov    DWORD PTR [ecx+ebp*1+0x4],0x100021
1002c0de:	00 
1002c0df:	8b 16                	mov    edx,DWORD PTR [esi]
1002c0e1:	d8 0d 88 89 0b 10    	fmul   DWORD PTR ds:0x100b8988
1002c0e7:	c7 44 2a 08 12 00 00 	mov    DWORD PTR [edx+ebp*1+0x8],0x12
1002c0ee:	00 
1002c0ef:	8b 06                	mov    eax,DWORD PTR [esi]
1002c0f1:	c7 84 28 84 00 00 00 	mov    DWORD PTR [eax+ebp*1+0x84],0x40800000
1002c0f8:	00 00 80 40 
1002c0fc:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002c0fe:	c7 84 29 88 00 00 00 	mov    DWORD PTR [ecx+ebp*1+0x88],0x3e800000
1002c105:	00 00 80 3e 
1002c109:	8b 16                	mov    edx,DWORD PTR [esi]
1002c10b:	8b 8c 2a 84 00 00 00 	mov    ecx,DWORD PTR [edx+ebp*1+0x84]
1002c112:	8d 04 2a             	lea    eax,[edx+ebp*1]
1002c115:	89 88 dc 00 00 00    	mov    DWORD PTR [eax+0xdc],ecx
1002c11b:	8b 16                	mov    edx,DWORD PTR [esi]
1002c11d:	66 c7 84 2a b8 00 00 	mov    WORD PTR [edx+ebp*1+0xb8],0x1
1002c124:	00 01 00 
1002c127:	8b 06                	mov    eax,DWORD PTR [esi]
1002c129:	c7 84 28 8c 00 00 00 	mov    DWORD PTR [eax+ebp*1+0x8c],0x40400000
1002c130:	00 00 40 40 
1002c134:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002c136:	c7 84 29 94 00 00 00 	mov    DWORD PTR [ecx+ebp*1+0x94],0x3fd9999a
1002c13d:	9a 99 d9 3f 
1002c141:	8b 16                	mov    edx,DWORD PTR [esi]
1002c143:	c7 84 2a 98 00 00 00 	mov    DWORD PTR [edx+ebp*1+0x98],0x40a00000
1002c14a:	00 00 a0 40 
1002c14e:	8b 06                	mov    eax,DWORD PTR [esi]
1002c150:	c7 84 28 9c 00 00 00 	mov    DWORD PTR [eax+ebp*1+0x9c],0x3f800000
1002c157:	00 00 80 3f 
1002c15b:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002c15d:	c7 84 29 d4 00 00 00 	mov    DWORD PTR [ecx+ebp*1+0xd4],0x3fb2b8c3
1002c164:	c3 b8 b2 3f 
1002c168:	8b 16                	mov    edx,DWORD PTR [esi]
1002c16a:	8d 4c 24 40          	lea    ecx,[esp+0x40]
1002c16e:	d9 9c 2a d0 00 00 00 	fstp   DWORD PTR [edx+ebp*1+0xd0]
1002c175:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1002c179:	d8 0d 88 89 0b 10    	fmul   DWORD PTR ds:0x100b8988
1002c17f:	8b 06                	mov    eax,DWORD PTR [esi]
1002c181:	51                   	push   ecx
1002c182:	d9 9c 28 d8 00 00 00 	fstp   DWORD PTR [eax+ebp*1+0xd8]
1002c189:	8b 13                	mov    edx,DWORD PTR [ebx]
1002c18b:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002c190:	52                   	push   edx
1002c191:	ff 90 0c 03 00 00    	call   DWORD PTR [eax+0x30c]
1002c197:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002c199:	8a 54 24 4b          	mov    dl,BYTE PTR [esp+0x4b]
1002c19d:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1002c1a1:	88 94 29 a7 00 00 00 	mov    BYTE PTR [ecx+ebp*1+0xa7],dl
1002c1a8:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1002c1ac:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
1002c1b0:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
1002c1b4:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
1002c1b8:	89 4c 24 78          	mov    DWORD PTR [esp+0x78],ecx
1002c1bc:	89 54 24 7c          	mov    DWORD PTR [esp+0x7c],edx
1002c1c0:	89 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],eax
1002c1c7:	8b 13                	mov    edx,DWORD PTR [ebx]
1002c1c9:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002c1ce:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
1002c1d2:	51                   	push   ecx
1002c1d3:	52                   	push   edx
1002c1d4:	ff 90 f0 02 00 00    	call   DWORD PTR [eax+0x2f0]
1002c1da:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1002c1dc:	83 c4 10             	add    esp,0x10
1002c1df:	8d 54 24 5c          	lea    edx,[esp+0x5c]
1002c1e3:	89 8c 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],ecx
1002c1ea:	52                   	push   edx
1002c1eb:	8b ce                	mov    ecx,esi
1002c1ed:	e8 3e b1 ff ff       	call   0x10027330
1002c1f2:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
1002c1f6:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
1002c1fa:	40                   	inc    eax
1002c1fb:	83 c3 04             	add    ebx,0x4
1002c1fe:	3b c1                	cmp    eax,ecx
1002c200:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
1002c204:	0f 8c cb fd ff ff    	jl     0x1002bfd5
1002c20a:	eb 06                	jmp    0x1002c212
1002c20c:	8b 01                	mov    eax,DWORD PTR [ecx]
1002c20e:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
1002c212:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1002c216:	85 c0                	test   eax,eax
1002c218:	0f 85 42 fd ff ff    	jne    0x1002bf60
1002c21e:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
1002c222:	f6 c4 10             	test   ah,0x10
1002c225:	74 4b                	je     0x1002c272
1002c227:	e8 34 c1 fd ff       	call   0x10008360
1002c22c:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
1002c230:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
1002c237:	00 
1002c238:	df 6c 24 44          	fild   QWORD PTR [esp+0x44]
1002c23c:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002c242:	dc c0                	fadd   st(0),st
1002c244:	e8 eb 7b 07 00       	call   0x100a3e34
1002c249:	85 c0                	test   eax,eax
1002c24b:	75 09                	jne    0x1002c256
1002c24d:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
1002c251:	51                   	push   ecx
1002c252:	6a 2a                	push   0x2a
1002c254:	eb 23                	jmp    0x1002c279
1002c256:	83 f8 01             	cmp    eax,0x1
1002c259:	75 09                	jne    0x1002c264
1002c25b:	8d 54 24 4c          	lea    edx,[esp+0x4c]
1002c25f:	52                   	push   edx
1002c260:	6a 2b                	push   0x2b
1002c262:	eb 15                	jmp    0x1002c279
1002c264:	83 f8 02             	cmp    eax,0x2
1002c267:	75 18                	jne    0x1002c281
1002c269:	8d 44 24 4c          	lea    eax,[esp+0x4c]
1002c26d:	50                   	push   eax
1002c26e:	6a 2c                	push   0x2c
1002c270:	eb 07                	jmp    0x1002c279
1002c272:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
1002c276:	51                   	push   ecx
1002c277:	6a 40                	push   0x40
1002c279:	e8 c2 11 01 00       	call   0x1003d440
1002c27e:	83 c4 08             	add    esp,0x8
1002c281:	5f                   	pop    edi
1002c282:	5e                   	pop    esi
1002c283:	5d                   	pop    ebp
1002c284:	5b                   	pop    ebx
1002c285:	81 c4 90 00 00 00    	add    esp,0x90
1002c28b:	c2 08 00             	ret    0x8
1002c28e:	90                   	nop
1002c28f:	90                   	nop
1002c290:	c7 05 00 7f 11 10 00 	mov    DWORD PTR ds:0x10117f00,0x0
1002c297:	00 00 00 
1002c29a:	c7 05 04 7f 11 10 00 	mov    DWORD PTR ds:0x10117f04,0x0
1002c2a1:	00 00 00 
1002c2a4:	c7 05 14 7f 11 10 00 	mov    DWORD PTR ds:0x10117f14,0x0
1002c2ab:	00 00 00 
1002c2ae:	c7 05 08 7f 11 10 00 	mov    DWORD PTR ds:0x10117f08,0x0
1002c2b5:	00 00 00 
1002c2b8:	c7 05 0c 7f 11 10 00 	mov    DWORD PTR ds:0x10117f0c,0x0
1002c2bf:	00 00 00 
1002c2c2:	c7 05 10 7f 11 10 00 	mov    DWORD PTR ds:0x10117f10,0x0
1002c2c9:	00 00 00 
1002c2cc:	c3                   	ret
1002c2cd:	90                   	nop
1002c2ce:	90                   	nop
1002c2cf:	90                   	nop
1002c2d0:	c7 05 18 7f 11 10 00 	mov    DWORD PTR ds:0x10117f18,0x0
1002c2d7:	00 00 00 
1002c2da:	c7 05 1c 7f 11 10 00 	mov    DWORD PTR ds:0x10117f1c,0x0
1002c2e1:	00 00 00 
1002c2e4:	c7 05 2c 7f 11 10 00 	mov    DWORD PTR ds:0x10117f2c,0x0
1002c2eb:	00 00 00 
1002c2ee:	c7 05 20 7f 11 10 00 	mov    DWORD PTR ds:0x10117f20,0x0
1002c2f5:	00 00 00 
1002c2f8:	c7 05 24 7f 11 10 00 	mov    DWORD PTR ds:0x10117f24,0x0
1002c2ff:	00 00 00 
1002c302:	c7 05 28 7f 11 10 00 	mov    DWORD PTR ds:0x10117f28,0x0
1002c309:	00 00 00 
1002c30c:	c3                   	ret
1002c30d:	90                   	nop
1002c30e:	90                   	nop
1002c30f:	90                   	nop
1002c310:	83 ec 18             	sub    esp,0x18
1002c313:	56                   	push   esi
1002c314:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
1002c318:	57                   	push   edi
1002c319:	33 ff                	xor    edi,edi
1002c31b:	3b f7                	cmp    esi,edi
1002c31d:	75 0a                	jne    0x1002c329
1002c31f:	5f                   	pop    edi
1002c320:	33 c0                	xor    eax,eax
1002c322:	5e                   	pop    esi
1002c323:	83 c4 18             	add    esp,0x18
1002c326:	c2 08 00             	ret    0x8
1002c329:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1002c32d:	3b d7                	cmp    edx,edi
1002c32f:	75 1e                	jne    0x1002c34f
1002c331:	8a 01                	mov    al,BYTE PTR [ecx]
1002c333:	ba 18 7f 11 10       	mov    edx,0x10117f18
1002c338:	a8 02                	test   al,0x2
1002c33a:	75 05                	jne    0x1002c341
1002c33c:	ba 00 7f 11 10       	mov    edx,0x10117f00
1002c341:	3b d7                	cmp    edx,edi
1002c343:	75 0a                	jne    0x1002c34f
1002c345:	5f                   	pop    edi
1002c346:	33 c0                	xor    eax,eax
1002c348:	5e                   	pop    esi
1002c349:	83 c4 18             	add    esp,0x18
1002c34c:	c2 08 00             	ret    0x8
1002c34f:	f6 01 01             	test   BYTE PTR [ecx],0x1
1002c352:	74 0a                	je     0x1002c35e
1002c354:	5f                   	pop    edi
1002c355:	33 c0                	xor    eax,eax
1002c357:	5e                   	pop    esi
1002c358:	83 c4 18             	add    esp,0x18
1002c35b:	c2 08 00             	ret    0x8
1002c35e:	d9 41 30             	fld    DWORD PTR [ecx+0x30]
1002c361:	d9 41 2c             	fld    DWORD PTR [ecx+0x2c]
1002c364:	d9 41 28             	fld    DWORD PTR [ecx+0x28]
1002c367:	d9 c0                	fld    st(0)
1002c369:	d8 c9                	fmul   st,st(1)
1002c36b:	d9 c2                	fld    st(2)
1002c36d:	d8 cb                	fmul   st,st(3)
1002c36f:	de c1                	faddp  st(1),st
1002c371:	d9 c3                	fld    st(3)
1002c373:	d8 cc                	fmul   st,st(4)
1002c375:	de c1                	faddp  st(1),st
1002c377:	d8 1d 48 86 0b 10    	fcomp  DWORD PTR ds:0x100b8648
1002c37d:	dd d8                	fstp   st(0)
1002c37f:	df e0                	fnstsw ax
1002c381:	dd d8                	fstp   st(0)
1002c383:	f6 c4 01             	test   ah,0x1
1002c386:	dd d8                	fstp   st(0)
1002c388:	74 09                	je     0x1002c393
1002c38a:	89 79 28             	mov    DWORD PTR [ecx+0x28],edi
1002c38d:	89 79 2c             	mov    DWORD PTR [ecx+0x2c],edi
1002c390:	89 79 30             	mov    DWORD PTR [ecx+0x30],edi
1002c393:	d9 41 24             	fld    DWORD PTR [ecx+0x24]
1002c396:	d9 41 20             	fld    DWORD PTR [ecx+0x20]
1002c399:	d9 41 1c             	fld    DWORD PTR [ecx+0x1c]
1002c39c:	d9 c0                	fld    st(0)
1002c39e:	d8 c9                	fmul   st,st(1)
1002c3a0:	d9 c2                	fld    st(2)
1002c3a2:	d8 cb                	fmul   st,st(3)
1002c3a4:	de c1                	faddp  st(1),st
1002c3a6:	d9 c3                	fld    st(3)
1002c3a8:	d8 cc                	fmul   st,st(4)
1002c3aa:	de c1                	faddp  st(1),st
1002c3ac:	d8 1d 48 86 0b 10    	fcomp  DWORD PTR ds:0x100b8648
1002c3b2:	dd d8                	fstp   st(0)
1002c3b4:	df e0                	fnstsw ax
1002c3b6:	dd d8                	fstp   st(0)
1002c3b8:	f6 c4 01             	test   ah,0x1
1002c3bb:	dd d8                	fstp   st(0)
1002c3bd:	74 09                	je     0x1002c3c8
1002c3bf:	89 79 1c             	mov    DWORD PTR [ecx+0x1c],edi
1002c3c2:	89 79 20             	mov    DWORD PTR [ecx+0x20],edi
1002c3c5:	89 79 24             	mov    DWORD PTR [ecx+0x24],edi
1002c3c8:	8a 01                	mov    al,BYTE PTR [ecx]
1002c3ca:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1002c3d1:	00 
1002c3d2:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1002c3d8:	a8 04                	test   al,0x4
1002c3da:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
1002c3e1:	00 
1002c3e2:	75 28                	jne    0x1002c40c
1002c3e4:	dd d8                	fstp   st(0)
1002c3e6:	d9 41 34             	fld    DWORD PTR [ecx+0x34]
1002c3e9:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
1002c3ef:	d9 54 24 28          	fst    DWORD PTR [esp+0x28]
1002c3f3:	d8 4a 08             	fmul   DWORD PTR [edx+0x8]
1002c3f6:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1002c3fa:	d8 4a 0c             	fmul   DWORD PTR [edx+0xc]
1002c3fd:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1002c401:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
1002c405:	d8 4a 10             	fmul   DWORD PTR [edx+0x10]
1002c408:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002c40c:	d8 41 28             	fadd   DWORD PTR [ecx+0x28]
1002c40f:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1002c413:	d8 41 2c             	fadd   DWORD PTR [ecx+0x2c]
1002c416:	b8 01 00 00 00       	mov    eax,0x1
1002c41b:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1002c41f:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002c423:	d8 41 30             	fadd   DWORD PTR [ecx+0x30]
1002c426:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002c42a:	d8 0a                	fmul   DWORD PTR [edx]
1002c42c:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1002c430:	d8 0a                	fmul   DWORD PTR [edx]
1002c432:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
1002c436:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002c43a:	d8 0a                	fmul   DWORD PTR [edx]
1002c43c:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
1002c440:	d9 42 04             	fld    DWORD PTR [edx+0x4]
1002c443:	d8 49 28             	fmul   DWORD PTR [ecx+0x28]
1002c446:	d9 42 04             	fld    DWORD PTR [edx+0x4]
1002c449:	d8 49 2c             	fmul   DWORD PTR [ecx+0x2c]
1002c44c:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1002c450:	d9 42 04             	fld    DWORD PTR [edx+0x4]
1002c453:	d8 49 30             	fmul   DWORD PTR [ecx+0x30]
1002c456:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002c45a:	d9 41 1c             	fld    DWORD PTR [ecx+0x1c]
1002c45d:	d8 0a                	fmul   DWORD PTR [edx]
1002c45f:	d8 c1                	fadd   st,st(1)
1002c461:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
1002c465:	dd d8                	fstp   st(0)
1002c467:	d9 41 20             	fld    DWORD PTR [ecx+0x20]
1002c46a:	d8 0a                	fmul   DWORD PTR [edx]
1002c46c:	d8 44 24 0c          	fadd   DWORD PTR [esp+0xc]
1002c470:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1002c474:	d9 41 24             	fld    DWORD PTR [ecx+0x24]
1002c477:	d8 0a                	fmul   DWORD PTR [edx]
1002c479:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
1002c47d:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002c481:	d8 41 1c             	fadd   DWORD PTR [ecx+0x1c]
1002c484:	d9 59 1c             	fstp   DWORD PTR [ecx+0x1c]
1002c487:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002c48b:	d8 41 20             	fadd   DWORD PTR [ecx+0x20]
1002c48e:	d9 59 20             	fstp   DWORD PTR [ecx+0x20]
1002c491:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1002c495:	d8 41 24             	fadd   DWORD PTR [ecx+0x24]
1002c498:	d9 59 24             	fstp   DWORD PTR [ecx+0x24]
1002c49b:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1002c49f:	d8 41 04             	fadd   DWORD PTR [ecx+0x4]
1002c4a2:	d9 1e                	fstp   DWORD PTR [esi]
1002c4a4:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1002c4a8:	d8 41 08             	fadd   DWORD PTR [ecx+0x8]
1002c4ab:	d9 5e 04             	fstp   DWORD PTR [esi+0x4]
1002c4ae:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
1002c4b2:	d8 41 0c             	fadd   DWORD PTR [ecx+0xc]
1002c4b5:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
1002c4b8:	89 79 28             	mov    DWORD PTR [ecx+0x28],edi
1002c4bb:	89 79 2c             	mov    DWORD PTR [ecx+0x2c],edi
1002c4be:	89 79 30             	mov    DWORD PTR [ecx+0x30],edi
1002c4c1:	5f                   	pop    edi
1002c4c2:	5e                   	pop    esi
1002c4c3:	83 c4 18             	add    esp,0x18
1002c4c6:	c2 08 00             	ret    0x8
1002c4c9:	90                   	nop
1002c4ca:	90                   	nop
1002c4cb:	90                   	nop
1002c4cc:	90                   	nop
1002c4cd:	90                   	nop
1002c4ce:	90                   	nop
1002c4cf:	90                   	nop
1002c4d0:	83 ec 34             	sub    esp,0x34
1002c4d3:	33 c0                	xor    eax,eax
1002c4d5:	53                   	push   ebx
1002c4d6:	8b 5c 24 40          	mov    ebx,DWORD PTR [esp+0x40]
1002c4da:	55                   	push   ebp
1002c4db:	56                   	push   esi
1002c4dc:	3b d8                	cmp    ebx,eax
1002c4de:	57                   	push   edi
1002c4df:	8b f1                	mov    esi,ecx
1002c4e1:	0f 84 dc 01 00 00    	je     0x1002c6c3
1002c4e7:	8b 7c 24 50          	mov    edi,DWORD PTR [esp+0x50]
1002c4eb:	3b f8                	cmp    edi,eax
1002c4ed:	0f 84 d0 01 00 00    	je     0x1002c6c3
1002c4f3:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
1002c4f7:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
1002c4fb:	3b e8                	cmp    ebp,eax
1002c4fd:	89 01                	mov    DWORD PTR [ecx],eax
1002c4ff:	75 19                	jne    0x1002c51a
1002c501:	8a 0e                	mov    cl,BYTE PTR [esi]
1002c503:	bd 18 7f 11 10       	mov    ebp,0x10117f18
1002c508:	f6 c1 02             	test   cl,0x2
1002c50b:	75 05                	jne    0x1002c512
1002c50d:	bd 00 7f 11 10       	mov    ebp,0x10117f00
1002c512:	3b e8                	cmp    ebp,eax
1002c514:	0f 84 a9 01 00 00    	je     0x1002c6c3
1002c51a:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1002c51d:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
1002c520:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
1002c524:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
1002c528:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1002c52b:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1002c52f:	8b 13                	mov    edx,DWORD PTR [ebx]
1002c531:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1002c535:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1002c538:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
1002c53c:	8b 4b 08             	mov    ecx,DWORD PTR [ebx+0x8]
1002c53f:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
1002c543:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
1002c547:	8b 54 24 54          	mov    edx,DWORD PTR [esp+0x54]
1002c54b:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
1002c54f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002c555:	8d 44 24 10          	lea    eax,[esp+0x10]
1002c559:	57                   	push   edi
1002c55a:	50                   	push   eax
1002c55b:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
1002c562:	00 
1002c563:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
1002c56a:	00 
1002c56b:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
1002c572:	00 
1002c573:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
1002c577:	c7 44 24 40 d0 c6 02 	mov    DWORD PTR [esp+0x40],0x1002c6d0
1002c57e:	10 
1002c57f:	ff 91 30 01 00 00    	call   DWORD PTR [ecx+0x130]
1002c585:	83 c4 08             	add    esp,0x8
1002c588:	85 c0                	test   eax,eax
1002c58a:	0f 84 33 01 00 00    	je     0x1002c6c3
1002c590:	83 7f 20 ff          	cmp    DWORD PTR [edi+0x20],0xffffffff
1002c594:	0f 84 29 01 00 00    	je     0x1002c6c3
1002c59a:	d9 46 50             	fld    DWORD PTR [esi+0x50]
1002c59d:	d8 4f 0c             	fmul   DWORD PTR [edi+0xc]
1002c5a0:	d8 07                	fadd   DWORD PTR [edi]
1002c5a2:	d9 1b                	fstp   DWORD PTR [ebx]
1002c5a4:	d9 46 50             	fld    DWORD PTR [esi+0x50]
1002c5a7:	d8 4f 10             	fmul   DWORD PTR [edi+0x10]
1002c5aa:	d8 47 04             	fadd   DWORD PTR [edi+0x4]
1002c5ad:	d9 5b 04             	fstp   DWORD PTR [ebx+0x4]
1002c5b0:	d9 46 50             	fld    DWORD PTR [esi+0x50]
1002c5b3:	d8 4f 14             	fmul   DWORD PTR [edi+0x14]
1002c5b6:	d8 47 08             	fadd   DWORD PTR [edi+0x8]
1002c5b9:	d9 5b 08             	fstp   DWORD PTR [ebx+0x8]
1002c5bc:	d9 47 14             	fld    DWORD PTR [edi+0x14]
1002c5bf:	d8 4e 24             	fmul   DWORD PTR [esi+0x24]
1002c5c2:	d9 47 10             	fld    DWORD PTR [edi+0x10]
1002c5c5:	d8 4e 20             	fmul   DWORD PTR [esi+0x20]
1002c5c8:	de c1                	faddp  st(1),st
1002c5ca:	d9 47 0c             	fld    DWORD PTR [edi+0xc]
1002c5cd:	d8 4e 1c             	fmul   DWORD PTR [esi+0x1c]
1002c5d0:	de c1                	faddp  st(1),st
1002c5d2:	d8 0d a4 89 0b 10    	fmul   DWORD PTR ds:0x100b89a4
1002c5d8:	d9 c0                	fld    st(0)
1002c5da:	d8 4f 0c             	fmul   DWORD PTR [edi+0xc]
1002c5dd:	d8 46 1c             	fadd   DWORD PTR [esi+0x1c]
1002c5e0:	d9 5e 1c             	fstp   DWORD PTR [esi+0x1c]
1002c5e3:	d9 c0                	fld    st(0)
1002c5e5:	d8 4f 10             	fmul   DWORD PTR [edi+0x10]
1002c5e8:	d8 46 20             	fadd   DWORD PTR [esi+0x20]
1002c5eb:	d9 5e 20             	fstp   DWORD PTR [esi+0x20]
1002c5ee:	d8 4f 14             	fmul   DWORD PTR [edi+0x14]
1002c5f1:	d8 46 24             	fadd   DWORD PTR [esi+0x24]
1002c5f4:	d9 5e 24             	fstp   DWORD PTR [esi+0x24]
1002c5f7:	d9 45 14             	fld    DWORD PTR [ebp+0x14]
1002c5fa:	d8 4e 1c             	fmul   DWORD PTR [esi+0x1c]
1002c5fd:	d9 5e 1c             	fstp   DWORD PTR [esi+0x1c]
1002c600:	d9 45 14             	fld    DWORD PTR [ebp+0x14]
1002c603:	d8 4e 20             	fmul   DWORD PTR [esi+0x20]
1002c606:	d9 5e 20             	fstp   DWORD PTR [esi+0x20]
1002c609:	d9 45 14             	fld    DWORD PTR [ebp+0x14]
1002c60c:	d8 4e 24             	fmul   DWORD PTR [esi+0x24]
1002c60f:	d9 5e 24             	fstp   DWORD PTR [esi+0x24]
1002c612:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1002c618:	d9 82 0c 85 01 00    	fld    DWORD PTR [edx+0x1850c]
1002c61e:	d8 15 e0 83 0b 10    	fcom   DWORD PTR ds:0x100b83e0
1002c624:	df e0                	fnstsw ax
1002c626:	f6 c4 41             	test   ah,0x41
1002c629:	75 0a                	jne    0x1002c635
1002c62b:	dd d8                	fstp   st(0)
1002c62d:	d9 05 08 84 0b 10    	fld    DWORD PTR ds:0x100b8408
1002c633:	eb 15                	jmp    0x1002c64a
1002c635:	d8 15 a4 88 0b 10    	fcom   DWORD PTR ds:0x100b88a4
1002c63b:	df e0                	fnstsw ax
1002c63d:	f6 c4 01             	test   ah,0x1
1002c640:	74 08                	je     0x1002c64a
1002c642:	dd d8                	fstp   st(0)
1002c644:	d9 05 a4 88 0b 10    	fld    DWORD PTR ds:0x100b88a4
1002c64a:	d8 3d a0 89 0b 10    	fdivr  DWORD PTR ds:0x100b89a0
1002c650:	d9 47 10             	fld    DWORD PTR [edi+0x10]
1002c653:	d8 1d d8 83 0b 10    	fcomp  DWORD PTR ds:0x100b83d8
1002c659:	df e0                	fnstsw ax
1002c65b:	f6 c4 41             	test   ah,0x41
1002c65e:	75 07                	jne    0x1002c667
1002c660:	b8 01 00 00 00       	mov    eax,0x1
1002c665:	eb 02                	jmp    0x1002c669
1002c667:	33 c0                	xor    eax,eax
1002c669:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
1002c66d:	85 c0                	test   eax,eax
1002c66f:	89 01                	mov    DWORD PTR [ecx],eax
1002c671:	74 3f                	je     0x1002c6b2
1002c673:	d9 46 24             	fld    DWORD PTR [esi+0x24]
1002c676:	d9 46 20             	fld    DWORD PTR [esi+0x20]
1002c679:	d9 46 1c             	fld    DWORD PTR [esi+0x1c]
1002c67c:	d9 c0                	fld    st(0)
1002c67e:	d8 c9                	fmul   st,st(1)
1002c680:	d9 c2                	fld    st(2)
1002c682:	d8 cb                	fmul   st,st(3)
1002c684:	de c1                	faddp  st(1),st
1002c686:	d9 c3                	fld    st(3)
1002c688:	d8 cc                	fmul   st,st(4)
1002c68a:	de c1                	faddp  st(1),st
1002c68c:	d8 dc                	fcomp  st(4)
1002c68e:	dd d8                	fstp   st(0)
1002c690:	dd d8                	fstp   st(0)
1002c692:	df e0                	fnstsw ax
1002c694:	dd d8                	fstp   st(0)
1002c696:	f6 c4 01             	test   ah,0x1
1002c699:	dd d8                	fstp   st(0)
1002c69b:	74 17                	je     0x1002c6b4
1002c69d:	8b 06                	mov    eax,DWORD PTR [esi]
1002c69f:	5f                   	pop    edi
1002c6a0:	0c 01                	or     al,0x1
1002c6a2:	89 06                	mov    DWORD PTR [esi],eax
1002c6a4:	5e                   	pop    esi
1002c6a5:	5d                   	pop    ebp
1002c6a6:	b8 01 00 00 00       	mov    eax,0x1
1002c6ab:	5b                   	pop    ebx
1002c6ac:	83 c4 34             	add    esp,0x34
1002c6af:	c2 14 00             	ret    0x14
1002c6b2:	dd d8                	fstp   st(0)
1002c6b4:	5f                   	pop    edi
1002c6b5:	5e                   	pop    esi
1002c6b6:	5d                   	pop    ebp
1002c6b7:	b8 01 00 00 00       	mov    eax,0x1
1002c6bc:	5b                   	pop    ebx
1002c6bd:	83 c4 34             	add    esp,0x34
1002c6c0:	c2 14 00             	ret    0x14
1002c6c3:	5f                   	pop    edi
1002c6c4:	5e                   	pop    esi
1002c6c5:	5d                   	pop    ebp
1002c6c6:	33 c0                	xor    eax,eax
1002c6c8:	5b                   	pop    ebx
1002c6c9:	83 c4 34             	add    esp,0x34
1002c6cc:	c2 14 00             	ret    0x14
1002c6cf:	90                   	nop
1002c6d0:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1002c6d6:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1002c6da:	52                   	push   edx
1002c6db:	8b 01                	mov    eax,DWORD PTR [ecx]
1002c6dd:	ff 90 ac 01 00 00    	call   DWORD PTR [eax+0x1ac]
1002c6e3:	c1 e8 0d             	shr    eax,0xd
1002c6e6:	83 e0 01             	and    eax,0x1
1002c6e9:	c3                   	ret
1002c6ea:	90                   	nop
1002c6eb:	90                   	nop
1002c6ec:	90                   	nop
1002c6ed:	90                   	nop
1002c6ee:	90                   	nop
1002c6ef:	90                   	nop
1002c6f0:	83 ec 58             	sub    esp,0x58
1002c6f3:	53                   	push   ebx
1002c6f4:	55                   	push   ebp
1002c6f5:	56                   	push   esi
1002c6f6:	57                   	push   edi
1002c6f7:	8b 7c 24 6c          	mov    edi,DWORD PTR [esp+0x6c]
1002c6fb:	33 db                	xor    ebx,ebx
1002c6fd:	8b f1                	mov    esi,ecx
1002c6ff:	39 5f 38             	cmp    DWORD PTR [edi+0x38],ebx
1002c702:	75 0c                	jne    0x1002c710
1002c704:	5f                   	pop    edi
1002c705:	5e                   	pop    esi
1002c706:	5d                   	pop    ebp
1002c707:	32 c0                	xor    al,al
1002c709:	5b                   	pop    ebx
1002c70a:	83 c4 58             	add    esp,0x58
1002c70d:	c2 08 00             	ret    0x8
1002c710:	f6 06 01             	test   BYTE PTR [esi],0x1
1002c713:	0f 85 dc 02 00 00    	jne    0x1002c9f5
1002c719:	d9 46 44             	fld    DWORD PTR [esi+0x44]
1002c71c:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002c722:	df e0                	fnstsw ax
1002c724:	f6 c4 40             	test   ah,0x40
1002c727:	74 24                	je     0x1002c74d
1002c729:	d9 46 48             	fld    DWORD PTR [esi+0x48]
1002c72c:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002c732:	df e0                	fnstsw ax
1002c734:	f6 c4 40             	test   ah,0x40
1002c737:	74 14                	je     0x1002c74d
1002c739:	d9 46 4c             	fld    DWORD PTR [esi+0x4c]
1002c73c:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002c742:	df e0                	fnstsw ax
1002c744:	f6 c4 40             	test   ah,0x40
1002c747:	0f 85 9d 00 00 00    	jne    0x1002c7ea
1002c74d:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1002c752:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
1002c756:	d9 80 0c 85 01 00    	fld    DWORD PTR [eax+0x1850c]
1002c75c:	d9 c0                	fld    st(0)
1002c75e:	d8 4e 44             	fmul   DWORD PTR [esi+0x44]
1002c761:	d8 46 38             	fadd   DWORD PTR [esi+0x38]
1002c764:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
1002c768:	d9 5e 38             	fstp   DWORD PTR [esi+0x38]
1002c76b:	d9 c0                	fld    st(0)
1002c76d:	d8 4e 48             	fmul   DWORD PTR [esi+0x48]
1002c770:	d8 46 3c             	fadd   DWORD PTR [esi+0x3c]
1002c773:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
1002c777:	d9 5e 3c             	fstp   DWORD PTR [esi+0x3c]
1002c77a:	d8 4e 4c             	fmul   DWORD PTR [esi+0x4c]
1002c77d:	d8 46 40             	fadd   DWORD PTR [esi+0x40]
1002c780:	d9 54 24 20          	fst    DWORD PTR [esp+0x20]
1002c784:	d9 5e 40             	fstp   DWORD PTR [esi+0x40]
1002c787:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1002c78a:	f6 c4 20             	test   ah,0x20
1002c78d:	74 15                	je     0x1002c7a4
1002c78f:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1002c793:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002c799:	50                   	push   eax
1002c79a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1002c79e:	8b 11                	mov    edx,DWORD PTR [ecx]
1002c7a0:	50                   	push   eax
1002c7a1:	53                   	push   ebx
1002c7a2:	eb 24                	jmp    0x1002c7c8
1002c7a4:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002c7aa:	f6 c4 40             	test   ah,0x40
1002c7ad:	8b 11                	mov    edx,DWORD PTR [ecx]
1002c7af:	74 08                	je     0x1002c7b9
1002c7b1:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1002c7b5:	50                   	push   eax
1002c7b6:	53                   	push   ebx
1002c7b7:	eb 0a                	jmp    0x1002c7c3
1002c7b9:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1002c7bd:	50                   	push   eax
1002c7be:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1002c7c2:	50                   	push   eax
1002c7c3:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1002c7c7:	50                   	push   eax
1002c7c8:	8d 44 24 3c          	lea    eax,[esp+0x3c]
1002c7cc:	50                   	push   eax
1002c7cd:	ff 92 00 01 00 00    	call   DWORD PTR [edx+0x100]
1002c7d3:	8b 57 38             	mov    edx,DWORD PTR [edi+0x38]
1002c7d6:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002c7db:	8d 4c 24 30          	lea    ecx,[esp+0x30]
1002c7df:	51                   	push   ecx
1002c7e0:	52                   	push   edx
1002c7e1:	ff 90 f8 02 00 00    	call   DWORD PTR [eax+0x2f8]
1002c7e7:	83 c4 08             	add    esp,0x8
1002c7ea:	8d 4c 24 24          	lea    ecx,[esp+0x24]
1002c7ee:	51                   	push   ecx
1002c7ef:	53                   	push   ebx
1002c7f0:	8b ce                	mov    ecx,esi
1002c7f2:	e8 19 fb ff ff       	call   0x1002c310
1002c7f7:	85 c0                	test   eax,eax
1002c7f9:	0f 84 f6 01 00 00    	je     0x1002c9f5
1002c7ff:	8a 06                	mov    al,BYTE PTR [esi]
1002c801:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
1002c808:	00 
1002c809:	a8 08                	test   al,0x8
1002c80b:	c7 44 24 44 00 00 00 	mov    DWORD PTR [esp+0x44],0x0
1002c812:	00 
1002c813:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
1002c81a:	00 
1002c81b:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
1002c822:	00 
1002c823:	c7 44 24 50 00 00 00 	mov    DWORD PTR [esp+0x50],0x0
1002c82a:	00 
1002c82b:	c7 44 24 54 00 00 00 	mov    DWORD PTR [esp+0x54],0x0
1002c832:	00 
1002c833:	c7 44 24 58 00 00 00 	mov    DWORD PTR [esp+0x58],0x0
1002c83a:	00 
1002c83b:	89 5c 24 5c          	mov    DWORD PTR [esp+0x5c],ebx
1002c83f:	c7 44 24 60 ff ff ff 	mov    DWORD PTR [esp+0x60],0xffffffff
1002c846:	ff 
1002c847:	89 5c 24 64          	mov    DWORD PTR [esp+0x64],ebx
1002c84b:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
1002c84f:	0f 84 60 01 00 00    	je     0x1002c9b5
1002c855:	8d 54 24 20          	lea    edx,[esp+0x20]
1002c859:	8d 44 24 40          	lea    eax,[esp+0x40]
1002c85d:	52                   	push   edx
1002c85e:	6a 07                	push   0x7
1002c860:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
1002c864:	50                   	push   eax
1002c865:	51                   	push   ecx
1002c866:	53                   	push   ebx
1002c867:	8b ce                	mov    ecx,esi
1002c869:	e8 62 fc ff ff       	call   0x1002c4d0
1002c86e:	85 c0                	test   eax,eax
1002c870:	0f 84 3f 01 00 00    	je     0x1002c9b5
1002c876:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
1002c87c:	8d 44 24 18          	lea    eax,[esp+0x18]
1002c880:	50                   	push   eax
1002c881:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
1002c885:	8b 11                	mov    edx,DWORD PTR [ecx]
1002c887:	50                   	push   eax
1002c888:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
1002c88b:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1002c891:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1002c895:	52                   	push   edx
1002c896:	8b 89 d0 83 01 00    	mov    ecx,DWORD PTR [ecx+0x183d0]
1002c89c:	e8 3f 47 fe ff       	call   0x10010fe0
1002c8a1:	8b e8                	mov    ebp,eax
1002c8a3:	bf 50 70 0d 10       	mov    edi,0x100d7050
1002c8a8:	8d 4d 04             	lea    ecx,[ebp+0x4]
1002c8ab:	8a 01                	mov    al,BYTE PTR [ecx]
1002c8ad:	8a d0                	mov    dl,al
1002c8af:	3a 07                	cmp    al,BYTE PTR [edi]
1002c8b1:	75 1c                	jne    0x1002c8cf
1002c8b3:	3a d3                	cmp    dl,bl
1002c8b5:	74 14                	je     0x1002c8cb
1002c8b7:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1002c8ba:	8a d0                	mov    dl,al
1002c8bc:	3a 47 01             	cmp    al,BYTE PTR [edi+0x1]
1002c8bf:	75 0e                	jne    0x1002c8cf
1002c8c1:	83 c1 02             	add    ecx,0x2
1002c8c4:	83 c7 02             	add    edi,0x2
1002c8c7:	3a d3                	cmp    dl,bl
1002c8c9:	75 e0                	jne    0x1002c8ab
1002c8cb:	33 c9                	xor    ecx,ecx
1002c8cd:	eb 05                	jmp    0x1002c8d4
1002c8cf:	1b c9                	sbb    ecx,ecx
1002c8d1:	83 d9 ff             	sbb    ecx,0xffffffff
1002c8d4:	3b cb                	cmp    ecx,ebx
1002c8d6:	75 0c                	jne    0x1002c8e4
1002c8d8:	5f                   	pop    edi
1002c8d9:	5e                   	pop    esi
1002c8da:	5d                   	pop    ebp
1002c8db:	32 c0                	xor    al,al
1002c8dd:	5b                   	pop    ebx
1002c8de:	83 c4 58             	add    esp,0x58
1002c8e1:	c2 08 00             	ret    0x8
1002c8e4:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
1002c8e8:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1002c8eb:	f6 c1 10             	test   cl,0x10
1002c8ee:	74 40                	je     0x1002c930
1002c8f0:	f6 45 24 01          	test   BYTE PTR [ebp+0x24],0x1
1002c8f4:	75 2e                	jne    0x1002c924
1002c8f6:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
1002c8fa:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
1002c8fe:	53                   	push   ebx
1002c8ff:	8b 50 30             	mov    edx,DWORD PTR [eax+0x30]
1002c902:	52                   	push   edx
1002c903:	8b 54 24 68          	mov    edx,DWORD PTR [esp+0x68]
1002c907:	68 00 00 80 3f       	push   0x3f800000
1002c90c:	51                   	push   ecx
1002c90d:	52                   	push   edx
1002c90e:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1002c911:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1002c916:	8d 4c 24 54          	lea    ecx,[esp+0x54]
1002c91a:	51                   	push   ecx
1002c91b:	52                   	push   edx
1002c91c:	8d 48 30             	lea    ecx,[eax+0x30]
1002c91f:	e8 6c d7 ff ff       	call   0x1002a090
1002c924:	5f                   	pop    edi
1002c925:	5e                   	pop    esi
1002c926:	5d                   	pop    ebp
1002c927:	32 c0                	xor    al,al
1002c929:	5b                   	pop    ebx
1002c92a:	83 c4 58             	add    esp,0x58
1002c92d:	c2 08 00             	ret    0x8
1002c930:	f6 c5 80             	test   ch,0x80
1002c933:	74 1d                	je     0x1002c952
1002c935:	83 7e 54 03          	cmp    DWORD PTR [esi+0x54],0x3
1002c939:	7c 17                	jl     0x1002c952
1002c93b:	f6 06 02             	test   BYTE PTR [esi],0x2
1002c93e:	75 12                	jne    0x1002c952
1002c940:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
1002c944:	8d 4c 24 40          	lea    ecx,[esp+0x40]
1002c948:	51                   	push   ecx
1002c949:	52                   	push   edx
1002c94a:	e8 71 08 01 00       	call   0x1003d1c0
1002c94f:	83 c4 08             	add    esp,0x8
1002c952:	e8 09 ba fd ff       	call   0x10008360
1002c957:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002c95b:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1002c95f:	df 6c 24 10          	fild   QWORD PTR [esp+0x10]
1002c963:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002c969:	d8 0d ac 89 0b 10    	fmul   DWORD PTR ds:0x100b89ac
1002c96f:	d8 25 a8 89 0b 10    	fsub   DWORD PTR ds:0x100b89a8
1002c975:	d9 5e 44             	fstp   DWORD PTR [esi+0x44]
1002c978:	e8 e3 b9 fd ff       	call   0x10008360
1002c97d:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
1002c981:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
1002c985:	df 6c 24 18          	fild   QWORD PTR [esp+0x18]
1002c989:	8b 4e 54             	mov    ecx,DWORD PTR [esi+0x54]
1002c98c:	49                   	dec    ecx
1002c98d:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002c993:	8b c1                	mov    eax,ecx
1002c995:	89 4e 54             	mov    DWORD PTR [esi+0x54],ecx
1002c998:	3b c3                	cmp    eax,ebx
1002c99a:	d8 0d ac 89 0b 10    	fmul   DWORD PTR ds:0x100b89ac
1002c9a0:	d8 25 a8 89 0b 10    	fsub   DWORD PTR ds:0x100b89a8
1002c9a6:	d9 5e 48             	fstp   DWORD PTR [esi+0x48]
1002c9a9:	7f 06                	jg     0x1002c9b1
1002c9ab:	8b 06                	mov    eax,DWORD PTR [esi]
1002c9ad:	0c 01                	or     al,0x1
1002c9af:	89 06                	mov    DWORD PTR [esi],eax
1002c9b1:	8b 7c 24 6c          	mov    edi,DWORD PTR [esp+0x6c]
1002c9b5:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1002c9b9:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1002c9bd:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
1002c9c1:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1002c9c4:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
1002c9c7:	89 56 0c             	mov    DWORD PTR [esi+0xc],edx
1002c9ca:	8b 0d d0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd0
1002c9d0:	8b 57 38             	mov    edx,DWORD PTR [edi+0x38]
1002c9d3:	83 c6 1c             	add    esi,0x1c
1002c9d6:	8b 01                	mov    eax,DWORD PTR [ecx]
1002c9d8:	56                   	push   esi
1002c9d9:	52                   	push   edx
1002c9da:	ff 50 14             	call   DWORD PTR [eax+0x14]
1002c9dd:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002c9e3:	8d 54 24 24          	lea    edx,[esp+0x24]
1002c9e7:	53                   	push   ebx
1002c9e8:	52                   	push   edx
1002c9e9:	8b 57 38             	mov    edx,DWORD PTR [edi+0x38]
1002c9ec:	8b 01                	mov    eax,DWORD PTR [ecx]
1002c9ee:	52                   	push   edx
1002c9ef:	ff 90 a8 01 00 00    	call   DWORD PTR [eax+0x1a8]
1002c9f5:	5f                   	pop    edi
1002c9f6:	5e                   	pop    esi
1002c9f7:	5d                   	pop    ebp
1002c9f8:	b0 01                	mov    al,0x1
1002c9fa:	5b                   	pop    ebx
1002c9fb:	83 c4 58             	add    esp,0x58
1002c9fe:	c2 08 00             	ret    0x8
1002ca01:	90                   	nop
1002ca02:	90                   	nop
1002ca03:	90                   	nop
1002ca04:	90                   	nop
1002ca05:	90                   	nop
1002ca06:	90                   	nop
1002ca07:	90                   	nop
1002ca08:	90                   	nop
1002ca09:	90                   	nop
1002ca0a:	90                   	nop
1002ca0b:	90                   	nop
1002ca0c:	90                   	nop
1002ca0d:	90                   	nop
1002ca0e:	90                   	nop
1002ca0f:	90                   	nop

*/
void FXManager::BreakGlass() {
    if (!m_hObject) return;
    LTVector vPos, vDir;
    uint32 nFlags = 0;
    LTVector vScale(1.0f, 1.0f, 1.0f);
    g_pLTClient->BreakWorldModel(m_hObject, &vPos, &vDir, nFlags, &vScale);
}

// 0x1002ca10: FXManager::GetModelDecal
/*
1002ca10:	56                   	push   esi
1002ca11:	8b f1                	mov    esi,ecx
1002ca13:	57                   	push   edi
1002ca14:	8b be a8 00 00 00    	mov    edi,DWORD PTR [esi+0xa8]
1002ca1a:	85 ff                	test   edi,edi
1002ca1c:	0f 85 c9 00 00 00    	jne    0x1002caeb
1002ca22:	8b 86 9c 00 00 00    	mov    eax,DWORD PTR [esi+0x9c]
1002ca28:	85 c0                	test   eax,eax
1002ca2a:	75 29                	jne    0x1002ca55
1002ca2c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002ca32:	68 8d 10 00 00       	push   0x108d
1002ca37:	68 e0 70 0d 10       	push   0x100d70e0
1002ca3c:	8b 01                	mov    eax,DWORD PTR [ecx]
1002ca3e:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1002ca44:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002ca49:	68 9c 70 0d 10       	push   0x100d709c
1002ca4e:	8b 08                	mov    ecx,DWORD PTR [eax]
1002ca50:	e9 82 00 00 00       	jmp    0x1002cad7
1002ca55:	8b 78 08             	mov    edi,DWORD PTR [eax+0x8]
1002ca58:	8b 07                	mov    eax,DWORD PTR [edi]
1002ca5a:	85 c0                	test   eax,eax
1002ca5c:	74 4b                	je     0x1002caa9
1002ca5e:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1002ca61:	53                   	push   ebx
1002ca62:	8b 5f 0c             	mov    ebx,DWORD PTR [edi+0xc]
1002ca65:	52                   	push   edx
1002ca66:	50                   	push   eax
1002ca67:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002ca6c:	ff 90 40 01 00 00    	call   DWORD PTR [eax+0x140]
1002ca72:	83 c4 08             	add    esp,0x8
1002ca75:	8d 8e 98 00 00 00    	lea    ecx,[esi+0x98]
1002ca7b:	c7 47 04 00 00 00 00 	mov    DWORD PTR [edi+0x4],0x0
1002ca82:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
1002ca88:	53                   	push   ebx
1002ca89:	c7 47 08 ff ff ff ff 	mov    DWORD PTR [edi+0x8],0xffffffff
1002ca90:	e8 1b fc fd ff       	call   0x1000c6b0
1002ca95:	8b 8e ac 00 00 00    	mov    ecx,DWORD PTR [esi+0xac]
1002ca9b:	53                   	push   ebx
1002ca9c:	51                   	push   ecx
1002ca9d:	8d 8e a4 00 00 00    	lea    ecx,[esi+0xa4]
1002caa3:	e8 88 fb fd ff       	call   0x1000c630
1002caa8:	5b                   	pop    ebx
1002caa9:	8b be a8 00 00 00    	mov    edi,DWORD PTR [esi+0xa8]
1002caaf:	85 ff                	test   edi,edi
1002cab1:	75 38                	jne    0x1002caeb
1002cab3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002cab9:	68 96 10 00 00       	push   0x1096
1002cabe:	68 e0 70 0d 10       	push   0x100d70e0
1002cac3:	8b 11                	mov    edx,DWORD PTR [ecx]
1002cac5:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1002cacb:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002cad0:	68 54 70 0d 10       	push   0x100d7054
1002cad5:	8b 08                	mov    ecx,DWORD PTR [eax]
1002cad7:	68 c4 6c 0d 10       	push   0x100d6cc4
1002cadc:	50                   	push   eax
1002cadd:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1002cae3:	83 c4 0c             	add    esp,0xc
1002cae6:	33 c0                	xor    eax,eax
1002cae8:	5f                   	pop    edi
1002cae9:	5e                   	pop    esi
1002caea:	c3                   	ret
1002caeb:	57                   	push   edi
1002caec:	8d 8e a4 00 00 00    	lea    ecx,[esi+0xa4]
1002caf2:	e8 b9 fb fd ff       	call   0x1000c6b0
1002caf7:	8b 96 a0 00 00 00    	mov    edx,DWORD PTR [esi+0xa0]
1002cafd:	57                   	push   edi
1002cafe:	52                   	push   edx
1002caff:	8d 8e 98 00 00 00    	lea    ecx,[esi+0x98]
1002cb05:	e8 26 fb fd ff       	call   0x1000c630
1002cb0a:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
1002cb0d:	5f                   	pop    edi
1002cb0e:	5e                   	pop    esi
1002cb0f:	c7 40 08 ff ff ff ff 	mov    DWORD PTR [eax+0x8],0xffffffff
1002cb16:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
1002cb1c:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
1002cb23:	c3                   	ret
1002cb24:	90                   	nop
1002cb25:	90                   	nop
1002cb26:	90                   	nop
1002cb27:	90                   	nop
1002cb28:	90                   	nop
1002cb29:	90                   	nop
1002cb2a:	90                   	nop
1002cb2b:	90                   	nop
1002cb2c:	90                   	nop
1002cb2d:	90                   	nop
1002cb2e:	90                   	nop
1002cb2f:	90                   	nop
1002cb30:	56                   	push   esi
1002cb31:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1002cb35:	57                   	push   edi
1002cb36:	8b f9                	mov    edi,ecx
1002cb38:	8b 06                	mov    eax,DWORD PTR [esi]
1002cb3a:	85 c0                	test   eax,eax
1002cb3c:	74 4c                	je     0x1002cb8a
1002cb3e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1002cb41:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002cb47:	53                   	push   ebx
1002cb48:	8b 5e 0c             	mov    ebx,DWORD PTR [esi+0xc]
1002cb4b:	51                   	push   ecx
1002cb4c:	50                   	push   eax
1002cb4d:	ff 92 40 01 00 00    	call   DWORD PTR [edx+0x140]
1002cb53:	83 c4 08             	add    esp,0x8
1002cb56:	8d 8f 98 00 00 00    	lea    ecx,[edi+0x98]
1002cb5c:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
1002cb63:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1002cb69:	53                   	push   ebx
1002cb6a:	c7 46 08 ff ff ff ff 	mov    DWORD PTR [esi+0x8],0xffffffff
1002cb71:	e8 3a fb fd ff       	call   0x1000c6b0
1002cb76:	8b 87 ac 00 00 00    	mov    eax,DWORD PTR [edi+0xac]
1002cb7c:	53                   	push   ebx
1002cb7d:	50                   	push   eax
1002cb7e:	8d 8f a4 00 00 00    	lea    ecx,[edi+0xa4]
1002cb84:	e8 a7 fa fd ff       	call   0x1000c630
1002cb89:	5b                   	pop    ebx
1002cb8a:	5f                   	pop    edi
1002cb8b:	5e                   	pop    esi
1002cb8c:	c2 04 00             	ret    0x4
1002cb8f:	90                   	nop

*/
void FXManager::GetModelDecal() {
    if (!g_pLTClient) return;
    LTVector vPos;
    g_pLTClient->GetObjectPos(m_hObject, &vPos);
    LTRotation rRot;
    g_pLTClient->GetObjectRotation(m_hObject, &rRot);
}

// 0x1002cb90: FXManager::GetShardGroup
/*
1002cb90:	56                   	push   esi
1002cb91:	57                   	push   edi
1002cb92:	8b f9                	mov    edi,ecx
1002cb94:	8b b7 c0 00 00 00    	mov    esi,DWORD PTR [edi+0xc0]
1002cb9a:	85 f6                	test   esi,esi
1002cb9c:	0f 85 d9 00 00 00    	jne    0x1002cc7b
1002cba2:	8b 87 b4 00 00 00    	mov    eax,DWORD PTR [edi+0xb4]
1002cba8:	85 c0                	test   eax,eax
1002cbaa:	75 29                	jne    0x1002cbd5
1002cbac:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002cbb2:	68 c4 10 00 00       	push   0x10c4
1002cbb7:	68 e0 70 0d 10       	push   0x100d70e0
1002cbbc:	8b 01                	mov    eax,DWORD PTR [ecx]
1002cbbe:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1002cbc4:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002cbc9:	68 5c 71 0d 10       	push   0x100d715c
1002cbce:	8b 08                	mov    ecx,DWORD PTR [eax]
1002cbd0:	e9 92 00 00 00       	jmp    0x1002cc67
1002cbd5:	8b 70 08             	mov    esi,DWORD PTR [eax+0x8]
1002cbd8:	53                   	push   ebx
1002cbd9:	33 db                	xor    ebx,ebx
1002cbdb:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
1002cbde:	85 c0                	test   eax,eax
1002cbe0:	76 22                	jbe    0x1002cc04
1002cbe2:	55                   	push   ebp
1002cbe3:	8d 6e 04             	lea    ebp,[esi+0x4]
1002cbe6:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
1002cbe9:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002cbee:	52                   	push   edx
1002cbef:	ff 90 a8 01 00 00    	call   DWORD PTR [eax+0x1a8]
1002cbf5:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
1002cbf8:	83 c4 04             	add    esp,0x4
1002cbfb:	43                   	inc    ebx
1002cbfc:	83 c5 04             	add    ebp,0x4
1002cbff:	3b d8                	cmp    ebx,eax
1002cc01:	72 e3                	jb     0x1002cbe6
1002cc03:	5d                   	pop    ebp
1002cc04:	83 3e 00             	cmp    DWORD PTR [esi],0x0
1002cc07:	74 2f                	je     0x1002cc38
1002cc09:	8b 5e 28             	mov    ebx,DWORD PTR [esi+0x28]
1002cc0c:	8d 8f b0 00 00 00    	lea    ecx,[edi+0xb0]
1002cc12:	53                   	push   ebx
1002cc13:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1002cc19:	c7 46 24 00 00 00 00 	mov    DWORD PTR [esi+0x24],0x0
1002cc20:	e8 8b fa fd ff       	call   0x1000c6b0
1002cc25:	8b 8f c4 00 00 00    	mov    ecx,DWORD PTR [edi+0xc4]
1002cc2b:	53                   	push   ebx
1002cc2c:	51                   	push   ecx
1002cc2d:	8d 8f bc 00 00 00    	lea    ecx,[edi+0xbc]
1002cc33:	e8 f8 f9 fd ff       	call   0x1000c630
1002cc38:	8b b7 c0 00 00 00    	mov    esi,DWORD PTR [edi+0xc0]
1002cc3e:	5b                   	pop    ebx
1002cc3f:	85 f6                	test   esi,esi
1002cc41:	75 38                	jne    0x1002cc7b
1002cc43:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002cc49:	68 d7 10 00 00       	push   0x10d7
1002cc4e:	68 e0 70 0d 10       	push   0x100d70e0
1002cc53:	8b 11                	mov    edx,DWORD PTR [ecx]
1002cc55:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1002cc5b:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002cc60:	68 14 71 0d 10       	push   0x100d7114
1002cc65:	8b 08                	mov    ecx,DWORD PTR [eax]
1002cc67:	68 c4 6c 0d 10       	push   0x100d6cc4
1002cc6c:	50                   	push   eax
1002cc6d:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1002cc73:	83 c4 0c             	add    esp,0xc
1002cc76:	33 c0                	xor    eax,eax
1002cc78:	5f                   	pop    edi
1002cc79:	5e                   	pop    esi
1002cc7a:	c3                   	ret
1002cc7b:	56                   	push   esi
1002cc7c:	8d 8f bc 00 00 00    	lea    ecx,[edi+0xbc]
1002cc82:	e8 29 fa fd ff       	call   0x1000c6b0
1002cc87:	8b 97 b8 00 00 00    	mov    edx,DWORD PTR [edi+0xb8]
1002cc8d:	56                   	push   esi
1002cc8e:	52                   	push   edx
1002cc8f:	8d 8f b0 00 00 00    	lea    ecx,[edi+0xb0]
1002cc95:	e8 96 f9 fd ff       	call   0x1000c630
1002cc9a:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
1002cc9d:	5f                   	pop    edi
1002cc9e:	8b c6                	mov    eax,esi
1002cca0:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1002cca6:	c7 46 24 00 00 00 00 	mov    DWORD PTR [esi+0x24],0x0
1002ccad:	5e                   	pop    esi
1002ccae:	c3                   	ret
1002ccaf:	90                   	nop

*/
void FXManager::GetShardGroup() {
    if (!g_pLTClient) return;
    uint32 dwId = 0;
    g_pLTClient->GetServerObject(dwId);
}

// 0x1002ccb0: FXManager::AddLCDNumbersToModel
/*
1002ccb0:	83 ec 48             	sub    esp,0x48
1002ccb3:	53                   	push   ebx
1002ccb4:	55                   	push   ebp
1002ccb5:	56                   	push   esi
1002ccb6:	57                   	push   edi
1002ccb7:	8b 7c 24 5c          	mov    edi,DWORD PTR [esp+0x5c]
1002ccbb:	8b d9                	mov    ebx,ecx
1002ccbd:	85 ff                	test   edi,edi
1002ccbf:	0f 84 f5 03 00 00    	je     0x1002d0ba
1002ccc5:	83 7c 24 6c 63       	cmp    DWORD PTR [esp+0x6c],0x63
1002ccca:	0f 87 ea 03 00 00    	ja     0x1002d0ba
1002ccd0:	8b 8b 9c 00 00 00    	mov    ecx,DWORD PTR [ebx+0x9c]
1002ccd6:	85 c9                	test   ecx,ecx
1002ccd8:	74 6d                	je     0x1002cd47
1002ccda:	8b 71 08             	mov    esi,DWORD PTR [ecx+0x8]
1002ccdd:	8b 06                	mov    eax,DWORD PTR [esi]
1002ccdf:	3b c7                	cmp    eax,edi
1002cce1:	75 5e                	jne    0x1002cd41
1002cce3:	83 7e 08 ff          	cmp    DWORD PTR [esi+0x8],0xffffffff
1002cce7:	74 58                	je     0x1002cd41
1002cce9:	8b 29                	mov    ebp,DWORD PTR [ecx]
1002cceb:	85 c0                	test   eax,eax
1002cced:	74 4e                	je     0x1002cd3d
1002ccef:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1002ccf2:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002ccf8:	8b 7e 0c             	mov    edi,DWORD PTR [esi+0xc]
1002ccfb:	51                   	push   ecx
1002ccfc:	50                   	push   eax
1002ccfd:	ff 92 40 01 00 00    	call   DWORD PTR [edx+0x140]
1002cd03:	83 c4 08             	add    esp,0x8
1002cd06:	8d 8b 98 00 00 00    	lea    ecx,[ebx+0x98]
1002cd0c:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
1002cd13:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1002cd19:	57                   	push   edi
1002cd1a:	c7 46 08 ff ff ff ff 	mov    DWORD PTR [esi+0x8],0xffffffff
1002cd21:	e8 8a f9 fd ff       	call   0x1000c6b0
1002cd26:	8b 83 ac 00 00 00    	mov    eax,DWORD PTR [ebx+0xac]
1002cd2c:	57                   	push   edi
1002cd2d:	50                   	push   eax
1002cd2e:	8d 8b a4 00 00 00    	lea    ecx,[ebx+0xa4]
1002cd34:	e8 f7 f8 fd ff       	call   0x1000c630
1002cd39:	8b 7c 24 5c          	mov    edi,DWORD PTR [esp+0x5c]
1002cd3d:	8b cd                	mov    ecx,ebp
1002cd3f:	eb 02                	jmp    0x1002cd43
1002cd41:	8b 09                	mov    ecx,DWORD PTR [ecx]
1002cd43:	85 c9                	test   ecx,ecx
1002cd45:	75 93                	jne    0x1002ccda
1002cd47:	8b cb                	mov    ecx,ebx
1002cd49:	e8 c2 fc ff ff       	call   0x1002ca10
1002cd4e:	8b f0                	mov    esi,eax
1002cd50:	85 f6                	test   esi,esi
1002cd52:	0f 84 62 03 00 00    	je     0x1002d0ba
1002cd58:	8b 4c 24 6c          	mov    ecx,DWORD PTR [esp+0x6c]
1002cd5c:	8d 54 24 18          	lea    edx,[esp+0x18]
1002cd60:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1002cd64:	52                   	push   edx
1002cd65:	89 3e                	mov    DWORD PTR [esi],edi
1002cd67:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
1002cd6a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002cd70:	50                   	push   eax
1002cd71:	6a 00                	push   0x0
1002cd73:	57                   	push   edi
1002cd74:	ff 91 5c 01 00 00    	call   DWORD PTR [ecx+0x15c]
1002cd7a:	83 c4 10             	add    esp,0x10
1002cd7d:	85 c0                	test   eax,eax
1002cd7f:	74 29                	je     0x1002cdaa
1002cd81:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002cd87:	68 0e 11 00 00       	push   0x110e
1002cd8c:	68 e0 70 0d 10       	push   0x100d70e0
1002cd91:	8b 11                	mov    edx,DWORD PTR [ecx]
1002cd93:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1002cd99:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002cd9e:	68 48 72 0d 10       	push   0x100d7248
1002cda3:	8b 08                	mov    ecx,DWORD PTR [eax]
1002cda5:	e9 01 03 00 00       	jmp    0x1002d0ab
1002cdaa:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1002cdae:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1002cdb2:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
1002cdb6:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
1002cdbd:	00 
1002cdbe:	df 6c 24 20          	fild   QWORD PTR [esp+0x20]
1002cdc2:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
1002cdc6:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1002cdcb:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
1002cdd2:	00 
1002cdd3:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002cdd7:	df 6c 24 20          	fild   QWORD PTR [esp+0x20]
1002cddb:	83 78 2c 0a          	cmp    DWORD PTR [eax+0x2c],0xa
1002cddf:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002cde3:	72 0b                	jb     0x1002cdf0
1002cde5:	8b 78 28             	mov    edi,DWORD PTR [eax+0x28]
1002cde8:	81 c7 a0 00 00 00    	add    edi,0xa0
1002cdee:	75 29                	jne    0x1002ce19
1002cdf0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002cdf6:	68 1b 11 00 00       	push   0x111b
1002cdfb:	68 e0 70 0d 10       	push   0x100d70e0
1002ce00:	8b 11                	mov    edx,DWORD PTR [ecx]
1002ce02:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1002ce08:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002ce0d:	68 00 72 0d 10       	push   0x100d7200
1002ce12:	8b 08                	mov    ecx,DWORD PTR [eax]
1002ce14:	e9 92 02 00 00       	jmp    0x1002d0ab
1002ce19:	8b 6c 24 6c          	mov    ebp,DWORD PTR [esp+0x6c]
1002ce1d:	b8 cd cc cc cc       	mov    eax,0xcccccccd
1002ce22:	f7 e5                	mul    ebp
1002ce24:	8b ca                	mov    ecx,edx
1002ce26:	8b c5                	mov    eax,ebp
1002ce28:	33 d2                	xor    edx,edx
1002ce2a:	bd 0a 00 00 00       	mov    ebp,0xa
1002ce2f:	f7 f5                	div    ebp
1002ce31:	8b 6c 24 5c          	mov    ebp,DWORD PTR [esp+0x5c]
1002ce35:	33 c0                	xor    eax,eax
1002ce37:	c1 e9 03             	shr    ecx,0x3
1002ce3a:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
1002ce3e:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
1002ce42:	c7 44 24 2c e0 71 0d 	mov    DWORD PTR [esp+0x2c],0x100d71e0
1002ce49:	10 
1002ce4a:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
1002ce4e:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
1002ce52:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1002ce56:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1002ce59:	8d 14 49             	lea    edx,[ecx+ecx*2]
1002ce5c:	33 c9                	xor    ecx,ecx
1002ce5e:	66 8b 0c 90          	mov    cx,WORD PTR [eax+edx*4]
1002ce62:	8d 04 90             	lea    eax,[eax+edx*4]
1002ce65:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
1002ce69:	db 44 24 5c          	fild   DWORD PTR [esp+0x5c]
1002ce6d:	33 d2                	xor    edx,edx
1002ce6f:	33 c9                	xor    ecx,ecx
1002ce71:	d8 0d b4 89 0b 10    	fmul   DWORD PTR ds:0x100b89b4
1002ce77:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1002ce7b:	66 8b 50 02          	mov    dx,WORD PTR [eax+0x2]
1002ce7f:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
1002ce83:	33 d2                	xor    edx,edx
1002ce85:	db 44 24 5c          	fild   DWORD PTR [esp+0x5c]
1002ce89:	d8 0d b0 89 0b 10    	fmul   DWORD PTR ds:0x100b89b0
1002ce8f:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
1002ce93:	66 8b 48 04          	mov    cx,WORD PTR [eax+0x4]
1002ce97:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
1002ce9b:	33 c9                	xor    ecx,ecx
1002ce9d:	db 44 24 5c          	fild   DWORD PTR [esp+0x5c]
1002cea1:	d8 0d b4 89 0b 10    	fmul   DWORD PTR ds:0x100b89b4
1002cea7:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1002ceab:	66 8b 50 06          	mov    dx,WORD PTR [eax+0x6]
1002ceaf:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
1002ceb3:	33 d2                	xor    edx,edx
1002ceb5:	db 44 24 5c          	fild   DWORD PTR [esp+0x5c]
1002ceb9:	d8 0d b0 89 0b 10    	fmul   DWORD PTR ds:0x100b89b0
1002cebf:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
1002cec3:	66 8b 48 08          	mov    cx,WORD PTR [eax+0x8]
1002cec7:	66 8b 10             	mov    dx,WORD PTR [eax]
1002ceca:	2b ca                	sub    ecx,edx
1002cecc:	33 d2                	xor    edx,edx
1002cece:	66 8b 50 02          	mov    dx,WORD PTR [eax+0x2]
1002ced2:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
1002ced6:	db 44 24 5c          	fild   DWORD PTR [esp+0x5c]
1002ceda:	33 c9                	xor    ecx,ecx
1002cedc:	66 8b 48 0a          	mov    cx,WORD PTR [eax+0xa]
1002cee0:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
1002cee4:	d8 4c 24 68          	fmul   DWORD PTR [esp+0x68]
1002cee8:	2b ca                	sub    ecx,edx
1002ceea:	25 ff ff 00 00       	and    eax,0xffff
1002ceef:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
1002cef3:	8b 4c 24 62          	mov    ecx,DWORD PTR [esp+0x62]
1002cef7:	81 e1 ff ff 00 00    	and    ecx,0xffff
1002cefd:	d9 5c 24 5c          	fstp   DWORD PTR [esp+0x5c]
1002cf01:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
1002cf05:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
1002cf09:	89 4c 24 60          	mov    DWORD PTR [esp+0x60],ecx
1002cf0d:	d8 4c 24 68          	fmul   DWORD PTR [esp+0x68]
1002cf11:	d9 5c 24 68          	fstp   DWORD PTR [esp+0x68]
1002cf15:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
1002cf19:	d9 c0                	fld    st(0)
1002cf1b:	d8 64 24 5c          	fsub   DWORD PTR [esp+0x5c]
1002cf1f:	d8 74 24 10          	fdiv   DWORD PTR [esp+0x10]
1002cf23:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
1002cf27:	d8 44 24 5c          	fadd   DWORD PTR [esp+0x5c]
1002cf2b:	d8 74 24 10          	fdiv   DWORD PTR [esp+0x10]
1002cf2f:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
1002cf33:	db 44 24 60          	fild   DWORD PTR [esp+0x60]
1002cf37:	d9 c0                	fld    st(0)
1002cf39:	d8 64 24 68          	fsub   DWORD PTR [esp+0x68]
1002cf3d:	d8 74 24 14          	fdiv   DWORD PTR [esp+0x14]
1002cf41:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002cf46:	8d 54 24 28          	lea    edx,[esp+0x28]
1002cf4a:	52                   	push   edx
1002cf4b:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
1002cf4f:	d8 44 24 6c          	fadd   DWORD PTR [esp+0x6c]
1002cf53:	d8 74 24 18          	fdiv   DWORD PTR [esp+0x18]
1002cf57:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
1002cf5b:	ff 90 3c 01 00 00    	call   DWORD PTR [eax+0x13c]
1002cf61:	83 c4 04             	add    esp,0x4
1002cf64:	3d ff 00 00 00       	cmp    eax,0xff
1002cf69:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1002cf6c:	75 1d                	jne    0x1002cf8b
1002cf6e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002cf74:	68 3e 11 00 00       	push   0x113e
1002cf79:	68 e0 70 0d 10       	push   0x100d70e0
1002cf7e:	8b 11                	mov    edx,DWORD PTR [ecx]
1002cf80:	ff 92 20 01 00 00    	call   DWORD PTR [edx+0x120]
1002cf86:	e9 14 01 00 00       	jmp    0x1002d09f
1002cf8b:	8b cb                	mov    ecx,ebx
1002cf8d:	e8 7e fa ff ff       	call   0x1002ca10
1002cf92:	8b f0                	mov    esi,eax
1002cf94:	85 f6                	test   esi,esi
1002cf96:	0f 84 1e 01 00 00    	je     0x1002d0ba
1002cf9c:	8b 54 24 6c          	mov    edx,DWORD PTR [esp+0x6c]
1002cfa0:	89 2e                	mov    DWORD PTR [esi],ebp
1002cfa2:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
1002cfa5:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1002cfa9:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
1002cfac:	33 d2                	xor    edx,edx
1002cfae:	8d 04 40             	lea    eax,[eax+eax*2]
1002cfb1:	66 8b 14 81          	mov    dx,WORD PTR [ecx+eax*4]
1002cfb5:	8d 04 81             	lea    eax,[ecx+eax*4]
1002cfb8:	89 54 24 6c          	mov    DWORD PTR [esp+0x6c],edx
1002cfbc:	33 c9                	xor    ecx,ecx
1002cfbe:	db 44 24 6c          	fild   DWORD PTR [esp+0x6c]
1002cfc2:	33 d2                	xor    edx,edx
1002cfc4:	d8 0d b4 89 0b 10    	fmul   DWORD PTR ds:0x100b89b4
1002cfca:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1002cfce:	66 8b 48 02          	mov    cx,WORD PTR [eax+0x2]
1002cfd2:	89 4c 24 6c          	mov    DWORD PTR [esp+0x6c],ecx
1002cfd6:	33 c9                	xor    ecx,ecx
1002cfd8:	db 44 24 6c          	fild   DWORD PTR [esp+0x6c]
1002cfdc:	d8 0d b0 89 0b 10    	fmul   DWORD PTR ds:0x100b89b0
1002cfe2:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
1002cfe6:	66 8b 50 04          	mov    dx,WORD PTR [eax+0x4]
1002cfea:	89 54 24 6c          	mov    DWORD PTR [esp+0x6c],edx
1002cfee:	8b 54 24 64          	mov    edx,DWORD PTR [esp+0x64]
1002cff2:	db 44 24 6c          	fild   DWORD PTR [esp+0x6c]
1002cff6:	81 e2 ff ff 00 00    	and    edx,0xffff
1002cffc:	d8 0d b4 89 0b 10    	fmul   DWORD PTR ds:0x100b89b4
1002d002:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
1002d006:	66 8b 48 06          	mov    cx,WORD PTR [eax+0x6]
1002d00a:	8b 44 24 66          	mov    eax,DWORD PTR [esp+0x66]
1002d00e:	89 4c 24 6c          	mov    DWORD PTR [esp+0x6c],ecx
1002d012:	25 ff ff 00 00       	and    eax,0xffff
1002d017:	db 44 24 6c          	fild   DWORD PTR [esp+0x6c]
1002d01b:	89 54 24 6c          	mov    DWORD PTR [esp+0x6c],edx
1002d01f:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002d025:	8d 4c 24 28          	lea    ecx,[esp+0x28]
1002d029:	d8 0d b0 89 0b 10    	fmul   DWORD PTR ds:0x100b89b0
1002d02f:	51                   	push   ecx
1002d030:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
1002d034:	db 44 24 70          	fild   DWORD PTR [esp+0x70]
1002d038:	89 44 24 70          	mov    DWORD PTR [esp+0x70],eax
1002d03c:	d9 c0                	fld    st(0)
1002d03e:	d8 64 24 60          	fsub   DWORD PTR [esp+0x60]
1002d042:	d8 74 24 14          	fdiv   DWORD PTR [esp+0x14]
1002d046:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
1002d04a:	d8 44 24 60          	fadd   DWORD PTR [esp+0x60]
1002d04e:	d8 74 24 14          	fdiv   DWORD PTR [esp+0x14]
1002d052:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
1002d056:	db 44 24 70          	fild   DWORD PTR [esp+0x70]
1002d05a:	d9 c0                	fld    st(0)
1002d05c:	d8 64 24 6c          	fsub   DWORD PTR [esp+0x6c]
1002d060:	d8 74 24 18          	fdiv   DWORD PTR [esp+0x18]
1002d064:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
1002d068:	d8 44 24 6c          	fadd   DWORD PTR [esp+0x6c]
1002d06c:	d8 74 24 18          	fdiv   DWORD PTR [esp+0x18]
1002d070:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
1002d074:	ff 92 3c 01 00 00    	call   DWORD PTR [edx+0x13c]
1002d07a:	83 c4 04             	add    esp,0x4
1002d07d:	3d ff 00 00 00       	cmp    eax,0xff
1002d082:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1002d085:	75 33                	jne    0x1002d0ba
1002d087:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002d08d:	68 5b 11 00 00       	push   0x115b
1002d092:	68 e0 70 0d 10       	push   0x100d70e0
1002d097:	8b 01                	mov    eax,DWORD PTR [ecx]
1002d099:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1002d09f:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002d0a4:	68 9c 71 0d 10       	push   0x100d719c
1002d0a9:	8b 08                	mov    ecx,DWORD PTR [eax]
1002d0ab:	68 c4 6c 0d 10       	push   0x100d6cc4
1002d0b0:	50                   	push   eax
1002d0b1:	ff 91 28 01 00 00    	call   DWORD PTR [ecx+0x128]
1002d0b7:	83 c4 0c             	add    esp,0xc
1002d0ba:	5f                   	pop    edi
1002d0bb:	5e                   	pop    esi
1002d0bc:	5d                   	pop    ebp
1002d0bd:	5b                   	pop    ebx
1002d0be:	83 c4 48             	add    esp,0x48
1002d0c1:	c2 14 00             	ret    0x14
1002d0c4:	90                   	nop
1002d0c5:	90                   	nop
1002d0c6:	90                   	nop
1002d0c7:	90                   	nop
1002d0c8:	90                   	nop
1002d0c9:	90                   	nop
1002d0ca:	90                   	nop
1002d0cb:	90                   	nop
1002d0cc:	90                   	nop
1002d0cd:	90                   	nop
1002d0ce:	90                   	nop
1002d0cf:	90                   	nop
1002d0d0:	53                   	push   ebx
1002d0d1:	8b d9                	mov    ebx,ecx
1002d0d3:	8b 8b 9c 00 00 00    	mov    ecx,DWORD PTR [ebx+0x9c]
1002d0d9:	85 c9                	test   ecx,ecx
1002d0db:	74 73                	je     0x1002d150
1002d0dd:	55                   	push   ebp
1002d0de:	56                   	push   esi
1002d0df:	57                   	push   edi
1002d0e0:	8b 71 08             	mov    esi,DWORD PTR [ecx+0x8]
1002d0e3:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1002d0e7:	8b 06                	mov    eax,DWORD PTR [esi]
1002d0e9:	3b c2                	cmp    eax,edx
1002d0eb:	75 5a                	jne    0x1002d147
1002d0ed:	83 7e 08 ff          	cmp    DWORD PTR [esi+0x8],0xffffffff
1002d0f1:	74 54                	je     0x1002d147
1002d0f3:	8b 29                	mov    ebp,DWORD PTR [ecx]
1002d0f5:	85 c0                	test   eax,eax
1002d0f7:	74 4a                	je     0x1002d143
1002d0f9:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1002d0fc:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002d102:	8b 7e 0c             	mov    edi,DWORD PTR [esi+0xc]
1002d105:	51                   	push   ecx
1002d106:	50                   	push   eax
1002d107:	ff 92 40 01 00 00    	call   DWORD PTR [edx+0x140]
1002d10d:	83 c4 08             	add    esp,0x8
1002d110:	8d 8b 98 00 00 00    	lea    ecx,[ebx+0x98]
1002d116:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
1002d11d:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1002d123:	57                   	push   edi
1002d124:	c7 46 08 ff ff ff ff 	mov    DWORD PTR [esi+0x8],0xffffffff
1002d12b:	e8 80 f5 fd ff       	call   0x1000c6b0
1002d130:	8b 83 ac 00 00 00    	mov    eax,DWORD PTR [ebx+0xac]
1002d136:	57                   	push   edi
1002d137:	50                   	push   eax
1002d138:	8d 8b a4 00 00 00    	lea    ecx,[ebx+0xa4]
1002d13e:	e8 ed f4 fd ff       	call   0x1000c630
1002d143:	8b cd                	mov    ecx,ebp
1002d145:	eb 02                	jmp    0x1002d149
1002d147:	8b 09                	mov    ecx,DWORD PTR [ecx]
1002d149:	85 c9                	test   ecx,ecx
1002d14b:	75 93                	jne    0x1002d0e0
1002d14d:	5f                   	pop    edi
1002d14e:	5e                   	pop    esi
1002d14f:	5d                   	pop    ebp
1002d150:	5b                   	pop    ebx
1002d151:	c2 04 00             	ret    0x4
1002d154:	90                   	nop
1002d155:	90                   	nop
1002d156:	90                   	nop
1002d157:	90                   	nop
1002d158:	90                   	nop
1002d159:	90                   	nop
1002d15a:	90                   	nop
1002d15b:	90                   	nop
1002d15c:	90                   	nop
1002d15d:	90                   	nop
1002d15e:	90                   	nop
1002d15f:	90                   	nop
1002d160:	83 ec 10             	sub    esp,0x10
1002d163:	53                   	push   ebx
1002d164:	8b d9                	mov    ebx,ecx
1002d166:	55                   	push   ebp
1002d167:	56                   	push   esi
1002d168:	8b 73 18             	mov    esi,DWORD PTR [ebx+0x18]
1002d16b:	57                   	push   edi
1002d16c:	85 f6                	test   esi,esi
1002d16e:	74 4e                	je     0x1002d1be
1002d170:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1002d173:	85 c0                	test   eax,eax
1002d175:	74 41                	je     0x1002d1b8
1002d177:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1002d17b:	8b 50 24             	mov    edx,DWORD PTR [eax+0x24]
1002d17e:	3b d1                	cmp    edx,ecx
1002d180:	75 36                	jne    0x1002d1b8
1002d182:	8b 10                	mov    edx,DWORD PTR [eax]
1002d184:	f6 c2 58             	test   dl,0x58
1002d187:	74 2f                	je     0x1002d1b8
1002d189:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1002d18c:	8b 3e                	mov    edi,DWORD PTR [esi]
1002d18e:	8d 2c cd 00 00 00 00 	lea    ebp,[ecx*8+0x0]
1002d195:	2b e9                	sub    ebp,ecx
1002d197:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1002d199:	c1 e5 05             	shl    ebp,0x5
1002d19c:	f6 44 29 07 10       	test   BYTE PTR [ecx+ebp*1+0x7],0x10
1002d1a1:	74 09                	je     0x1002d1ac
1002d1a3:	80 ca 80             	or     dl,0x80
1002d1a6:	8b f7                	mov    esi,edi
1002d1a8:	89 10                	mov    DWORD PTR [eax],edx
1002d1aa:	eb 0e                	jmp    0x1002d1ba
1002d1ac:	56                   	push   esi
1002d1ad:	8b cb                	mov    ecx,ebx
1002d1af:	e8 7c b0 ff ff       	call   0x10028230
1002d1b4:	8b f7                	mov    esi,edi
1002d1b6:	eb 02                	jmp    0x1002d1ba
1002d1b8:	8b 36                	mov    esi,DWORD PTR [esi]
1002d1ba:	85 f6                	test   esi,esi
1002d1bc:	75 b2                	jne    0x1002d170
1002d1be:	8b 83 84 00 00 00    	mov    eax,DWORD PTR [ebx+0x84]
1002d1c4:	85 c0                	test   eax,eax
1002d1c6:	0f 84 29 01 00 00    	je     0x1002d2f5
1002d1cc:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1002d1cf:	85 c9                	test   ecx,ecx
1002d1d1:	0f 84 14 01 00 00    	je     0x1002d2eb
1002d1d7:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1002d1db:	8b 31                	mov    esi,DWORD PTR [ecx]
1002d1dd:	3b f2                	cmp    esi,edx
1002d1df:	0f 85 06 01 00 00    	jne    0x1002d2eb
1002d1e5:	8b 08                	mov    ecx,DWORD PTR [eax]
1002d1e7:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
1002d1eb:	8b 8b 80 00 00 00    	mov    ecx,DWORD PTR [ebx+0x80]
1002d1f1:	85 c9                	test   ecx,ecx
1002d1f3:	0f 84 ec 00 00 00    	je     0x1002d2e5
1002d1f9:	85 c0                	test   eax,eax
1002d1fb:	74 06                	je     0x1002d203
1002d1fd:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002d201:	eb 0a                	jmp    0x1002d20d
1002d203:	8b 93 84 00 00 00    	mov    edx,DWORD PTR [ebx+0x84]
1002d209:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
1002d20d:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1002d211:	8b 7e 08             	mov    edi,DWORD PTR [esi+0x8]
1002d214:	89 7c 24 18          	mov    DWORD PTR [esp+0x18],edi
1002d218:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
1002d21b:	85 c0                	test   eax,eax
1002d21d:	74 09                	je     0x1002d228
1002d21f:	50                   	push   eax
1002d220:	e8 0b 0e 01 00       	call   0x1003e030
1002d225:	83 c4 04             	add    esp,0x4
1002d228:	8b 47 1c             	mov    eax,DWORD PTR [edi+0x1c]
1002d22b:	83 ca ff             	or     edx,0xffffffff
1002d22e:	3b c2                	cmp    eax,edx
1002d230:	c7 47 14 00 00 00 00 	mov    DWORD PTR [edi+0x14],0x0
1002d237:	0f 84 89 00 00 00    	je     0x1002d2c6
1002d23d:	8b 07                	mov    eax,DWORD PTR [edi]
1002d23f:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1002d243:	8b 83 9c 00 00 00    	mov    eax,DWORD PTR [ebx+0x9c]
1002d249:	85 c0                	test   eax,eax
1002d24b:	74 76                	je     0x1002d2c3
1002d24d:	8b 70 08             	mov    esi,DWORD PTR [eax+0x8]
1002d250:	8b 6c 24 14          	mov    ebp,DWORD PTR [esp+0x14]
1002d254:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002d256:	3b cd                	cmp    ecx,ebp
1002d258:	75 5f                	jne    0x1002d2b9
1002d25a:	39 56 08             	cmp    DWORD PTR [esi+0x8],edx
1002d25d:	74 5a                	je     0x1002d2b9
1002d25f:	8b 28                	mov    ebp,DWORD PTR [eax]
1002d261:	85 c9                	test   ecx,ecx
1002d263:	74 50                	je     0x1002d2b5
1002d265:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1002d268:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002d26d:	8b 7e 0c             	mov    edi,DWORD PTR [esi+0xc]
1002d270:	52                   	push   edx
1002d271:	51                   	push   ecx
1002d272:	ff 90 40 01 00 00    	call   DWORD PTR [eax+0x140]
1002d278:	83 c4 08             	add    esp,0x8
1002d27b:	8d 8b 98 00 00 00    	lea    ecx,[ebx+0x98]
1002d281:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
1002d288:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1002d28e:	57                   	push   edi
1002d28f:	c7 46 08 ff ff ff ff 	mov    DWORD PTR [esi+0x8],0xffffffff
1002d296:	e8 15 f4 fd ff       	call   0x1000c6b0
1002d29b:	8b 8b ac 00 00 00    	mov    ecx,DWORD PTR [ebx+0xac]
1002d2a1:	57                   	push   edi
1002d2a2:	51                   	push   ecx
1002d2a3:	8d 8b a4 00 00 00    	lea    ecx,[ebx+0xa4]
1002d2a9:	e8 82 f3 fd ff       	call   0x1000c630
1002d2ae:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
1002d2b2:	83 ca ff             	or     edx,0xffffffff
1002d2b5:	8b c5                	mov    eax,ebp
1002d2b7:	eb 02                	jmp    0x1002d2bb
1002d2b9:	8b 00                	mov    eax,DWORD PTR [eax]
1002d2bb:	85 c0                	test   eax,eax
1002d2bd:	75 8e                	jne    0x1002d24d
1002d2bf:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
1002d2c3:	89 57 1c             	mov    DWORD PTR [edi+0x1c],edx
1002d2c6:	56                   	push   esi
1002d2c7:	8d 8b 80 00 00 00    	lea    ecx,[ebx+0x80]
1002d2cd:	e8 de f3 fd ff       	call   0x1000c6b0
1002d2d2:	8b 93 94 00 00 00    	mov    edx,DWORD PTR [ebx+0x94]
1002d2d8:	56                   	push   esi
1002d2d9:	52                   	push   edx
1002d2da:	8d 8b 8c 00 00 00    	lea    ecx,[ebx+0x8c]
1002d2e0:	e8 4b f3 fd ff       	call   0x1000c630
1002d2e5:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1002d2e9:	eb 02                	jmp    0x1002d2ed
1002d2eb:	8b 00                	mov    eax,DWORD PTR [eax]
1002d2ed:	85 c0                	test   eax,eax
1002d2ef:	0f 85 d7 fe ff ff    	jne    0x1002d1cc
1002d2f5:	5f                   	pop    edi
1002d2f6:	5e                   	pop    esi
1002d2f7:	5d                   	pop    ebp
1002d2f8:	5b                   	pop    ebx
1002d2f9:	83 c4 10             	add    esp,0x10
1002d2fc:	c2 04 00             	ret    0x4
1002d2ff:	90                   	nop
1002d300:	83 ec 58             	sub    esp,0x58
1002d303:	53                   	push   ebx
1002d304:	8b d9                	mov    ebx,ecx
1002d306:	56                   	push   esi
1002d307:	57                   	push   edi
1002d308:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
1002d30c:	e8 3f c8 fe ff       	call   0x10019b50
1002d311:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002d317:	8b 74 24 68          	mov    esi,DWORD PTR [esp+0x68]
1002d31b:	56                   	push   esi
1002d31c:	8b 01                	mov    eax,DWORD PTR [ecx]
1002d31e:	ff 50 48             	call   DWORD PTR [eax+0x48]
1002d321:	8b 16                	mov    edx,DWORD PTR [esi]
1002d323:	25 ff ff 00 00       	and    eax,0xffff
1002d328:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1002d32c:	8d 44 24 20          	lea    eax,[esp+0x20]
1002d330:	50                   	push   eax
1002d331:	8b ce                	mov    ecx,esi
1002d333:	ff 52 28             	call   DWORD PTR [edx+0x28]
1002d336:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1002d33a:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1002d33e:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
1002d342:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
1002d346:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1002d34a:	56                   	push   esi
1002d34b:	51                   	push   ecx
1002d34c:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
1002d350:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
1002d354:	e8 17 49 fe ff       	call   0x10011c70
1002d359:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1002d35d:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
1002d361:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1002d365:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
1002d369:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
1002d36d:	83 c4 08             	add    esp,0x8
1002d370:	33 ff                	xor    edi,edi
1002d372:	3d 49 01 00 00       	cmp    eax,0x149
1002d377:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
1002d37b:	89 4c 24 48          	mov    DWORD PTR [esp+0x48],ecx
1002d37f:	75 46                	jne    0x1002d3c7
1002d381:	8d 54 24 34          	lea    edx,[esp+0x34]
1002d385:	52                   	push   edx
1002d386:	e8 d5 af fd ff       	call   0x10008360
1002d38b:	83 e0 01             	and    eax,0x1
1002d38e:	83 c0 0f             	add    eax,0xf
1002d391:	50                   	push   eax
1002d392:	e8 a9 00 01 00       	call   0x1003d440
1002d397:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1002d39c:	83 c4 08             	add    esp,0x8
1002d39f:	bf 2d 00 00 00       	mov    edi,0x2d
1002d3a4:	c7 44 24 68 01 00 70 	mov    DWORD PTR [esp+0x68],0x41700001
1002d3ab:	41 
1002d3ac:	8b 88 20 82 01 00    	mov    ecx,DWORD PTR [eax+0x18220]
1002d3b2:	85 c9                	test   ecx,ecx
1002d3b4:	0f 85 5a 01 00 00    	jne    0x1002d514
1002d3ba:	c7 44 24 30 84 01 00 	mov    DWORD PTR [esp+0x30],0x184
1002d3c1:	00 
1002d3c2:	e9 4d 01 00 00       	jmp    0x1002d514
1002d3c7:	3d 4b 01 00 00       	cmp    eax,0x14b
1002d3cc:	75 47                	jne    0x1002d415
1002d3ce:	8d 4c 24 34          	lea    ecx,[esp+0x34]
1002d3d2:	51                   	push   ecx
1002d3d3:	e8 88 af fd ff       	call   0x10008360
1002d3d8:	83 e0 01             	and    eax,0x1
1002d3db:	83 c0 11             	add    eax,0x11
1002d3de:	50                   	push   eax
1002d3df:	e8 5c 00 01 00       	call   0x1003d440
1002d3e4:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1002d3ea:	83 c4 08             	add    esp,0x8
1002d3ed:	bf 41 00 00 00       	mov    edi,0x41
1002d3f2:	c7 44 24 68 00 00 a0 	mov    DWORD PTR [esp+0x68],0x41a00000
1002d3f9:	41 
1002d3fa:	8b 82 20 82 01 00    	mov    eax,DWORD PTR [edx+0x18220]
1002d400:	85 c0                	test   eax,eax
1002d402:	0f 85 0c 01 00 00    	jne    0x1002d514
1002d408:	c7 44 24 30 89 01 00 	mov    DWORD PTR [esp+0x30],0x189
1002d40f:	00 
1002d410:	e9 ff 00 00 00       	jmp    0x1002d514
1002d415:	3d 4d 01 00 00       	cmp    eax,0x14d
1002d41a:	75 34                	jne    0x1002d450
1002d41c:	8d 44 24 34          	lea    eax,[esp+0x34]
1002d420:	50                   	push   eax
1002d421:	e8 3a af fd ff       	call   0x10008360
1002d426:	83 e0 01             	and    eax,0x1
1002d429:	83 c0 09             	add    eax,0x9
1002d42c:	50                   	push   eax
1002d42d:	e8 0e 00 01 00       	call   0x1003d440
1002d432:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1002d438:	83 c4 08             	add    esp,0x8
1002d43b:	bf 64 00 00 00       	mov    edi,0x64
1002d440:	c7 44 24 68 01 00 70 	mov    DWORD PTR [esp+0x68],0x41700001
1002d447:	41 
1002d448:	8b 81 20 82 01 00    	mov    eax,DWORD PTR [ecx+0x18220]
1002d44e:	eb b0                	jmp    0x1002d400
1002d450:	3d 51 01 00 00       	cmp    eax,0x151
1002d455:	75 3c                	jne    0x1002d493
1002d457:	8d 54 24 34          	lea    edx,[esp+0x34]
1002d45b:	52                   	push   edx
1002d45c:	6a 13                	push   0x13
1002d45e:	e8 dd ff 00 00       	call   0x1003d440
1002d463:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1002d468:	83 c4 08             	add    esp,0x8
1002d46b:	bf 0a 00 00 00       	mov    edi,0xa
1002d470:	c7 44 24 68 00 00 20 	mov    DWORD PTR [esp+0x68],0x41200000
1002d477:	41 
1002d478:	8b 88 20 82 01 00    	mov    ecx,DWORD PTR [eax+0x18220]
1002d47e:	85 c9                	test   ecx,ecx
1002d480:	0f 85 8e 00 00 00    	jne    0x1002d514
1002d486:	c7 44 24 30 8a 01 00 	mov    DWORD PTR [esp+0x30],0x18a
1002d48d:	00 
1002d48e:	e9 81 00 00 00       	jmp    0x1002d514
1002d493:	3d 8a 01 00 00       	cmp    eax,0x18a
1002d498:	75 1e                	jne    0x1002d4b8
1002d49a:	8d 4c 24 34          	lea    ecx,[esp+0x34]
1002d49e:	51                   	push   ecx
1002d49f:	6a 14                	push   0x14
1002d4a1:	e8 9a ff 00 00       	call   0x1003d440
1002d4a6:	83 c4 08             	add    esp,0x8
1002d4a9:	bf 0a 00 00 00       	mov    edi,0xa
1002d4ae:	c7 44 24 68 00 00 34 	mov    DWORD PTR [esp+0x68],0x41340000
1002d4b5:	41 
1002d4b6:	eb 5c                	jmp    0x1002d514
1002d4b8:	3d 84 01 00 00       	cmp    eax,0x184
1002d4bd:	75 28                	jne    0x1002d4e7
1002d4bf:	8d 54 24 34          	lea    edx,[esp+0x34]
1002d4c3:	52                   	push   edx
1002d4c4:	e8 97 ae fd ff       	call   0x10008360
1002d4c9:	83 e0 01             	and    eax,0x1
1002d4cc:	83 c0 0b             	add    eax,0xb
1002d4cf:	50                   	push   eax
1002d4d0:	e8 6b ff 00 00       	call   0x1003d440
1002d4d5:	83 c4 08             	add    esp,0x8
1002d4d8:	bf 14 00 00 00       	mov    edi,0x14
1002d4dd:	c7 44 24 68 00 00 8c 	mov    DWORD PTR [esp+0x68],0x418c0000
1002d4e4:	41 
1002d4e5:	eb 2d                	jmp    0x1002d514
1002d4e7:	3d 89 01 00 00       	cmp    eax,0x189
1002d4ec:	75 26                	jne    0x1002d514
1002d4ee:	8d 44 24 34          	lea    eax,[esp+0x34]
1002d4f2:	50                   	push   eax
1002d4f3:	e8 68 ae fd ff       	call   0x10008360
1002d4f8:	83 e0 01             	and    eax,0x1
1002d4fb:	83 c0 0d             	add    eax,0xd
1002d4fe:	50                   	push   eax
1002d4ff:	e8 3c ff 00 00       	call   0x1003d440
1002d504:	83 c4 08             	add    esp,0x8
1002d507:	bf 1e 00 00 00       	mov    edi,0x1e
1002d50c:	c7 44 24 68 00 00 b4 	mov    DWORD PTR [esp+0x68],0x41b40000
1002d513:	41 
1002d514:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
1002d518:	51                   	push   ecx
1002d519:	8b cb                	mov    ecx,ebx
1002d51b:	e8 10 9e ff ff       	call   0x10027330
1002d520:	8a 44 24 6c          	mov    al,BYTE PTR [esp+0x6c]
1002d524:	84 c0                	test   al,al
1002d526:	0f 84 7a 04 00 00    	je     0x1002d9a6
1002d52c:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1002d532:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
1002d536:	df e0                	fnstsw ax
1002d538:	f6 c4 40             	test   ah,0x40
1002d53b:	74 3f                	je     0x1002d57c
1002d53d:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1002d543:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
1002d547:	df e0                	fnstsw ax
1002d549:	f6 c4 40             	test   ah,0x40
1002d54c:	74 2e                	je     0x1002d57c
1002d54e:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1002d554:	d8 5c 24 1c          	fcomp  DWORD PTR [esp+0x1c]
1002d558:	df e0                	fnstsw ax
1002d55a:	f6 c4 40             	test   ah,0x40
1002d55d:	74 1d                	je     0x1002d57c
1002d55f:	c7 44 24 14 00 00 b4 	mov    DWORD PTR [esp+0x14],0x42b40000
1002d566:	42 
1002d567:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
1002d56e:	00 
1002d56f:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
1002d576:	00 
1002d577:	e9 c0 00 00 00       	jmp    0x1002d63c
1002d57c:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1002d580:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
1002d584:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002d588:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
1002d58c:	de c1                	faddp  st(1),st
1002d58e:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002d592:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1002d596:	de c1                	faddp  st(1),st
1002d598:	d9 fa                	fsqrt
1002d59a:	d8 1d c0 83 0b 10    	fcomp  DWORD PTR ds:0x100b83c0
1002d5a0:	df e0                	fnstsw ax
1002d5a2:	f6 c4 40             	test   ah,0x40
1002d5a5:	75 19                	jne    0x1002d5c0
1002d5a7:	68 00 00 80 3f       	push   0x3f800000
1002d5ac:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1002d5b0:	e8 5b de fd ff       	call   0x1000b410
1002d5b5:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1002d5b9:	e8 22 de fd ff       	call   0x1000b3e0
1002d5be:	dd d8                	fstp   st(0)
1002d5c0:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002d5c4:	e8 57 6e 07 00       	call   0x100a4420
1002d5c9:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
1002d5cf:	d9 e0                	fchs
1002d5d1:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1002d5d5:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002d5d9:	d8 74 24 1c          	fdiv   DWORD PTR [esp+0x1c]
1002d5dd:	d9 e8                	fld1
1002d5df:	d9 f3                	fpatan
1002d5e1:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
1002d5e7:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
1002d5eb:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1002d5ef:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002d5f5:	df e0                	fnstsw ax
1002d5f7:	f6 c4 01             	test   ah,0x1
1002d5fa:	74 0c                	je     0x1002d608
1002d5fc:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d600:	d8 05 20 85 0b 10    	fadd   DWORD PTR ds:0x100b8520
1002d606:	eb 1b                	jmp    0x1002d623
1002d608:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002d60c:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002d612:	df e0                	fnstsw ax
1002d614:	f6 c4 01             	test   ah,0x1
1002d617:	74 0e                	je     0x1002d627
1002d619:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d61d:	d8 05 1c 85 0b 10    	fadd   DWORD PTR ds:0x100b851c
1002d623:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
1002d627:	8b 54 24 6c          	mov    edx,DWORD PTR [esp+0x6c]
1002d62b:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1002d62f:	6a 00                	push   0x0
1002d631:	52                   	push   edx
1002d632:	50                   	push   eax
1002d633:	8d 4c 24 20          	lea    ecx,[esp+0x20]
1002d637:	e8 84 dd fd ff       	call   0x1000b3c0
1002d63c:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1002d640:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1002d646:	89 4c 24 6c          	mov    DWORD PTR [esp+0x6c],ecx
1002d64a:	8b 8a c8 81 01 00    	mov    ecx,DWORD PTR [edx+0x181c8]
1002d650:	8d 54 24 14          	lea    edx,[esp+0x14]
1002d654:	52                   	push   edx
1002d655:	8b 01                	mov    eax,DWORD PTR [ecx]
1002d657:	ff 50 50             	call   DWORD PTR [eax+0x50]
1002d65a:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1002d660:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
1002d664:	df e0                	fnstsw ax
1002d666:	f6 c4 40             	test   ah,0x40
1002d669:	74 3f                	je     0x1002d6aa
1002d66b:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1002d671:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
1002d675:	df e0                	fnstsw ax
1002d677:	f6 c4 40             	test   ah,0x40
1002d67a:	74 2e                	je     0x1002d6aa
1002d67c:	d9 05 4c 83 0b 10    	fld    DWORD PTR ds:0x100b834c
1002d682:	d8 5c 24 1c          	fcomp  DWORD PTR [esp+0x1c]
1002d686:	df e0                	fnstsw ax
1002d688:	f6 c4 40             	test   ah,0x40
1002d68b:	74 1d                	je     0x1002d6aa
1002d68d:	c7 44 24 14 00 00 b4 	mov    DWORD PTR [esp+0x14],0x42b40000
1002d694:	42 
1002d695:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
1002d69c:	00 
1002d69d:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
1002d6a4:	00 
1002d6a5:	e9 c0 00 00 00       	jmp    0x1002d76a
1002d6aa:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1002d6ae:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
1002d6b2:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002d6b6:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
1002d6ba:	de c1                	faddp  st(1),st
1002d6bc:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002d6c0:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1002d6c4:	de c1                	faddp  st(1),st
1002d6c6:	d9 fa                	fsqrt
1002d6c8:	d8 1d c0 83 0b 10    	fcomp  DWORD PTR ds:0x100b83c0
1002d6ce:	df e0                	fnstsw ax
1002d6d0:	f6 c4 40             	test   ah,0x40
1002d6d3:	75 19                	jne    0x1002d6ee
1002d6d5:	68 00 00 80 3f       	push   0x3f800000
1002d6da:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1002d6de:	e8 2d dd fd ff       	call   0x1000b410
1002d6e3:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1002d6e7:	e8 f4 dc fd ff       	call   0x1000b3e0
1002d6ec:	dd d8                	fstp   st(0)
1002d6ee:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002d6f2:	e8 29 6d 07 00       	call   0x100a4420
1002d6f7:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
1002d6fd:	d9 e0                	fchs
1002d6ff:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1002d703:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002d707:	d8 74 24 1c          	fdiv   DWORD PTR [esp+0x1c]
1002d70b:	d9 e8                	fld1
1002d70d:	d9 f3                	fpatan
1002d70f:	d8 0d 24 85 0b 10    	fmul   DWORD PTR ds:0x100b8524
1002d715:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1002d719:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1002d71d:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002d723:	df e0                	fnstsw ax
1002d725:	f6 c4 01             	test   ah,0x1
1002d728:	74 0c                	je     0x1002d736
1002d72a:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1002d72e:	d8 05 20 85 0b 10    	fadd   DWORD PTR ds:0x100b8520
1002d734:	eb 1b                	jmp    0x1002d751
1002d736:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002d73a:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002d740:	df e0                	fnstsw ax
1002d742:	f6 c4 01             	test   ah,0x1
1002d745:	74 0e                	je     0x1002d755
1002d747:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1002d74b:	d8 05 1c 85 0b 10    	fadd   DWORD PTR ds:0x100b851c
1002d751:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1002d755:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1002d759:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1002d75d:	6a 00                	push   0x0
1002d75f:	50                   	push   eax
1002d760:	51                   	push   ecx
1002d761:	8d 4c 24 20          	lea    ecx,[esp+0x20]
1002d765:	e8 56 dc fd ff       	call   0x1000b3c0
1002d76a:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d76e:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1002d774:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
1002d778:	8b 82 28 82 01 00    	mov    eax,DWORD PTR [edx+0x18228]
1002d77e:	85 c0                	test   eax,eax
1002d780:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
1002d784:	74 3b                	je     0x1002d7c1
1002d786:	8b b3 28 04 00 00    	mov    esi,DWORD PTR [ebx+0x428]
1002d78c:	85 f6                	test   esi,esi
1002d78e:	74 31                	je     0x1002d7c1
1002d790:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1002d793:	85 c9                	test   ecx,ecx
1002d795:	74 2a                	je     0x1002d7c1
1002d797:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d79b:	51                   	push   ecx
1002d79c:	d9 e0                	fchs
1002d79e:	d9 1c 24             	fstp   DWORD PTR [esp]
1002d7a1:	57                   	push   edi
1002d7a2:	e8 79 9c 06 00       	call   0x10097420
1002d7a7:	56                   	push   esi
1002d7a8:	8d 8b 24 04 00 00    	lea    ecx,[ebx+0x424]
1002d7ae:	e8 fd ee fd ff       	call   0x1000c6b0
1002d7b3:	56                   	push   esi
1002d7b4:	6a 00                	push   0x0
1002d7b6:	8d 8b 30 04 00 00    	lea    ecx,[ebx+0x430]
1002d7bc:	e8 6f ee fd ff       	call   0x1000c630
1002d7c1:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1002d7c6:	8b 88 c8 81 01 00    	mov    ecx,DWORD PTR [eax+0x181c8]
1002d7cc:	8b 11                	mov    edx,DWORD PTR [ecx]
1002d7ce:	ff 12                	call   DWORD PTR [edx]
1002d7d0:	83 f8 03             	cmp    eax,0x3
1002d7d3:	0f 85 cd 01 00 00    	jne    0x1002d9a6
1002d7d9:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002d7df:	8b 01                	mov    eax,DWORD PTR [ecx]
1002d7e1:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1002d7e7:	d8 9b 3c 04 00 00    	fcomp  DWORD PTR [ebx+0x43c]
1002d7ed:	df e0                	fnstsw ax
1002d7ef:	f6 c4 01             	test   ah,0x1
1002d7f2:	0f 85 ae 01 00 00    	jne    0x1002d9a6
1002d7f8:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d7fc:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002d802:	df e0                	fnstsw ax
1002d804:	f6 c4 01             	test   ah,0x1
1002d807:	74 1b                	je     0x1002d824
1002d809:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d80d:	d8 05 1c 85 0b 10    	fadd   DWORD PTR ds:0x100b851c
1002d813:	d9 54 24 6c          	fst    DWORD PTR [esp+0x6c]
1002d817:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002d81d:	df e0                	fnstsw ax
1002d81f:	f6 c4 01             	test   ah,0x1
1002d822:	75 36                	jne    0x1002d85a
1002d824:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d828:	d8 1d f8 85 0b 10    	fcomp  DWORD PTR ds:0x100b85f8
1002d82e:	df e0                	fnstsw ax
1002d830:	f6 c4 01             	test   ah,0x1
1002d833:	74 36                	je     0x1002d86b
1002d835:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d839:	d8 0d 9c 89 0b 10    	fmul   DWORD PTR ds:0x100b899c
1002d83f:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1002d845:	d8 e1                	fsub   st,st(1)
1002d847:	d8 4c 24 68          	fmul   DWORD PTR [esp+0x68]
1002d84b:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002d84f:	d8 4c 24 68          	fmul   DWORD PTR [esp+0x68]
1002d853:	d9 e0                	fchs
1002d855:	e9 e5 00 00 00       	jmp    0x1002d93f
1002d85a:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d85e:	d8 1d f8 85 0b 10    	fcomp  DWORD PTR ds:0x100b85f8
1002d864:	df e0                	fnstsw ax
1002d866:	f6 c4 01             	test   ah,0x1
1002d869:	75 3e                	jne    0x1002d8a9
1002d86b:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d86f:	d8 1d 20 85 0b 10    	fcomp  DWORD PTR ds:0x100b8520
1002d875:	df e0                	fnstsw ax
1002d877:	f6 c4 01             	test   ah,0x1
1002d87a:	74 3e                	je     0x1002d8ba
1002d87c:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d880:	d8 25 f8 85 0b 10    	fsub   DWORD PTR ds:0x100b85f8
1002d886:	d8 0d 9c 89 0b 10    	fmul   DWORD PTR ds:0x100b899c
1002d88c:	d9 c0                	fld    st(0)
1002d88e:	d8 4c 24 68          	fmul   DWORD PTR [esp+0x68]
1002d892:	d9 e0                	fchs
1002d894:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002d898:	d8 2d c0 83 0b 10    	fsubr  DWORD PTR ds:0x100b83c0
1002d89e:	d8 4c 24 68          	fmul   DWORD PTR [esp+0x68]
1002d8a2:	d9 e0                	fchs
1002d8a4:	e9 96 00 00 00       	jmp    0x1002d93f
1002d8a9:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d8ad:	d8 1d 20 85 0b 10    	fcomp  DWORD PTR ds:0x100b8520
1002d8b3:	df e0                	fnstsw ax
1002d8b5:	f6 c4 01             	test   ah,0x1
1002d8b8:	75 39                	jne    0x1002d8f3
1002d8ba:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d8be:	d8 1d 98 89 0b 10    	fcomp  DWORD PTR ds:0x100b8998
1002d8c4:	df e0                	fnstsw ax
1002d8c6:	f6 c4 01             	test   ah,0x1
1002d8c9:	74 39                	je     0x1002d904
1002d8cb:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d8cf:	d8 25 20 85 0b 10    	fsub   DWORD PTR ds:0x100b8520
1002d8d5:	d8 0d 9c 89 0b 10    	fmul   DWORD PTR ds:0x100b899c
1002d8db:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1002d8e1:	d8 e1                	fsub   st,st(1)
1002d8e3:	d8 4c 24 68          	fmul   DWORD PTR [esp+0x68]
1002d8e7:	d9 e0                	fchs
1002d8e9:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002d8ed:	d8 4c 24 68          	fmul   DWORD PTR [esp+0x68]
1002d8f1:	eb 4c                	jmp    0x1002d93f
1002d8f3:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d8f7:	d8 1d 98 89 0b 10    	fcomp  DWORD PTR ds:0x100b8998
1002d8fd:	df e0                	fnstsw ax
1002d8ff:	f6 c4 01             	test   ah,0x1
1002d902:	75 37                	jne    0x1002d93b
1002d904:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d908:	d8 1d 1c 85 0b 10    	fcomp  DWORD PTR ds:0x100b851c
1002d90e:	df e0                	fnstsw ax
1002d910:	f6 c4 01             	test   ah,0x1
1002d913:	74 26                	je     0x1002d93b
1002d915:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
1002d919:	d8 25 98 89 0b 10    	fsub   DWORD PTR ds:0x100b8998
1002d91f:	d8 0d 9c 89 0b 10    	fmul   DWORD PTR ds:0x100b899c
1002d925:	d9 c0                	fld    st(0)
1002d927:	d8 4c 24 68          	fmul   DWORD PTR [esp+0x68]
1002d92b:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002d92f:	d8 2d c0 83 0b 10    	fsubr  DWORD PTR ds:0x100b83c0
1002d935:	d8 4c 24 68          	fmul   DWORD PTR [esp+0x68]
1002d939:	eb 04                	jmp    0x1002d93f
1002d93b:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
1002d93f:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002d943:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
1002d949:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
1002d94f:	6a 01                	push   0x1
1002d951:	6a 01                	push   0x1
1002d953:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
1002d957:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
1002d95d:	6a 00                	push   0x0
1002d95f:	51                   	push   ecx
1002d960:	68 33 33 b3 3e       	push   0x3eb33333
1002d965:	8d 8a e0 82 01 00    	lea    ecx,[edx+0x182e0]
1002d96b:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1002d96f:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
1002d976:	00 
1002d977:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
1002d97d:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
1002d983:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1002d987:	e8 b4 10 fe ff       	call   0x1000ea40
1002d98c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002d992:	8b 01                	mov    eax,DWORD PTR [ecx]
1002d994:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1002d99a:	d8 05 e0 83 0b 10    	fadd   DWORD PTR ds:0x100b83e0
1002d9a0:	d9 9b 3c 04 00 00    	fstp   DWORD PTR [ebx+0x43c]
1002d9a6:	5f                   	pop    edi
1002d9a7:	5e                   	pop    esi
1002d9a8:	5b                   	pop    ebx
1002d9a9:	83 c4 58             	add    esp,0x58
1002d9ac:	c2 08 00             	ret    0x8
1002d9af:	90                   	nop
1002d9b0:	83 ec 0c             	sub    esp,0xc
1002d9b3:	53                   	push   ebx
1002d9b4:	55                   	push   ebp
1002d9b5:	56                   	push   esi
1002d9b6:	8b f1                	mov    esi,ecx
1002d9b8:	33 db                	xor    ebx,ebx
1002d9ba:	57                   	push   edi
1002d9bb:	c6 86 51 04 00 00 01 	mov    BYTE PTR [esi+0x451],0x1
1002d9c2:	89 9e 58 04 00 00    	mov    DWORD PTR [esi+0x458],ebx
1002d9c8:	c7 86 5c 04 00 00 cd 	mov    DWORD PTR [esi+0x45c],0x3f8ccccd
1002d9cf:	cc 8c 3f 
1002d9d2:	89 9e 60 04 00 00    	mov    DWORD PTR [esi+0x460],ebx
1002d9d8:	89 9e 64 04 00 00    	mov    DWORD PTR [esi+0x464],ebx
1002d9de:	88 9e 6c 04 00 00    	mov    BYTE PTR [esi+0x46c],bl
1002d9e4:	e8 77 a9 fd ff       	call   0x10008360
1002d9e9:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002d9ed:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1002d9f1:	df 6c 24 10          	fild   QWORD PTR [esp+0x10]
1002d9f5:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002d9fb:	d8 0d e8 83 0b 10    	fmul   DWORD PTR ds:0x100b83e8
1002da01:	e8 2e 64 07 00       	call   0x100a3e34
1002da06:	8b f8                	mov    edi,eax
1002da08:	89 9e 64 04 00 00    	mov    DWORD PTR [esi+0x464],ebx
1002da0e:	e8 4d a9 fd ff       	call   0x10008360
1002da13:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002da17:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1002da1b:	df 6c 24 10          	fild   QWORD PTR [esp+0x10]
1002da1f:	8d 6f 26             	lea    ebp,[edi+0x26]
1002da22:	55                   	push   ebp
1002da23:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002da29:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002da2d:	e8 be f3 00 00       	call   0x1003cdf0
1002da32:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002da36:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
1002da3c:	53                   	push   ebx
1002da3d:	55                   	push   ebp
1002da3e:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1002da44:	de c1                	faddp  st(1),st
1002da46:	d9 9e 68 04 00 00    	fstp   DWORD PTR [esi+0x468]
1002da4c:	e8 ef f9 00 00       	call   0x1003d440
1002da51:	83 c4 0c             	add    esp,0xc
1002da54:	47                   	inc    edi
1002da55:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1002da59:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1002da5f:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
1002da63:	6a 01                	push   0x1
1002da65:	6a 01                	push   0x1
1002da67:	8d 44 24 18          	lea    eax,[esp+0x18]
1002da6b:	53                   	push   ebx
1002da6c:	d8 0d e0 84 0b 10    	fmul   DWORD PTR ds:0x100b84e0
1002da72:	50                   	push   eax
1002da73:	68 00 00 40 3f       	push   0x3f400000
1002da78:	81 c1 e0 82 01 00    	add    ecx,0x182e0
1002da7e:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
1002da82:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
1002da88:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
1002da8c:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
1002da92:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1002da96:	e8 a5 0f fe ff       	call   0x1000ea40
1002da9b:	5f                   	pop    edi
1002da9c:	5e                   	pop    esi
1002da9d:	5d                   	pop    ebp
1002da9e:	5b                   	pop    ebx
1002da9f:	83 c4 0c             	add    esp,0xc
1002daa2:	c3                   	ret
1002daa3:	90                   	nop
1002daa4:	90                   	nop
1002daa5:	90                   	nop
1002daa6:	90                   	nop
1002daa7:	90                   	nop
1002daa8:	90                   	nop
1002daa9:	90                   	nop
1002daaa:	90                   	nop
1002daab:	90                   	nop
1002daac:	90                   	nop
1002daad:	90                   	nop
1002daae:	90                   	nop
1002daaf:	90                   	nop
1002dab0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1002dab4:	c6 81 6c 04 00 00 01 	mov    BYTE PTR [ecx+0x46c],0x1
1002dabb:	89 81 54 04 00 00    	mov    DWORD PTR [ecx+0x454],eax
1002dac1:	c2 04 00             	ret    0x4
1002dac4:	90                   	nop
1002dac5:	90                   	nop
1002dac6:	90                   	nop
1002dac7:	90                   	nop
1002dac8:	90                   	nop
1002dac9:	90                   	nop
1002daca:	90                   	nop
1002dacb:	90                   	nop
1002dacc:	90                   	nop
1002dacd:	90                   	nop
1002dace:	90                   	nop
1002dacf:	90                   	nop
1002dad0:	33 c0                	xor    eax,eax
1002dad2:	68 9a 99 99 3e       	push   0x3e99999a
1002dad7:	50                   	push   eax
1002dad8:	88 81 51 04 00 00    	mov    BYTE PTR [ecx+0x451],al
1002dade:	88 81 52 04 00 00    	mov    BYTE PTR [ecx+0x452],al
1002dae4:	e8 27 2a 03 00       	call   0x10060510
1002dae9:	83 c4 08             	add    esp,0x8
1002daec:	c3                   	ret
1002daed:	90                   	nop
1002daee:	90                   	nop
1002daef:	90                   	nop
1002daf0:	83 ec 0c             	sub    esp,0xc
1002daf3:	53                   	push   ebx
1002daf4:	56                   	push   esi
1002daf5:	8b f1                	mov    esi,ecx
1002daf7:	33 db                	xor    ebx,ebx
1002daf9:	38 9e 51 04 00 00    	cmp    BYTE PTR [esi+0x451],bl
1002daff:	0f 84 b7 01 00 00    	je     0x1002dcbc
1002db05:	38 9e 6c 04 00 00    	cmp    BYTE PTR [esi+0x46c],bl
1002db0b:	74 35                	je     0x1002db42
1002db0d:	d9 86 54 04 00 00    	fld    DWORD PTR [esi+0x454]
1002db13:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002db19:	df e0                	fnstsw ax
1002db1b:	f6 c4 41             	test   ah,0x41
1002db1e:	75 63                	jne    0x1002db83
1002db20:	d9 86 54 04 00 00    	fld    DWORD PTR [esi+0x454]
1002db26:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
1002db2a:	d9 9e 54 04 00 00    	fstp   DWORD PTR [esi+0x454]
1002db30:	d9 86 5c 04 00 00    	fld    DWORD PTR [esi+0x45c]
1002db36:	d8 05 b8 89 0b 10    	fadd   DWORD PTR ds:0x100b89b8
1002db3c:	d9 9e 5c 04 00 00    	fstp   DWORD PTR [esi+0x45c]
1002db42:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002db46:	d8 86 58 04 00 00    	fadd   DWORD PTR [esi+0x458]
1002db4c:	d8 96 5c 04 00 00    	fcom   DWORD PTR [esi+0x45c]
1002db52:	d9 96 58 04 00 00    	fst    DWORD PTR [esi+0x458]
1002db58:	df e0                	fnstsw ax
1002db5a:	f6 c4 41             	test   ah,0x41
1002db5d:	75 35                	jne    0x1002db94
1002db5f:	d8 a6 5c 04 00 00    	fsub   DWORD PTR [esi+0x45c]
1002db65:	68 9a 99 99 3e       	push   0x3e99999a
1002db6a:	6a 01                	push   0x1
1002db6c:	c6 86 52 04 00 00 01 	mov    BYTE PTR [esi+0x452],0x1
1002db73:	d9 9e 58 04 00 00    	fstp   DWORD PTR [esi+0x458]
1002db79:	e8 92 29 03 00       	call   0x10060510
1002db7e:	83 c4 08             	add    esp,0x8
1002db81:	eb 13                	jmp    0x1002db96
1002db83:	88 9e 51 04 00 00    	mov    BYTE PTR [esi+0x451],bl
1002db89:	88 9e 52 04 00 00    	mov    BYTE PTR [esi+0x452],bl
1002db8f:	e9 1a 01 00 00       	jmp    0x1002dcae
1002db94:	dd d8                	fstp   st(0)
1002db96:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002db9a:	d8 86 64 04 00 00    	fadd   DWORD PTR [esi+0x464]
1002dba0:	d9 96 64 04 00 00    	fst    DWORD PTR [esi+0x464]
1002dba6:	d8 9e 68 04 00 00    	fcomp  DWORD PTR [esi+0x468]
1002dbac:	df e0                	fnstsw ax
1002dbae:	f6 c4 41             	test   ah,0x41
1002dbb1:	0f 85 c6 00 00 00    	jne    0x1002dc7d
1002dbb7:	55                   	push   ebp
1002dbb8:	57                   	push   edi
1002dbb9:	e8 a2 a7 fd ff       	call   0x10008360
1002dbbe:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002dbc2:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1002dbc6:	df 6c 24 10          	fild   QWORD PTR [esp+0x10]
1002dbca:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002dbd0:	d8 0d e8 83 0b 10    	fmul   DWORD PTR ds:0x100b83e8
1002dbd6:	e8 59 62 07 00       	call   0x100a3e34
1002dbdb:	8b f8                	mov    edi,eax
1002dbdd:	53                   	push   ebx
1002dbde:	8d 6f 26             	lea    ebp,[edi+0x26]
1002dbe1:	55                   	push   ebp
1002dbe2:	e8 59 f8 00 00       	call   0x1003d440
1002dbe7:	83 c4 08             	add    esp,0x8
1002dbea:	47                   	inc    edi
1002dbeb:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1002dbef:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1002dbf5:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
1002dbf9:	6a 01                	push   0x1
1002dbfb:	6a 01                	push   0x1
1002dbfd:	8d 44 24 18          	lea    eax,[esp+0x18]
1002dc01:	53                   	push   ebx
1002dc02:	d8 0d e0 84 0b 10    	fmul   DWORD PTR ds:0x100b84e0
1002dc08:	50                   	push   eax
1002dc09:	68 00 00 40 3f       	push   0x3f400000
1002dc0e:	81 c1 e0 82 01 00    	add    ecx,0x182e0
1002dc14:	c7 44 24 28 00 00 00 	mov    DWORD PTR [esp+0x28],0x0
1002dc1b:	00 
1002dc1c:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
1002dc22:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
1002dc29:	00 
1002dc2a:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
1002dc30:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
1002dc34:	e8 07 0e fe ff       	call   0x1000ea40
1002dc39:	89 9e 64 04 00 00    	mov    DWORD PTR [esi+0x464],ebx
1002dc3f:	e8 1c a7 fd ff       	call   0x10008360
1002dc44:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002dc48:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
1002dc4c:	df 6c 24 10          	fild   QWORD PTR [esp+0x10]
1002dc50:	55                   	push   ebp
1002dc51:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002dc57:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1002dc5b:	e8 90 f1 00 00       	call   0x1003cdf0
1002dc60:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
1002dc64:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
1002dc6a:	83 c4 04             	add    esp,0x4
1002dc6d:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1002dc73:	5f                   	pop    edi
1002dc74:	5d                   	pop    ebp
1002dc75:	de c1                	faddp  st(1),st
1002dc77:	d9 9e 68 04 00 00    	fstp   DWORD PTR [esi+0x468]
1002dc7d:	38 9e 52 04 00 00    	cmp    BYTE PTR [esi+0x452],bl
1002dc83:	74 37                	je     0x1002dcbc
1002dc85:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002dc89:	d8 86 60 04 00 00    	fadd   DWORD PTR [esi+0x460]
1002dc8f:	d9 96 60 04 00 00    	fst    DWORD PTR [esi+0x460]
1002dc95:	d8 1d 14 86 0b 10    	fcomp  DWORD PTR ds:0x100b8614
1002dc9b:	df e0                	fnstsw ax
1002dc9d:	f6 c4 41             	test   ah,0x41
1002dca0:	75 1a                	jne    0x1002dcbc
1002dca2:	88 9e 52 04 00 00    	mov    BYTE PTR [esi+0x452],bl
1002dca8:	89 9e 60 04 00 00    	mov    DWORD PTR [esi+0x460],ebx
1002dcae:	68 9a 99 99 3e       	push   0x3e99999a
1002dcb3:	53                   	push   ebx
1002dcb4:	e8 57 28 03 00       	call   0x10060510
1002dcb9:	83 c4 08             	add    esp,0x8
1002dcbc:	5e                   	pop    esi
1002dcbd:	5b                   	pop    ebx
1002dcbe:	83 c4 0c             	add    esp,0xc
1002dcc1:	c2 04 00             	ret    0x4
1002dcc4:	90                   	nop
1002dcc5:	90                   	nop
1002dcc6:	90                   	nop
1002dcc7:	90                   	nop
1002dcc8:	90                   	nop
1002dcc9:	90                   	nop
1002dcca:	90                   	nop
1002dccb:	90                   	nop
1002dccc:	90                   	nop
1002dccd:	90                   	nop
1002dcce:	90                   	nop
1002dccf:	90                   	nop
1002dcd0:	6a ff                	push   0xffffffff
1002dcd2:	68 3e 3a 0b 10       	push   0x100b3a3e
1002dcd7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1002dcdd:	50                   	push   eax
1002dcde:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1002dce5:	81 ec 88 06 00 00    	sub    esp,0x688
1002dceb:	53                   	push   ebx
1002dcec:	55                   	push   ebp
1002dced:	56                   	push   esi
1002dcee:	57                   	push   edi
1002dcef:	8b f9                	mov    edi,ecx
1002dcf1:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1002dcf5:	e8 b6 90 fd ff       	call   0x10006db0
1002dcfa:	33 db                	xor    ebx,ebx
1002dcfc:	ba 01 00 00 00       	mov    edx,0x1
1002dd01:	66 89 5c 24 16       	mov    WORD PTR [esp+0x16],bx
1002dd06:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
1002dd0a:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
1002dd0e:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
1002dd12:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
1002dd16:	89 5c 24 44          	mov    DWORD PTR [esp+0x44],ebx
1002dd1a:	c7 44 24 48 00 00 80 	mov    DWORD PTR [esp+0x48],0x3f800000
1002dd21:	3f 
1002dd22:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
1002dd26:	88 5c 24 50          	mov    BYTE PTR [esp+0x50],bl
1002dd2a:	88 9c 24 90 00 00 00 	mov    BYTE PTR [esp+0x90],bl
1002dd31:	8d 84 24 10 01 00 00 	lea    eax,[esp+0x110]
1002dd38:	b9 0a 00 00 00       	mov    ecx,0xa
1002dd3d:	88 18                	mov    BYTE PTR [eax],bl
1002dd3f:	05 80 00 00 00       	add    eax,0x80
1002dd44:	49                   	dec    ecx
1002dd45:	75 f6                	jne    0x1002dd3d
1002dd47:	8b b4 24 a8 06 00 00 	mov    esi,DWORD PTR [esp+0x6a8]
1002dd4e:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
1002dd52:	88 9c 24 10 06 00 00 	mov    BYTE PTR [esp+0x610],bl
1002dd59:	c7 84 24 90 06 00 00 	mov    DWORD PTR [esp+0x690],0x0
1002dd60:	00 00 00 00 
1002dd64:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002dd67:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1002dd6a:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
1002dd6d:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
1002dd71:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
1002dd75:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1002dd7b:	8d 44 24 14          	lea    eax,[esp+0x14]
1002dd7f:	c7 84 24 94 06 00 00 	mov    DWORD PTR [esp+0x694],0x0
1002dd86:	00 00 00 00 
1002dd8a:	50                   	push   eax
1002dd8b:	66 c7 44 24 18 07 00 	mov    WORD PTR [esp+0x18],0x7
1002dd92:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
1002dd96:	c7 44 24 34 00 00 80 	mov    DWORD PTR [esp+0x34],0x3f800000
1002dd9d:	3f 
1002dd9e:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x3f000000
1002dda5:	3f 
1002dda6:	c7 44 24 3c 00 00 80 	mov    DWORD PTR [esp+0x3c],0x3f800000
1002ddad:	3f 
1002ddae:	ff 91 ec 02 00 00    	call   DWORD PTR [ecx+0x2ec]
1002ddb4:	8b e8                	mov    ebp,eax
1002ddb6:	83 c4 04             	add    esp,0x4
1002ddb9:	3b eb                	cmp    ebp,ebx
1002ddbb:	74 50                	je     0x1002de0d
1002ddbd:	8b 87 f0 03 00 00    	mov    eax,DWORD PTR [edi+0x3f0]
1002ddc3:	8d 8f e8 03 00 00    	lea    ecx,[edi+0x3e8]
1002ddc9:	50                   	push   eax
1002ddca:	e8 41 e7 fd ff       	call   0x1000c510
1002ddcf:	68 84 00 00 00       	push   0x84
1002ddd4:	8b f8                	mov    edi,eax
1002ddd6:	e8 4e 5b 07 00       	call   0x100a3929
1002dddb:	83 c4 04             	add    esp,0x4
1002ddde:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002dde2:	3b c3                	cmp    eax,ebx
1002dde4:	89 9c 24 a0 06 00 00 	mov    DWORD PTR [esp+0x6a0],ebx
1002ddeb:	74 09                	je     0x1002ddf6
1002dded:	8b c8                	mov    ecx,eax
1002ddef:	e8 bc 05 01 00       	call   0x1003e3b0
1002ddf4:	8b d8                	mov    ebx,eax
1002ddf6:	56                   	push   esi
1002ddf7:	55                   	push   ebp
1002ddf8:	8b cb                	mov    ecx,ebx
1002ddfa:	c7 84 24 a8 06 00 00 	mov    DWORD PTR [esp+0x6a8],0xffffffff
1002de01:	ff ff ff ff 
1002de05:	e8 16 06 01 00       	call   0x1003e420
1002de0a:	89 5f 08             	mov    DWORD PTR [edi+0x8],ebx
1002de0d:	8b 8c 24 98 06 00 00 	mov    ecx,DWORD PTR [esp+0x698]
1002de14:	5f                   	pop    edi
1002de15:	5e                   	pop    esi
1002de16:	5d                   	pop    ebp
1002de17:	5b                   	pop    ebx
1002de18:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1002de1f:	81 c4 94 06 00 00    	add    esp,0x694
1002de25:	c2 04 00             	ret    0x4
1002de28:	90                   	nop
1002de29:	90                   	nop
1002de2a:	90                   	nop
1002de2b:	90                   	nop
1002de2c:	90                   	nop
1002de2d:	90                   	nop
1002de2e:	90                   	nop
1002de2f:	90                   	nop
1002de30:	6a ff                	push   0xffffffff
1002de32:	68 66 3a 0b 10       	push   0x100b3a66
1002de37:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1002de3d:	50                   	push   eax
1002de3e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1002de45:	51                   	push   ecx
1002de46:	53                   	push   ebx
1002de47:	55                   	push   ebp
1002de48:	56                   	push   esi
1002de49:	8b f1                	mov    esi,ecx
1002de4b:	57                   	push   edi
1002de4c:	6a 19                	push   0x19
1002de4e:	8d 8e f4 03 00 00    	lea    ecx,[esi+0x3f4]
1002de54:	e8 07 e6 fd ff       	call   0x1000c460
1002de59:	6a 19                	push   0x19
1002de5b:	8d 8e 00 04 00 00    	lea    ecx,[esi+0x400]
1002de61:	e8 fa e5 fd ff       	call   0x1000c460
1002de66:	6a 05                	push   0x5
1002de68:	8d 8e 0c 04 00 00    	lea    ecx,[esi+0x40c]
1002de6e:	e8 ed e5 fd ff       	call   0x1000c460
1002de73:	6a 05                	push   0x5
1002de75:	8d 8e 18 04 00 00    	lea    ecx,[esi+0x418]
1002de7b:	e8 e0 e5 fd ff       	call   0x1000c460
1002de80:	8b be 04 04 00 00    	mov    edi,DWORD PTR [esi+0x404]
1002de86:	bb 19 00 00 00       	mov    ebx,0x19
1002de8b:	83 cd ff             	or     ebp,0xffffffff
1002de8e:	6a 3c                	push   0x3c
1002de90:	e8 94 5a 07 00       	call   0x100a3929
1002de95:	83 c4 04             	add    esp,0x4
1002de98:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002de9c:	85 c0                	test   eax,eax
1002de9e:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
1002dea5:	00 
1002dea6:	74 09                	je     0x1002deb1
1002dea8:	8b c8                	mov    ecx,eax
1002deaa:	e8 b1 c8 06 00       	call   0x1009a760
1002deaf:	eb 02                	jmp    0x1002deb3
1002deb1:	33 c0                	xor    eax,eax
1002deb3:	89 47 08             	mov    DWORD PTR [edi+0x8],eax
1002deb6:	8b 3f                	mov    edi,DWORD PTR [edi]
1002deb8:	4b                   	dec    ebx
1002deb9:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
1002debd:	75 cf                	jne    0x1002de8e
1002debf:	8b b6 1c 04 00 00    	mov    esi,DWORD PTR [esi+0x41c]
1002dec5:	bf 05 00 00 00       	mov    edi,0x5
1002deca:	bb 01 00 00 00       	mov    ebx,0x1
1002decf:	6a 38                	push   0x38
1002ded1:	e8 53 5a 07 00       	call   0x100a3929
1002ded6:	83 c4 04             	add    esp,0x4
1002ded9:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002dedd:	85 c0                	test   eax,eax
1002dedf:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
1002dee3:	74 09                	je     0x1002deee
1002dee5:	8b c8                	mov    ecx,eax
1002dee7:	e8 94 d5 06 00       	call   0x1009b480
1002deec:	eb 02                	jmp    0x1002def0
1002deee:	33 c0                	xor    eax,eax
1002def0:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1002def3:	8b 36                	mov    esi,DWORD PTR [esi]
1002def5:	4f                   	dec    edi
1002def6:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
1002defa:	75 d3                	jne    0x1002decf
1002defc:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1002df00:	5f                   	pop    edi
1002df01:	5e                   	pop    esi
1002df02:	5d                   	pop    ebp
1002df03:	5b                   	pop    ebx
1002df04:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1002df0b:	83 c4 10             	add    esp,0x10
1002df0e:	c3                   	ret
1002df0f:	90                   	nop

*/
void FXManager::AddLCDNumbersToModel() {
    if (!m_hObject) return;
    g_pLTClient->SetObjectColor(m_hObject, 1.0f, 0.0f, 0.0f, 1.0f);
}

// 0x1002df10: FXManager::SetLightState
/*
1002df10:	51                   	push   ecx
1002df11:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1002df15:	53                   	push   ebx
1002df16:	55                   	push   ebp
1002df17:	56                   	push   esi
1002df18:	85 c0                	test   eax,eax
1002df1a:	57                   	push   edi
1002df1b:	8b d9                	mov    ebx,ecx
1002df1d:	75 5e                	jne    0x1002df7d
1002df1f:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1002df24:	8d 54 24 1c          	lea    edx,[esp+0x1c]
1002df28:	85 d2                	test   edx,edx
1002df2a:	8b 88 c8 81 01 00    	mov    ecx,DWORD PTR [eax+0x181c8]
1002df30:	74 13                	je     0x1002df45
1002df32:	8b 81 8c 00 00 00    	mov    eax,DWORD PTR [ecx+0x8c]
1002df38:	3d ff 00 00 00       	cmp    eax,0xff
1002df3d:	74 0e                	je     0x1002df4d
1002df3f:	8b 44 81 5c          	mov    eax,DWORD PTR [ecx+eax*4+0x5c]
1002df43:	eb 04                	jmp    0x1002df49
1002df45:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
1002df49:	85 c0                	test   eax,eax
1002df4b:	75 1e                	jne    0x1002df6b
1002df4d:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002df52:	68 b4 72 0d 10       	push   0x100d72b4
1002df57:	50                   	push   eax
1002df58:	8b 08                	mov    ecx,DWORD PTR [eax]
1002df5a:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
1002df60:	83 c4 08             	add    esp,0x8
1002df63:	5f                   	pop    edi
1002df64:	5e                   	pop    esi
1002df65:	5d                   	pop    ebp
1002df66:	5b                   	pop    ebx
1002df67:	59                   	pop    ecx
1002df68:	c2 10 00             	ret    0x10
1002df6b:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1002df6e:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
1002df72:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
1002df76:	c6 44 24 10 01       	mov    BYTE PTR [esp+0x10],0x1
1002df7b:	eb 05                	jmp    0x1002df82
1002df7d:	c6 44 24 10 00       	mov    BYTE PTR [esp+0x10],0x0
1002df82:	8a 44 24 1c          	mov    al,BYTE PTR [esp+0x1c]
1002df86:	84 c0                	test   al,al
1002df88:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1002df8c:	74 21                	je     0x1002dfaf
1002df8e:	83 f8 01             	cmp    eax,0x1
1002df91:	75 0e                	jne    0x1002dfa1
1002df93:	8d 8b 00 04 00 00    	lea    ecx,[ebx+0x400]
1002df99:	8d ab f4 03 00 00    	lea    ebp,[ebx+0x3f4]
1002df9f:	eb 2d                	jmp    0x1002dfce
1002dfa1:	8d 8b 18 04 00 00    	lea    ecx,[ebx+0x418]
1002dfa7:	8d ab 0c 04 00 00    	lea    ebp,[ebx+0x40c]
1002dfad:	eb 1f                	jmp    0x1002dfce
1002dfaf:	83 f8 01             	cmp    eax,0x1
1002dfb2:	75 0e                	jne    0x1002dfc2
1002dfb4:	8d 8b f4 03 00 00    	lea    ecx,[ebx+0x3f4]
1002dfba:	8d ab 00 04 00 00    	lea    ebp,[ebx+0x400]
1002dfc0:	eb 0c                	jmp    0x1002dfce
1002dfc2:	8d 8b 0c 04 00 00    	lea    ecx,[ebx+0x40c]
1002dfc8:	8d ab 18 04 00 00    	lea    ebp,[ebx+0x418]
1002dfce:	8b 79 04             	mov    edi,DWORD PTR [ecx+0x4]
1002dfd1:	85 ff                	test   edi,edi
1002dfd3:	0f 84 8b 00 00 00    	je     0x1002e064
1002dfd9:	8b 77 08             	mov    esi,DWORD PTR [edi+0x8]
1002dfdc:	8b 07                	mov    eax,DWORD PTR [edi]
1002dfde:	85 f6                	test   esi,esi
1002dfe0:	74 11                	je     0x1002dff3
1002dfe2:	8a 54 24 1c          	mov    dl,BYTE PTR [esp+0x1c]
1002dfe6:	84 d2                	test   dl,dl
1002dfe8:	75 17                	jne    0x1002e001
1002dfea:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1002dfee:	39 56 04             	cmp    DWORD PTR [esi+0x4],edx
1002dff1:	74 5a                	je     0x1002e04d
1002dff3:	85 c0                	test   eax,eax
1002dff5:	8b f8                	mov    edi,eax
1002dff7:	75 e0                	jne    0x1002dfd9
1002dff9:	5f                   	pop    edi
1002dffa:	5e                   	pop    esi
1002dffb:	5d                   	pop    ebp
1002dffc:	5b                   	pop    ebx
1002dffd:	59                   	pop    ecx
1002dffe:	c2 10 00             	ret    0x10
1002e001:	57                   	push   edi
1002e002:	e8 a9 e6 fd ff       	call   0x1000c6b0
1002e007:	57                   	push   edi
1002e008:	6a 00                	push   0x0
1002e00a:	8b cd                	mov    ecx,ebp
1002e00c:	e8 1f e6 fd ff       	call   0x1000c630
1002e011:	8b 06                	mov    eax,DWORD PTR [esi]
1002e013:	8b ce                	mov    ecx,esi
1002e015:	ff 50 04             	call   DWORD PTR [eax+0x4]
1002e018:	83 f8 01             	cmp    eax,0x1
1002e01b:	75 12                	jne    0x1002e02f
1002e01d:	d9 83 48 04 00 00    	fld    DWORD PTR [ebx+0x448]
1002e023:	d9 83 44 04 00 00    	fld    DWORD PTR [ebx+0x444]
1002e029:	d9 5e 2c             	fstp   DWORD PTR [esi+0x2c]
1002e02c:	d9 5e 30             	fstp   DWORD PTR [esi+0x30]
1002e02f:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1002e033:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
1002e037:	8b 16                	mov    edx,DWORD PTR [esi]
1002e039:	50                   	push   eax
1002e03a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1002e03e:	51                   	push   ecx
1002e03f:	50                   	push   eax
1002e040:	8b ce                	mov    ecx,esi
1002e042:	ff 52 08             	call   DWORD PTR [edx+0x8]
1002e045:	5f                   	pop    edi
1002e046:	5e                   	pop    esi
1002e047:	5d                   	pop    ebp
1002e048:	5b                   	pop    ebx
1002e049:	59                   	pop    ecx
1002e04a:	c2 10 00             	ret    0x10
1002e04d:	57                   	push   edi
1002e04e:	e8 5d e6 fd ff       	call   0x1000c6b0
1002e053:	57                   	push   edi
1002e054:	6a 00                	push   0x0
1002e056:	8b cd                	mov    ecx,ebp
1002e058:	e8 d3 e5 fd ff       	call   0x1000c630
1002e05d:	8b 16                	mov    edx,DWORD PTR [esi]
1002e05f:	8b ce                	mov    ecx,esi
1002e061:	ff 52 0c             	call   DWORD PTR [edx+0xc]
1002e064:	5f                   	pop    edi
1002e065:	5e                   	pop    esi
1002e066:	5d                   	pop    ebp
1002e067:	5b                   	pop    ebx
1002e068:	59                   	pop    ecx
1002e069:	c2 10 00             	ret    0x10
1002e06c:	90                   	nop
1002e06d:	90                   	nop
1002e06e:	90                   	nop
1002e06f:	90                   	nop
1002e070:	53                   	push   ebx
1002e071:	8b d9                	mov    ebx,ecx
1002e073:	55                   	push   ebp
1002e074:	56                   	push   esi
1002e075:	8b b3 f8 03 00 00    	mov    esi,DWORD PTR [ebx+0x3f8]
1002e07b:	8d 8b f4 03 00 00    	lea    ecx,[ebx+0x3f4]
1002e081:	85 f6                	test   esi,esi
1002e083:	57                   	push   edi
1002e084:	8d ab 00 04 00 00    	lea    ebp,[ebx+0x400]
1002e08a:	74 31                	je     0x1002e0bd
1002e08c:	8b 7e 08             	mov    edi,DWORD PTR [esi+0x8]
1002e08f:	8b 06                	mov    eax,DWORD PTR [esi]
1002e091:	85 ff                	test   edi,edi
1002e093:	74 09                	je     0x1002e09e
1002e095:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1002e099:	39 57 08             	cmp    DWORD PTR [edi+0x8],edx
1002e09c:	74 08                	je     0x1002e0a6
1002e09e:	85 c0                	test   eax,eax
1002e0a0:	8b f0                	mov    esi,eax
1002e0a2:	75 e8                	jne    0x1002e08c
1002e0a4:	eb 17                	jmp    0x1002e0bd
1002e0a6:	56                   	push   esi
1002e0a7:	e8 04 e6 fd ff       	call   0x1000c6b0
1002e0ac:	56                   	push   esi
1002e0ad:	6a 00                	push   0x0
1002e0af:	8b cd                	mov    ecx,ebp
1002e0b1:	e8 7a e5 fd ff       	call   0x1000c630
1002e0b6:	8b 07                	mov    eax,DWORD PTR [edi]
1002e0b8:	8b cf                	mov    ecx,edi
1002e0ba:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1002e0bd:	8b b3 10 04 00 00    	mov    esi,DWORD PTR [ebx+0x410]
1002e0c3:	8d 8b 0c 04 00 00    	lea    ecx,[ebx+0x40c]
1002e0c9:	81 c3 18 04 00 00    	add    ebx,0x418
1002e0cf:	85 f6                	test   esi,esi
1002e0d1:	74 38                	je     0x1002e10b
1002e0d3:	8b 7e 08             	mov    edi,DWORD PTR [esi+0x8]
1002e0d6:	8b 06                	mov    eax,DWORD PTR [esi]
1002e0d8:	85 ff                	test   edi,edi
1002e0da:	74 0b                	je     0x1002e0e7
1002e0dc:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1002e0e0:	8b 6f 08             	mov    ebp,DWORD PTR [edi+0x8]
1002e0e3:	3b ea                	cmp    ebp,edx
1002e0e5:	74 0d                	je     0x1002e0f4
1002e0e7:	85 c0                	test   eax,eax
1002e0e9:	8b f0                	mov    esi,eax
1002e0eb:	75 e6                	jne    0x1002e0d3
1002e0ed:	5f                   	pop    edi
1002e0ee:	5e                   	pop    esi
1002e0ef:	5d                   	pop    ebp
1002e0f0:	5b                   	pop    ebx
1002e0f1:	c2 04 00             	ret    0x4
1002e0f4:	56                   	push   esi
1002e0f5:	e8 b6 e5 fd ff       	call   0x1000c6b0
1002e0fa:	56                   	push   esi
1002e0fb:	6a 00                	push   0x0
1002e0fd:	8b cb                	mov    ecx,ebx
1002e0ff:	e8 2c e5 fd ff       	call   0x1000c630
1002e104:	8b 07                	mov    eax,DWORD PTR [edi]
1002e106:	8b cf                	mov    ecx,edi
1002e108:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1002e10b:	5f                   	pop    edi
1002e10c:	5e                   	pop    esi
1002e10d:	5d                   	pop    ebp
1002e10e:	5b                   	pop    ebx
1002e10f:	c2 04 00             	ret    0x4
1002e112:	90                   	nop
1002e113:	90                   	nop
1002e114:	90                   	nop
1002e115:	90                   	nop
1002e116:	90                   	nop
1002e117:	90                   	nop
1002e118:	90                   	nop
1002e119:	90                   	nop
1002e11a:	90                   	nop
1002e11b:	90                   	nop
1002e11c:	90                   	nop
1002e11d:	90                   	nop
1002e11e:	90                   	nop
1002e11f:	90                   	nop
1002e120:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1002e124:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1002e128:	89 81 44 04 00 00    	mov    DWORD PTR [ecx+0x444],eax
1002e12e:	89 91 48 04 00 00    	mov    DWORD PTR [ecx+0x448],edx
1002e134:	c2 08 00             	ret    0x8
1002e137:	90                   	nop
1002e138:	90                   	nop
1002e139:	90                   	nop
1002e13a:	90                   	nop
1002e13b:	90                   	nop
1002e13c:	90                   	nop
1002e13d:	90                   	nop
1002e13e:	90                   	nop
1002e13f:	90                   	nop
1002e140:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1002e144:	8b 89 4c 04 00 00    	mov    ecx,DWORD PTR [ecx+0x44c]
1002e14a:	50                   	push   eax
1002e14b:	e8 00 92 06 00       	call   0x10097350
1002e150:	c2 04 00             	ret    0x4
1002e153:	90                   	nop
1002e154:	90                   	nop
1002e155:	90                   	nop
1002e156:	90                   	nop
1002e157:	90                   	nop
1002e158:	90                   	nop
1002e159:	90                   	nop
1002e15a:	90                   	nop
1002e15b:	90                   	nop
1002e15c:	90                   	nop
1002e15d:	90                   	nop
1002e15e:	90                   	nop
1002e15f:	90                   	nop
1002e160:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1002e164:	8b 89 4c 04 00 00    	mov    ecx,DWORD PTR [ecx+0x44c]
1002e16a:	50                   	push   eax
1002e16b:	e8 70 92 06 00       	call   0x100973e0
1002e170:	c2 04 00             	ret    0x4
1002e173:	90                   	nop
1002e174:	90                   	nop
1002e175:	90                   	nop
1002e176:	90                   	nop
1002e177:	90                   	nop
1002e178:	90                   	nop
1002e179:	90                   	nop
1002e17a:	90                   	nop
1002e17b:	90                   	nop
1002e17c:	90                   	nop
1002e17d:	90                   	nop
1002e17e:	90                   	nop
1002e17f:	90                   	nop
1002e180:	83 ec 0c             	sub    esp,0xc
1002e183:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
1002e188:	56                   	push   esi
1002e189:	05 e8 82 01 00       	add    eax,0x182e8
1002e18e:	8b f1                	mov    esi,ecx
1002e190:	8b 08                	mov    ecx,DWORD PTR [eax]
1002e192:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
1002e196:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1002e199:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
1002e19d:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1002e1a0:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
1002e1a4:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
1002e1a8:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1002e1ac:	d8 20                	fsub   DWORD PTR [eax]
1002e1ae:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
1002e1b2:	d8 60 04             	fsub   DWORD PTR [eax+0x4]
1002e1b5:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
1002e1b9:	d8 60 08             	fsub   DWORD PTR [eax+0x8]
1002e1bc:	d9 c0                	fld    st(0)
1002e1be:	d8 c9                	fmul   st,st(1)
1002e1c0:	d9 c2                	fld    st(2)
1002e1c2:	d8 cb                	fmul   st,st(3)
1002e1c4:	de c1                	faddp  st(1),st
1002e1c6:	d9 c3                	fld    st(3)
1002e1c8:	d8 cc                	fmul   st,st(4)
1002e1ca:	de c1                	faddp  st(1),st
1002e1cc:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002e1d0:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1002e1d4:	de f9                	fdivp  st(1),st
1002e1d6:	dd db                	fstp   st(3)
1002e1d8:	dd d8                	fstp   st(0)
1002e1da:	dd d8                	fstp   st(0)
1002e1dc:	d8 15 c0 83 0b 10    	fcom   DWORD PTR ds:0x100b83c0
1002e1e2:	df e0                	fnstsw ax
1002e1e4:	f6 c4 41             	test   ah,0x41
1002e1e7:	75 08                	jne    0x1002e1f1
1002e1e9:	dd d8                	fstp   st(0)
1002e1eb:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1002e1f1:	d8 2d c0 83 0b 10    	fsubr  DWORD PTR ds:0x100b83c0
1002e1f7:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
1002e1fb:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002e201:	df e0                	fnstsw ax
1002e203:	f6 c4 41             	test   ah,0x41
1002e206:	0f 85 b0 00 00 00    	jne    0x1002e2bc
1002e20c:	e8 4f a1 fd ff       	call   0x10008360
1002e211:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1002e215:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
1002e21c:	00 
1002e21d:	df 6c 24 04          	fild   QWORD PTR [esp+0x4]
1002e221:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002e227:	d8 0d 08 84 0b 10    	fmul   DWORD PTR ds:0x100b8408
1002e22d:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
1002e233:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
1002e237:	de c1                	faddp  st(1),st
1002e239:	d8 05 f8 84 0b 10    	fadd   DWORD PTR ds:0x100b84f8
1002e23f:	d9 9e 70 04 00 00    	fstp   DWORD PTR [esi+0x470]
1002e245:	e8 16 a1 fd ff       	call   0x10008360
1002e24a:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1002e24e:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
1002e255:	00 
1002e256:	df 6c 24 04          	fild   QWORD PTR [esp+0x4]
1002e25a:	c7 86 78 04 00 00 cd 	mov    DWORD PTR [esi+0x478],0x3dcccccd
1002e261:	cc cc 3d 
1002e264:	c7 86 80 04 00 00 00 	mov    DWORD PTR [esi+0x480],0x3f800000
1002e26b:	00 80 3f 
1002e26e:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
1002e274:	d8 0d c0 89 0b 10    	fmul   DWORD PTR ds:0x100b89c0
1002e27a:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002e27e:	d8 0d 08 85 0b 10    	fmul   DWORD PTR ds:0x100b8508
1002e284:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1002e28a:	d8 0d 18 85 0b 10    	fmul   DWORD PTR ds:0x100b8518
1002e290:	d8 0d 14 85 0b 10    	fmul   DWORD PTR ds:0x100b8514
1002e296:	de c1                	faddp  st(1),st
1002e298:	d9 c0                	fld    st(0)
1002e29a:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1002e29e:	d8 0d bc 89 0b 10    	fmul   DWORD PTR ds:0x100b89bc
1002e2a4:	d9 9e 74 04 00 00    	fstp   DWORD PTR [esi+0x474]
1002e2aa:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1002e2ae:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
1002e2b2:	d8 c9                	fmul   st,st(1)
1002e2b4:	d9 9e 7c 04 00 00    	fstp   DWORD PTR [esi+0x47c]
1002e2ba:	dd d8                	fstp   st(0)
1002e2bc:	5e                   	pop    esi
1002e2bd:	83 c4 0c             	add    esp,0xc
1002e2c0:	c2 0c 00             	ret    0xc
1002e2c3:	90                   	nop
1002e2c4:	90                   	nop
1002e2c5:	90                   	nop
1002e2c6:	90                   	nop
1002e2c7:	90                   	nop
1002e2c8:	90                   	nop
1002e2c9:	90                   	nop
1002e2ca:	90                   	nop
1002e2cb:	90                   	nop
1002e2cc:	90                   	nop
1002e2cd:	90                   	nop
1002e2ce:	90                   	nop
1002e2cf:	90                   	nop
1002e2d0:	6a ff                	push   0xffffffff
1002e2d2:	68 7b 3a 0b 10       	push   0x100b3a7b
1002e2d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1002e2dd:	50                   	push   eax
1002e2de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1002e2e5:	51                   	push   ecx
1002e2e6:	56                   	push   esi
1002e2e7:	8b f1                	mov    esi,ecx
1002e2e9:	57                   	push   edi
1002e2ea:	6a 05                	push   0x5
1002e2ec:	8d 8e 24 04 00 00    	lea    ecx,[esi+0x424]
1002e2f2:	e8 69 e1 fd ff       	call   0x1000c460
1002e2f7:	6a 05                	push   0x5
1002e2f9:	8d 8e 30 04 00 00    	lea    ecx,[esi+0x430]
1002e2ff:	e8 5c e1 fd ff       	call   0x1000c460
1002e304:	8b b6 28 04 00 00    	mov    esi,DWORD PTR [esi+0x428]
1002e30a:	bf 05 00 00 00       	mov    edi,0x5
1002e30f:	6a 18                	push   0x18
1002e311:	e8 13 56 07 00       	call   0x100a3929
1002e316:	83 c4 04             	add    esp,0x4
1002e319:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
1002e31d:	85 c0                	test   eax,eax
1002e31f:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
1002e326:	00 
1002e327:	74 09                	je     0x1002e332
1002e329:	8b c8                	mov    ecx,eax
1002e32b:	e8 c0 4e 07 00       	call   0x100a31f0
1002e330:	eb 02                	jmp    0x1002e334
1002e332:	33 c0                	xor    eax,eax
1002e334:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1002e337:	8b 36                	mov    esi,DWORD PTR [esi]
1002e339:	4f                   	dec    edi
1002e33a:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
1002e341:	ff 
1002e342:	75 cb                	jne    0x1002e30f
1002e344:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1002e348:	5f                   	pop    edi
1002e349:	5e                   	pop    esi
1002e34a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1002e351:	83 c4 10             	add    esp,0x10
1002e354:	c3                   	ret
1002e355:	90                   	nop
1002e356:	90                   	nop
1002e357:	90                   	nop
1002e358:	90                   	nop
1002e359:	90                   	nop
1002e35a:	90                   	nop
1002e35b:	90                   	nop
1002e35c:	90                   	nop
1002e35d:	90                   	nop
1002e35e:	90                   	nop
1002e35f:	90                   	nop
1002e360:	55                   	push   ebp
1002e361:	8b e9                	mov    ebp,ecx
1002e363:	56                   	push   esi
1002e364:	8b b5 34 04 00 00    	mov    esi,DWORD PTR [ebp+0x434]
1002e36a:	85 f6                	test   esi,esi
1002e36c:	74 52                	je     0x1002e3c0
1002e36e:	53                   	push   ebx
1002e36f:	57                   	push   edi
1002e370:	8b 7e 08             	mov    edi,DWORD PTR [esi+0x8]
1002e373:	8b 1e                	mov    ebx,DWORD PTR [esi]
1002e375:	85 ff                	test   edi,edi
1002e377:	74 3f                	je     0x1002e3b8
1002e379:	d9 47 0c             	fld    DWORD PTR [edi+0xc]
1002e37c:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
1002e382:	df e0                	fnstsw ax
1002e384:	f6 c4 41             	test   ah,0x41
1002e387:	74 1c                	je     0x1002e3a5
1002e389:	56                   	push   esi
1002e38a:	8d 8d 30 04 00 00    	lea    ecx,[ebp+0x430]
1002e390:	e8 1b e3 fd ff       	call   0x1000c6b0
1002e395:	56                   	push   esi
1002e396:	6a 00                	push   0x0
1002e398:	8d 8d 24 04 00 00    	lea    ecx,[ebp+0x424]
1002e39e:	e8 8d e2 fd ff       	call   0x1000c630
1002e3a3:	eb 13                	jmp    0x1002e3b8
1002e3a5:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1002e3a9:	8b cf                	mov    ecx,edi
1002e3ab:	50                   	push   eax
1002e3ac:	e8 bf 90 06 00       	call   0x10097470
1002e3b1:	8b cf                	mov    ecx,edi
1002e3b3:	e8 f8 90 06 00       	call   0x100974b0
1002e3b8:	85 db                	test   ebx,ebx
1002e3ba:	8b f3                	mov    esi,ebx
1002e3bc:	75 b2                	jne    0x1002e370
1002e3be:	5f                   	pop    edi
1002e3bf:	5b                   	pop    ebx
1002e3c0:	5e                   	pop    esi
1002e3c1:	5d                   	pop    ebp
1002e3c2:	c2 04 00             	ret    0x4
1002e3c5:	90                   	nop
1002e3c6:	90                   	nop
1002e3c7:	90                   	nop
1002e3c8:	90                   	nop
1002e3c9:	90                   	nop
1002e3ca:	90                   	nop
1002e3cb:	90                   	nop
1002e3cc:	90                   	nop
1002e3cd:	90                   	nop
1002e3ce:	90                   	nop
1002e3cf:	90                   	nop
1002e3d0:	53                   	push   ebx
1002e3d1:	56                   	push   esi
1002e3d2:	57                   	push   edi
1002e3d3:	8b f9                	mov    edi,ecx
1002e3d5:	33 db                	xor    ebx,ebx
1002e3d7:	8b b7 34 04 00 00    	mov    esi,DWORD PTR [edi+0x434]
1002e3dd:	3b f3                	cmp    esi,ebx
1002e3df:	74 30                	je     0x1002e411
1002e3e1:	55                   	push   ebp
1002e3e2:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1002e3e5:	8b 2e                	mov    ebp,DWORD PTR [esi]
1002e3e7:	3b c3                	cmp    eax,ebx
1002e3e9:	74 1f                	je     0x1002e40a
1002e3eb:	56                   	push   esi
1002e3ec:	8d 8f 30 04 00 00    	lea    ecx,[edi+0x430]
1002e3f2:	89 58 0c             	mov    DWORD PTR [eax+0xc],ebx
1002e3f5:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
1002e3f8:	e8 b3 e2 fd ff       	call   0x1000c6b0
1002e3fd:	56                   	push   esi
1002e3fe:	53                   	push   ebx
1002e3ff:	8d 8f 24 04 00 00    	lea    ecx,[edi+0x424]
1002e405:	e8 26 e2 fd ff       	call   0x1000c630
1002e40a:	3b eb                	cmp    ebp,ebx
1002e40c:	8b f5                	mov    esi,ebp
1002e40e:	75 d2                	jne    0x1002e3e2
1002e410:	5d                   	pop    ebp
1002e411:	68 9a 99 99 3e       	push   0x3e99999a
1002e416:	53                   	push   ebx
1002e417:	88 9f 51 04 00 00    	mov    BYTE PTR [edi+0x451],bl
1002e41d:	88 9f 52 04 00 00    	mov    BYTE PTR [edi+0x452],bl
1002e423:	e8 e8 20 03 00       	call   0x10060510
1002e428:	83 c4 08             	add    esp,0x8
1002e42b:	5f                   	pop    edi
1002e42c:	5e                   	pop    esi
1002e42d:	5b                   	pop    ebx
1002e42e:	c3                   	ret
1002e42f:	90                   	nop
1002e430:	51                   	push   ecx
1002e431:	53                   	push   ebx
1002e432:	55                   	push   ebp
1002e433:	56                   	push   esi
1002e434:	57                   	push   edi
1002e435:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
1002e439:	8b d9                	mov    ebx,ecx
1002e43b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1002e43f:	8b 07                	mov    eax,DWORD PTR [edi]
1002e441:	51                   	push   ecx
1002e442:	8b cf                	mov    ecx,edi
1002e444:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
1002e447:	8b 83 80 00 00 00    	mov    eax,DWORD PTR [ebx+0x80]
1002e44d:	85 c0                	test   eax,eax
1002e44f:	0f 84 00 01 00 00    	je     0x1002e555
1002e455:	8b 83 84 00 00 00    	mov    eax,DWORD PTR [ebx+0x84]
1002e45b:	8b 6c 24 18          	mov    ebp,DWORD PTR [esp+0x18]
1002e45f:	85 c0                	test   eax,eax
1002e461:	74 15                	je     0x1002e478
1002e463:	8b 70 08             	mov    esi,DWORD PTR [eax+0x8]
1002e466:	8b 0e                	mov    ecx,DWORD PTR [esi]
1002e468:	85 c9                	test   ecx,ecx
1002e46a:	74 04                	je     0x1002e470
1002e46c:	3b cd                	cmp    ecx,ebp
1002e46e:	74 0c                	je     0x1002e47c
1002e470:	8b 00                	mov    eax,DWORD PTR [eax]
1002e472:	85 c0                	test   eax,eax
1002e474:	75 ed                	jne    0x1002e463
1002e476:	eb 04                	jmp    0x1002e47c
1002e478:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
1002e47c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002e47f:	83 f8 07             	cmp    eax,0x7
1002e482:	75 6a                	jne    0x1002e4ee
1002e484:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002e48a:	57                   	push   edi
1002e48b:	8b 11                	mov    edx,DWORD PTR [ecx]
1002e48d:	ff 52 44             	call   DWORD PTR [edx+0x44]
1002e490:	25 ff 00 00 00       	and    eax,0xff
1002e495:	66 c7 44 24 18 26 00 	mov    WORD PTR [esp+0x18],0x26
1002e49c:	8b f8                	mov    edi,eax
1002e49e:	b8 31 00 00 00       	mov    eax,0x31
1002e4a3:	66 89 44 24 12       	mov    WORD PTR [esp+0x12],ax
1002e4a8:	66 89 44 24 1a       	mov    WORD PTR [esp+0x1a],ax
1002e4ad:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1002e4b1:	66 c7 44 24 10 1e 00 	mov    WORD PTR [esp+0x10],0x1e
1002e4b8:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1002e4bc:	57                   	push   edi
1002e4bd:	68 d7 a3 00 3f       	push   0x3f00a3d7
1002e4c2:	50                   	push   eax
1002e4c3:	51                   	push   ecx
1002e4c4:	55                   	push   ebp
1002e4c5:	8b cb                	mov    ecx,ebx
1002e4c7:	e8 e4 e7 ff ff       	call   0x1002ccb0
1002e4cc:	89 7e 1c             	mov    DWORD PTR [esi+0x1c],edi
1002e4cf:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002e4d5:	8b 11                	mov    edx,DWORD PTR [ecx]
1002e4d7:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1002e4dd:	d8 05 b8 85 0b 10    	fadd   DWORD PTR ds:0x100b85b8
1002e4e3:	5f                   	pop    edi
1002e4e4:	d9 5e 18             	fstp   DWORD PTR [esi+0x18]
1002e4e7:	5e                   	pop    esi
1002e4e8:	5d                   	pop    ebp
1002e4e9:	5b                   	pop    ebx
1002e4ea:	59                   	pop    ecx
1002e4eb:	c2 04 00             	ret    0x4
1002e4ee:	83 f8 04             	cmp    eax,0x4
1002e4f1:	75 62                	jne    0x1002e555
1002e4f3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002e4f9:	57                   	push   edi
1002e4fa:	8b 01                	mov    eax,DWORD PTR [ecx]
1002e4fc:	ff 50 44             	call   DWORD PTR [eax+0x44]
1002e4ff:	25 ff 00 00 00       	and    eax,0xff
1002e504:	66 c7 44 24 18 7c 00 	mov    WORD PTR [esp+0x18],0x7c
1002e50b:	8b f8                	mov    edi,eax
1002e50d:	b8 06 00 00 00       	mov    eax,0x6
1002e512:	66 89 44 24 1a       	mov    WORD PTR [esp+0x1a],ax
1002e517:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1002e51b:	66 c7 44 24 10 75 00 	mov    WORD PTR [esp+0x10],0x75
1002e522:	66 89 44 24 12       	mov    WORD PTR [esp+0x12],ax
1002e527:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1002e52b:	57                   	push   edi
1002e52c:	68 00 00 80 3e       	push   0x3e800000
1002e531:	51                   	push   ecx
1002e532:	52                   	push   edx
1002e533:	55                   	push   ebp
1002e534:	8b cb                	mov    ecx,ebx
1002e536:	e8 75 e7 ff ff       	call   0x1002ccb0
1002e53b:	89 7e 1c             	mov    DWORD PTR [esi+0x1c],edi
1002e53e:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002e544:	8b 01                	mov    eax,DWORD PTR [ecx]
1002e546:	ff 90 d8 00 00 00    	call   DWORD PTR [eax+0xd8]
1002e54c:	d8 05 b8 85 0b 10    	fadd   DWORD PTR ds:0x100b85b8
1002e552:	d9 5e 18             	fstp   DWORD PTR [esi+0x18]
1002e555:	5f                   	pop    edi
1002e556:	5e                   	pop    esi
1002e557:	5d                   	pop    ebp
1002e558:	5b                   	pop    ebx
1002e559:	59                   	pop    ecx
1002e55a:	c2 04 00             	ret    0x4
1002e55d:	90                   	nop
1002e55e:	90                   	nop
1002e55f:	90                   	nop
1002e560:	81 ec 14 0d 00 00    	sub    esp,0xd14
1002e566:	53                   	push   ebx
1002e567:	8d 4c 24 10          	lea    ecx,[esp+0x10]
1002e56b:	e8 40 88 fd ff       	call   0x10006db0
1002e570:	33 db                	xor    ebx,ebx
1002e572:	68 00 00 80 3f       	push   0x3f800000
1002e577:	53                   	push   ebx
1002e578:	53                   	push   ebx
1002e579:	53                   	push   ebx
1002e57a:	8d 4c 24 48          	lea    ecx,[esp+0x48]
1002e57e:	66 89 5c 24 20       	mov    WORD PTR [esp+0x20],bx
1002e583:	66 89 5c 24 22       	mov    WORD PTR [esp+0x22],bx
1002e588:	c7 44 24 24 01 00 00 	mov    DWORD PTR [esp+0x24],0x1
1002e58f:	00 
1002e590:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
1002e594:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
1002e598:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
1002e59c:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
1002e5a0:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
1002e5a4:	c7 44 24 3c 00 00 80 	mov    DWORD PTR [esp+0x3c],0x3f800000
1002e5ab:	3f 
1002e5ac:	c7 44 24 40 00 00 80 	mov    DWORD PTR [esp+0x40],0x3f800000
1002e5b3:	3f 
1002e5b4:	c7 44 24 44 00 00 80 	mov    DWORD PTR [esp+0x44],0x3f800000
1002e5bb:	3f 
1002e5bc:	e8 cf 87 fd ff       	call   0x10006d90
1002e5c1:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
1002e5c5:	88 5c 24 4c          	mov    BYTE PTR [esp+0x4c],bl
1002e5c9:	88 9c 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],bl
1002e5d0:	8d 84 24 0c 01 00 00 	lea    eax,[esp+0x10c]
1002e5d7:	b9 0a 00 00 00       	mov    ecx,0xa
1002e5dc:	88 18                	mov    BYTE PTR [eax],bl
1002e5de:	05 80 00 00 00       	add    eax,0x80
1002e5e3:	49                   	dec    ecx
1002e5e4:	75 f6                	jne    0x1002e5dc
1002e5e6:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1002e5ec:	8d 44 24 10          	lea    eax,[esp+0x10]
1002e5f0:	55                   	push   ebp
1002e5f1:	50                   	push   eax
1002e5f2:	88 9c 24 14 06 00 00 	mov    BYTE PTR [esp+0x614],bl
1002e5f9:	c7 84 24 94 06 00 00 	mov    DWORD PTR [esp+0x694],0x0
1002e600:	00 00 00 00 
1002e604:	c7 84 24 98 06 00 00 	mov    DWORD PTR [esp+0x698],0x0
1002e60b:	00 00 00 00 
1002e60f:	66 c7 44 24 18 05 00 	mov    WORD PTR [esp+0x18],0x5
1002e616:	ff 91 ec 02 00 00    	call   DWORD PTR [ecx+0x2ec]
1002e61c:	8b 0d 48 be 11 10    	mov    ecx,DWORD PTR ds:0x1011be48
1002e622:	8b 15 1c a0 0d 10    	mov    edx,DWORD PTR ds:0x100da01c
1002e628:	8b 2d 18 a0 0d 10    	mov    ebp,DWORD PTR ds:0x100da018
1002e62e:	03 d1                	add    edx,ecx
1002e630:	52                   	push   edx
1002e631:	8b 15 4c be 11 10    	mov    edx,DWORD PTR ds:0x1011be4c
1002e637:	03 ea                	add    ebp,edx
1002e639:	a3 3c a1 11 10       	mov    ds:0x1011a13c,eax
1002e63e:	55                   	push   ebp
1002e63f:	51                   	push   ecx
1002e640:	52                   	push   edx
1002e641:	53                   	push   ebx
1002e642:	50                   	push   eax
1002e643:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002e648:	ff 90 48 03 00 00    	call   DWORD PTR [eax+0x348]
1002e64e:	8b 0d 3c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a13c
1002e654:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002e65a:	68 d9 e9 17 3f       	push   0x3f17e9d9
1002e65f:	68 c3 b8 32 3f       	push   0x3f32b8c3
1002e664:	51                   	push   ecx
1002e665:	ff 92 40 03 00 00    	call   DWORD PTR [edx+0x340]
1002e66b:	83 c4 28             	add    esp,0x28
1002e66e:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1002e672:	e8 39 87 fd ff       	call   0x10006db0
1002e677:	68 00 00 80 3f       	push   0x3f800000
1002e67c:	53                   	push   ebx
1002e67d:	53                   	push   ebx
1002e67e:	53                   	push   ebx
1002e67f:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
1002e683:	66 89 5c 24 24       	mov    WORD PTR [esp+0x24],bx
1002e688:	66 89 5c 24 26       	mov    WORD PTR [esp+0x26],bx
1002e68d:	c7 44 24 28 01 00 00 	mov    DWORD PTR [esp+0x28],0x1
1002e694:	00 
1002e695:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
1002e699:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
1002e69d:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
1002e6a4:	00 
1002e6a5:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
1002e6ac:	00 
1002e6ad:	c7 44 24 3c 00 00 00 	mov    DWORD PTR [esp+0x3c],0x0
1002e6b4:	00 
1002e6b5:	c7 44 24 40 00 00 80 	mov    DWORD PTR [esp+0x40],0x3f800000
1002e6bc:	3f 
1002e6bd:	c7 44 24 44 00 00 80 	mov    DWORD PTR [esp+0x44],0x3f800000
1002e6c4:	3f 
1002e6c5:	c7 44 24 48 00 00 80 	mov    DWORD PTR [esp+0x48],0x3f800000
1002e6cc:	3f 
1002e6cd:	e8 be 86 fd ff       	call   0x10006d90
1002e6d2:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
1002e6d6:	88 5c 24 50          	mov    BYTE PTR [esp+0x50],bl
1002e6da:	88 9c 24 90 00 00 00 	mov    BYTE PTR [esp+0x90],bl
1002e6e1:	8d 84 24 10 01 00 00 	lea    eax,[esp+0x110]
1002e6e8:	b9 0a 00 00 00       	mov    ecx,0xa
1002e6ed:	5d                   	pop    ebp
1002e6ee:	88 18                	mov    BYTE PTR [eax],bl
1002e6f0:	05 80 00 00 00       	add    eax,0x80
1002e6f5:	49                   	dec    ecx
1002e6f6:	75 f6                	jne    0x1002e6ee
1002e6f8:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1002e6fe:	8d 44 24 10          	lea    eax,[esp+0x10]
1002e702:	50                   	push   eax
1002e703:	88 9c 24 10 06 00 00 	mov    BYTE PTR [esp+0x610],bl
1002e70a:	c7 84 24 90 06 00 00 	mov    DWORD PTR [esp+0x690],0x0
1002e711:	00 00 00 00 
1002e715:	c7 84 24 94 06 00 00 	mov    DWORD PTR [esp+0x694],0x0
1002e71c:	00 00 00 00 
1002e720:	66 c7 44 24 14 05 00 	mov    WORD PTR [esp+0x14],0x5
1002e727:	ff 91 ec 02 00 00    	call   DWORD PTR [ecx+0x2ec]
1002e72d:	8b 15 54 be 11 10    	mov    edx,DWORD PTR ds:0x1011be54
1002e733:	8b 0d 58 be 11 10    	mov    ecx,DWORD PTR ds:0x1011be58
1002e739:	52                   	push   edx
1002e73a:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1002e740:	51                   	push   ecx
1002e741:	53                   	push   ebx
1002e742:	53                   	push   ebx
1002e743:	53                   	push   ebx
1002e744:	50                   	push   eax
1002e745:	a3 44 a1 11 10       	mov    ds:0x1011a144,eax
1002e74a:	ff 92 48 03 00 00    	call   DWORD PTR [edx+0x348]
1002e750:	a1 44 a1 11 10       	mov    eax,ds:0x1011a144
1002e755:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002e75b:	68 d9 e9 17 3f       	push   0x3f17e9d9
1002e760:	68 c3 b8 32 3f       	push   0x3f32b8c3
1002e765:	50                   	push   eax
1002e766:	ff 91 40 03 00 00    	call   DWORD PTR [ecx+0x340]
1002e76c:	83 c4 28             	add    esp,0x28
1002e76f:	8d 8c 24 94 06 00 00 	lea    ecx,[esp+0x694]
1002e776:	e8 35 86 fd ff       	call   0x10006db0
1002e77b:	53                   	push   ebx
1002e77c:	53                   	push   ebx
1002e77d:	53                   	push   ebx
1002e77e:	8d 8c 24 b0 06 00 00 	lea    ecx,[esp+0x6b0]
1002e785:	66 89 9c 24 a0 06 00 	mov    WORD PTR [esp+0x6a0],bx
1002e78c:	00 
1002e78d:	66 89 9c 24 a2 06 00 	mov    WORD PTR [esp+0x6a2],bx
1002e794:	00 
1002e795:	c7 84 24 a4 06 00 00 	mov    DWORD PTR [esp+0x6a4],0x1
1002e79c:	01 00 00 00 
1002e7a0:	89 9c 24 a8 06 00 00 	mov    DWORD PTR [esp+0x6a8],ebx
1002e7a7:	89 9c 24 ac 06 00 00 	mov    DWORD PTR [esp+0x6ac],ebx
1002e7ae:	e8 0d cc fd ff       	call   0x1000b3c0
1002e7b3:	68 00 00 80 3f       	push   0x3f800000
1002e7b8:	68 00 00 80 3f       	push   0x3f800000
1002e7bd:	68 00 00 80 3f       	push   0x3f800000
1002e7c2:	8d 8c 24 bc 06 00 00 	lea    ecx,[esp+0x6bc]
1002e7c9:	e8 f2 cb fd ff       	call   0x1000b3c0
1002e7ce:	68 00 00 80 3f       	push   0x3f800000
1002e7d3:	53                   	push   ebx
1002e7d4:	53                   	push   ebx
1002e7d5:	53                   	push   ebx
1002e7d6:	8d 8c 24 cc 06 00 00 	lea    ecx,[esp+0x6cc]
1002e7dd:	e8 ae 85 fd ff       	call   0x10006d90
1002e7e2:	89 9c 24 cc 06 00 00 	mov    DWORD PTR [esp+0x6cc],ebx
1002e7e9:	88 9c 24 d0 06 00 00 	mov    BYTE PTR [esp+0x6d0],bl
1002e7f0:	88 9c 24 10 07 00 00 	mov    BYTE PTR [esp+0x710],bl
1002e7f7:	8d 84 24 90 07 00 00 	lea    eax,[esp+0x790]
1002e7fe:	b9 0a 00 00 00       	mov    ecx,0xa
1002e803:	88 18                	mov    BYTE PTR [eax],bl
1002e805:	05 80 00 00 00       	add    eax,0x80
1002e80a:	49                   	dec    ecx
1002e80b:	75 f6                	jne    0x1002e803
1002e80d:	a1 4c a1 11 10       	mov    eax,ds:0x1011a14c
1002e812:	8d 94 24 94 06 00 00 	lea    edx,[esp+0x694]
1002e819:	52                   	push   edx
1002e81a:	88 9c 24 94 0c 00 00 	mov    BYTE PTR [esp+0xc94],bl
1002e821:	c7 84 24 14 0d 00 00 	mov    DWORD PTR [esp+0xd14],0x0
1002e828:	00 00 00 00 
1002e82c:	c7 84 24 18 0d 00 00 	mov    DWORD PTR [esp+0xd18],0x0
1002e833:	00 00 00 00 
1002e837:	66 c7 84 24 98 06 00 	mov    WORD PTR [esp+0x698],0x4
1002e83e:	00 04 00 
1002e841:	c7 84 24 a0 06 00 00 	mov    DWORD PTR [esp+0x6a0],0x81
1002e848:	81 00 00 00 
1002e84c:	ff 90 ec 02 00 00    	call   DWORD PTR [eax+0x2ec]
1002e852:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002e858:	68 00 00 0c 43       	push   0x430c0000
1002e85d:	50                   	push   eax
1002e85e:	a3 40 a1 11 10       	mov    ds:0x1011a140,eax
1002e863:	ff 91 bc 03 00 00    	call   DWORD PTR [ecx+0x3bc]
1002e869:	8b 15 40 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a140
1002e86f:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002e874:	68 33 33 33 3f       	push   0x3f333333
1002e879:	68 33 33 33 3f       	push   0x3f333333
1002e87e:	68 33 33 33 3f       	push   0x3f333333
1002e883:	52                   	push   edx
1002e884:	ff 90 b4 03 00 00    	call   DWORD PTR [eax+0x3b4]
1002e88a:	8b 15 3c a1 11 10    	mov    edx,DWORD PTR ds:0x1011a13c
1002e890:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
1002e895:	8d 4c 24 20          	lea    ecx,[esp+0x20]
1002e899:	51                   	push   ecx
1002e89a:	52                   	push   edx
1002e89b:	ff 90 f0 02 00 00    	call   DWORD PTR [eax+0x2f0]
1002e8a1:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002e8a7:	83 c4 24             	add    esp,0x24
1002e8aa:	8d 44 24 04          	lea    eax,[esp+0x4]
1002e8ae:	8b 11                	mov    edx,DWORD PTR [ecx]
1002e8b0:	53                   	push   ebx
1002e8b1:	50                   	push   eax
1002e8b2:	a1 40 a1 11 10       	mov    eax,ds:0x1011a140
1002e8b7:	50                   	push   eax
1002e8b8:	ff 92 a8 01 00 00    	call   DWORD PTR [edx+0x1a8]
1002e8be:	5b                   	pop    ebx
1002e8bf:	81 c4 14 0d 00 00    	add    esp,0xd14
1002e8c5:	c3                   	ret
1002e8c6:	90                   	nop
1002e8c7:	90                   	nop
1002e8c8:	90                   	nop
1002e8c9:	90                   	nop
1002e8ca:	90                   	nop
1002e8cb:	90                   	nop
1002e8cc:	90                   	nop
1002e8cd:	90                   	nop
1002e8ce:	90                   	nop
1002e8cf:	90                   	nop
1002e8d0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1002e8d6:	6a ff                	push   0xffffffff
1002e8d8:	68 9b 3a 0b 10       	push   0x100b3a9b
1002e8dd:	50                   	push   eax
1002e8de:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1002e8e2:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1002e8e9:	50                   	push   eax
1002e8ea:	a3 4c a1 11 10       	mov    ds:0x1011a14c,eax
1002e8ef:	e8 3c cd fd ff       	call   0x1000b630
1002e8f4:	e8 a7 27 ff ff       	call   0x100210a0
1002e8f9:	68 54 85 01 00       	push   0x18554
1002e8fe:	e8 26 50 07 00       	call   0x100a3929
1002e903:	83 c4 08             	add    esp,0x8
1002e906:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002e90a:	85 c0                	test   eax,eax
1002e90c:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
1002e913:	00 
1002e914:	74 16                	je     0x1002e92c
1002e916:	8b c8                	mov    ecx,eax
1002e918:	e8 73 00 00 00       	call   0x1002e990
1002e91d:	8b 4c 24 00          	mov    ecx,DWORD PTR [esp+0x0]
1002e921:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1002e928:	83 c4 0c             	add    esp,0xc
1002e92b:	c3                   	ret
1002e92c:	8b 4c 24 00          	mov    ecx,DWORD PTR [esp+0x0]
1002e930:	33 c0                	xor    eax,eax
1002e932:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1002e939:	83 c4 0c             	add    esp,0xc
1002e93c:	c3                   	ret
1002e93d:	90                   	nop
1002e93e:	90                   	nop
1002e93f:	90                   	nop
1002e940:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1002e944:	85 c9                	test   ecx,ecx
1002e946:	74 06                	je     0x1002e94e
1002e948:	8b 01                	mov    eax,DWORD PTR [ecx]
1002e94a:	6a 01                	push   0x1
1002e94c:	ff 10                	call   DWORD PTR [eax]
1002e94e:	c3                   	ret
1002e94f:	90                   	nop
1002e950:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1002e954:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1002e958:	c7 00 d0 e8 02 10    	mov    DWORD PTR [eax],0x1002e8d0
1002e95e:	c7 01 40 e9 02 10    	mov    DWORD PTR [ecx],0x1002e940
1002e964:	c3                   	ret
1002e965:	90                   	nop
1002e966:	90                   	nop
1002e967:	90                   	nop
1002e968:	90                   	nop
1002e969:	90                   	nop
1002e96a:	90                   	nop
1002e96b:	90                   	nop
1002e96c:	90                   	nop
1002e96d:	90                   	nop
1002e96e:	90                   	nop
1002e96f:	90                   	nop
1002e970:	b8 02 00 00 00       	mov    eax,0x2
1002e975:	c3                   	ret
1002e976:	90                   	nop
1002e977:	90                   	nop
1002e978:	90                   	nop
1002e979:	90                   	nop
1002e97a:	90                   	nop
1002e97b:	90                   	nop
1002e97c:	90                   	nop
1002e97d:	90                   	nop
1002e97e:	90                   	nop
1002e97f:	90                   	nop
1002e980:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1002e984:	a3 48 a1 11 10       	mov    ds:0x1011a148,eax
1002e989:	c3                   	ret
1002e98a:	90                   	nop
1002e98b:	90                   	nop
1002e98c:	90                   	nop
1002e98d:	90                   	nop
1002e98e:	90                   	nop
1002e98f:	90                   	nop
1002e990:	6a ff                	push   0xffffffff
1002e992:	68 4d 3b 0b 10       	push   0x100b3b4d
1002e997:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1002e99d:	50                   	push   eax
1002e99e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1002e9a5:	83 ec 08             	sub    esp,0x8
1002e9a8:	53                   	push   ebx
1002e9a9:	55                   	push   ebp
1002e9aa:	56                   	push   esi
1002e9ab:	8b f1                	mov    esi,ecx
1002e9ad:	57                   	push   edi
1002e9ae:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
1002e9b2:	c7 06 40 8a 0b 10    	mov    DWORD PTR [esi],0x100b8a40
1002e9b8:	33 db                	xor    ebx,ebx
1002e9ba:	8d 4e 04             	lea    ecx,[esi+0x4]
1002e9bd:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
1002e9c1:	e8 1a 59 06 00       	call   0x100942e0
1002e9c6:	8d 4e 30             	lea    ecx,[esi+0x30]
1002e9c9:	c6 44 24 20 01       	mov    BYTE PTR [esp+0x20],0x1
1002e9ce:	e8 7d 5f ff ff       	call   0x10024950
1002e9d3:	68 60 7c 01 10       	push   0x10017c60
1002e9d8:	68 50 78 01 10       	push   0x10017850
1002e9dd:	8d ae b4 04 00 00    	lea    ebp,[esi+0x4b4]
1002e9e3:	6a 24                	push   0x24
1002e9e5:	68 8c 0a 00 00       	push   0xa8c
1002e9ea:	55                   	push   ebp
1002e9eb:	c6 44 24 34 02       	mov    BYTE PTR [esp+0x34],0x2
1002e9f0:	e8 0d 65 07 00       	call   0x100a4f02
1002e9f5:	8d 8e 18 81 01 00    	lea    ecx,[esi+0x18118]
1002e9fb:	c6 44 24 20 03       	mov    BYTE PTR [esp+0x20],0x3
1002ea00:	e8 ab ec 05 00       	call   0x1008d6b0
1002ea05:	8d 8e d0 81 01 00    	lea    ecx,[esi+0x181d0]
1002ea0b:	c6 44 24 20 04       	mov    BYTE PTR [esp+0x20],0x4
1002ea10:	e8 eb c1 00 00       	call   0x1003ac00
1002ea15:	8d 8e e0 82 01 00    	lea    ecx,[esi+0x182e0]
1002ea1b:	c6 44 24 20 05       	mov    BYTE PTR [esp+0x20],0x5
1002ea20:	e8 9b f6 fd ff       	call   0x1000e0c0
1002ea25:	53                   	push   ebx
1002ea26:	8d 8e d8 83 01 00    	lea    ecx,[esi+0x183d8]
1002ea2c:	c6 44 24 24 06       	mov    BYTE PTR [esp+0x24],0x6
1002ea31:	e8 fa 28 ff ff       	call   0x10021330
1002ea36:	6a 08                	push   0x8
1002ea38:	c6 44 24 24 07       	mov    BYTE PTR [esp+0x24],0x7
1002ea3d:	c7 06 c4 89 0b 10    	mov    DWORD PTR [esi],0x100b89c4
1002ea43:	89 9e c8 81 01 00    	mov    DWORD PTR [esi+0x181c8],ebx
1002ea49:	89 9e cc 81 01 00    	mov    DWORD PTR [esi+0x181cc],ebx
1002ea4f:	89 9e dc 82 01 00    	mov    DWORD PTR [esi+0x182dc],ebx
1002ea55:	89 9e c0 83 01 00    	mov    DWORD PTR [esi+0x183c0],ebx
1002ea5b:	89 9e c4 83 01 00    	mov    DWORD PTR [esi+0x183c4],ebx
1002ea61:	89 9e c8 83 01 00    	mov    DWORD PTR [esi+0x183c8],ebx
1002ea67:	89 9e cc 83 01 00    	mov    DWORD PTR [esi+0x183cc],ebx
1002ea6d:	e8 b7 4e 07 00       	call   0x100a3929
1002ea72:	83 c4 04             	add    esp,0x4
1002ea75:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002ea79:	3b c3                	cmp    eax,ebx
1002ea7b:	c6 44 24 20 08       	mov    BYTE PTR [esp+0x20],0x8
1002ea80:	74 09                	je     0x1002ea8b
1002ea82:	8b c8                	mov    ecx,eax
1002ea84:	e8 a7 24 fe ff       	call   0x10010f30
1002ea89:	eb 02                	jmp    0x1002ea8d
1002ea8b:	33 c0                	xor    eax,eax
1002ea8d:	6a 30                	push   0x30
1002ea8f:	c6 44 24 24 07       	mov    BYTE PTR [esp+0x24],0x7
1002ea94:	89 86 d0 83 01 00    	mov    DWORD PTR [esi+0x183d0],eax
1002ea9a:	e8 8a 4e 07 00       	call   0x100a3929
1002ea9f:	83 c4 04             	add    esp,0x4
1002eaa2:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002eaa6:	3b c3                	cmp    eax,ebx
1002eaa8:	c6 44 24 20 09       	mov    BYTE PTR [esp+0x20],0x9
1002eaad:	74 09                	je     0x1002eab8
1002eaaf:	8b c8                	mov    ecx,eax
1002eab1:	e8 8a f5 06 00       	call   0x1009e040
1002eab6:	eb 02                	jmp    0x1002eaba
1002eab8:	33 c0                	xor    eax,eax
1002eaba:	bf 01 00 00 00       	mov    edi,0x1
1002eabf:	c6 44 24 20 07       	mov    BYTE PTR [esp+0x20],0x7
1002eac4:	57                   	push   edi
1002eac5:	89 86 d4 83 01 00    	mov    DWORD PTR [esi+0x183d4],eax
1002eacb:	e8 59 4e 07 00       	call   0x100a3929
1002ead0:	83 c4 04             	add    esp,0x4
1002ead3:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002ead7:	3b c3                	cmp    eax,ebx
1002ead9:	c6 44 24 20 0a       	mov    BYTE PTR [esp+0x20],0xa
1002eade:	74 09                	je     0x1002eae9
1002eae0:	8b c8                	mov    ecx,eax
1002eae2:	e8 09 47 07 00       	call   0x100a31f0
1002eae7:	eb 02                	jmp    0x1002eaeb
1002eae9:	33 c0                	xor    eax,eax
1002eaeb:	89 86 04 85 01 00    	mov    DWORD PTR [esi+0x18504],eax
1002eaf1:	89 9e 08 85 01 00    	mov    DWORD PTR [esi+0x18508],ebx
1002eaf7:	89 9e 0c 85 01 00    	mov    DWORD PTR [esi+0x1850c],ebx
1002eafd:	89 9e 10 85 01 00    	mov    DWORD PTR [esi+0x18510],ebx
1002eb03:	89 9e 14 85 01 00    	mov    DWORD PTR [esi+0x18514],ebx
1002eb09:	89 be 18 85 01 00    	mov    DWORD PTR [esi+0x18518],edi
1002eb0f:	89 9e 1c 85 01 00    	mov    DWORD PTR [esi+0x1851c],ebx
1002eb15:	89 be 20 85 01 00    	mov    DWORD PTR [esi+0x18520],edi
1002eb1b:	89 9e 24 85 01 00    	mov    DWORD PTR [esi+0x18524],ebx
1002eb21:	89 9e 28 85 01 00    	mov    DWORD PTR [esi+0x18528],ebx
1002eb27:	89 9e 2c 85 01 00    	mov    DWORD PTR [esi+0x1852c],ebx
1002eb2d:	89 9e 30 85 01 00    	mov    DWORD PTR [esi+0x18530],ebx
1002eb33:	89 9e 34 85 01 00    	mov    DWORD PTR [esi+0x18534],ebx
1002eb39:	89 9e 38 85 01 00    	mov    DWORD PTR [esi+0x18538],ebx
1002eb3f:	89 9e 3c 85 01 00    	mov    DWORD PTR [esi+0x1853c],ebx
1002eb45:	89 9e 40 85 01 00    	mov    DWORD PTR [esi+0x18540],ebx
1002eb4b:	88 9e 44 85 01 00    	mov    BYTE PTR [esi+0x18544],bl
1002eb51:	88 9e 45 85 01 00    	mov    BYTE PTR [esi+0x18545],bl
1002eb57:	89 35 34 a1 11 10    	mov    DWORD PTR ds:0x1011a134,esi
1002eb5d:	8b 86 d0 83 01 00    	mov    eax,DWORD PTR [esi+0x183d0]
1002eb63:	c6 44 24 20 07       	mov    BYTE PTR [esp+0x20],0x7
1002eb68:	a3 68 cf 10 10       	mov    ds:0x1010cf68,eax
1002eb6d:	e8 6e 9a fd ff       	call   0x100085e0
1002eb72:	e8 c9 7b fd ff       	call   0x10006740
1002eb77:	e8 b4 db 06 00       	call   0x1009c730
1002eb7c:	b9 08 00 00 00       	mov    ecx,0x8
1002eb81:	33 c0                	xor    eax,eax
1002eb83:	bf 00 86 11 10       	mov    edi,0x10118600
1002eb88:	68 b8 c9 01 00       	push   0x1c9b8
1002eb8d:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1002eb8f:	b9 08 00 00 00       	mov    ecx,0x8
1002eb94:	bf 30 7f 11 10       	mov    edi,0x10117f30
1002eb99:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1002eb9b:	e8 89 4d 07 00       	call   0x100a3929
1002eba0:	83 c4 04             	add    esp,0x4
1002eba3:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1002eba7:	3b c3                	cmp    eax,ebx
1002eba9:	c6 44 24 20 0b       	mov    BYTE PTR [esp+0x20],0xb
1002ebae:	74 09                	je     0x1002ebb9
1002ebb0:	8b c8                	mov    ecx,eax
1002ebb2:	e8 f9 42 fd ff       	call   0x10002eb0
1002ebb7:	eb 02                	jmp    0x1002ebbb
1002ebb9:	33 c0                	xor    eax,eax
1002ebbb:	8b fd                	mov    edi,ebp
1002ebbd:	c6 44 24 20 07       	mov    BYTE PTR [esp+0x20],0x7
1002ebc2:	a3 38 cf 10 10       	mov    ds:0x1010cf38,eax
1002ebc7:	bd 24 00 00 00       	mov    ebp,0x24
1002ebcc:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
1002ebd2:	51                   	push   ecx
1002ebd3:	56                   	push   esi
1002ebd4:	8b cf                	mov    ecx,edi
1002ebd6:	e8 f5 92 fe ff       	call   0x10017ed0
1002ebdb:	81 c7 8c 0a 00 00    	add    edi,0xa8c
1002ebe1:	4d                   	dec    ebp
1002ebe2:	75 e8                	jne    0x1002ebcc
1002ebe4:	8b ae d0 83 01 00    	mov    ebp,DWORD PTR [esi+0x183d0]
1002ebea:	3b eb                	cmp    ebp,ebx
1002ebec:	74 51                	je     0x1002ec3f
1002ebee:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
1002ebf1:	8b 8e d4 83 01 00    	mov    ecx,DWORD PTR [esi+0x183d4]
1002ebf7:	50                   	push   eax
1002ebf8:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1002ebfc:	e8 df f8 06 00       	call   0x1009e4e0
1002ec01:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1002ec05:	33 ff                	xor    edi,edi
1002ec07:	3b c3                	cmp    eax,ebx
1002ec09:	7e 34                	jle    0x1002ec3f
1002ec0b:	57                   	push   edi
1002ec0c:	8b cd                	mov    ecx,ebp
1002ec0e:	e8 cd 23 fe ff       	call   0x10010fe0
1002ec13:	f6 40 24 02          	test   BYTE PTR [eax+0x24],0x2
1002ec17:	74 03                	je     0x1002ec1c
1002ec19:	53                   	push   ebx
1002ec1a:	eb 07                	jmp    0x1002ec23
1002ec1c:	8b 0d 00 e2 0d 10    	mov    ecx,DWORD PTR ds:0x100de200
1002ec22:	51                   	push   ecx
1002ec23:	8b 50 60             	mov    edx,DWORD PTR [eax+0x60]
1002ec26:	8b 00                	mov    eax,DWORD PTR [eax]
1002ec28:	8b 8e d4 83 01 00    	mov    ecx,DWORD PTR [esi+0x183d4]
1002ec2e:	52                   	push   edx
1002ec2f:	50                   	push   eax
1002ec30:	57                   	push   edi
1002ec31:	e8 ea f8 06 00       	call   0x1009e520
1002ec36:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1002ec3a:	47                   	inc    edi
1002ec3b:	3b f8                	cmp    edi,eax
1002ec3d:	7c cc                	jl     0x1002ec0b
1002ec3f:	8d 7e 30             	lea    edi,[esi+0x30]
1002ec42:	8b cf                	mov    ecx,edi
1002ec44:	e8 e7 f1 ff ff       	call   0x1002de30
1002ec49:	8b cf                	mov    ecx,edi
1002ec4b:	e8 80 f6 ff ff       	call   0x1002e2d0
1002ec50:	e8 fb 0f fe ff       	call   0x1000fc50
1002ec55:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1002ec59:	89 9e 48 85 01 00    	mov    DWORD PTR [esi+0x18548],ebx
1002ec5f:	89 9e 4c 85 01 00    	mov    DWORD PTR [esi+0x1854c],ebx
1002ec65:	88 9e 50 85 01 00    	mov    BYTE PTR [esi+0x18550],bl
1002ec6b:	8b c6                	mov    eax,esi
1002ec6d:	5f                   	pop    edi
1002ec6e:	5e                   	pop    esi
1002ec6f:	5d                   	pop    ebp
1002ec70:	5b                   	pop    ebx
1002ec71:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1002ec78:	83 c4 14             	add    esp,0x14
1002ec7b:	c3                   	ret
1002ec7c:	90                   	nop
1002ec7d:	90                   	nop
1002ec7e:	90                   	nop
1002ec7f:	90                   	nop
1002ec80:	c7 01 40 8a 0b 10    	mov    DWORD PTR [ecx],0x100b8a40
1002ec86:	c3                   	ret
1002ec87:	90                   	nop
1002ec88:	90                   	nop
1002ec89:	90                   	nop
1002ec8a:	90                   	nop
1002ec8b:	90                   	nop
1002ec8c:	90                   	nop
1002ec8d:	90                   	nop
1002ec8e:	90                   	nop
1002ec8f:	90                   	nop
1002ec90:	b8 01 00 00 00       	mov    eax,0x1
1002ec95:	c2 08 00             	ret    0x8
1002ec98:	90                   	nop
1002ec99:	90                   	nop
1002ec9a:	90                   	nop
1002ec9b:	90                   	nop
1002ec9c:	90                   	nop
1002ec9d:	90                   	nop
1002ec9e:	90                   	nop
1002ec9f:	90                   	nop
1002eca0:	33 c0                	xor    eax,eax
1002eca2:	c2 0c 00             	ret    0xc
1002eca5:	90                   	nop
1002eca6:	90                   	nop
1002eca7:	90                   	nop
1002eca8:	90                   	nop
1002eca9:	90                   	nop
1002ecaa:	90                   	nop
1002ecab:	90                   	nop
1002ecac:	90                   	nop
1002ecad:	90                   	nop
1002ecae:	90                   	nop
1002ecaf:	90                   	nop
1002ecb0:	6a 7b                	push   0x7b
1002ecb2:	e8 18 64 07 00       	call   0x100a50cf
1002ecb7:	59                   	pop    ecx
1002ecb8:	c3                   	ret
1002ecb9:	90                   	nop
1002ecba:	90                   	nop
1002ecbb:	90                   	nop
1002ecbc:	90                   	nop
1002ecbd:	90                   	nop
1002ecbe:	90                   	nop
1002ecbf:	90                   	nop
1002ecc0:	c2 08 00             	ret    0x8
1002ecc3:	90                   	nop
1002ecc4:	90                   	nop
1002ecc5:	90                   	nop
1002ecc6:	90                   	nop
1002ecc7:	90                   	nop
1002ecc8:	90                   	nop
1002ecc9:	90                   	nop
1002ecca:	90                   	nop
1002eccb:	90                   	nop
1002eccc:	90                   	nop
1002eccd:	90                   	nop
1002ecce:	90                   	nop
1002eccf:	90                   	nop
1002ecd0:	8a 44 24 04          	mov    al,BYTE PTR [esp+0x4]
1002ecd4:	56                   	push   esi
1002ecd5:	8b f1                	mov    esi,ecx
1002ecd7:	a8 01                	test   al,0x1
1002ecd9:	c7 06 40 8a 0b 10    	mov    DWORD PTR [esi],0x100b8a40
1002ecdf:	74 09                	je     0x1002ecea
1002ece1:	56                   	push   esi
1002ece2:	e8 37 4c 07 00       	call   0x100a391e
1002ece7:	83 c4 04             	add    esp,0x4
1002ecea:	8b c6                	mov    eax,esi
1002ecec:	5e                   	pop    esi
1002eced:	c2 04 00             	ret    0x4
1002ecf0:	56                   	push   esi
1002ecf1:	8b f1                	mov    esi,ecx
1002ecf3:	e8 98 01 00 00       	call   0x1002ee90
1002ecf8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
1002ecfd:	74 09                	je     0x1002ed08
1002ecff:	56                   	push   esi
1002ed00:	e8 19 4c 07 00       	call   0x100a391e
1002ed05:	83 c4 04             	add    esp,0x4
1002ed08:	8b c6                	mov    eax,esi
1002ed0a:	5e                   	pop    esi
1002ed0b:	c2 04 00             	ret    0x4
1002ed0e:	90                   	nop
1002ed0f:	90                   	nop
1002ed10:	6a ff                	push   0xffffffff
1002ed12:	68 6d 3c 0b 10       	push   0x100b3c6d
1002ed17:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1002ed1d:	50                   	push   eax
1002ed1e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1002ed25:	51                   	push   ecx
1002ed26:	56                   	push   esi
1002ed27:	8b f1                	mov    esi,ecx
1002ed29:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
1002ed2d:	8d 8e 50 04 00 00    	lea    ecx,[esi+0x450]
1002ed33:	c7 44 24 10 12 00 00 	mov    DWORD PTR [esp+0x10],0x12
1002ed3a:	00 
1002ed3b:	e8 e0 bd 03 00       	call   0x1006ab20
1002ed40:	68 10 c4 00 10       	push   0x1000c410
1002ed45:	6a 02                	push   0x2
1002ed47:	8d 86 24 04 00 00    	lea    eax,[esi+0x424]
1002ed4d:	6a 0c                	push   0xc
1002ed4f:	50                   	push   eax
1002ed50:	c6 44 24 20 11       	mov    BYTE PTR [esp+0x20],0x11
1002ed55:	e8 2a 62 07 00       	call   0x100a4f84
1002ed5a:	68 10 c4 00 10       	push   0x1000c410
1002ed5f:	6a 02                	push   0x2
1002ed61:	8d 8e 0c 04 00 00    	lea    ecx,[esi+0x40c]
1002ed67:	6a 0c                	push   0xc
1002ed69:	51                   	push   ecx
1002ed6a:	c6 44 24 20 10       	mov    BYTE PTR [esp+0x20],0x10
1002ed6f:	e8 10 62 07 00       	call   0x100a4f84
1002ed74:	68 10 c4 00 10       	push   0x1000c410
1002ed79:	6a 02                	push   0x2
1002ed7b:	8d 96 f4 03 00 00    	lea    edx,[esi+0x3f4]
1002ed81:	6a 0c                	push   0xc
1002ed83:	52                   	push   edx
1002ed84:	c6 44 24 20 0f       	mov    BYTE PTR [esp+0x20],0xf
1002ed89:	e8 f6 61 07 00       	call   0x100a4f84
1002ed8e:	8d 8e e8 03 00 00    	lea    ecx,[esi+0x3e8]
1002ed94:	c6 44 24 10 0e       	mov    BYTE PTR [esp+0x10],0xe
1002ed99:	e8 72 d6 fd ff       	call   0x1000c410
1002ed9e:	8d 8e bc 00 00 00    	lea    ecx,[esi+0xbc]
1002eda4:	c6 44 24 10 0d       	mov    BYTE PTR [esp+0x10],0xd
1002eda9:	e8 62 d6 fd ff       	call   0x1000c410
1002edae:	8d 8e b0 00 00 00    	lea    ecx,[esi+0xb0]
1002edb4:	c6 44 24 10 0c       	mov    BYTE PTR [esp+0x10],0xc
1002edb9:	e8 52 d6 fd ff       	call   0x1000c410
1002edbe:	8d 8e a4 00 00 00    	lea    ecx,[esi+0xa4]
1002edc4:	c6 44 24 10 0b       	mov    BYTE PTR [esp+0x10],0xb
1002edc9:	e8 42 d6 fd ff       	call   0x1000c410
1002edce:	8d 8e 98 00 00 00    	lea    ecx,[esi+0x98]
1002edd4:	c6 44 24 10 0a       	mov    BYTE PTR [esp+0x10],0xa
1002edd9:	e8 32 d6 fd ff       	call   0x1000c410
1002edde:	8d 8e 8c 00 00 00    	lea    ecx,[esi+0x8c]
1002ede4:	c6 44 24 10 09       	mov    BYTE PTR [esp+0x10],0x9
1002ede9:	e8 22 d6 fd ff       	call   0x1000c410
1002edee:	8d 8e 80 00 00 00    	lea    ecx,[esi+0x80]
1002edf4:	c6 44 24 10 08       	mov    BYTE PTR [esp+0x10],0x8
1002edf9:	e8 12 d6 fd ff       	call   0x1000c410
1002edfe:	8d 4e 74             	lea    ecx,[esi+0x74]
1002ee01:	c6 44 24 10 07       	mov    BYTE PTR [esp+0x10],0x7
1002ee06:	e8 05 d6 fd ff       	call   0x1000c410
1002ee0b:	8d 4e 68             	lea    ecx,[esi+0x68]
1002ee0e:	c6 44 24 10 06       	mov    BYTE PTR [esp+0x10],0x6
1002ee13:	e8 f8 d5 fd ff       	call   0x1000c410
1002ee18:	8d 4e 5c             	lea    ecx,[esi+0x5c]
1002ee1b:	c6 44 24 10 05       	mov    BYTE PTR [esp+0x10],0x5
1002ee20:	e8 eb d5 fd ff       	call   0x1000c410
1002ee25:	8d 4e 50             	lea    ecx,[esi+0x50]
1002ee28:	c6 44 24 10 04       	mov    BYTE PTR [esp+0x10],0x4
1002ee2d:	e8 de d5 fd ff       	call   0x1000c410
1002ee32:	c6 44 24 10 03       	mov    BYTE PTR [esp+0x10],0x3
1002ee37:	8d 4e 44             	lea    ecx,[esi+0x44]
1002ee3a:	e8 d1 d5 fd ff       	call   0x1000c410
1002ee3f:	8d 4e 38             	lea    ecx,[esi+0x38]
1002ee42:	c6 44 24 10 02       	mov    BYTE PTR [esp+0x10],0x2
1002ee47:	e8 c4 d5 fd ff       	call   0x1000c410
1002ee4c:	8d 4e 2c             	lea    ecx,[esi+0x2c]
1002ee4f:	c6 44 24 10 01       	mov    BYTE PTR [esp+0x10],0x1
1002ee54:	e8 b7 d5 fd ff       	call   0x1000c410
1002ee59:	8d 4e 20             	lea    ecx,[esi+0x20]
1002ee5c:	c6 44 24 10 00       	mov    BYTE PTR [esp+0x10],0x0
1002ee61:	e8 aa d5 fd ff       	call   0x1000c410
1002ee66:	8d 4e 14             	lea    ecx,[esi+0x14]
1002ee69:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
1002ee70:	ff 
1002ee71:	e8 9a d5 fd ff       	call   0x1000c410
1002ee76:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1002ee7a:	5e                   	pop    esi
1002ee7b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1002ee82:	83 c4 10             	add    esp,0x10
1002ee85:	c3                   	ret
1002ee86:	90                   	nop
1002ee87:	90                   	nop
1002ee88:	90                   	nop
1002ee89:	90                   	nop
1002ee8a:	90                   	nop
1002ee8b:	90                   	nop
1002ee8c:	90                   	nop
1002ee8d:	90                   	nop
1002ee8e:	90                   	nop
1002ee8f:	90                   	nop
1002ee90:	6a ff                	push   0xffffffff
1002ee92:	68 36 3e 0b 10       	push   0x100b3e36
1002ee97:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1002ee9d:	50                   	push   eax
1002ee9e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1002eea5:	83 ec 0c             	sub    esp,0xc
1002eea8:	53                   	push   ebx
1002eea9:	57                   	push   edi
1002eeaa:	8b f9                	mov    edi,ecx
1002eeac:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
1002eeb0:	c7 07 c4 89 0b 10    	mov    DWORD PTR [edi],0x100b89c4
1002eeb6:	8b 0d d8 40 12 10    	mov    ecx,DWORD PTR ds:0x101240d8
1002eebc:	33 db                	xor    ebx,ebx
1002eebe:	3b cb                	cmp    ecx,ebx
1002eec0:	c7 44 24 1c 07 00 00 	mov    DWORD PTR [esp+0x1c],0x7
1002eec7:	00 
1002eec8:	74 06                	je     0x1002eed0
1002eeca:	8b 01                	mov    eax,DWORD PTR [ecx]
1002eecc:	6a 01                	push   0x1
1002eece:	ff 10                	call   DWORD PTR [eax]
1002eed0:	e8 bb 2e 03 00       	call   0x10061d90
1002eed5:	e8 16 9b 01 00       	call   0x100489f0
1002eeda:	a1 3c a1 11 10       	mov    eax,ds:0x1011a13c
1002eedf:	3b c3                	cmp    eax,ebx
1002eee1:	74 0f                	je     0x1002eef2
1002eee3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002eee9:	50                   	push   eax
1002eeea:	8b 11                	mov    edx,DWORD PTR [ecx]
1002eeec:	ff 92 e0 00 00 00    	call   DWORD PTR [edx+0xe0]
1002eef2:	a1 44 a1 11 10       	mov    eax,ds:0x1011a144
1002eef7:	89 1d 3c a1 11 10    	mov    DWORD PTR ds:0x1011a13c,ebx
1002eefd:	3b c3                	cmp    eax,ebx
1002eeff:	74 0f                	je     0x1002ef10
1002ef01:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002ef07:	50                   	push   eax
1002ef08:	8b 11                	mov    edx,DWORD PTR [ecx]
1002ef0a:	ff 92 e0 00 00 00    	call   DWORD PTR [edx+0xe0]
1002ef10:	a1 40 a1 11 10       	mov    eax,ds:0x1011a140
1002ef15:	89 1d 44 a1 11 10    	mov    DWORD PTR ds:0x1011a144,ebx
1002ef1b:	3b c3                	cmp    eax,ebx
1002ef1d:	74 0f                	je     0x1002ef2e
1002ef1f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1002ef25:	50                   	push   eax
1002ef26:	8b 11                	mov    edx,DWORD PTR [ecx]
1002ef28:	ff 92 e0 00 00 00    	call   DWORD PTR [edx+0xe0]
1002ef2e:	56                   	push   esi
1002ef2f:	89 1d 40 a1 11 10    	mov    DWORD PTR ds:0x1011a140,ebx
1002ef35:	e8 e6 bb 03 00       	call   0x1006ab20
1002ef3a:	e8 e1 bb 03 00       	call   0x1006ab20
1002ef3f:	e8 dc d8 06 00       	call   0x1009c820
1002ef44:	8b b7 d0 83 01 00    	mov    esi,DWORD PTR [edi+0x183d0]
1002ef4a:	3b f3                	cmp    esi,ebx
1002ef4c:	74 10                	je     0x1002ef5e
1002ef4e:	8b ce                	mov    ecx,esi
1002ef50:	e8 fb 1f fe ff       	call   0x10010f50
1002ef55:	56                   	push   esi
1002ef56:	e8 c3 49 07 00       	call   0x100a391e
1002ef5b:	83 c4 04             	add    esp,0x4
1002ef5e:	55                   	push   ebp
1002ef5f:	89 9f d0 83 01 00    	mov    DWORD PTR [edi+0x183d0],ebx
1002ef65:	e8 e6 da 00 00       	call   0x1003ca50
1002ef6a:	8d af d0 81 01 00    	lea    ebp,[edi+0x181d0]
1002ef70:	8b cd                	mov    ecx,ebp
1002ef72:	e8 89 c6 00 00       	call   0x1003b600
1002ef77:	b9 20 d6 10 10       	mov    ecx,0x1010d620
1002ef7c:	e8 bf 13 fe ff       	call   0x10010340
1002ef81:	8b 35 38 cf 10 10    	mov    esi,DWORD PTR ds:0x1010cf38
1002ef87:	3b f3                	cmp    esi,ebx
1002ef89:	74 10                	je     0x1002ef9b
1002ef8b:	8b ce                	mov    ecx,esi
1002ef8d:	e8 5e 3f fd ff       	call   0x10002ef0
1002ef92:	56                   	push   esi
1002ef93:	e8 86 49 07 00       	call   0x100a391e
1002ef98:	83 c4 04             	add    esp,0x4
1002ef9b:	89 1d 38 cf 10 10    	mov    DWORD PTR ds:0x1010cf38,ebx
1002efa1:	8b b7 d4 83 01 00    	mov    esi,DWORD PTR [edi+0x183d4]
1002efa7:	3b f3                	cmp    esi,ebx
1002efa9:	74 10                	je     0x1002efbb
1002efab:	8b ce                	mov    ecx,esi
1002efad:	e8 ce f1 06 00       	call   0x1009e180
1002efb2:	56                   	push   esi
1002efb3:	e8 66 49 07 00       	call   0x100a391e
1002efb8:	83 c4 04             	add    esp,0x4
1002efbb:	8b b7 c4 83 01 00    	mov    esi,DWORD PTR [edi+0x183c4]
1002efc1:	3b f3                	cmp    esi,ebx
1002efc3:	74 10                	je     0x1002efd5
1002efc5:	8b ce                	mov    ecx,esi
1002efc7:	e8 14 7e 06 00       	call   0x10096de0
1002efcc:	56                   	push   esi
1002efcd:	e8 4c 49 07 00       	call   0x100a391e
1002efd2:	83 c4 04             	add    esp,0x4
1002efd5:	8b b7 c8 83 01 00    	mov    esi,DWORD PTR [edi+0x183c8]
1002efdb:	89 9f c4 83 01 00    	mov    DWORD PTR [edi+0x183c4],ebx
1002efe1:	3b f3                	cmp    esi,ebx
1002efe3:	74 10                	je     0x1002eff5
1002efe5:	8b ce                	mov    ecx,esi
1002efe7:	e8 64 02 06 00       	call   0x1008f250
1002efec:	56                   	push   esi
1002efed:	e8 2c 49 07 00       	call   0x100a391e
1002eff2:	83 c4 04             	add    esp,0x4
1002eff5:	8b b7 cc 83 01 00    	mov    esi,DWORD PTR [edi+0x183cc]
1002effb:	89 9f c8 83 01 00    	mov    DWORD PTR [edi+0x183c8],ebx
1002f001:	3b f3                	cmp    esi,ebx
1002f003:	74 10                	je     0x1002f015
1002f005:	8b ce                	mov    ecx,esi
1002f007:	e8 a4 80 06 00       	call   0x100970b0
1002f00c:	56                   	push   esi
1002f00d:	e8 0c 49 07 00       	call   0x100a391e
1002f012:	83 c4 04             	add    esp,0x4
1002f015:	8b b7 04 85 01 00    	mov    esi,DWORD PTR [edi+0x18504]
1002f01b:	89 9f cc 83 01 00    	mov    DWORD PTR [edi+0x183cc],ebx
1002f021:	3b f3                	cmp    esi,ebx
1002f023:	74 10                	je     0x1002f035
1002f025:	8b ce                	mov    ecx,esi
1002f027:	e8 f4 ba 03 00       	call   0x1006ab20
1002f02c:	56                   	push   esi
1002f02d:	e8 ec 48 07 00       	call   0x100a391e
1002f032:	83 c4 04             	add    esp,0x4
1002f035:	8b 8f 08 85 01 00    	mov    ecx,DWORD PTR [edi+0x18508]
1002f03b:	89 9f 04 85 01 00    	mov    DWORD PTR [edi+0x18504],ebx
1002f041:	3b cb                	cmp    ecx,ebx
1002f043:	74 06                	je     0x1002f04b
1002f045:	8b 01                	mov    eax,DWORD PTR [ecx]
1002f047:	6a 01                	push   0x1
1002f049:	ff 10                	call   DWORD PTR [eax]
1002f04b:	8d 8f d8 83 01 00    	lea    ecx,[edi+0x183d8]
1002f051:	89 9f 08 85 01 00    	mov    DWORD PTR [edi+0x18508],ebx
1002f057:	c6 44 24 24 06       	mov    BYTE PTR [esp+0x24],0x6
1002f05c:	e8 4f c7 fd ff       	call   0x1000b7b0
1002f061:	8d 8f e0 82 01 00    	lea    ecx,[edi+0x182e0]
1002f067:	c6 44 24 24 05       	mov    BYTE PTR [esp+0x24],0x5
1002f06c:	e8 af ba 03 00       	call   0x1006ab20
1002f071:	8b cd                	mov    ecx,ebp
1002f073:	c6 44 24 24 04       	mov    BYTE PTR [esp+0x24],0x4
1002f078:	e8 a3 ba 03 00       	call   0x1006ab20
1002f07d:	8d 8f 18 81 01 00    	lea    ecx,[edi+0x18118]
1002f083:	c6 44 24 24 03       	mov    BYTE PTR [esp+0x24],0x3
1002f088:	e8 73 e6 05 00       	call   0x1008d700
1002f08d:	68 60 7c 01 10       	push   0x10017c60
1002f092:	6a 24                	push   0x24
1002f094:	8d 8f b4 04 00 00    	lea    ecx,[edi+0x4b4]
1002f09a:	68 8c 0a 00 00       	push   0xa8c
1002f09f:	51                   	push   ecx
1002f0a0:	c6 44 24 34 02       	mov    BYTE PTR [esp+0x34],0x2
1002f0a5:	e8 da 5e 07 00       	call   0x100a4f84
1002f0aa:	3b fb                	cmp    edi,ebx
1002f0ac:	5d                   	pop    ebp
1002f0ad:	74 05                	je     0x1002f0b4
1002f0af:	8d 77 30             	lea    esi,[edi+0x30]
1002f0b2:	eb 02                	jmp    0x1002f0b6
1002f0b4:	33 f6                	xor    esi,esi
1002f0b6:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
1002f0ba:	8d 8e 50 04 00 00    	lea    ecx,[esi+0x450]
1002f0c0:	c6 44 24 20 1a       	mov    BYTE PTR [esp+0x20],0x1a
1002f0c5:	e8 56 ba 03 00       	call   0x1006ab20
1002f0ca:	68 10 c4 00 10       	push   0x1000c410
1002f0cf:	6a 02                	push   0x2
1002f0d1:	8d 96 24 04 00 00    	lea    edx,[esi+0x424]
1002f0d7:	6a 0c                	push   0xc
1002f0d9:	52                   	push   edx
1002f0da:	c6 44 24 30 19       	mov    BYTE PTR [esp+0x30],0x19
1002f0df:	e8 a0 5e 07 00       	call   0x100a4f84
1002f0e4:	68 10 c4 00 10       	push   0x1000c410
1002f0e9:	6a 02                	push   0x2
1002f0eb:	8d 86 0c 04 00 00    	lea    eax,[esi+0x40c]
1002f0f1:	6a 0c                	push   0xc
1002f0f3:	50                   	push   eax
1002f0f4:	c6 44 24 30 18       	mov    BYTE PTR [esp+0x30],0x18
1002f0f9:	e8 86 5e 07 00       	call   0x100a4f84
1002f0fe:	68 10 c4 00 10       	push   0x1000c410
1002f103:	6a 02                	push   0x2
1002f105:	8d 8e f4 03 00 00    	lea    ecx,[esi+0x3f4]
1002f10b:	6a 0c                	push   0xc
1002f10d:	51                   	push   ecx
1002f10e:	c6 44 24 30 17       	mov    BYTE PTR [esp+0x30],0x17
1002f113:	e8 6c 5e 07 00       	call   0x100a4f84
1002f118:	8d 8e e8 03 00 00    	lea    ecx,[esi+0x3e8]
1002f11e:	c6 44 24 20 16       	mov    BYTE PTR [esp+0x20],0x16
1002f123:	e8 e8 d2 fd ff       	call   0x1000c410
1002f128:	8d 8e bc 00 00 00    	lea    ecx,[esi+0xbc]
1002f12e:	c6 44 24 20 15       	mov    BYTE PTR [esp+0x20],0x15
1002f133:	e8 d8 d2 fd ff       	call   0x1000c410
1002f138:	8d 8e b0 00 00 00    	lea    ecx,[esi+0xb0]
1002f13e:	c6 44 24 20 14       	mov    BYTE PTR [esp+0x20],0x14
1002f143:	e8 c8 d2 fd ff       	call   0x1000c410
1002f148:	8d 8e a4 00 00 00    	lea    ecx,[esi+0xa4]
1002f14e:	c6 44 24 20 13       	mov    BYTE PTR [esp+0x20],0x13
1002f153:	e8 b8 d2 fd ff       	call   0x1000c410
1002f158:	8d 8e 98 00 00 00    	lea    ecx,[esi+0x98]
1002f15e:	c6 44 24 20 12       	mov    BYTE PTR [esp+0x20],0x12
1002f163:	e8 a8 d2 fd ff       	call   0x1000c410
1002f168:	8d 8e 8c 00 00 00    	lea    ecx,[esi+0x8c]
1002f16e:	c6 44 24 20 11       	mov    BYTE PTR [esp+0x20],0x11
1002f173:	e8 98 d2 fd ff       	call   0x1000c410
1002f178:	8d 8e 80 00 00 00    	lea    ecx,[esi+0x80]
1002f17e:	c6 44 24 20 10       	mov    BYTE PTR [esp+0x20],0x10
1002f183:	e8 88 d2 fd ff       	call   0x1000c410
1002f188:	8d 4e 74             	lea    ecx,[esi+0x74]
1002f18b:	c6 44 24 20 0f       	mov    BYTE PTR [esp+0x20],0xf
1002f190:	e8 7b d2 fd ff       	call   0x1000c410
1002f195:	8d 4e 68             	lea    ecx,[esi+0x68]
1002f198:	c6 44 24 20 0e       	mov    BYTE PTR [esp+0x20],0xe
1002f19d:	e8 6e d2 fd ff       	call   0x1000c410
1002f1a2:	8d 4e 5c             	lea    ecx,[esi+0x5c]
1002f1a5:	c6 44 24 20 0d       	mov    BYTE PTR [esp+0x20],0xd
1002f1aa:	e8 61 d2 fd ff       	call   0x1000c410
1002f1af:	8d 4e 50             	lea    ecx,[esi+0x50]
1002f1b2:	c6 44 24 20 0c       	mov    BYTE PTR [esp+0x20],0xc
1002f1b7:	e8 54 d2 fd ff       	call   0x1000c410
1002f1bc:	8d 4e 44             	lea    ecx,[esi+0x44]
1002f1bf:	c6 44 24 20 0b       	mov    BYTE PTR [esp+0x20],0xb
1002f1c4:	e8 47 d2 fd ff       	call   0x1000c410
1002f1c9:	c6 44 24 20 0a       	mov    BYTE PTR [esp+0x20],0xa
1002f1ce:	8d 4e 38             	lea    ecx,[esi+0x38]
1002f1d1:	e8 3a d2 fd ff       	call   0x1000c410
1002f1d6:	8d 4e 2c             	lea    ecx,[esi+0x2c]
1002f1d9:	c6 44 24 20 09       	mov    BYTE PTR [esp+0x20],0x9
1002f1de:	e8 2d d2 fd ff       	call   0x1000c410
1002f1e3:	8d 4e 20             	lea    ecx,[esi+0x20]
1002f1e6:	c6 44 24 20 08       	mov    BYTE PTR [esp+0x20],0x8
1002f1eb:	e8 20 d2 fd ff       	call   0x1000c410
1002f1f0:	8d 4e 14             	lea    ecx,[esi+0x14]
1002f1f3:	c6 44 24 20 01       	mov    BYTE PTR [esp+0x20],0x1
1002f1f8:	e8 13 d2 fd ff       	call   0x1000c410
1002f1fd:	3b fb                	cmp    edi,ebx
1002f1ff:	88 5c 24 20          	mov    BYTE PTR [esp+0x20],bl
1002f203:	5e                   	pop    esi
1002f204:	74 05                	je     0x1002f20b
1002f206:	8d 4f 04             	lea    ecx,[edi+0x4]
1002f209:	eb 02                	jmp    0x1002f20d
1002f20b:	33 c9                	xor    ecx,ecx
1002f20d:	e8 4e 51 06 00       	call   0x10094360
1002f212:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1002f216:	c7 07 40 8a 0b 10    	mov    DWORD PTR [edi],0x100b8a40
1002f21c:	5f                   	pop    edi
1002f21d:	5b                   	pop    ebx
1002f21e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1002f225:	83 c4 18             	add    esp,0x18
1002f228:	c3                   	ret
1002f229:	90                   	nop
1002f22a:	90                   	nop
1002f22b:	90                   	nop
1002f22c:	90                   	nop
1002f22d:	90                   	nop
1002f22e:	90                   	nop
1002f22f:	90                   	nop

*/
void FXManager::SetLightState() {
    if (!m_hObject) return;
    g_pLTClient->SetLightColor(m_hObject, 1.0f, 1.0f, 1.0f);
    g_pLTClient->SetLightRadius(m_hObject, 500.0f);
}

