#include <stdio.h>
#include <math.h>

int anadizi(int dizi[], int a);
double ort(int dizi[], int a);
int medyan(int dizi[], int a);
int max(int dizi[], int a);
int min(int dizi[], int a);
double stdsap(int dizi[], int a);
void Vbul(int dizi[], int a);

int main()
{

    int dizi[10] = {9, 7, 4, 5, 6, 3, 2, 1, 4, 6};
    int a = (sizeof(dizi) / sizeof(dizi[0]));
    anadizi(dizi, a);

    double orta = ort(dizi, a);
    printf("ortalama: %lf\n", orta);
    int buyuk = max(dizi, a);
    printf("max deger: %d\n", buyuk);
    int kucuk = min(dizi, a);
    printf("min deger: %d\n", kucuk);
    Vbul(dizi, a);
    medyan(dizi, a);
    double standtsap = stdsap(dizi, a);
    printf("standartsapma: %f\n", standtsap);

    return 0;
}

double ort(int dizi[], int a)
{
    double toplam = 0;
    for (int i = 0; i < a; i++)
    {
        toplam += dizi[i];
    }
    return toplam / a;
}

int max(int dizi[], int a)
{
    int max = dizi[0];
    for (int i = 0; i < a; i++)
    {
        if (max < dizi[i])
        {
            max = dizi[i];
        }
    }
    return max;
}

int min(int dizi[], int a)
{
    int min = dizi[0];
    for (int i = 0; i < a; i++)
    {
        if (min > dizi[i])
        {
            min = dizi[i];
        }
    }
    return min;
}

int anadizi(int dizi[], int a)
{
    printf("dizi: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", dizi[i]);
    }
    printf("\n");
    return 0;
}

int medyan(int dizi[], int a)
{
    int gecici;
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - 1 - i; j++)
        {
            if (dizi[j] > dizi[j + 1])
            {
                gecici = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
            }
        }
    }
    printf("duzenlenmis dizi: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d,", dizi[i]);
    }
    printf("\n");

    double medyan;
    if (a % 2 == 0)
    {
        medyan = ((dizi[a / 2 - 1] + dizi[a / 2]) / 2.0);
    }
    else
    {
        medyan = (a / 2);
    }
    printf("dizinin medyani: %f\n", medyan);
    return 0;
}

double stdsap(int dizi[], int a)
{
    double toplam = 0;
    double ortalama = 0;
    for (int i = 0; i < a; i++)
    {
        toplam += dizi[i];
    }
    ortalama = toplam / a;

    double kareleritoplam = 0;

    for (int i = 0; i < a; i++)
    {
        kareleritoplam += (dizi[i] - ortalama) * (dizi[i] - ortalama);
    }

    double varyans = kareleritoplam / a;
    return sqrt(varyans);
}

void Vbul(int dizi[], int a)
{
    int maxVuz = 0, maxVbas = 0;
    int maxTVuz = 0, maxTVbas = 0;

    for (int i = 1; i < a - 1; i++)
    {
        int j = i;

        while (j > 0 && dizi[j] < dizi[j - 1])
            j--;
        int sol = j;

        j = i;
        while (j < a - 1 && dizi[j] < dizi[j + 1])
            j++;
        int sag = j;

        int uzunluk = sag - sol + 1;

        if (uzunluk > maxVuz)
        {
            maxVuz = uzunluk;
            maxVbas = sol;
        }
        j = i;

        while (j > 0 && dizi[j] > dizi[j - 1])
            j--;
        sol = j;

        j = i;
        while (j < a - 1 && dizi[j] > dizi[j + 1])
            j++;
        sag = j;

        uzunluk = sag - sol + 1;

        if (uzunluk > maxTVuz)
        {
            maxTVuz = uzunluk;
            maxTVbas = sol;
        }
    }

    printf("En uzun V dizisi uzunlugu: %d\nDizi: ", maxVuz);
    for (int i = maxVbas; i < maxVbas + maxVuz; i++)
        printf("%d ", dizi[i]);

    printf("\n");

    printf("En uzun ters V dizisi uzunlugu: %d\nDizi: ", maxTVuz);
    for (int i = maxTVbas; i < maxTVbas + maxTVuz; i++)
        printf("%d ", dizi[i]);

    printf("\n");
}