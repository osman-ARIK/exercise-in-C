//a ve b deðiþkeninin sayýlarýný aralarýnda yer deðiþtirme
//biraz eklemeler yaptým yoksa kolayca yapabilirsiniz
//Swapping the numbers of variables a and b
#include <stdio.h>

int main(){
	
	int a,b,t;
	printf("burda girdiginiz sayilari aralarinda degistirilecek\n");
	printf("girdiginiz sayilar tam sayi olamli\n");
	printf("a'yi giriniz\n");
	scanf("%d", &a);
	printf("b'yi giriniz\n");
	scanf("%d" , &b);
	//mesela burda  a=5 , b=10 olsun
    t=b;
    //'t' artýk b yani 10
    b=a, a=t;
	//þimdi ise'a' artýk 10 'b' de artýk 5
	printf("a: %d\n",a);
	printf("b: %d",b);


	
	return 0;
}
