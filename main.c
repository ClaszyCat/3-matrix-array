#include <stdio.h>
#include <stdlib.h>

int main()
{
int matriks1[2][2],matriks2[3][3],i,j;
int max,min,mulai;
int pilihan,kembali,keluar;
//proses inputan manual oleh user
kembali:
system("cls");
printf ("Pilih Matriks: \n");
printf ("==============\n");
printf ("1. Ordo 2x2\n");
printf ("2. Ordo 3x3\n");
printf ("==============\n");
printf ("Anda memilih nomor : ");
scanf ("%i", &mulai);
printf ("==============\n");
// proses eksekusi matriks
switch (mulai)
{
  case 1: // untuk ordo 2*2
    printf ("matriks 2x2\n");
    printf ("==============\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
          printf ("indeks[%d][%d]= ", i,j);
          scanf ("%d", &matriks1[i][j]);
        }
    }
    printf ("Hasilnya adalah : \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
          printf("%d\t",matriks1[i][j]);
        }
        printf ("\n");
    }

    max=matriks1[0][0];
    min=matriks1[0][0];
    for(int i=0; i<2; i++)
    {
      for(int j=0; j<2; j++)
      {
        if(matriks1[i][j]>max)
        {
          max=matriks1[i][j];
        }
        if(matriks1[i][j]<min)
        {
          min=matriks1[i][j];
        }
      }
    }
    printf("\n\n Nilai Tertinggi : %d\t Nilai Terendah : %d\n\n",max,min);
		break;

  case 2: // untuk orodo 3*3
    printf ("matriks 3x3\n");
    printf ("===============\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
          printf("indek [%d][%d] = ",i,j);
				  scanf("%d",&matriks2[i][j]);
        }
    }
    printf("Hasilnya adalah: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
          printf("%d\t",matriks2[i][j]);
        }
      printf("\n");
    }

    max=matriks2[0][0];
    min=matriks2[0][0];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(matriks2[i][j]>max)
            {
              max=matriks2[i][j];
            }
            if(matriks2[i][j]<min)
            {
              min=matriks2[i][j];
            }
        }
    }
     printf("\n\n Nilai Tertinggi : %d\t Nilai Terendah : %d\n\n",max,min);
		break;
}
  printf("Tekan tombol 1 untuk kembali ke pemilihan ordo, tekan tombol 2 untuk keluar =");
        scanf("%d", &pilihan);
       switch(pilihan){
        case 1:
            goto kembali;
            break;
        case 2:
            goto keluar;
            break;
}
   keluar:
           printf("\nProgram by Rafidhiya Bagus Farizki\n");
           printf("NIM 202110370311424\n");
    return 0;
}
