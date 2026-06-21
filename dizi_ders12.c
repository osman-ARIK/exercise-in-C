// dizideki elemanları tek tek tooplayıp aritmetik ortalamasını bulmak
#include <stdio.h>

int main()
{
    int toplam = 0;
    int a[] = {1, 2, 3, 4, 5};
    int b = sizeof(a) / sizeof(a[0]);
    int c = 0, t = 0;
    for (int i = 0; i < 5; i++)
    {
        t += a[i];
    }
    c = t / b;
    printf("ort:%d\n", c);
}
