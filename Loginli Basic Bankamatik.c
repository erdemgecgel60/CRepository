#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{

  char name[15];
  char surname[20];
  int dogrulamaId;

  char isim[] = "Erdem";
  char soyisim[] = "Gecgel";
  int id = 1903;

  int hataSayisi = 0;
  
  int secim;
  int dogrulamaId2;
  int yeniİd;
  char secim2;
  int miktar;
  int bakiye = 1000;
  int id2 = 1881;

   
   while (true)
   {

  printf("Isminizi Giriniz : ");

  fgets(name , 15 , stdin);

  name[strlen(name)-1] = '\0';

  printf("Soyisminizi Giriniz : ");

  fgets(surname , 20 , stdin);

  surname[strlen(surname)-1] = '\0';

  printf("ID'nizi Giriniz : ");

  scanf("%d",&dogrulamaId);
  getchar();

  if ((dogrulamaId == id) && (strcmp(name , isim) == 0)  && (strcmp(surname , soyisim) == 0))
  {

    printf("Giriş Yapildi!\n");

    printf("1 : Para Yatirma\n");
  printf("2 : Para Çekme\n");
  printf("3 : Bakiye Sorgulama\n");
  printf("4 : ID Değiştirici\n");
  printf("5 : Kart Iade\n");
  printf("6 : Exit\n");

  scanf("%d",&secim);


  switch (secim)
  {
  case 1:

    printf("Yatirmak İstediğiniz Miktar : ");

    scanf("%d",&miktar);

    miktar = (miktar * 0.99);

    bakiye += miktar;

    printf("Total Bakiye : %d",bakiye);
    
    break;

  case 2:

    printf("Çekmek İstediğiniz Miktar : ");

    scanf("%d",&miktar);

    if (miktar > bakiye) 
    {

      printf("Hatalı Giriş!");

      break;

    }

    bakiye -= miktar;

    printf("Bakiyeniz : %d",bakiye);

    break;

  case 3:

   printf("Bakiyeniz : %d",bakiye);

   break;

  case 4:
 
    printf("ID'nizi Değiştirmek İstiyor Musunuz : ");

    scanf(" %c",&secim2);

    if (secim2 == 'Y')
    {

      printf("Yeni Şifrenizi Giriniz (4 - 8 Hane Araliğinda) : ");

      scanf("%d",&yeniİd);

      if (yeniİd == id2)
      {

        printf("Aynı ID Oluşturulamadi!");

        break;

         
        
      }

      else 
      {

        printf("Yeni ID Oluşturuldu : %d\n",yeniİd);

      }
      

      
    }

    else 
    {

      printf("Şifre Değiştirilemedi!");

    }

    break;

  case 5:

     printf("Kartinizi Iade Etmek İstiyor Musunuz : ");

    scanf(" %c",&secim2);

    if (secim2 = 'Y')
    {

      printf("Kartiniz Iade Etmek Icın ID'nizi Giriniz : ");

      scanf(" %d",&dogrulamaId2);

      if (dogrulamaId2 == id2)
      {

        printf("Kartiniz Iade Edildi!");
        
      }
      
      else
      {
        
        printf("Kartiniz Iade Edilemedi!");

      }
      
    }
    
    else 
    {

      printf("Kartiniz Iade Edilmedi!");

    }
  
    break;

  case 6:
 
  printf("Cikis Yapildi!");

  break;

  default:
    break;
  }




    break;

  }

  else if ((dogrulamaId != id) && (strcmp(name , isim) == 0)  && (strcmp(surname , soyisim) == 0))
  {

    printf("ID'niz Yanliş Tekrar Deneyin!\n");

    hataSayisi++;
    
  }

  else if ((dogrulamaId == id) && (strcmp(name , isim) != 0)  && (strcmp(surname , soyisim) == 0))
  {

    printf("İsminiz Yanliş Tekrar Deneyin!\n");

    hataSayisi++;
    
  }

  else if ((dogrulamaId == id) && (strcmp(name , isim) == 0)  && (strcmp(surname , soyisim) != 0))
  {

    printf("Soyisminiz Yanliş Tekrar Deneyin!\n");

    hataSayisi++;
    
  }

  else if ((dogrulamaId != id) && (strcmp(name , isim) != 0)  && (strcmp(surname , soyisim) == 0))
  {

    printf("ID ve Isminiz Yanliş Tekrar Deneyin!\n");

    hataSayisi++;
    
  }


  else if ((dogrulamaId != id) && (strcmp(name , isim) == 0)  && (strcmp(surname , soyisim) != 0))
  {

    printf("ID ve Soyisminiz Yanliş Tekrar Deneyin!\n");

    hataSayisi++;
    
  }

  else if ((dogrulamaId == id) && (strcmp(name , isim) != 0)  && (strcmp(surname , soyisim) != 0))
  {

    printf("Isim ve Soyisminiz Yanliş Tekrar Deneyin!\n");

    hataSayisi++;
    
  }

  else if ((dogrulamaId != id) && (strcmp(name , isim) != 0)  && (strcmp(surname , soyisim) != 0))
  {

    printf("ID , Isim ve Soyisminiz Yanliş Tekrar Deneyin\n!");

    hataSayisi++;
    
  }


  
  



 
    
   }
   

   

   
  

   

   
 
    


     
 
  
  
  



  
 

 
}
