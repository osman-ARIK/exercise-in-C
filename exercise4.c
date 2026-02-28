//banka atm yapýmý switch case kullanarak
//bank atm construction using switch case
#include <stdio.h>

int main(){
	int islem, bakiye=1000,tutar;
		
	printf("islem seciniz\n1:para cekme\n2:para yatirma\n3:havale yapma\n4:bakiye sorgulama\n5:kart iade\n");
	scanf("%d", &islem);
	
	switch (islem) {
		 
	case 1:
		printf("mevcut bakiyeniz: %d\n", bakiye);
		printf("cekilecek tutari giriniz:");
		scanf("%d", &tutar);
		if(tutar > bakiye){
		printf("hati giris, lütfen bakiyenizin üstünde bir fiyat girmeyiniz");
		}
		bakiye -= tutar;
		printf("mevcut bakiyeniz: %d", bakiye);
		break;
		
	case 2:
		printf("mevcut bakiyeniz: %d\n", bakiye);
		printf("yatirilacak tutari giriniz:");
		scanf("%d", &tutar);
		bakiye += tutar;
		printf("mevcut bakiyeniz: %d", bakiye);
		break;
		
	
	case 3:
		printf("mevcut bakiyeniz: %d\n", bakiye);
		printf("havale yapilacak tuari giriniz:");
		scanf("%d", &tutar);
		bakiye -= tutar;
		printf("mevcut bakiyeniz: %d", bakiye);
		break;
	
	case 4:
		printf("mevcut bakiye: %d", bakiye);
		break;
	
	case 5:
		printf("kartiniz iade edildi!");
	    break;
	    
	default :
	printf("hatali giris yaptiniz!!");
			
			
	}
	
}

