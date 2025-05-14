#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{


    int ay;
    int gun;

    printf("Doğdunuz Ayi Giriniz : ");

    scanf("%d",&ay);

    switch (ay)
    {
    case 1:

       printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 21)
       {

        printf("Oğlak Burcu");

       }

       else 
       {

         printf("Kova Burcu");

       }

       break;

    case 2:

       printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 29)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 19)
       {

        printf("Kova Burcu");

       }

       else 
       {

         printf("Balik Burcu");

       }

        break;

    case 3:

      printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 20)
       {

        printf("Balik Burcu");

       }

       else 
       {

         printf("Koç Burcu");

       }

        break;

    case 4:

       printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 30)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 20)
       {

        printf("Koç Burcu");

       }

       else 
       {

         printf("Boğa Burcu");

       }

        break;

    case 5:
     
      printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 21)
       {

        printf("Boğa Burcu");

       }

       else 
       {

         printf("İkizler Burcu");

       }

        break;

    case 6:


      printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 30)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 22)
       {

        printf("İkizler Burcu");

       }

       else 
       {

         printf("Yengeç Burcu");

       }

        break;

    case 7:

      printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 22)
       {

        printf("Yengeç Burcu");

       }

       else 
       {

         printf("Aslan Burcu");

       }

        break;

    case 8:

      printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 23)
       {

        printf("Aslan Burcu");

       }

       else 
       {

         printf("Başak Burcu");

       }

        break;

    case 9:

      printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 30)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 22)
       {

        printf("Başak Burcu");

       }

       else 
       {

         printf("Terazi Burcu");

       }

        break;

    case 10:

       printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 22)
       {

        printf("Terazi Burcu");

       }

       else 
       {

         printf("Akrep Burcu");

       }

        break;

    case 11:

    printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 30)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 21)
       {

        printf("Akrep Burcu");

       }

       else 
       {

         printf("Yay Burcu");

       }

        break;

    case 12:

       printf("Dogdunuz Gunu Giriniz : ");

       scanf("%d",&gun);

       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 21)
       {

        printf("Yay Burcu");

       }

       else 
       {

         printf("Oğlak Burcu");

       }

        break;
     
    default:


     printf("Hatali Secim!");
        break;
    }
    

 
}
