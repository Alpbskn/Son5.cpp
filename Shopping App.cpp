 
 #include <iostream>

int main() {
	


	/* Her alt ba�l�k i�in islem ad�nda integer olu�turdum.1-2-3-4 diye s�ralad�m ve en geni� ba�l�k olan "islem" i�in 0 de�erini atad�m.
	�leride buraya d�nmek istedi�imde islem=0 komutunu kullanaca��m.
	Hesab�n tutar� uzun bir say� ��kabilece�inden dolay� long olarak tan�mlad�m ve en ba�ta s�f�rdan ba�lamas� gerekti�ini d���nd���mden 0 de�erini atad�m.*/
	int islem=0,islem1,islem2,islem3,islem4;
	long hesap=0,indirimli=0;
    
    //Giri� ekran�m�z� yazd�ral�m ve program�n herhangi bir yerinden tekrar buraya d�nebilmek i�in t�m program� while d�ng�s� i�ine alal�m.
	while(islem==0)
	{
    printf("\n         **>> Alp Elektronik <<**      ");
    printf("\n---------------Hosgeldiniz---------------");
	printf("\n\n******************************************\n");
    printf("Lutfen yapmak istediginiz islemin yanindaki numarayi tuslayin.\n");
    printf("1-Urun ve Fiyat Sorgula\n2-Sepete Urun Ekle\n3-Siparis Tamamla\n4-Sonlandir");
    printf("\nIstenilen islem:");
	scanf("%d",&islem);   
     	// Olas�l�klar� de�erlendirmeden �nce kullan�c�dan hatal� giri� yap�p yapmad���n� denetlemek i�in bize laz�m olan aral�klar�n d���n� while d�ng�s�ne ald�m.
     	//Bu sayede kullan�c�n�n hatal� giris yapt��� kadar d�ng� tekrar edecek ve bir sonraki ad�ma ge�meyecek. 
		while(islem<=0 || islem>=5)
        {
        	printf("\nHatali giris yaptiniz. Lutfen tekrar deneyiniz: ");
	    	scanf("%d",&islem);
			if(islem==1)
			{
				islem=0;
				islem=1;
			}
			else if(islem==2)
			{
				islem=0;
				islem=2;
			}
			else if(islem==3)
			{
				islem=0;
				islem=3;
			}
			else if (islem==4)
			{
				islem=0;
				islem=4;
			}	
		}
		// �lk b�l�m�m olan �r�n ve fiyat sorgulama ekran� i�in en geni� de�i�ken olan islem'e 1 de�erini atad�m.
		// While d�ng�s�n�n i�ine almam�n sebebi ileride buraya tekrar d�nmek istedi�imizde bize yard�mc� olmas�d�r.
		//islem=1; komutunu girdi�imde buraya d�necektir.
		while(islem==1)	
		{
			printf("\n\n******************************************\n");  
		    printf("Urun ve Fiyat Sorgulama Ekrani\n\n");
     	    printf("Hangi Kategoriden Urun Sorgulamak Istiyorsunuz?\n");
     	    printf("1-Akilli Telefon\n2-Akilli Saat\n3-Kablosuz Kulaklik\n4-Bilgisayar\n");
		    printf("******************************************\n");
		    printf("Seciminiz: ");
	        scanf("%d",&islem2);
	        //�nce hatal� se�im yap�p yapmad���m�z� denetliyoruz.Do�ru cevaplardan birini girene kadar d�ng� s�rmeli.
		    while (0>=islem2 || islem2>=5)
			{
				printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
				printf("\nSeciminiz: ");
				// islem2 yi do�ru ��kana kadar kullanc�dan tekrar almal�y�z o y�zden d�ng�n�n i�ine bir daha yaz�yorum.
				scanf("%d", &islem2);
			}
			//i�lem2 nin ne oldu�una ba�l� ko�ullar�m� a�a�� yaz�yorum. Bu sayede kullanc� istedi�i kategoriden fiyat sorgulayabilecek.
			if (islem2==1)	
			{
			    printf("\n------Akilli Telefon------\n");
			    printf("\n Akilli telefon-1: 3099 TL");
			    printf("\n Akilli telefon-2: 2799 TL");
			    printf("\n Akilli telefon-3: 1899 TL");
		     	printf("\n Akilli telefon-4: 2149 TL");	
	        }
	        else if(islem2==2)
	        {
			    printf("\n------Akilli Saat------\n");
			    printf("\n Akilli Saat-1: 999 TL");
			    printf("\n Akilli Saat-2: 899 TL");
		    	printf("\n Akilli Saat-3: 1499 TL");
		    	printf("\n Akilli Saat-4: 689 TL"); 	
	        }
	        else if(islem2==3)
        	{
       			printf("\n------Kablosuz Kulaklik------\n");
     			printf("\n Kablosuz Kulaklik-1: 149 TL");
     			printf("\n Kablosuz Kulaklik-2: 259 TL");
    			printf("\n Kablosuz Kulaklik-3: 459 TL");
    			printf("\n Kablosuz Kulaklik-4: 799 TL");
        	}
        	else if (islem2==4)
	        {
		      	printf("\n------Bilgisayar------\n");
		    	printf("\n Bilgisayar-1: 6999 TL");
		    	printf("\n Bilgisayar-2: 9799 TL");
		    	printf("\n Bilgisayar-3: 12599 TL");
			    printf("\n Bilgisayar-4: 16999 TL"); 
		 	}      
			//For d�ng�s�n�n (;;) �u komutu sayesinde ne olursa olsun t�m ko�ullar�n true say�lmas�n� sa�l�yorum.
			for(;;)
			{
	    	printf("\n\nBaska kategoriden urun sorgulamak icin 1'i, ana menuye donmek icin lutfen 2'yi tuslayin: ");
	    	scanf("%d",&islem3);
	            //Bir alt ba�l��a indi�im i�in bu k�s�mda islem3 � kullan�c�dan isteyece�im.
	            //Yeniden �nce hatal� giris yap�p yapmad���m� ��reniyorum ve do�ru cevap alana kadar d�ng�n�n devam etmesini sa�l�yorum.
				while(islem3<=0 || islem3>=3)
	            {
					printf("\nHatali secim yaptiniz.");
					break;
				}
				if(islem3==1)
	            {
	                //�r�n sorgulama k�sm�n� while(islem==1) d�ng�s� i�ine ald���mdan burada bir �nceki men�ye yani �r�n sorgulama k�sm�na d�nmeyi sa�l�yorum.
					islem=1;
					break;
			    }
			    else if(islem3==2)
                {
                	//B�t�n komutlar� en ba�ta while(islem==0) d�ng�s� i�ine ald���mdan burada ana men�ye d�nmeyi sa�l�yorum.
					islem=0;
                	break;
				}
			}
	    }
    	
		while(islem==2)
		{
			//Alt dallar� olu�turmadan �nce ana men�y� ve kullan�c�dan ilk ald���m�z kod sonras�nda ��kan ekranlar� olu�turdu�um i�in islem1'i �imdi kullan�yorum.
			//�st tarafta bu y�zden islem2'yi kulland�m. 
			islem1=0;
			printf("\n\n******************************************\n");
	    	printf("Sepete Urun Ekleme Ekrani\n\n");
	    	printf("Sepetinize Hangi Kategoriden Urun Eklemek Istiyorsunuz?\n");
	        printf("1-Akilli Telefon\n2-Akilli Saat\n3-Kablosuz Kulaklik\n4-Bilgisayar\n");
	     	printf("******************************************\n");	
	     	printf("Seciminiz: ");
            //De�i�ken fazlal��� olmamas� a��s�ndan islem2 ve 3 '� burada da kulland�m.
            //Kullan�c� bu men�y� tu�lad���nda islem=1,3,4'teki islem2'ler okunmayaca�� i�in bu k�s�mda da islem2'yi rahatl�kla kullanabiliyorum.
			scanf("%d",&islem2);
			while (0>=islem2 || islem2>4)
			{
				printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
				printf("\nSeciminiz: ");
				scanf("%d", &islem2);
			}
			//Do�ru cevap ald�ktan sonra cevab�m�n ko�ullar�n� yaz�yorum.
			//Bu sayede kullan�c� istedi�i kategoriden �r�n� sepetine ekleyebilecek.
			if(islem2==1)
		    {
	            printf("Lutfen sepetinize Akilli Telefon kategorisinden hangi urunu eklemek istediginizi secin.");
	            printf("\nAkilli Telefon-1 : 3099 TL\nAkilli Telefon-2 : 2799 TL\nAkilli Telefon-3 : 1899 TL\nAkilli Telefon-4 : 2149 TL\n");
	            printf("Seciminiz: ");
	            scanf("%d",&islem3);
	            //Kategori i�inde de �r�n se�imi yapmam�z gerekti�inden kullanc�dan tekrar veri almam gerekiyor.
	            //Bu bir ba�ka alt ba�l�k oldu�u i�in islem3 de�i�kennini kullan�yorum.
				while (0>=islem3 || islem3>4)
				{
					printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
					printf("\nSeciminiz: ");
					scanf("%d", &islem3);
				}	
                if(islem3==1)
				{
				 	printf("Lutfen sepetinize Akilli Telefon-1 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*3099;				 	
			    }
				else if(islem3==2)
				{
				 	printf("Lutfen sepetinize Akilli Telefon-2 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*2799;				 	
				}
				else if (islem3==3)
				{
				 	printf("Lutfen sepetinize Akilli Telefon-3 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*1899;				 	
				}
			    else if (islem3==4)
		        {			
				 	printf("Lutfen sepetinize Akilli Telefon-4 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*2149;
				} 
				
				printf("\nIstediginiz urun sepetinize basariyla eklendi.");
				printf("\n\nBaska kategoriden urun eklemek icin 1'e, ana menuye donmek icin lutfen 2'yi tuslayin: ");
				scanf("%d",&islem4);
					while(islem4<=0 || islem4>=3)
					{
						printf("Hatali giris. Lutfen tekrar deneyin:");
						scanf("%d",&islem4);
					}
					if(islem4==1)
					{
						islem1=0;
					}
		    	    else if(islem4==2)
		    	    {
			            islem=0;
		    		}
			}	
			else if(islem2==2)
		    {
	            printf("Lutfen sepetinize Akilli Saat kategorisinden hangi urunu eklemek istediginizi secin.");
	            printf("\nAkilli Saat-1 : 999 TL\nAkilli Saat-2 : 899 TL\nAkilli Saat-3 : 1489 TL\nAkilli Saat-4 : 689 TL\n");
	            printf("Seciminiz: ");
	            scanf("%d",&islem3);
	            while (0>=islem3 || islem3>4)
				{
					printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
					printf("\nSeciminiz: ");
					scanf("%d", &islem3);
				}	
                if(islem3==1)
				{
				 	printf("Lutfen sepetinize Akilli Saat-1 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*999;				 	
			    }
				else if(islem3==2)
				{
				 	printf("Lutfen sepetinize Akilli Saat-2 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*899;				 	
				}
				else if (islem3==3)
				{
				 	printf("Lutfen sepetinize Akilli Saat-3 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*1489;
				}
			    else if (islem3==4)
		        {			
				 	printf("Lutfen sepetinize Akilli Saat-4 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*689;				 	
		    	} 
		    	printf("\nIstediginiz urun sepetinize basariyla eklendi.");
		    	printf("\n\nBaska kategoriden urun eklemek icin 1'e, ana menuye donmek icin lutfen 2'yi tuslayin: ");
				scanf("%d",&islem4);
					while(islem4<=0 || islem4>=3)
					{
						printf("Hatali giris. Lutfen tekrar deneyin:");
						scanf("%d",&islem4);
					}
					if(islem4==1)
					{
						islem1=0;
					}
		    	    else if(islem4==2)
		    	    {
			            islem=0;
		    		}
			}		
			else if(islem2==3)
		    {
	            printf("Lutfen sepetinize Kablosuz Kulaklik kategorisinden hangi urunu eklemek istediginizi secin.");
	            printf("\nKablosuz Kulaklik-1 : 149 TL\nKablosuz Kulaklik-2 : 259 TL\nKablosuz Kulaklik-3 : 459 TL\nKablosuz Kulaklik-4 : 799 TL\n");
				printf("Seciminiz: ");
	            scanf("%d",&islem3);
	            while (0>=islem3 || islem3>4)
				{
					printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
					printf("\nSeciminiz: ");
					scanf("%d", &islem3);
				}	
                if(islem3==1)
				{
				 	printf("Lutfen sepetinize Kablosuz Kulaklik-1 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*149;				 	
			    }
				else if(islem3==2)
				{
				 	printf("Lutfen sepetinize Kablosuz Kulaklik-2 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*259;
				}
				else if (islem3==3)
				{
				 	printf("Lutfen sepetinize Kablosuz Kulaklik-3 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*459;
				}
			    else if (islem3==4)
		        {			
				 	printf("Lutfen sepetinize Kablosuz Kulaklik-4 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*799;
		    	} 
		    	printf("\nIstediginiz urun sepetinize basariyla eklendi.");
		    	printf("\n\nBaska kategoriden urun eklemek icin 1'e, ana menuye donmek icin lutfen 2'yi tuslayin: ");
				scanf("%d",&islem4);
					while(islem4<=0 || islem4>=3)
					{
						printf("Hatali giris. Lutfen tekrar deneyin:");
						scanf("%d",&islem4);
					}
					if(islem4==1)
					{
						islem1=0;
					}
		    	    else if(islem4==2)
		    	    {
			            islem=0;
		    		}
			}
			else if(islem2==4)
		    {
	            printf("Lutfen sepetinize Bilgisayar kategorisinden hangi urunu eklemek istediginizi secin.");
	            printf("\nBilgisayar-1 : 6999 TL\nBilgisayar-2 : 9799 TL\nBilgisayar-3 : 12599 TL\nBilgisayar-4 : 16999 TL\n");
	            printf("Seciminiz: ");
	            scanf("%d",&islem3);
	            while (0>=islem3 || islem3>4)
				{
					printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
					printf("\nSeciminiz: ");
					scanf("%d", &islem3);
				}	
                if(islem3==1)
				{
				 	printf("Lutfen sepetinize Bilgisayar-1 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*6999;
			    }
				else if(islem3==2)
				{
				 	printf("Lutfen sepetinize Bilgisayar-2 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*9799;
				}
				else if (islem3==3)
				{
				 	printf("Lutfen sepetinize Bilgisayar urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*12599;
				}
			    else if (islem3==4)
		        {			
				 	printf("Lutfen sepetinize Bilgisayar urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*16999;
		    	}
				printf("\nIstediginiz urun sepetinize basariyla eklendi."); 
				printf("\n\nBaska kategoriden urun eklemek icin 1'e, ana menuye donmek icin lutfen 2'yi tuslayin: ");
				scanf("%d",&islem4);
					while(islem4<=0 || islem4>=3)
					{
						printf("Hatali giris. Lutfen tekrar deneyin:");
						scanf("%d",&islem4);
					}
					if(islem4==1)
					{
						islem1=0;
					}
		    	    else if(islem4==2)
		    	    {
			            islem=0;
		    		}
			}				
		}	
		//3. k�s�ma geldik.
		// Bu k�s�mda kullan�c�n�n sepetine ekledi�i �r�nlerin fiyatlar� ekrana yazd�r�lacak.
		// Sizin gibi �zel m��terilimiz i�in indirim de tan�mlad�m :). ��kan tutardaki birler basama��n� s�f�rl�yorum.
		//��kan ekranda hem normal tutar hem de indirimli tutar� g�rebileceksiniz.
		while(islem==3)
		{
		    printf("\n\n******************************************\n");
	     	printf("Siparisin Tamamlama Ekrani");
	     	indirimli=hesap-hesap%10;
	     	printf("\nHesabinizin tutari %d TL",hesap);
	     	printf("\nHesabinizin indirimli tutari %d TL",indirimli);
		    printf("\n******************************************\n");
		    printf("Alisverise devam etmek icin 1'i,siparisinizi sonlandirmak icin 2'yi tuslayin.\n");
		    printf("Seciminiz: ");
		    scanf("%d",&islem2);
		    //Al��veri�e devam etmek isteyenleri ana men�ye yani islem=0 a y�nlendiriyorum.
		    //Al��veri�i bitirmek isteyenleri ise son k�s�m olan islem=4 e y�nlendiriyorum.
			while(0==islem2 || islem2>2)
			{
				printf("Hatali secim yaptiniz.Lutfen tekrar deneyiniz.");
				printf("Seciminiz: ");
				scanf("%d",&islem2);
			}
			if(islem2==1)
	    	{
	    		printf("\nAna ekrana yonlendiriliyorsunuz.\n");
	    		islem=0;
			}
			else if(islem2==2)
			{
				printf("\nSiparis sonlandirma ekranina yonlendiriliyorsunuz.\n");
				islem=4;
			}
		}
		while (islem==4)
		{
			printf("\n******************************************\n");	   
	        printf("Siparis Sonlandirma Ekrani\n\n");
	        printf("Siparisinizi sonlandirmak istediginize emin misiniz?\n");
	        printf("Evet ise 1'i, Hayir ise 2'yi tuslayin.\n");
	        printf("Seciminiz:");
	    	scanf("%d",&islem2);
	    	//Bu k�s�mda ger�ekten program� bitirmek isteyenleri �deme a�amas�na hay�r diyenleri de islem=0 a y�nlendiriyorum.
			while(islem2<1 || islem2>2)
	    	{
	    		printf("Hatali secim yaptiniz.Lutfen tekrar deneyiniz.");
	    		printf("Seciminiz: ");
				scanf("%d",&islem2);
			}
			if(islem2==1)
			{
				printf("Odeme yontemini seciniz.(1-Kredi Karti,2-Nakit): ");
				scanf("%d",&islem3);
			    while(0>=islem3 || islem3>2)
				{
					printf("Hatali giris yaptiniz.Lutfen tekrar deneyiniz.");
					printf("Seciminiz: ");
					scanf("%d",&islem3);
				}
			    if(islem3==1)
		        {
		         	printf("\nSuanda elimizde olmayan sebeplerden dolayi sadece nakit odeme alabiliyoruz.\nLutfen kasamiza basvurun.");
		         	printf("\nAnlayisiniz icin tesekkur eder, iyi gunler dileriz.\n          ***Alp Elektronik***");
				    break;
		        }
				else if(islem3==2)
				{
				 	printf("\nKasamizdaki arkadaslar size yardim icin hazir bekliyor.\n Bizi tercih ettiginiz icin tesekkur eder, iyi gunler dileriz.");
				 	printf("\n         ***Alp Elektronik***");
                    break;
				}
			}
			else if(islem2==2)
			{
				islem=0;
				printf("\nAna menuye yonlendiriliyorsunuz...\n");
				
			}
		
		}
	}	    
	return 0;
}
