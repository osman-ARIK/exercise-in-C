// bir dizi istiyoruz kullanıcıdan sonra o sayıların hangisinin büyük/küçük olduğunu buluyoruz
#include <stdio.h>

int main()
{

    int a[5];
    int max, indexMax, min, indexMin;

    for (int i = 0; i < 5; i++)
    {
        printf("%d  .  sayi  giriniz  ", i);
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            indexMax = i;
        }
        if (a[i] > min)
        {
            min = a[i];
            indexMin = i;
        }
    }

    printf("sayi:%d", max);
    printf("min_sayi:%d", min);
    printf("indexmax:%d", indexMax);
    printf("indexmin:%d", indexMin);
}