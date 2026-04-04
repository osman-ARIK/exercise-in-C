// dizinin her elemanını 0 yapıp ekrana yazmak
#include <stdio.h>

int main()
{

    int a[5];
    for (int i = 0; i < 5; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}