#include <stdio.h>

int main(void)
{
    int date,date2,tahun,jml=0;
    char *a[12] = {"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
    int hari[12] = {31,0,31,30,31,30,31,31,30,31,30,31}; 
    printf ("\t\t\tKalender Julian\n");
    printf("Masukkan Tahun: ");
    scanf ("%d",&tahun);
    printf ("Masukkan kode anda: ");
    scanf("%i",&date);
    date2 = date;
    while(date > 366 && date > 365)
    {
        if((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0)
        {
            date -= 366;
            date2 = date;
            tahun++;
        }
        else
        {
            date -= 365;
            date2 = date;
            tahun++;
        }
            
    }   

    if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0)
    {
        hari[1] = 29; 
    }
    else
    {
        hari[1] = 28; 
    }
    
    for(int i = 0; i < 12; i++)
    {
        date -= hari[i];
        if(date <= 0)
        {
            date2 = date2 -jml; 
            printf("%i %s %i",date2,a[i],tahun);
            break;
        }
        jml += hari[i];
    } 
}
