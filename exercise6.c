//exercise5 in düzeltilmiş ve geliştirilmiş hali
//girdiğimiz not ile harf notumuzu hesaplayan if-else döngüsü
//an if-else loop that calculates our letter grade based on the grade we entered

#include <stdio.h>

int main(){
	
	int v1,v2,sonuc,sonuc1,sonuc2;
	printf("1.vizenizi tam sayi olarak giriniz:");
	scanf("%d",&v1);
	printf("2.vizenizi tam sayi olarak giriniz:");
	scanf("%d",&v2);
	sonuc1 = v1 * 4 / 10;
	sonuc2 = v2 * 6 / 10;
	sonuc = sonuc1 + sonuc2;
	
	
	if (sonuc >= 90 && sonuc <= 100){
	printf("harf notunuz AA\n");
	printf("sinav ortalamaniz: %d", sonuc);
}
	else if (sonuc >= 80 && sonuc < 90){
	printf("harf notunuz BB\n");
	printf("sinav ortalamaniz: %d", sonuc);

}
	else if (sonuc >= 70 && sonuc < 80){
	printf("harf notunuz CC\n");
	printf("sinav ortalamaniz: %d", sonuc);
	
}
	else if (sonuc >= 60 && sonuc < 70){
	printf("harf notunuz DDn\n");
	printf("sinav ortalamaniz: %d", sonuc);

}
	else if (sonuc >= 50 && sonuc < 60){
	printf("harf notunuz EE\n");
	printf("sinav ortalamanz: %d", sonuc);

}
else if (sonuc > 100){
	printf("hatali giris!!");
}
else {
printf("dersten kaldiniz!\n");
printf("sinav ortalamaniz: %d", sonuc);
}

return 0;
}