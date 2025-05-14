#include <stdio.h>
#include <math.h>
int main()
{

    long long int sayi;

    long long int toplam = 0;
     
    printf("Sayi : ");

    scanf("%lld",&sayi);

    while (sayi > 0)
    {


        toplam += sayi % 10;

        sayi = sayi / 10;

          
    }

    printf("Toplam : %lld",toplam);
    


 
}
