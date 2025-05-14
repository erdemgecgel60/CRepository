#include <stdio.h>
#include <math.h>
int main()
{


      int secim;
      float celsius;

      float total;
      float fahreneit;

      printf("1 : Celsius to Fahreneit \n");
      printf("2 : Fahreneit to Celsius \n");
      printf("Secim : ");

      scanf("%d",&secim);


      if (secim == 1)
      {

        printf("Celsius Değerini Giriniz : ");

        scanf("%f",&celsius);

        total = (celsius * 1.8) + 32;

        printf("Total : %f",total);

      }

      else if (secim == 2)
      {

        printf("Fahreneit Değerini Giriniz : ");

        scanf("%f",&celsius);

        total = (celsius - 32) / 1.8;

        printf("Total : %f",total);

      }

      else 
      {

        printf("Hatali Secim");

      }

    


 
}
