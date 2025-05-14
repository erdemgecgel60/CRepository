#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{


    bool asal = true;

    int sayi;

    printf("Sayi : ");
     
    scanf("%d",&sayi);


    for(int i = 2; i < sayi; i++)
    {


        if (sayi % i == 0)
        {

            asal = false;

            break;

        }



    }
     

    if(asal)
    {

        printf("Sayi Asaldir!");

    }

    else 
    {

        printf("Sayi Asal Degildir!");

    }


 
}
