#include <stdio.h>

int main()
{
    int a, y, tanggal; //a untuk switch, b untuk variabel feb, c, d, e, f, g, h, i, j, k
    printf ("\t\t\tKalender Julian\n");
    printf ("\t\t\t1.Tahun Kabisat\n");
    printf ("\t\t\t2.Tahun non-Kabisat\n");
    printf ("Pilihan anda:");
    scanf ("%d",&a);
    switch (a)
    {
        case 1:
        printf ("Masukkan kode anda:");
        scanf ("%d",&tanggal);
        {
        if (tanggal<=31)
        {
            printf ("%d Januari 2020\n",tanggal);
        }
        else if (tanggal>31 && tanggal<=60)
        {
            int b;
            b = tanggal - 31;
            printf ("%d Februari 2020\n",b);
        }
        else if (tanggal>60 && tanggal<=91)
        {
            int c;
            c = tanggal - 60;
            printf ("%d Maret 2020\n",c);
        }
        else if (tanggal>91 && tanggal<=121)
        {
            int d;
            d = tanggal - 91;
            printf ("%d April 2020\n",d);
        }
        else if (121<tanggal && tanggal<=152)
        {
            int e;
            e = tanggal - 121;
            printf ("%d Mei 2020\n",e);
        }
        else if (152<tanggal && tanggal<=182)
        {
            int f;
            f = tanggal - 152;
            printf ("%d Juni 2020",f);
        }
        else if (182<tanggal && tanggal<=213)
        {
            int g;
            g = tanggal - 182;
            printf ("%d Juli 2020",g);
        }
        else if (213<tanggal && tanggal<=244)
        {
            int h;
            h = tanggal - 213;
            printf ("%d Agustus 2020",h);
        }
        else if (244<tanggal && tanggal<=274)
        {
            int i;
            i = tanggal - 244;
            printf ("%d September 2020",i);
        }
        else if (274<tanggal && tanggal<=305)
        {
            int j;
            j = tanggal - 274;
            printf ("%d Oktober 2020",j);
        }
        else if (305<tanggal && tanggal<=335)
        {
            int k;
            k = tanggal - 305;
            printf ("%d November 2020",k);
        }
        else if (335<tanggal && tanggal<=366)
        {
            int l;
            l = tanggal - 335;
            printf ("%d Desember 2020",l);
        }
        break;
        }
        case 2:
        printf ("Masukkan kode anda:");
        scanf ("%d",&tanggal);
        {
        if (tanggal<=31)
        {
            printf ("%d Januari 2020\n",tanggal);
        }
        else if (tanggal>31 && tanggal<=59)
        {
            int b;
            b = tanggal - 31;
            printf ("%d Februari 2020\n",b);
        }
        else if (tanggal>59 && tanggal<=90)
        {
            int c;
            c = tanggal - 59;
            printf ("%d Maret 2020\n",c);
        }
        else if (tanggal>90 && tanggal<=120)
        {
            int d;
            d = tanggal - 90;
            printf ("%d April 2020\n",d);
        }
        else if (120<tanggal && tanggal<=151)
        {
            int e;
            e = tanggal - 120;
            printf ("%d Mei 2020\n",e);
        }
        else if (151<tanggal && tanggal<=181)
        {
            int f;
            f = tanggal - 151;
            printf ("%d Juni 2020\n",f);
        }
        else if (181<tanggal && tanggal<=212)
        {
            int g;
            g = tanggal - 181;
            printf ("%d Juli 2020\n",g);
        }
        else if (212<tanggal && tanggal<=243)
        {
            int h;
            h = tanggal - 212;
            printf ("%d Agustus 2020\n",h);
        }
        else if (243<tanggal && tanggal<=273)
        {
            int i;
            i = tanggal - 243;
            printf ("%d September 2020\n",i);
        }
        else if (273<tanggal && tanggal<=304)
        {
            int j;
            j = tanggal - 273;
            printf ("%d Oktober 2020\n",j);
        }
        else if (304<tanggal && tanggal<=334)
        {
            int k;
            k = tanggal - 304;
            printf ("%d November 2020\n",k);
        }
        else if (334<tanggal && tanggal<=365)
        {
            int l;
            l = tanggal - 334;
            printf ("%d Desember 2020\n",l);
        }
        break;
        }
    }
    return 0;
}