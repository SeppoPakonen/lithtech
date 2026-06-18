#include "GameClientShoot.h"

// 0x10033613: GameClientShoot::OnMessage
/*
10033613:	56                   	push   esi
10033614:	8d 8d d8 83 01 00    	lea    ecx,[ebp+0x183d8]
1003361a:	e8 01 0c ff ff       	call   0x10024220
1003361f:	8b 06                	mov    eax,DWORD PTR [esi]
10033621:	8b ce                	mov    ecx,esi
10033623:	ff 90 84 00 00 00    	call   DWORD PTR [eax+0x84]
10033629:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003362f:	56                   	push   esi
10033630:	8b 11                	mov    edx,DWORD PTR [ecx]
10033632:	ff 52 44             	call   DWORD PTR [edx+0x44]
10033635:	25 ff 00 00 00       	and    eax,0xff
1003363a:	8b d8                	mov    ebx,eax
1003363c:	81 fb ff 00 00 00    	cmp    ebx,0xff
10033642:	75 23                	jne    0x10033667
10033644:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10033649:	68 a0 75 0d 10       	push   0x100d75a0
1003364e:	50                   	push   eax
1003364f:	8b 08                	mov    ecx,DWORD PTR [eax]
10033651:	ff 91 9c 00 00 00    	call   DWORD PTR [ecx+0x9c]
10033657:	83 c4 08             	add    esp,0x8
1003365a:	5f                   	pop    edi
1003365b:	5e                   	pop    esi
1003365c:	5d                   	pop    ebp
1003365d:	5b                   	pop    ebx
1003365e:	81 c4 48 02 00 00    	add    esp,0x248
10033664:	c2 08 00             	ret    0x8
10033667:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003366d:	56                   	push   esi
1003366e:	8b 11                	mov    edx,DWORD PTR [ecx]
10033670:	ff 52 44             	call   DWORD PTR [edx+0x44]
10033673:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
10033676:	8b cd                	mov    ecx,ebp
10033678:	0f be c0             	movsx  eax,al
1003367b:	50                   	push   eax
1003367c:	ff 52 68             	call   DWORD PTR [edx+0x68]
1003367f:	8b f0                	mov    esi,eax
10033681:	3b f7                	cmp    esi,edi
10033683:	0f 84 f2 25 00 00    	je     0x10035c7b
10033689:	8b ce                	mov    ecx,esi
1003368b:	e8 30 48 fe ff       	call   0x10017ec0
10033690:	85 c0                	test   eax,eax
10033692:	0f 84 e3 25 00 00    	je     0x10035c7b
10033698:	8b 8e dc 00 00 00    	mov    ecx,DWORD PTR [esi+0xdc]
1003369e:	53                   	push   ebx
1003369f:	e8 cc 05 06 00       	call   0x10093c70
100336a4:	5f                   	pop    edi
100336a5:	5e                   	pop    esi
100336a6:	5d                   	pop    ebp
100336a7:	5b                   	pop    ebx
100336a8:	81 c4 48 02 00 00    	add    esp,0x248
100336ae:	c2 08 00             	ret    0x8
100336b1:	8b 16                	mov    edx,DWORD PTR [esi]
100336b3:	8d 44 24 30          	lea    eax,[esp+0x30]
100336b7:	50                   	push   eax
100336b8:	8b ce                	mov    ecx,esi
100336ba:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
100336bd:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
100336c1:	51                   	push   ecx
100336c2:	56                   	push   esi
100336c3:	8d 4d 30             	lea    ecx,[ebp+0x30]
100336c6:	e8 f5 73 ff ff       	call   0x1002aac0
100336cb:	5f                   	pop    edi
100336cc:	5e                   	pop    esi
100336cd:	5d                   	pop    ebp
100336ce:	5b                   	pop    ebx
100336cf:	81 c4 48 02 00 00    	add    esp,0x248
100336d5:	c2 08 00             	ret    0x8
100336d8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100336de:	8b 5d 00             	mov    ebx,DWORD PTR [ebp+0x0]
100336e1:	56                   	push   esi
100336e2:	8b 11                	mov    edx,DWORD PTR [ecx]
100336e4:	ff 52 44             	call   DWORD PTR [edx+0x44]
100336e7:	25 ff 00 00 00       	and    eax,0xff
100336ec:	8b cd                	mov    ecx,ebp
100336ee:	50                   	push   eax
100336ef:	ff 53 68             	call   DWORD PTR [ebx+0x68]
100336f2:	8b d8                	mov    ebx,eax
100336f4:	3b df                	cmp    ebx,edi
100336f6:	0f 84 7f 25 00 00    	je     0x10035c7b
100336fc:	8b 03                	mov    eax,DWORD PTR [ebx]
100336fe:	8b cb                	mov    ecx,ebx
10033700:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
10033703:	85 c0                	test   eax,eax
10033705:	0f 84 70 25 00 00    	je     0x10035c7b
1003370b:	56                   	push   esi
1003370c:	53                   	push   ebx
1003370d:	8d 4d 04             	lea    ecx,[ebp+0x4]
10033710:	e8 8b 1d 06 00       	call   0x100954a0
10033715:	5f                   	pop    edi
10033716:	5e                   	pop    esi
10033717:	5d                   	pop    ebp
10033718:	5b                   	pop    ebx
10033719:	81 c4 48 02 00 00    	add    esp,0x248
1003371f:	c2 08 00             	ret    0x8
10033722:	56                   	push   esi
10033723:	8d 4d 30             	lea    ecx,[ebp+0x30]
10033726:	e8 35 77 ff ff       	call   0x1002ae60
1003372b:	5f                   	pop    edi
1003372c:	5e                   	pop    esi
1003372d:	5d                   	pop    ebp
1003372e:	5b                   	pop    ebx
1003372f:	81 c4 48 02 00 00    	add    esp,0x248
10033735:	c2 08 00             	ret    0x8
10033738:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003373e:	56                   	push   esi
1003373f:	83 c5 30             	add    ebp,0x30
10033742:	8b 11                	mov    edx,DWORD PTR [ecx]
10033744:	ff 52 44             	call   DWORD PTR [edx+0x44]
10033747:	25 ff 00 00 00       	and    eax,0xff
1003374c:	8b cd                	mov    ecx,ebp
1003374e:	50                   	push   eax
1003374f:	e8 3c 80 ff ff       	call   0x1002b790
10033754:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003375a:	56                   	push   esi
1003375b:	8b 01                	mov    eax,DWORD PTR [ecx]
1003375d:	ff 50 44             	call   DWORD PTR [eax+0x44]
10033760:	25 ff 00 00 00       	and    eax,0xff
10033765:	8b cd                	mov    ecx,ebp
10033767:	50                   	push   eax
10033768:	e8 73 80 ff ff       	call   0x1002b7e0
1003376d:	5f                   	pop    edi
1003376e:	5e                   	pop    esi
1003376f:	5d                   	pop    ebp
10033770:	5b                   	pop    ebx
10033771:	81 c4 48 02 00 00    	add    esp,0x248
10033777:	c2 08 00             	ret    0x8
1003377a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033780:	56                   	push   esi
10033781:	8b 11                	mov    edx,DWORD PTR [ecx]
10033783:	ff 52 44             	call   DWORD PTR [edx+0x44]
10033786:	25 ff 00 00 00       	and    eax,0xff
1003378b:	8d 4d 30             	lea    ecx,[ebp+0x30]
1003378e:	50                   	push   eax
1003378f:	e8 4c 80 ff ff       	call   0x1002b7e0
10033794:	5f                   	pop    edi
10033795:	5e                   	pop    esi
10033796:	5d                   	pop    ebp
10033797:	5b                   	pop    ebx
10033798:	81 c4 48 02 00 00    	add    esp,0x248
1003379e:	c2 08 00             	ret    0x8
100337a1:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100337a7:	56                   	push   esi
100337a8:	8b 01                	mov    eax,DWORD PTR [ecx]
100337aa:	ff 50 44             	call   DWORD PTR [eax+0x44]
100337ad:	8b 8d c8 81 01 00    	mov    ecx,DWORD PTR [ebp+0x181c8]
100337b3:	25 ff 00 00 00       	and    eax,0xff
100337b8:	3b cf                	cmp    ecx,edi
100337ba:	8b f0                	mov    esi,eax
100337bc:	74 1e                	je     0x100337dc
100337be:	8b 11                	mov    edx,DWORD PTR [ecx]
100337c0:	ff 52 08             	call   DWORD PTR [edx+0x8]
100337c3:	3b c6                	cmp    eax,esi
100337c5:	75 15                	jne    0x100337dc
100337c7:	8d 4d 30             	lea    ecx,[ebp+0x30]
100337ca:	e8 e1 a1 ff ff       	call   0x1002d9b0
100337cf:	5f                   	pop    edi
100337d0:	5e                   	pop    esi
100337d1:	5d                   	pop    ebp
100337d2:	5b                   	pop    ebx
100337d3:	81 c4 48 02 00 00    	add    esp,0x248
100337d9:	c2 08 00             	ret    0x8
100337dc:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
100337e2:	56                   	push   esi
100337e3:	8b 01                	mov    eax,DWORD PTR [ecx]
100337e5:	ff 50 68             	call   DWORD PTR [eax+0x68]
100337e8:	8b f0                	mov    esi,eax
100337ea:	c7 46 50 01 00 00 00 	mov    DWORD PTR [esi+0x50],0x1
100337f1:	e8 6a 4b fd ff       	call   0x10008360
100337f6:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100337fc:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10033800:	89 7c 24 34          	mov    DWORD PTR [esp+0x34],edi
10033804:	df 6c 24 30          	fild   QWORD PTR [esp+0x30]
10033808:	8b 11                	mov    edx,DWORD PTR [ecx]
1003380a:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
10033810:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
10033814:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
1003381a:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
1003381e:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
10033824:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
1003382a:	de c1                	faddp  st(1),st
1003382c:	d9 9e 94 08 00 00    	fstp   DWORD PTR [esi+0x894]
10033832:	5f                   	pop    edi
10033833:	5e                   	pop    esi
10033834:	5d                   	pop    ebp
10033835:	5b                   	pop    ebx
10033836:	81 c4 48 02 00 00    	add    esp,0x248
1003383c:	c2 08 00             	ret    0x8
1003383f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033845:	56                   	push   esi
10033846:	8b 01                	mov    eax,DWORD PTR [ecx]
10033848:	ff 50 44             	call   DWORD PTR [eax+0x44]
1003384b:	8b 8d c8 81 01 00    	mov    ecx,DWORD PTR [ebp+0x181c8]
10033851:	25 ff 00 00 00       	and    eax,0xff
10033856:	3b cf                	cmp    ecx,edi
10033858:	8b f0                	mov    esi,eax
1003385a:	74 1e                	je     0x1003387a
1003385c:	8b 11                	mov    edx,DWORD PTR [ecx]
1003385e:	ff 52 08             	call   DWORD PTR [edx+0x8]
10033861:	3b c6                	cmp    eax,esi
10033863:	75 15                	jne    0x1003387a
10033865:	8d 4d 30             	lea    ecx,[ebp+0x30]
10033868:	e8 63 a2 ff ff       	call   0x1002dad0
1003386d:	5f                   	pop    edi
1003386e:	5e                   	pop    esi
1003386f:	5d                   	pop    ebp
10033870:	5b                   	pop    ebx
10033871:	81 c4 48 02 00 00    	add    esp,0x248
10033877:	c2 08 00             	ret    0x8
1003387a:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10033880:	56                   	push   esi
10033881:	8b 01                	mov    eax,DWORD PTR [ecx]
10033883:	ff 50 68             	call   DWORD PTR [eax+0x68]
10033886:	8b f0                	mov    esi,eax
10033888:	89 7e 50             	mov    DWORD PTR [esi+0x50],edi
1003388b:	e8 d0 4a fd ff       	call   0x10008360
10033890:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033896:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
1003389a:	89 7c 24 34          	mov    DWORD PTR [esp+0x34],edi
1003389e:	df 6c 24 30          	fild   QWORD PTR [esp+0x30]
100338a2:	8b 11                	mov    edx,DWORD PTR [ecx]
100338a4:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
100338aa:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
100338ae:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
100338b4:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
100338b8:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
100338be:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
100338c4:	de c1                	faddp  st(1),st
100338c6:	d9 9e 94 08 00 00    	fstp   DWORD PTR [esi+0x894]
100338cc:	5f                   	pop    edi
100338cd:	5e                   	pop    esi
100338ce:	5d                   	pop    ebp
100338cf:	5b                   	pop    ebx
100338d0:	81 c4 48 02 00 00    	add    esp,0x248
100338d6:	c2 08 00             	ret    0x8
100338d9:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100338df:	56                   	push   esi
100338e0:	8b 01                	mov    eax,DWORD PTR [ecx]
100338e2:	ff 50 44             	call   DWORD PTR [eax+0x44]
100338e5:	8b 8d c8 81 01 00    	mov    ecx,DWORD PTR [ebp+0x181c8]
100338eb:	25 ff 00 00 00       	and    eax,0xff
100338f0:	3b cf                	cmp    ecx,edi
100338f2:	8b f0                	mov    esi,eax
100338f4:	74 23                	je     0x10033919
100338f6:	8b 11                	mov    edx,DWORD PTR [ecx]
100338f8:	ff 52 08             	call   DWORD PTR [edx+0x8]
100338fb:	3b c6                	cmp    eax,esi
100338fd:	75 1a                	jne    0x10033919
100338ff:	68 00 00 f0 40       	push   0x40f00000
10033904:	8d 4d 30             	lea    ecx,[ebp+0x30]
10033907:	e8 a4 a1 ff ff       	call   0x1002dab0
1003390c:	5f                   	pop    edi
1003390d:	5e                   	pop    esi
1003390e:	5d                   	pop    ebp
1003390f:	5b                   	pop    ebx
10033910:	81 c4 48 02 00 00    	add    esp,0x248
10033916:	c2 08 00             	ret    0x8
10033919:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
1003391f:	56                   	push   esi
10033920:	8b 01                	mov    eax,DWORD PTR [ecx]
10033922:	ff 50 68             	call   DWORD PTR [eax+0x68]
10033925:	8b f0                	mov    esi,eax
10033927:	89 7e 50             	mov    DWORD PTR [esi+0x50],edi
1003392a:	e8 31 4a fd ff       	call   0x10008360
1003392f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033935:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10033939:	89 7c 24 34          	mov    DWORD PTR [esp+0x34],edi
1003393d:	df 6c 24 30          	fild   QWORD PTR [esp+0x30]
10033941:	8b 11                	mov    edx,DWORD PTR [ecx]
10033943:	d8 0d 30 85 0b 10    	fmul   DWORD PTR ds:0x100b8530
10033949:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1003394d:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
10033953:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
10033957:	d8 0d e0 83 0b 10    	fmul   DWORD PTR ds:0x100b83e0
1003395d:	d8 05 c0 83 0b 10    	fadd   DWORD PTR ds:0x100b83c0
10033963:	de c1                	faddp  st(1),st
10033965:	d9 9e 94 08 00 00    	fstp   DWORD PTR [esi+0x894]
1003396b:	5f                   	pop    edi
1003396c:	5e                   	pop    esi
1003396d:	5d                   	pop    ebp
1003396e:	5b                   	pop    ebx
1003396f:	81 c4 48 02 00 00    	add    esp,0x248
10033975:	c2 08 00             	ret    0x8
10033978:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003397e:	a1 34 a1 11 10       	mov    eax,ds:0x1011a134
10033983:	56                   	push   esi
10033984:	8b 11                	mov    edx,DWORD PTR [ecx]
10033986:	8b 18                	mov    ebx,DWORD PTR [eax]
10033988:	ff 52 44             	call   DWORD PTR [edx+0x44]
1003398b:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10033991:	25 ff 00 00 00       	and    eax,0xff
10033996:	50                   	push   eax
10033997:	ff 53 68             	call   DWORD PTR [ebx+0x68]
1003399a:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
100339a0:	8b f0                	mov    esi,eax
100339a2:	8d 54 24 28          	lea    edx,[esp+0x28]
100339a6:	8b 86 9c 08 00 00    	mov    eax,DWORD PTR [esi+0x89c]
100339ac:	8b 19                	mov    ebx,DWORD PTR [ecx]
100339ae:	50                   	push   eax
100339af:	8b 06                	mov    eax,DWORD PTR [esi]
100339b1:	6a ff                	push   0xffffffff
100339b3:	52                   	push   edx
100339b4:	8b ce                	mov    ecx,esi
100339b6:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
100339b9:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
100339bf:	50                   	push   eax
100339c0:	ff 53 1c             	call   DWORD PTR [ebx+0x1c]
100339c3:	85 c0                	test   eax,eax
100339c5:	0f 85 b0 22 00 00    	jne    0x10035c7b
100339cb:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
100339cf:	3b c7                	cmp    eax,edi
100339d1:	0f 84 a4 22 00 00    	je     0x10035c7b
100339d7:	50                   	push   eax
100339d8:	56                   	push   esi
100339d9:	6a 01                	push   0x1
100339db:	6a 01                	push   0x1
100339dd:	8d 4d 30             	lea    ecx,[ebp+0x30]
100339e0:	e8 2b a5 ff ff       	call   0x1002df10
100339e5:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
100339e9:	8b 15 4c a1 11 10    	mov    edx,DWORD PTR ds:0x1011a14c
100339ef:	51                   	push   ecx
100339f0:	ff 92 28 03 00 00    	call   DWORD PTR [edx+0x328]
100339f6:	0c 01                	or     al,0x1
100339f8:	50                   	push   eax
100339f9:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
100339fd:	e9 c3 00 00 00       	jmp    0x10033ac5
10033a02:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033a08:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
10033a0e:	56                   	push   esi
10033a0f:	8b 01                	mov    eax,DWORD PTR [ecx]
10033a11:	8b 1a                	mov    ebx,DWORD PTR [edx]
10033a13:	ff 50 44             	call   DWORD PTR [eax+0x44]
10033a16:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10033a1c:	25 ff 00 00 00       	and    eax,0xff
10033a21:	50                   	push   eax
10033a22:	ff 53 68             	call   DWORD PTR [ebx+0x68]
10033a25:	57                   	push   edi
10033a26:	50                   	push   eax
10033a27:	57                   	push   edi
10033a28:	6a 01                	push   0x1
10033a2a:	8d 4d 30             	lea    ecx,[ebp+0x30]
10033a2d:	e8 de a4 ff ff       	call   0x1002df10
10033a32:	5f                   	pop    edi
10033a33:	5e                   	pop    esi
10033a34:	5d                   	pop    ebp
10033a35:	5b                   	pop    ebx
10033a36:	81 c4 48 02 00 00    	add    esp,0x248
10033a3c:	c2 08 00             	ret    0x8
10033a3f:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10033a45:	56                   	push   esi
10033a46:	8b 19                	mov    ebx,DWORD PTR [ecx]
10033a48:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033a4e:	8b 11                	mov    edx,DWORD PTR [ecx]
10033a50:	ff 52 44             	call   DWORD PTR [edx+0x44]
10033a53:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10033a59:	25 ff 00 00 00       	and    eax,0xff
10033a5e:	50                   	push   eax
10033a5f:	ff 53 68             	call   DWORD PTR [ebx+0x68]
10033a62:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
10033a68:	8b f0                	mov    esi,eax
10033a6a:	8d 54 24 28          	lea    edx,[esp+0x28]
10033a6e:	8b 86 9c 08 00 00    	mov    eax,DWORD PTR [esi+0x89c]
10033a74:	8b 19                	mov    ebx,DWORD PTR [ecx]
10033a76:	50                   	push   eax
10033a77:	8b 06                	mov    eax,DWORD PTR [esi]
10033a79:	6a ff                	push   0xffffffff
10033a7b:	52                   	push   edx
10033a7c:	8b ce                	mov    ecx,esi
10033a7e:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
10033a81:	8b 0d cc cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfcc
10033a87:	50                   	push   eax
10033a88:	ff 53 1c             	call   DWORD PTR [ebx+0x1c]
10033a8b:	85 c0                	test   eax,eax
10033a8d:	0f 85 e8 21 00 00    	jne    0x10035c7b
10033a93:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10033a97:	3b c7                	cmp    eax,edi
10033a99:	0f 84 dc 21 00 00    	je     0x10035c7b
10033a9f:	50                   	push   eax
10033aa0:	56                   	push   esi
10033aa1:	6a 01                	push   0x1
10033aa3:	6a 02                	push   0x2
10033aa5:	8d 4d 30             	lea    ecx,[ebp+0x30]
10033aa8:	e8 63 a4 ff ff       	call   0x1002df10
10033aad:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
10033ab1:	8b 15 4c a1 11 10    	mov    edx,DWORD PTR ds:0x1011a14c
10033ab7:	51                   	push   ecx
10033ab8:	ff 92 28 03 00 00    	call   DWORD PTR [edx+0x328]
10033abe:	0c 01                	or     al,0x1
10033ac0:	50                   	push   eax
10033ac1:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
10033ac5:	8b 0d 4c a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a14c
10033acb:	50                   	push   eax
10033acc:	ff 91 2c 03 00 00    	call   DWORD PTR [ecx+0x32c]
10033ad2:	83 c4 0c             	add    esp,0xc
10033ad5:	5f                   	pop    edi
10033ad6:	5e                   	pop    esi
10033ad7:	5d                   	pop    ebp
10033ad8:	5b                   	pop    ebx
10033ad9:	81 c4 48 02 00 00    	add    esp,0x248
10033adf:	c2 08 00             	ret    0x8
10033ae2:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033ae8:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
10033aee:	56                   	push   esi
10033aef:	8b 01                	mov    eax,DWORD PTR [ecx]
10033af1:	8b 1a                	mov    ebx,DWORD PTR [edx]
10033af3:	ff 50 44             	call   DWORD PTR [eax+0x44]
10033af6:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10033afc:	25 ff 00 00 00       	and    eax,0xff
10033b01:	50                   	push   eax
10033b02:	ff 53 68             	call   DWORD PTR [ebx+0x68]
10033b05:	57                   	push   edi
10033b06:	50                   	push   eax
10033b07:	57                   	push   edi
10033b08:	6a 02                	push   0x2
10033b0a:	8d 4d 30             	lea    ecx,[ebp+0x30]
10033b0d:	e8 fe a3 ff ff       	call   0x1002df10
10033b12:	5f                   	pop    edi
10033b13:	5e                   	pop    esi
10033b14:	5d                   	pop    ebp
10033b15:	5b                   	pop    ebx
10033b16:	81 c4 48 02 00 00    	add    esp,0x248
10033b1c:	c2 08 00             	ret    0x8
10033b1f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033b25:	56                   	push   esi
10033b26:	8b 11                	mov    edx,DWORD PTR [ecx]
10033b28:	ff 52 48             	call   DWORD PTR [edx+0x48]
10033b2b:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10033b31:	25 ff ff 00 00       	and    eax,0xffff
10033b36:	83 cf ff             	or     edi,0xffffffff
10033b39:	8b 91 20 82 01 00    	mov    edx,DWORD PTR [ecx+0x18220]
10033b3f:	85 d2                	test   edx,edx
10033b41:	0f 84 c6 00 00 00    	je     0x10033c0d
10033b47:	3b c7                	cmp    eax,edi
10033b49:	8b d8                	mov    ebx,eax
10033b4b:	0f 84 2a 21 00 00    	je     0x10035c7b
10033b51:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033b57:	56                   	push   esi
10033b58:	8b 11                	mov    edx,DWORD PTR [ecx]
10033b5a:	ff 52 60             	call   DWORD PTR [edx+0x60]
10033b5d:	8b f0                	mov    esi,eax
10033b5f:	33 c9                	xor    ecx,ecx
10033b61:	3b f1                	cmp    esi,ecx
10033b63:	0f 84 12 21 00 00    	je     0x10035c7b
10033b69:	b8 02 00 00 00       	mov    eax,0x2
10033b6e:	89 8c 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],ecx
10033b75:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
10033b79:	89 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],eax
10033b80:	8d 44 24 64          	lea    eax,[esp+0x64]
10033b84:	89 8c 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],ecx
10033b8b:	89 4c 24 64          	mov    DWORD PTR [esp+0x64],ecx
10033b8f:	89 4c 24 68          	mov    DWORD PTR [esp+0x68],ecx
10033b93:	89 4c 24 6c          	mov    DWORD PTR [esp+0x6c],ecx
10033b97:	89 4c 24 70          	mov    DWORD PTR [esp+0x70],ecx
10033b9b:	89 4c 24 74          	mov    DWORD PTR [esp+0x74],ecx
10033b9f:	89 4c 24 78          	mov    DWORD PTR [esp+0x78],ecx
10033ba3:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033ba9:	50                   	push   eax
10033baa:	56                   	push   esi
10033bab:	c7 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],0x3f800000
10033bb2:	00 00 80 3f 
10033bb6:	89 bc 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],edi
10033bbd:	89 bc 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],edi
10033bc4:	89 5c 24 68          	mov    DWORD PTR [esp+0x68],ebx
10033bc8:	ff 91 f0 02 00 00    	call   DWORD PTR [ecx+0x2f0]
10033bce:	83 c4 08             	add    esp,0x8
10033bd1:	83 c5 30             	add    ebp,0x30
10033bd4:	8d 54 24 5c          	lea    edx,[esp+0x5c]
10033bd8:	8b cd                	mov    ecx,ebp
10033bda:	52                   	push   edx
10033bdb:	c7 44 24 74 00 00 00 	mov    DWORD PTR [esp+0x74],0x0
10033be2:	00 
10033be3:	c7 44 24 78 00 00 80 	mov    DWORD PTR [esp+0x78],0x3f800000
10033bea:	3f 
10033beb:	c7 44 24 7c 00 00 00 	mov    DWORD PTR [esp+0x7c],0x0
10033bf2:	00 
10033bf3:	e8 38 37 ff ff       	call   0x10027330
10033bf8:	56                   	push   esi
10033bf9:	8b cd                	mov    ecx,ebp
10033bfb:	e8 80 6b ff ff       	call   0x1002a780
10033c00:	5f                   	pop    edi
10033c01:	5e                   	pop    esi
10033c02:	5d                   	pop    ebp
10033c03:	5b                   	pop    ebx
10033c04:	81 c4 48 02 00 00    	add    esp,0x248
10033c0a:	c2 08 00             	ret    0x8
10033c0d:	3d 4b 01 00 00       	cmp    eax,0x14b
10033c12:	74 11                	je     0x10033c25
10033c14:	3d 4d 01 00 00       	cmp    eax,0x14d
10033c19:	74 0a                	je     0x10033c25
10033c1b:	bb 84 01 00 00       	mov    ebx,0x184
10033c20:	e9 2c ff ff ff       	jmp    0x10033b51
10033c25:	bb 89 01 00 00       	mov    ebx,0x189
10033c2a:	e9 22 ff ff ff       	jmp    0x10033b51
10033c2f:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033c35:	56                   	push   esi
10033c36:	8b 01                	mov    eax,DWORD PTR [ecx]
10033c38:	ff 50 48             	call   DWORD PTR [eax+0x48]
10033c3b:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10033c41:	25 ff ff 00 00       	and    eax,0xffff
10033c46:	83 ca ff             	or     edx,0xffffffff
10033c49:	39 b9 20 82 01 00    	cmp    DWORD PTR [ecx+0x18220],edi
10033c4f:	75 1c                	jne    0x10033c6d
10033c51:	3d 4b 01 00 00       	cmp    eax,0x14b
10033c56:	74 0e                	je     0x10033c66
10033c58:	3d 4d 01 00 00       	cmp    eax,0x14d
10033c5d:	74 07                	je     0x10033c66
10033c5f:	b8 84 01 00 00       	mov    eax,0x184
10033c64:	eb 0f                	jmp    0x10033c75
10033c66:	b8 89 01 00 00       	mov    eax,0x189
10033c6b:	eb 08                	jmp    0x10033c75
10033c6d:	3b c2                	cmp    eax,edx
10033c6f:	0f 84 06 20 00 00    	je     0x10035c7b
10033c75:	b9 02 00 00 00       	mov    ecx,0x2
10033c7a:	89 44 24 60          	mov    DWORD PTR [esp+0x60],eax
10033c7e:	89 94 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],edx
10033c85:	89 94 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],edx
10033c8c:	8b 16                	mov    edx,DWORD PTR [esi]
10033c8e:	8d 44 24 18          	lea    eax,[esp+0x18]
10033c92:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
10033c96:	89 8c 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],ecx
10033c9d:	50                   	push   eax
10033c9e:	8b ce                	mov    ecx,esi
10033ca0:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x3f800000
10033ca7:	00 00 80 3f 
10033cab:	89 bc 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],edi
10033cb2:	89 bc 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],edi
10033cb9:	c7 44 24 68 00 00 00 	mov    DWORD PTR [esp+0x68],0x0
10033cc0:	00 
10033cc1:	c7 44 24 6c 00 00 00 	mov    DWORD PTR [esp+0x6c],0x0
10033cc8:	00 
10033cc9:	c7 44 24 70 00 00 00 	mov    DWORD PTR [esp+0x70],0x0
10033cd0:	00 
10033cd1:	c7 44 24 74 00 00 00 	mov    DWORD PTR [esp+0x74],0x0
10033cd8:	00 
10033cd9:	c7 44 24 78 00 00 00 	mov    DWORD PTR [esp+0x78],0x0
10033ce0:	00 
10033ce1:	c7 44 24 7c 00 00 00 	mov    DWORD PTR [esp+0x7c],0x0
10033ce8:	00 
10033ce9:	ff 52 28             	call   DWORD PTR [edx+0x28]
10033cec:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10033cf0:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
10033cf4:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10033cf8:	89 4c 24 64          	mov    DWORD PTR [esp+0x64],ecx
10033cfc:	8d 4c 24 70          	lea    ecx,[esp+0x70]
10033d00:	56                   	push   esi
10033d01:	51                   	push   ecx
10033d02:	89 54 24 70          	mov    DWORD PTR [esp+0x70],edx
10033d06:	89 44 24 74          	mov    DWORD PTR [esp+0x74],eax
10033d0a:	e8 61 df fd ff       	call   0x10011c70
10033d0f:	83 c4 08             	add    esp,0x8
10033d12:	8d 54 24 5c          	lea    edx,[esp+0x5c]
10033d16:	8d 4d 30             	lea    ecx,[ebp+0x30]
10033d19:	52                   	push   edx
10033d1a:	e8 11 36 ff ff       	call   0x10027330
10033d1f:	5f                   	pop    edi
10033d20:	5e                   	pop    esi
10033d21:	5d                   	pop    ebp
10033d22:	5b                   	pop    ebx
10033d23:	81 c4 48 02 00 00    	add    esp,0x248
10033d29:	c2 08 00             	ret    0x8
10033d2c:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033d32:	56                   	push   esi
10033d33:	8b 01                	mov    eax,DWORD PTR [ecx]
10033d35:	ff 50 48             	call   DWORD PTR [eax+0x48]
10033d38:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10033d3e:	25 ff ff 00 00       	and    eax,0xffff
10033d43:	83 ca ff             	or     edx,0xffffffff
10033d46:	39 b9 20 82 01 00    	cmp    DWORD PTR [ecx+0x18220],edi
10033d4c:	75 1c                	jne    0x10033d6a
10033d4e:	3d 4b 01 00 00       	cmp    eax,0x14b
10033d53:	74 0e                	je     0x10033d63
10033d55:	3d 4d 01 00 00       	cmp    eax,0x14d
10033d5a:	74 07                	je     0x10033d63
10033d5c:	b8 84 01 00 00       	mov    eax,0x184
10033d61:	eb 0f                	jmp    0x10033d72
10033d63:	b8 89 01 00 00       	mov    eax,0x189
10033d68:	eb 08                	jmp    0x10033d72
10033d6a:	3b c2                	cmp    eax,edx
10033d6c:	0f 84 09 1f 00 00    	je     0x10035c7b
10033d72:	b9 02 00 00 00       	mov    ecx,0x2
10033d77:	c7 44 24 7c 00 00 80 	mov    DWORD PTR [esp+0x7c],0x3f800000
10033d7e:	3f 
10033d7f:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
10033d83:	89 8c 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],ecx
10033d8a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033d90:	89 bc 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],edi
10033d97:	89 94 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],edx
10033d9e:	89 94 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],edx
10033da5:	89 bc 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],edi
10033dac:	c7 44 24 64 00 00 00 	mov    DWORD PTR [esp+0x64],0x0
10033db3:	00 
10033db4:	c7 44 24 68 00 00 00 	mov    DWORD PTR [esp+0x68],0x0
10033dbb:	00 
10033dbc:	c7 44 24 6c 00 00 00 	mov    DWORD PTR [esp+0x6c],0x0
10033dc3:	00 
10033dc4:	c7 44 24 70 00 00 00 	mov    DWORD PTR [esp+0x70],0x0
10033dcb:	00 
10033dcc:	c7 44 24 74 00 00 00 	mov    DWORD PTR [esp+0x74],0x0
10033dd3:	00 
10033dd4:	c7 44 24 78 00 00 00 	mov    DWORD PTR [esp+0x78],0x0
10033ddb:	00 
10033ddc:	89 44 24 60          	mov    DWORD PTR [esp+0x60],eax
10033de0:	8b 11                	mov    edx,DWORD PTR [ecx]
10033de2:	56                   	push   esi
10033de3:	ff 52 60             	call   DWORD PTR [edx+0x60]
10033de6:	8b f0                	mov    esi,eax
10033de8:	3b f7                	cmp    esi,edi
10033dea:	0f 84 8b 1e 00 00    	je     0x10035c7b
10033df0:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033df6:	8d 44 24 64          	lea    eax,[esp+0x64]
10033dfa:	50                   	push   eax
10033dfb:	56                   	push   esi
10033dfc:	ff 91 f0 02 00 00    	call   DWORD PTR [ecx+0x2f0]
10033e02:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10033e07:	8d 54 24 54          	lea    edx,[esp+0x54]
10033e0b:	52                   	push   edx
10033e0c:	56                   	push   esi
10033e0d:	ff 90 f4 02 00 00    	call   DWORD PTR [eax+0x2f4]
10033e13:	83 c4 10             	add    esp,0x10
10033e16:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10033e1c:	8d 44 24 70          	lea    eax,[esp+0x70]
10033e20:	8b 11                	mov    edx,DWORD PTR [ecx]
10033e22:	50                   	push   eax
10033e23:	8d 44 24 1c          	lea    eax,[esp+0x1c]
10033e27:	50                   	push   eax
10033e28:	8d 44 24 20          	lea    eax,[esp+0x20]
10033e2c:	50                   	push   eax
10033e2d:	8d 44 24 58          	lea    eax,[esp+0x58]
10033e31:	50                   	push   eax
10033e32:	ff 52 10             	call   DWORD PTR [edx+0x10]
10033e35:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
10033e39:	8d 7d 30             	lea    edi,[ebp+0x30]
10033e3c:	51                   	push   ecx
10033e3d:	8b cf                	mov    ecx,edi
10033e3f:	e8 ec 34 ff ff       	call   0x10027330
10033e44:	56                   	push   esi
10033e45:	8b cf                	mov    ecx,edi
10033e47:	e8 34 69 ff ff       	call   0x1002a780
10033e4c:	5f                   	pop    edi
10033e4d:	5e                   	pop    esi
10033e4e:	5d                   	pop    ebp
10033e4f:	5b                   	pop    ebx
10033e50:	81 c4 48 02 00 00    	add    esp,0x248
10033e56:	c2 08 00             	ret    0x8
10033e59:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033e5f:	56                   	push   esi
10033e60:	8b 11                	mov    edx,DWORD PTR [ecx]
10033e62:	ff 52 48             	call   DWORD PTR [edx+0x48]
10033e65:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
10033e6b:	25 ff ff 00 00       	and    eax,0xffff
10033e70:	83 ca ff             	or     edx,0xffffffff
10033e73:	39 b9 20 82 01 00    	cmp    DWORD PTR [ecx+0x18220],edi
10033e79:	75 1c                	jne    0x10033e97
10033e7b:	3d 4b 01 00 00       	cmp    eax,0x14b
10033e80:	74 0e                	je     0x10033e90
10033e82:	3d 4d 01 00 00       	cmp    eax,0x14d
10033e87:	74 07                	je     0x10033e90
10033e89:	b8 84 01 00 00       	mov    eax,0x184
10033e8e:	eb 0f                	jmp    0x10033e9f
10033e90:	b8 89 01 00 00       	mov    eax,0x189
10033e95:	eb 08                	jmp    0x10033e9f
10033e97:	3b c2                	cmp    eax,edx
10033e99:	0f 84 dc 1d 00 00    	je     0x10035c7b
10033e9f:	b9 02 00 00 00       	mov    ecx,0x2
10033ea4:	c7 44 24 7c 00 00 80 	mov    DWORD PTR [esp+0x7c],0x3f800000
10033eab:	3f 
10033eac:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
10033eb0:	89 8c 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],ecx
10033eb7:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033ebd:	89 bc 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],edi
10033ec4:	89 94 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],edx
10033ecb:	89 94 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],edx
10033ed2:	89 bc 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],edi
10033ed9:	c7 44 24 64 00 00 00 	mov    DWORD PTR [esp+0x64],0x0
10033ee0:	00 
10033ee1:	c7 44 24 68 00 00 00 	mov    DWORD PTR [esp+0x68],0x0
10033ee8:	00 
10033ee9:	c7 44 24 6c 00 00 00 	mov    DWORD PTR [esp+0x6c],0x0
10033ef0:	00 
10033ef1:	c7 44 24 70 00 00 00 	mov    DWORD PTR [esp+0x70],0x0
10033ef8:	00 
10033ef9:	c7 44 24 74 00 00 00 	mov    DWORD PTR [esp+0x74],0x0
10033f00:	00 
10033f01:	c7 44 24 78 00 00 00 	mov    DWORD PTR [esp+0x78],0x0
10033f08:	00 
10033f09:	89 44 24 60          	mov    DWORD PTR [esp+0x60],eax
10033f0d:	8b 11                	mov    edx,DWORD PTR [ecx]
10033f0f:	56                   	push   esi
10033f10:	ff 52 60             	call   DWORD PTR [edx+0x60]
10033f13:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033f19:	8b d8                	mov    ebx,eax
10033f1b:	56                   	push   esi
10033f1c:	8b 01                	mov    eax,DWORD PTR [ecx]
10033f1e:	ff 50 60             	call   DWORD PTR [eax+0x60]
10033f21:	3b df                	cmp    ebx,edi
10033f23:	8b f0                	mov    esi,eax
10033f25:	0f 84 50 1d 00 00    	je     0x10035c7b
10033f2b:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
10033f31:	8d 4c 24 64          	lea    ecx,[esp+0x64]
10033f35:	51                   	push   ecx
10033f36:	53                   	push   ebx
10033f37:	ff 92 f0 02 00 00    	call   DWORD PTR [edx+0x2f0]
10033f3d:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10033f43:	8d 44 24 20          	lea    eax,[esp+0x20]
10033f47:	50                   	push   eax
10033f48:	56                   	push   esi
10033f49:	ff 91 f0 02 00 00    	call   DWORD PTR [ecx+0x2f0]
10033f4f:	d9 44 24 74          	fld    DWORD PTR [esp+0x74]
10033f53:	d8 64 24 28          	fsub   DWORD PTR [esp+0x28]
10033f57:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
10033f5b:	d8 64 24 2c          	fsub   DWORD PTR [esp+0x2c]
10033f5f:	83 c4 10             	add    esp,0x10
10033f62:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
10033f66:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
10033f6a:	d8 64 24 20          	fsub   DWORD PTR [esp+0x20]
10033f6e:	d9 c1                	fld    st(1)
10033f70:	8b 54 24 50          	mov    edx,DWORD PTR [esp+0x50]
10033f74:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10033f78:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
10033f7c:	d9 54 24 20          	fst    DWORD PTR [esp+0x20]
10033f80:	d9 c0                	fld    st(0)
10033f82:	d8 c9                	fmul   st,st(1)
10033f84:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
10033f88:	d8 4c 24 50          	fmul   DWORD PTR [esp+0x50]
10033f8c:	de c1                	faddp  st(1),st
10033f8e:	d9 c2                	fld    st(2)
10033f90:	d8 cb                	fmul   st,st(3)
10033f92:	de c1                	faddp  st(1),st
10033f94:	d9 fa                	fsqrt
10033f96:	d8 15 4c 83 0b 10    	fcom   DWORD PTR ds:0x100b834c
10033f9c:	df e0                	fnstsw ax
10033f9e:	f6 c4 40             	test   ah,0x40
10033fa1:	75 22                	jne    0x10033fc5
10033fa3:	d8 3d c0 83 0b 10    	fdivr  DWORD PTR ds:0x100b83c0
10033fa9:	d9 c0                	fld    st(0)
10033fab:	d8 cb                	fmul   st,st(3)
10033fad:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10033fb1:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
10033fb5:	d8 c9                	fmul   st,st(1)
10033fb7:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
10033fbb:	d9 c9                	fxch   st(1)
10033fbd:	d8 c9                	fmul   st,st(1)
10033fbf:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10033fc3:	eb 02                	jmp    0x10033fc7
10033fc5:	dd d8                	fstp   st(0)
10033fc7:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10033fcb:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
10033fcf:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
10033fd3:	89 44 24 70          	mov    DWORD PTR [esp+0x70],eax
10033fd7:	8d 75 30             	lea    esi,[ebp+0x30]
10033fda:	8d 44 24 5c          	lea    eax,[esp+0x5c]
10033fde:	dd d8                	fstp   st(0)
10033fe0:	89 4c 24 74          	mov    DWORD PTR [esp+0x74],ecx
10033fe4:	50                   	push   eax
10033fe5:	8b ce                	mov    ecx,esi
10033fe7:	89 54 24 7c          	mov    DWORD PTR [esp+0x7c],edx
10033feb:	dd d8                	fstp   st(0)
10033fed:	e8 3e 33 ff ff       	call   0x10027330
10033ff2:	53                   	push   ebx
10033ff3:	8b ce                	mov    ecx,esi
10033ff5:	e8 86 67 ff ff       	call   0x1002a780
10033ffa:	5f                   	pop    edi
10033ffb:	5e                   	pop    esi
10033ffc:	5d                   	pop    ebp
10033ffd:	5b                   	pop    ebx
10033ffe:	81 c4 48 02 00 00    	add    esp,0x248
10034004:	c2 08 00             	ret    0x8
10034007:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003400d:	56                   	push   esi
1003400e:	8b 11                	mov    edx,DWORD PTR [ecx]
10034010:	ff 52 60             	call   DWORD PTR [edx+0x60]
10034013:	3b c7                	cmp    eax,edi
10034015:	0f 84 60 1c 00 00    	je     0x10035c7b
1003401b:	50                   	push   eax
1003401c:	8d 4d 30             	lea    ecx,[ebp+0x30]
1003401f:	e8 5c 67 ff ff       	call   0x1002a780
10034024:	5f                   	pop    edi
10034025:	5e                   	pop    esi
10034026:	5d                   	pop    ebp
10034027:	5b                   	pop    ebx
10034028:	81 c4 48 02 00 00    	add    esp,0x248
1003402e:	c2 08 00             	ret    0x8
10034031:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10034037:	56                   	push   esi
10034038:	8b 01                	mov    eax,DWORD PTR [ecx]
1003403a:	ff 50 60             	call   DWORD PTR [eax+0x60]
1003403d:	3b c7                	cmp    eax,edi
1003403f:	0f 84 36 1c 00 00    	je     0x10035c7b
10034045:	8b 15 c8 cf 10 10    	mov    edx,DWORD PTR ds:0x1010cfc8
1003404b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1003404f:	51                   	push   ecx
10034050:	50                   	push   eax
10034051:	ff 92 f0 02 00 00    	call   DWORD PTR [edx+0x2f0]
10034057:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003405d:	83 c4 08             	add    esp,0x8
10034060:	8b 01                	mov    eax,DWORD PTR [ecx]
10034062:	56                   	push   esi
10034063:	ff 50 48             	call   DWORD PTR [eax+0x48]
10034066:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003406c:	25 ff ff 00 00       	and    eax,0xffff
10034071:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10034075:	56                   	push   esi
10034076:	db 44 24 34          	fild   DWORD PTR [esp+0x34]
1003407a:	8b 11                	mov    edx,DWORD PTR [ecx]
1003407c:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
10034080:	ff 52 44             	call   DWORD PTR [edx+0x44]
10034083:	25 ff 00 00 00       	and    eax,0xff
10034088:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1003408c:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10034090:	8d 54 24 18          	lea    edx,[esp+0x18]
10034094:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
10034098:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1003409c:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
100340a0:	50                   	push   eax
100340a1:	51                   	push   ecx
100340a2:	52                   	push   edx
100340a3:	8d 4d 30             	lea    ecx,[ebp+0x30]
100340a6:	e8 d5 a0 ff ff       	call   0x1002e180
100340ab:	5f                   	pop    edi
100340ac:	5e                   	pop    esi
100340ad:	5d                   	pop    ebp
100340ae:	5b                   	pop    ebx
100340af:	81 c4 48 02 00 00    	add    esp,0x248
100340b5:	c2 08 00             	ret    0x8
100340b8:	8b 06                	mov    eax,DWORD PTR [esi]
100340ba:	8d 4c 24 18          	lea    ecx,[esp+0x18]
100340be:	51                   	push   ecx
100340bf:	8b ce                	mov    ecx,esi
100340c1:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
100340c4:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
100340c8:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
100340cc:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
100340d0:	89 4c 24 54          	mov    DWORD PTR [esp+0x54],ecx
100340d4:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100340da:	89 54 24 4c          	mov    DWORD PTR [esp+0x4c],edx
100340de:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
100340e2:	56                   	push   esi
100340e3:	8b 11                	mov    edx,DWORD PTR [ecx]
100340e5:	ff 52 48             	call   DWORD PTR [edx+0x48]
100340e8:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
100340ee:	25 ff ff 00 00       	and    eax,0xffff
100340f3:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
100340f7:	56                   	push   esi
100340f8:	db 44 24 34          	fild   DWORD PTR [esp+0x34]
100340fc:	8b 01                	mov    eax,DWORD PTR [ecx]
100340fe:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
10034102:	ff 50 44             	call   DWORD PTR [eax+0x44]
10034105:	25 ff 00 00 00       	and    eax,0xff
1003410a:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
1003410e:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
10034112:	8d 44 24 4c          	lea    eax,[esp+0x4c]
10034116:	db 44 24 30          	fild   DWORD PTR [esp+0x30]
1003411a:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
1003411e:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
10034122:	51                   	push   ecx
10034123:	52                   	push   edx
10034124:	50                   	push   eax
10034125:	8d 4d 30             	lea    ecx,[ebp+0x30]
10034128:	e8 53 a0 ff ff       	call   0x1002e180
1003412d:	5f                   	pop    edi
1003412e:	5e                   	pop    esi
1003412f:	5d                   	pop    ebp
10034130:	5b                   	pop    ebx
10034131:	81 c4 48 02 00 00    	add    esp,0x248
10034137:	c2 08 00             	ret    0x8
1003413a:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
10034140:	56                   	push   esi
10034141:	8b 11                	mov    edx,DWORD PTR [ecx]
10034143:	ff 52 60             	call   DWORD PTR [edx+0x60]
10034146:	8b 0d c8 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfc8
1003414c:	8b f8                	mov    edi,eax
1003414e:	56                   	push   esi
1003414f:	8b 01                	mov    eax,DWORD PTR [ecx]
10034151:	ff 50 60             	call   DWORD PTR [eax+0x60]
10034154:	8d 75 30             	lea    esi,[ebp+0x30]
10034157:	50                   	push   eax
10034158:	57                   	push   edi
10034159:	8b ce                	mov    ecx,esi
1003415b:	e8 d0 76 ff ff       	call   0x1002b830
10034160:	57                   	push   edi
10034161:	8b ce                	mov    ecx,esi
10034163:	e8 18 66 ff ff       	call   0x1002a780
10034168:	5f                   	pop    edi
10034169:	5e                   	pop    esi
1003416a:	5d                   	pop    ebp
1003416b:	5b                   	pop    ebx
1003416c:	81 c4 48 02 00 00    	add    esp,0x248
10034172:	c2 08 00             	ret    0x8
10034175:	6a 01                	push   0x1
10034177:	56                   	push   esi
10034178:	8d 4d 30             	lea    ecx,[ebp+0x30]
1003417b:	e8 80 91 ff ff       	call   0x1002d300
10034180:	5f                   	pop    edi
10034181:	5e                   	pop    esi
10034182:	5d                   	pop    ebp
10034183:	5b                   	pop    ebx
10034184:	81 c4 48 02 00 00    	add    esp,0x248
1003418a:	c2 08 00             	ret    0x8
1003418d:	57                   	push   edi
1003418e:	56                   	push   esi
1003418f:	8d 4d 30             	lea    ecx,[ebp+0x30]
10034192:	e8 69 91 ff ff       	call   0x1002d300
10034197:	5f                   	pop    edi
10034198:	5e                   	pop    esi
10034199:	5d                   	pop    ebp
1003419a:	5b                   	pop    ebx
1003419b:	81 c4 48 02 00 00    	add    esp,0x248
100341a1:	c2 08 00             	ret    0x8
100341a4:	8b 0d 34 a1 11 10    	mov    ecx,DWORD PTR ds:0x1011a134
100341aa:	39 b9 20 82 01 00    	cmp    DWORD PTR [ecx+0x18220],edi
100341b0:	0f 84 c5 1a 00 00    	je     0x10035c7b
100341b6:	8b 16                	mov    edx,DWORD PTR [esi]
100341b8:	8d 44 24 30          	lea    eax,[esp+0x30]
100341bc:	50                   	push   eax
100341bd:	8b ce                	mov    ecx,esi
100341bf:	ff 52 04             	call   DWORD PTR [edx+0x4]
100341c2:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
100341c6:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
100341c9:	25 ff 00 00 00       	and    eax,0xff
100341ce:	8b cd                	mov    ecx,ebp
100341d0:	50                   	push   eax
100341d1:	ff 52 68             	call   DWORD PTR [edx+0x68]
100341d4:	8b f8                	mov    edi,eax
100341d6:	85 ff                	test   edi,edi
100341d8:	0f 84 9d 1a 00 00    	je     0x10035c7b
100341de:	8b 17                	mov    edx,DWORD PTR [edi]
100341e0:	8b cf                	mov    ecx,edi
100341e2:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
100341e5:	85 c0                	test   eax,eax
100341e7:	0f 84 8e 1a 00 00    	je     0x10035c7b
100341ed:	8b 06                	mov    eax,DWORD PTR [esi]
100341ef:	8d 4c 24 24          	lea    ecx,[esp+0x24]
100341f3:	51                   	push   ecx
100341f4:	8b ce                	mov    ecx,esi
100341f6:	ff 50 04             	call   DWORD PTR [eax+0x4]
100341f9:	8b 5c 24 24          	mov    ebx,DWORD PTR [esp+0x24]
100341fd:	8b 16                	mov    edx,DWORD PTR [esi]
100341ff:	8d 44 24 24          	lea    eax,[esp+0x24]
10034203:	8b ce                	mov    ecx,esi
10034205:	50                   	push   eax
10034206:	81 e3 ff 00 00 00    	and    ebx,0xff
1003420c:	ff 52 04             	call   DWORD PTR [edx+0x4]
1003420f:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
10034213:	ba 02 00 00 00       	mov    edx,0x2
10034218:	25 ff 00 00 00       	and    eax,0xff
1003421d:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
10034221:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
10034225:	89 94 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],edx
1003422c:	8b 15 34 a1 11 10    	mov    edx,DWORD PTR ds:0x1011a134
10034232:	33 c0                	xor    eax,eax
10034234:	83 c9 ff             	or     ecx,0xffffffff
10034237:	89 44 24 60          	mov    DWORD PTR [esp+0x60],eax
1003423b:	c7 44 24 7c 00 00 80 	mov    DWORD PTR [esp+0x7c],0x3f800000
10034242:	3f 
10034243:	89 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],eax
1003424a:	89 8c 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],ecx
10034251:	89 8c 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],ecx
10034258:	89 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],eax
1003425f:	89 44 24 64          	mov    DWORD PTR [esp+0x64],eax
10034263:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
10034267:	89 44 24 6c          	mov    DWORD PTR [esp+0x6c],eax
1003426b:	89 44 24 70          	mov    DWORD PTR [esp+0x70],eax
1003426f:	89 44 24 74          	mov    DWORD PTR [esp+0x74],eax
10034273:	89 44 24 78          	mov    DWORD PTR [esp+0x78],eax
10034277:	8b 82 20 82 01 00    	mov    eax,DWORD PTR [edx+0x18220]
1003427d:	f7 d8                	neg    eax
1003427f:	1b c0                	sbb    eax,eax
10034281:	24 c8                	and    al,0xc8
10034283:	05 84 01 00 00       	add    eax,0x184
10034288:	3b c1                	cmp    eax,ecx
1003428a:	89 44 24 60          	mov    DWORD PTR [esp+0x60],eax
1003428e:	0f 84 e7 19 00 00    	je     0x10035c7b
10034294:	8b 06                	mov    eax,DWORD PTR [esi]
10034296:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1003429a:	51                   	push   ecx
1003429b:	8b ce                	mov    ecx,esi
1003429d:	ff 50 28             	call   DWORD PTR [eax+0x28]
100342a0:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
100342a4:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
100342a8:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
100342ac:	89 54 24 64          	mov    DWORD PTR [esp+0x64],edx
100342b0:	8d 54 24 70          	lea    edx,[esp+0x70]
100342b4:	56                   	push   esi
100342b5:	52                   	push   edx
100342b6:	89 44 24 70          	mov    DWORD PTR [esp+0x70],eax
100342ba:	89 4c 24 74          	mov    DWORD PTR [esp+0x74],ecx
100342be:	e8 ad d9 fd ff       	call   0x10011c70
100342c3:	83 c4 08             	add    esp,0x8
100342c6:	8d 44 24 5c          	lea    eax,[esp+0x5c]
100342ca:	8d 4d 30             	lea    ecx,[ebp+0x30]
100342cd:	50                   	push   eax
100342ce:	e8 5d 30 ff ff       	call   0x10027330
100342d3:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
100342d9:	8b 07                	mov    eax,DWORD PTR [edi]
100342db:	bd 01 00 00 00       	mov    ebp,0x1
100342e0:	8d 94 24 a4 00 00 00 	lea    edx,[esp+0xa4]
100342e7:	8b 31                	mov    esi,DWORD PTR [ecx]
100342e9:	55                   	push   ebp
100342ea:	52                   	push   edx
100342eb:	53                   	push   ebx
100342ec:	8b cf                	mov    ecx,edi
100342ee:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
100342f1:	8b 0d d4 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfd4
100342f7:	50                   	push   eax
100342f8:	ff 56 24             	call   DWORD PTR [esi+0x24]
100342fb:	85 c0                	test   eax,eax
100342fd:	0f 85 78 19 00 00    	jne    0x10035c7b
10034303:	d9 44 24 64          	fld    DWORD PTR [esp+0x64]
10034307:	d8 a4 24 a4 00 00 00 	fsub   DWORD PTR [esp+0xa4]
1003430e:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10034312:	d9 44 24 68          	fld    DWORD PTR [esp+0x68]
10034316:	d8 a4 24 a8 00 00 00 	fsub   DWORD PTR [esp+0xa8]
1003431d:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
10034321:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
10034325:	d8 a4 24 ac 00 00 00 	fsub   DWORD PTR [esp+0xac]
1003432c:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
10034330:	89 4c 24 50          	mov    DWORD PTR [esp+0x50],ecx
10034334:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10034338:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1003433c:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
10034340:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
10034344:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10034348:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
1003434c:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
10034350:	89 54 24 54          	mov    DWORD PTR [esp+0x54],edx
10034354:	de c1                	faddp  st(1),st
10034356:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
1003435a:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
1003435e:	de c1                	faddp  st(1),st
10034360:	d9 fa                	fsqrt
10034362:	d8 15 c0 85 0b 10    	fcom   DWORD PTR ds:0x100b85c0
10034368:	df e0                	fnstsw ax
1003436a:	f6 c4 01             	test   ah,0x1
1003436d:	74 61                	je     0x100343d0
1003436f:	d9 54 24 24          	fst    DWORD PTR [esp+0x24]
10034373:	d8 1d 4c 83 0b 10    	fcomp  DWORD PTR ds:0x100b834c
10034379:	df e0                	fnstsw ax
1003437b:	f6 c4 40             	test   ah,0x40
1003437e:	75 2c                	jne    0x100343ac
10034380:	dd d8                	fstp   st(0)
10034382:	d9 05 c0 83 0b 10    	fld    DWORD PTR ds:0x100b83c0
10034388:	d8 74 24 24          	fdiv   DWORD PTR [esp+0x24]
1003438c:	d9 54 24 28          	fst    DWORD PTR [esp+0x28]
10034390:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
10034394:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
10034398:	d8 4c 24 28          	fmul   DWORD PTR [esp+0x28]
1003439c:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
100343a0:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
100343a4:	d8 4c 24 28          	fmul   DWORD PTR [esp+0x28]
100343a8:	d9 5c 24 54          	fstp   DWORD PTR [esp+0x54]
100343ac:	d8 0d c0 85 0b 10    	fmul   DWORD PTR ds:0x100b85c0
100343b2:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
100343b6:	d8 0d c0 85 0b 10    	fmul   DWORD PTR ds:0x100b85c0
100343bc:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
100343c0:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
100343c4:	d8 0d c0 85 0b 10    	fmul   DWORD PTR ds:0x100b85c0
100343ca:	d9 5c 24 54          	fstp   DWORD PTR [esp+0x54]
100343ce:	eb 02                	jmp    0x100343d2
100343d0:	dd d8                	fstp   st(0)
100343d2:	d8 84 24 a4 00 00 00 	fadd   DWORD PTR [esp+0xa4]
100343d9:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
100343dd:	d8 84 24 a8 00 00 00 	fadd   DWORD PTR [esp+0xa8]
100343e4:	d9 54 24 1c          	fst    DWORD PTR [esp+0x1c]
100343e8:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
100343ec:	d8 84 24 ac 00 00 00 	fadd   DWORD PTR [esp+0xac]
100343f3:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
100343f7:	be 05 00 00 00       	mov    esi,0x5
100343fc:	89 8c 24 c8 00 00 00 	mov    DWORD PTR [esp+0xc8],ecx
10034403:	8b 8c 24 a8 00 00 00 	mov    ecx,DWORD PTR [esp+0xa8]
1003440a:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
1003440e:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10034412:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
10034416:	d9 c1                	fld    st(1)
10034418:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
1003441c:	33 c0                	xor    eax,eax
1003441e:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
10034422:	89 84 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],eax
10034429:	89 84 24 e4 00 00 00 	mov    DWORD PTR [esp+0xe4],eax
10034430:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
10034434:	89 84 24 e8 00 00 00 	mov    DWORD PTR [esp+0xe8],eax
1003443b:	8b 84 24 a4 00 00 00 	mov    eax,DWORD PTR [esp+0xa4]
10034442:	d9 9c 24 c4 00 00 00 	fstp   DWORD PTR [esp+0xc4]
10034449:	89 94 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],edx
10034450:	8b 94 24 ac 00 00 00 	mov    edx,DWORD PTR [esp+0xac]
10034457:	89 b4 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],esi
1003445e:	89 84 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],eax
10034465:	89 8c 24 d4 00 00 00 	mov    DWORD PTR [esp+0xd4],ecx
1003446c:	89 94 24 d8 00 00 00 	mov    DWORD PTR [esp+0xd8],edx
10034473:	8b 07                	mov    eax,DWORD PTR [edi]
10034475:	8b cf                	mov    ecx,edi
10034477:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
1003447a:	89 84 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],eax
10034481:	a1 c8 cf 10 10       	mov    eax,ds:0x1010cfc8
10034486:	8d 94 24 c4 00 00 00 	lea    edx,[esp+0xc4]
1003448d:	8d 8c 24 2c 01 00 00 	lea    ecx,[esp+0x12c]
10034494:	52                   	push   edx
10034495:	89 b4 24 e4 00 00 00 	mov    DWORD PTR [esp+0xe4],esi
1003449c:	89 8c 24 e8 00 00 00 	mov    DWORD PTR [esp+0xe8],ecx
100344a3:	89 ac 24 ec 00 00 00 	mov    DWORD PTR [esp+0xec],ebp
100344aa:	ff 90 38 01 00 00    	call   DWORD PTR [eax+0x138]
100344b0:	83 c4 04             	add    esp,0x4
100344b3:	85 c0                	test   eax,eax
100344b5:	0f 84 c0 17 00 00    	je     0x10035c7b
100344bb:	39 ac 24 e8 00 00 00 	cmp    DWORD PTR [esp+0xe8],ebp
100344c2:	0f 85 b3 17 00 00    	jne    0x10035c7b
100344c8:	d9 84 24 2c 01 00 00 	fld    DWORD PTR [esp+0x12c]
100344cf:	d8 a4 24 a4 00 00 00 	fsub   DWORD PTR [esp+0xa4]
100344d6:	d9 84 24 30 01 00 00 	fld    DWORD PTR [esp+0x130]
100344dd:	d8 a4 24 a8 00 00 00 	fsub   DWORD PTR [esp+0xa8]
100344e4:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
100344e8:	d9 84 24 34 01 00 00 	fld    DWORD PTR [esp+0x134]
100344ef:	d8 a4 24 ac 00 00 00 	fsub   DWORD PTR [esp+0xac]
100344f6:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
100344fa:	89 4c 24 50          	mov    DWORD PTR [esp+0x50],ecx
100344fe:	8b 0d e0 cf 10 10    	mov    ecx,DWORD PTR ds:0x1010cfe0
10034504:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10034508:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
1003450c:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
10034510:	89 54 24 54          	mov    DWORD PTR [esp+0x54],edx
10034514:	8b 01                	mov    eax,DWORD PTR [ecx]
10034516:	8d 94 24 b0 00 00 00 	lea    edx,[esp+0xb0]
1003451d:	52                   	push   edx
1003451e:	8d 94 24 f0 00 00 00 	lea    edx,[esp+0xf0]
10034525:	52                   	push   edx
10034526:	ff 50 20             	call   DWORD PTR [eax+0x20]
10034529:	d9 84 24 f0 00 00 00 	fld    DWORD PTR [esp+0xf0]
10034530:	8b 84 24 fc 00 00 00 	mov    eax,DWORD PTR [esp+0xfc]
10034537:	8b 8c 24 0c 01 00 00 	mov    ecx,DWORD PTR [esp+0x10c]
1003453e:	d9 9c 24 fc 00 00 00 	fstp   DWORD PTR [esp+0xfc]
10034545:	d9 84 24 f4 00 00 00 	fld    DWORD PTR [esp+0xf4]
1003454c:	8b 94 24 04 01 00 00 	mov    edx,DWORD PTR [esp+0x104]
10034553:	89 8c 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],ecx
1003455a:	d9 9c 24 0c 01 00 00 	fstp   DWORD PTR [esp+0x10c]
10034561:	d9 84 24 10 01 00 00 	fld    DWORD PTR [esp+0x110]
10034568:	89 84 24 f0 00 00 00 	mov    DWORD PTR [esp+0xf0],eax
1003456f:	89 94 24 10 01 00 00 	mov    DWORD PTR [esp+0x110],edx
10034576:	d9 94 24 04 01 00 00 	fst    DWORD PTR [esp+0x104]
1003457d:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
10034581:	d8 8c 24 f4 00 00 00 	fmul   DWORD PTR [esp+0xf4]
10034588:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
1003458c:	d8 8c 24 f0 00 00 00 	fmul   DWORD PTR [esp+0xf0]
10034593:	8d 54 24 4c          	lea    edx,[esp+0x4c]
10034597:	53                   	push   ebx
10034598:	52                   	push   edx
10034599:	de c1                	faddp  st(1),st
1003459b:	d9 84 24 f4 00 00 00 	fld    DWORD PTR [esp+0xf4]
100345a2:	d8 4c 24 54          	fmul   DWORD PTR [esp+0x54]
100345a6:	de c1                	faddp  st(1),st
100345a8:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
100345ac:	d8 8c 24 08 01 00 00 	fmul   DWORD PTR [esp+0x108]
100345b3:	d9 44 24 5c          	fld    DWORD PTR [esp+0x5c]
100345b7:	d8 cb                	fmul   st,st(3)
100345b9:	de c1                	faddp  st(1),st
100345bb:	d9 84 24 04 01 00 00 	fld    DWORD PTR [esp+0x104]
100345c2:	d8 4c 24 54          	fmul   DWORD PTR [esp+0x54]
100345c6:	de c1                	faddp  st(1),st
100345c8:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
100345cc:	d9 44 24 5c          	fld    DWORD PTR [esp+0x5c]
100345d0:	d8 8c 24 1c 01 00 00 	fmul   DWORD PTR [esp+0x11c]
100345d7:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
100345db:	d8 8c 24 18 01 00 00 	fmul   DWORD PTR [esp+0x118]
100345e2:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
100345e6:	89 44 24 58          	mov    DWORD PTR [esp+0x58],eax
100345ea:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
100345ee:	de c1                	faddp  st(1),st
100345f0:	d9 84 24 14 01 00 00 	fld    DWORD PTR [esp+0x114]
100345f7:	d8 4c 24 54          	fmul   DWORD PTR [esp+0x54]
100345fb:	50                   	push   eax
100345fc:	de c1                	faddp  st(1),st
100345fe:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
10034602:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
10034606:	d9 5c 24 58          	fstp   DWORD PTR [esp+0x58]
1003460a:	89 4c 24 60          	mov    DWORD PTR [esp+0x60],ecx
1003460e:	8b cf                	mov    ecx,edi
10034610:	dd d8                	fstp   st(0)
10034612:	e8 e9 51 fe ff       	call   0x10019800
10034617:	5f                   	pop    edi
10034618:	5e                   	pop    esi
10034619:	5d                   	pop    ebp
1003461a:	5b                   	pop    ebx
1003461b:	81 c4 48 02 00 00    	add    esp,0x248
10034621:	c2 08 00             	ret    0x8
10034624:	8b ad c8 81 01 00    	mov    ebp,DWORD PTR [ebp+0x181c8]
1003462a:	83 c5 5c             	add    ebp,0x5c
1003462d:	8b 4d 28             	mov    ecx,DWORD PTR [ebp+0x28]
10034630:	3b cf                	cmp    ecx,edi
10034632:	0f 84 43 16 00 00    	je     0x10035c7b
10034638:	8b 11                	mov    edx,DWORD PTR [ecx]
1003463a:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
1003463d:	84 c0                	test   al,al
1003463f:	0f 84 36 16 00 00    	je     0x10035c7b
10034645:	8b 6d 28             	mov    ebp,DWORD PTR [ebp+0x28]
10034648:	3b ef                	cmp    ebp,edi
1003464a:	0f 84 2b 16 00 00    	je     0x10035c7b
10034650:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10034653:	3d ff 00 00 00       	cmp    eax,0xff
10034658:	0f 84 1d 16 00 00    	je     0x10035c7b
1003465e:	8b 4d 18             	mov    ecx,DWORD PTR [ebp+0x18]
10034661:	3b cf                	cmp    ecx,edi
10034663:	74 0c                	je     0x10034671
10034665:	83 f9 01             	cmp    ecx,0x1
10034668:	0f 85 0d 16 00 00    	jne    0x10035c7b
1003466e:	83 c0 40             	add    eax,0x40
10034671:	83 f8 4f             	cmp    eax,0x4f
10034674:	0f 85 01 16 00 00    	jne    0x10035c7b
1003467a:	8b 06                	mov    eax,DWORD PTR [esi]
1003467c:	8d 4c 24 24          	lea    ecx,[esp+0x24]
10034680:	51                   	push   ecx
10034681:	8b ce                	mov    ecx,esi
10034683:	ff 50 04             	call   DWORD PTR [eax+0x4]
10034686:	8b 16                	mov    edx,DWORD PTR [esi]
10034688:	8d 44 24 30          	lea    eax,[esp+0x30]
1003468c:	50                   	push   eax
1003468d:	8b ce                	mov    ecx,esi
1003468f:	ff 52 04             	call   DWORD PTR [edx+0x4]
10034692:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
10034696:	51                   	push   ecx
10034697:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
1003469b:	25 ff 00 00 00       	and    eax,0xff
100346a0:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
100346a4:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
100346a7:	db 44 24 34          	fild   DWORD PTR [esp+0x34]
100346ab:	81 e1 ff 00 00 00    	and    ecx,0xff
100346b1:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
100346b5:	d9 1c 24             	fstp   DWORD PTR [esp]
100346b8:	db 44 24 34          	fild   DWORD PTR [esp+0x34]
100346bc:	51                   	push   ecx
100346bd:	8b cd                	mov    ecx,ebp
100346bf:	d9 1c 24             	fstp   DWORD PTR [esp]
100346c2:	ff 52 48             	call   DWORD PTR [edx+0x48]
100346c5:	8b 16                	mov    edx,DWORD PTR [esi]
100346c7:	8d 44 24 30          	lea    eax,[esp+0x30]
100346cb:	50                   	push   eax
100346cc:	8b ce                	mov    ecx,esi
100346ce:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
100346d1:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
100346d5:	51                   	push   ecx
100346d6:	e8 05 cb fd ff       	call   0x100111e0
100346db:	83 c4 04             	add    esp,0x4
100346de:	5f                   	pop    edi
100346df:	5e                   	pop    esi
100346e0:	5d                   	pop    ebp
100346e1:	5b                   	pop    ebx
100346e2:	81 c4 48 02 00 00    	add    esp,0x248
100346e8:	c2 08 00             	ret    0x8
100346eb:	56                   	push   esi
100346ec:	8d 4d 30             	lea    ecx,[ebp+0x30]
100346ef:	e8 3c 9d ff ff       	call   0x1002e430
100346f4:	5f                   	pop    edi
100346f5:	5e                   	pop    esi
100346f6:	5d                   	pop    ebp
100346f7:	5b                   	pop    ebx
100346f8:	81 c4 48 02 00 00    	add    esp,0x248
100346fe:	c2 08 00             	ret    0x8

*/
void GameClientShoot::OnMessage() {
    // TODO: Implement OnMessage
}

