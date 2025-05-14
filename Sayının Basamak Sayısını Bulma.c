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

         sayi = sayi / 10;

         toplam++;
        
    }

    printf("Toplam : %lld",toplam);
    


 
}
