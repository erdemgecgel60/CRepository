
#include<stdio.h>
#include<math.h>

int main()
{


    int boyut;
    
    
    printf("Boyut  : ");
    
    scanf("%d",&boyut);
    
    
    for(int i = boyut; i > 0; i--)
    {
    
    
      for(int j = 1; j <= i; j++)
      {
      
        printf("*");
      
      }
      
      printf("\n");
    
    }
    
    
    
    




    
    
    
}
