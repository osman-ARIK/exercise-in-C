// önce diziyi belirleyip sonra onu sırayla sonra da ters sırayla ekrana yazdırmak
#include <stdio.h>

int main()
{

    int a[5];

    for (int i = 0; i < 5; i++)
    {
        printf("%d  .  sayi  giriniz  ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d . sayi : %d\n", i + 1, a[i]);
    }
    for (int j = 4; j >= 0; j--)
    {
        printf("%d . sayi : %d\n", j + 1, a[j]);
    }
}
