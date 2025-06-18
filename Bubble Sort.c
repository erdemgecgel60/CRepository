#include <stdio.h>

void bubbleSort(int arr[] , int size)
{

   for(int i = 0; i < size; i++)
   {
   
      for(int j = 1; j < size-i; j++)
      {
       
       if(arr[j-1] > arr[j])
       {
       
         int temp = arr[j];
         
         arr[j] = arr[j-1];
         
         arr[j-1] = temp;
        
        
        
       }
      
      }
   
   }

}

int main()
{


  int array[] = {7 , 2 , 18 , 67 , 10 , 782};
  
  bubbleSort(array , 6);
  
  for(int i = 0; i < 6; i++)
  {
     
     printf("Index : %d\n",array[i]);
  
  }
  

}
