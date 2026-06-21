#include <stdio.h>

int main()
{
    int toplam = 0;
    int a[7] = {1, 2, 3, 4, -5, -6, -7};
    int t = 0, c = 0;
    for (int i = 0; i < 7; i++)
    {
        if (a[i] > 0)
        {
            t += a[i];
        }
        else
            c += a[i];
    }
    printf("pozitif toplam:%d\n", t);
    printf("negatif toplam:%d\n", c);
}
