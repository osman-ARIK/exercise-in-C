#include <stdio.h>

int main()
{
    int b;
    int a[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("bir sayi seciniz:\n");
    scanf("%d", &b);
    for (int i = 0; i < 11; i++)
    {
        if (b == a[i])
        {
            printf("true\n");
            break;
        }
        else

            printf("false\n");
    }

    return 0;
}