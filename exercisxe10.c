#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_OGRENCI 30
#define DERS_SAYISI 5
#define ISIM_UZUNLUK 50

typedef enum
{
    AKTIF = 0,
    MEZUN = 1,
    DONDURULMUS = 2
} Durum;

typedef struct
{
    int id;
    char isim[ISIM_UZUNLUK];
    float notlar[DERS_SAYISI]; /* 5 ders notu */
    float orta;
    Durum durum;
} Ogrenci;

/* Global dizi */
Ogrenci liste[MAX_OGRENCI];
int toplam = 0;

typedef union
{
    float ondalik; /* ornek: 87.5 */
    int tam;       /* ornek: 87 */
} NotGosterim;

void Ogrenci_ekle()
{
    NotGosterim x;
    printf("isim soyisim ve 5 ders notu girin\n");
    if (toplam < MAX_OGRENCI)
    {
        scanf("%s", liste[toplam].isim);
        for (int i = 0; i < 5; i++)
        {
            printf("ders%d ", i + 1);
            scanf("%f", &liste[toplam].notlar[i]);
            if (liste[toplam].notlar[i] < 0 || liste[toplam].notlar[i] > 100)
            {
                printf("bi sen uyaniksin, bir daha gir su notu\n");
                i--;
            }
        }
        x.ondalik = 0;
        for (int i = 0; i < 5; i++)
        {
            x.ondalik += liste[toplam].notlar[i];
        }
        liste[toplam].orta = x.ondalik / 5;
        liste[toplam].id = toplam;
        printf("ismin: %s ortalaman: %f ogrenci ID: %d", liste[toplam].isim, liste[toplam].orta, liste[toplam].id);
        liste[toplam].durum = 0;
        liste[toplam].id = toplam;
        toplam++;
    }
    else
    {
        printf("ogrenci dolu");
    }
}

int ogrenci_sil()
{
    int arID;
    printf("silmek istediginiz ogrencinin ID'sini giriniz\n");
    scanf("%d", &arID);

    for (int i = 0; i < toplam; i++)
    {
        if (liste[i].id == arID)
        {
            for (int j = i; j < toplam - 1; j++)
            {
                liste[j] = liste[j + 1];
            }
            printf("ogrenci silindi");
            toplam--;
            return 1;
        }
    }
}

void not_guncelle()
{
    NotGosterim x;
    x.ondalik = 0;
    int arID;
    printf("istediginiz ogrencinin notunu girmek icin ID sini giriniz\n");
    scanf("%d", &arID);
    for (int i = 0; i < toplam; i++)
    {
        if (liste[i].id == arID)
        {
            printf("yeni id: ");
            scanf("%d", &liste[i].id);
            for (int j = 0; j < 5; j++)
            {
                printf("ders%d: ", j + 1);
                scanf("%f", &liste[i].notlar[j]);
                if (liste[i].notlar[j] < 0 || liste[i].notlar[j] > 100)
                {
                    printf("bi sen uyaniksin, bir daha gir su notu\n");
                    j--;
                }
            }
            for (int j = 0; j < 5; j++)
            {
                x.ondalik += liste[i].notlar[j];
            }

            liste[i].orta = x.ondalik / 5;
        }
    }
}

void ogrenci_listele()
{
    printf("ad-soyad       ID           not ortalamasi\n");
    printf("------------------------------------------\n");
    for (int i = 0; i < toplam; i++)
    {
        printf("%s              %d                  %f\n", liste[i].isim, liste[i].id, liste[i].orta);
    }
}

int simduyarsiz(char *a, char *b)
{
    while (*a && *b)
    {
        if (tolower((unsigned char)*a) != tolower((unsigned char)*b))
            return 0;
        a++;
        b++;
    }
    return *a == *b;
}

void ogrenci_ara()
{
    char aranan[50];
    printf("aramak istediginiz ogrencinin ismini giriniz\n");
    scanf("%s", aranan);
    int kontrol = 0;
    for (int i = 0; i < toplam; i++)
    {
        if (simduyarsiz(liste[i].isim, aranan))
        {
            printf("ogrenci bulundu %s", liste[i].isim);
            kontrol = 1;
        }
    }
    if (kontrol == 0)
    {
        printf("ogrenci bulunamadi");
        return;
    }
}

void sinif_istatistiks()
{
    if (toplam == 0)
    {
        printf("Kayitli ogrenci yok\n");
        return; 
    }
    int ortustu = 0;
    int ortalti = 0;
    NotGosterim x, y;
    x.ondalik = 0;
    y.ondalik = 0;
    float en = liste[0].orta;
    float az = liste[0].orta;
    char *eniyi = liste[0].isim;
    char *enkotu = liste[0].isim;
    for (int i = 0; i < toplam; i++)
    {
        if (liste[i].orta > en)
        {
            en = liste[i].orta;
            eniyi = liste[i].isim;
        }
    }
    printf("En yuksek ortalama: %f   isim: %s\n", en, eniyi);
    for (int i = 0; i < toplam; i++)
    {
        if (liste[i].orta < az)
        {
            az = liste[i].orta;
            enkotu = liste[i].isim;
        }
    }
    printf("En dusuk ortalama: %2f   isim: %s\n", az, enkotu);
    for (int i = 0; i < toplam; i++)
    {
        if (liste[i].orta < 50)
            ortalti++;
        else
            ortustu++;
    }
    for (int i = 0; i < toplam; i++)
    {
        x.ondalik += liste[i].orta;
    }
    y.ondalik = x.ondalik / toplam;
    printf("\nSinif ortalamasi: %f\n 50 uzeri ogrenci sayi: %d\n 50 alti ogrenci sayi: %d\n", y.ondalik, ortustu, ortalti);

}

void ogrenci_durumunu_degistir()
{
    int du = 0;
    int i = 0;

    printf("ogrenciyi hangi duruma getirmek istiyorsun\naktif icin - 0\nmezun icin - 1\ndondurulmus icin - 2\n");
    scanf("%d", &du);
    if (du == 0)
    {

        printf("hangi ogrencinin durununu degistirmek istiyorsunuz ID verin\n");
        scanf("%d", &i);
        liste[i].durum = 0;
    }
    else if (du == 1)
    {
        printf("hangi ogrencinin durununu degistirmek istiyorsunuz ID verin\n");
        scanf("%d", &i);
        liste[i].durum = 1;
    }
    else if (du == 2)
    {
        printf("hangi ogrencinin durununu degistirmek istiyorsunuz ID verin\n");
        scanf("%d", &i);
        liste[i].durum = 2;
    }
    else
    {
        printf("yanlis tuslama yaptiniz");
    }
    if (liste[i].durum == AKTIF)
    {
        printf("ogrencinin durumu-> aktif\n");
    }
    else if (liste[i].durum == MEZUN)
    {
        printf("ogrencinin durumu-> mezun\n");
    }
    else if (liste[i].durum == DONDURULMUS)
    {
        printf("ogrencinin durumu-> donmus\n");
    }
}

void ana_ekran(void)
{
    int secim;
    do
    {
        printf("\n=========================================\n OGRENCI NOT TAKIP SISTEMI\n=========================================\n");
        printf("1. Ogrenci ekle\n2. OgrenSci sil\n3. ogrenci listele\n4. Not gir / guncelle\n5. Ogrenci ara (isim)\n6. Sinif istatistikleri\n7. Ogrenci durumunu degistir\n0. Cikis\n=========================================\nSeciminiz:");
        scanf("%d", &secim);
        getchar();

        switch (secim)
        {
        case 1:
            Ogrenci_ekle();
            break;
        case 2:
            ogrenci_sil();
            break;
        case 3:
            ogrenci_listele();
            break;
        case 4:
            not_guncelle();
            break;
        case 5:
            ogrenci_ara();
            break;
        case 6:
            sinif_istatistiks();
            break;
        case 7:
            ogrenci_durumunu_degistir();
            break;
        case 0:
            break;
        default:
            printf("gecersiz secim bir daha sec");
        }

    } while (secim != 0);
}

int main()
{
    ana_ekran();
}