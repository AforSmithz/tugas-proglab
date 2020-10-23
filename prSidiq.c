/* File : tugas1.c*/
/* Ahmad Sidiq Fatoni*/
/* Mengaplikasikan perintah input dan output serta konversi desimal menjadi biner*/
/*=====================================================================================*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char nama[100];
  char *nim[3];
  int nim2;
  int a[100];
  int i;
  int status;

  printf("\n===================================================");
  printf("\nMasukkan nama anda                  : ");
  gets(nama);
  printf("Masukkan 3 digit NIM pertama anda   : ");
  scanf("%s", &nim);
  printf("Masukkan 6 digit NIM terakhir anda  : ");
  status = scanf("%06d", &nim2);
  while (status == 0)
  {
    fflush(stdin);
    printf("mohon masukkan angka                : ");
    status = scanf("%06d", &nim2);
    if (status == 0)
    {
      fflush(stdin);
    }
  } 

  printf("\n===================================================");
  printf("\nNama : %s", nama);
  printf("\nNim  : %s", nim);
  printf("%06d\n", nim2);
    
  while(nim2!=0)
  {
    a[i]=nim2&1;
    nim2=nim2/2;
    i=i+1;
  }
  for(i=i-1;i>0;i--)
  {
    printf ("%d", a[i]);
  };

  printf("\n===================================================\n");

  system("pause");
  return (0);

}