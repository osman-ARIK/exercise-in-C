// dizideki çift sayıları ayrı tek sayıları ayrı ayrı gösterme
#include <stdio.h>

int main()
{
    int toplam = 0;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int t = 0, c = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("cift:%d\n", a[i]);
        }
        else
            printf("tek:%d\n", a[i]);
    }
}
