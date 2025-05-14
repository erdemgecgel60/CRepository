#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{

    long long int sayi;
    long long int toplam = 0;

    printf("Sayi : ");

    scanf("%lld",&sayi);

    for (int i = 0; i < sayi; i++)
    {

        toplam += i;
        
    }
    
    printf("Toplam : %lld",toplam);

}
