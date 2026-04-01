#include <stdio.h>

int main(){

    int a,b,s,islem;

    printf("Hesap Makinesi\n");
    printf("Hangi islemi yapmak istiyorsunuz\n a-toplama icin 1\n b-cikartma icin 2\n c-carpma icin 3\n d-bolme icin 4\n");
    scanf("%d", &islem);

    switch(islem){

    case 1:
    printf("ilk sayiyi giriniz:\n");
    scanf("%d", &a);
    printf("ikinci sayiyi giriniz\n");
    scanf("%d", &b);
    s=a+b;
    break;

    case 2:
    printf("ilk sayiyi giriniz:\n");
    scanf("%d", &a);
    printf("ikinci sayiyi giriniz\n");
    scanf("%d", &b);
    s=a-b;
    break;

    case 3:
    printf("ilk sayiyi giriniz:\n");
    scanf("%d", &a);
    printf("ikinci sayiyi giriniz\n");
    scanf("%d", &b);
    s=a*b;  
    break;

    case 4:
    printf("ilk sayiyi giriniz:\n");
    scanf("%d", &a);
    printf("ikinci sayiyi giriniz\n");
    scanf("%d", &b);
    if(b!=0){
    s = a / b;
    printf("islem sonucunuz: %d",s);
    }
    else printf("sonuc sonsuzdur");
    return 1;
    break;

    default:
    printf("hatali giris");
    return 1;
    
    }

    printf("islem sonucunuz: %d",s);

    return 0;
}