//kullanýcýdan aldýðýmýz iki sayýyý toplayýp ekrana yazdýrma
// Add the two numbers we receive from the user and print the result to the screen.
#include <stdio.h>

int main(){
	
	float a,b,toplam;
	printf("bir sayi yaziniz\n");
	printf("a'yi yaziniz\n");
	scanf("%f",&a);
	printf("b'yi yaziniz\n");
	scanf("%f" ,&b);
	toplam = a + b;
	printf("toplam sonucu: %.2f",toplam);
	
	return 0 ;
}
