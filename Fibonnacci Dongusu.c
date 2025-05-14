#include <stdio.h>
#include <math.h>
int main()
{

    long long int sayi;
    long long int ilkSayi = 1;
    long long int ikinciSayi = 1;

     
    printf("Sayi : ");

    scanf("%lld",&sayi);

    for(int i = 0; i < sayi - 2; i++)
    {

     
        long long int piyonDegisken = ikinciSayi;
        
        ikinciSayi += ilkSayi;

        ilkSayi = piyonDegisken;

         
    }

    printf("Total : %lld\n",ikinciSayi);

     


 
}
