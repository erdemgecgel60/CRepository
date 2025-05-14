#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(){
    
    int hesaplama;
    int birim;
    int cokgen;
    int isaret2;
    int isaret3;
    int isaret4;
    int sekil;
    long long int kucukDegisken , buyukDegisken;
    long long int bolen;
    long long int eSayi;
    long long int eSayi2;
    long long int saat;
    long long int gun;
    float beygir; 
    float kwh;
    long long int kmh;
    long long int mph; 
    long long int byte1;
    long long int kiloByte;
    long long int megaByte;
    long long int gigaByte;
    long long int teraByte;
    long long int petaByte;
    int isaret;
    float sayi;
    float sayi2;
    float toplam = 1;
    float toplam2 = 1;
    float toplam3 = 1;
    float yuzde;
    long long int sayi3;
    float secimSayisi;
    long long int kenar;
    long long int miktar;
    float ton;
    float kilogram;
    float gram;    
    float miligram;
    long long int randomSayi;
    long long int kenar2;
    long long int kenar3;
    long long int taban;
    long long int yukseklik;
    long long int genislik;
    long long int yankenar;
    long long int min;
    long long int max;
    long long int kuvvet;
    long long int bolumdekiSayi;
    float yaricap;
    long long int kosegen1 , kosegen2;


    printf("Hesaplamalar :   \n");
    printf("1 : Alan Hesaplama\n");
    printf("2 : Cevre Hesaplama\n");
    printf("3 : Faktoriyel Hesaplama\n");
    printf("4 : Hacim Hesaplama\n");
    printf("5 : Karekok Hesaplama\n");
    printf("6 : Uslu Sayi Hesaplama\n");
    printf("7 : Trigometrik Ifadeler Hesaplama\n");
    printf("8 : Random Sayi Uretme \n");;
    printf("9 : Bir Sayinin Yuzdesini Hesaplama\n");
    printf("10 : Permutasyon Hesaplama\n");
    printf("11 : Kombinasyon Hesaplama\n");
    printf("12 : Sayini Asal Sayi Olup Olmadiginin Hesaplanmasi \n");
    printf("13 : Birim Donusturucu \n");
    printf("14 : EBOB - EKOK Bulma\n");
     

    printf("Hangi Hesaplamayi Secmek Istiyorsunuz ? :  ");
 
    scanf("%d",&hesaplama);

    switch (hesaplama)
    {
    // ALAN HESAPLAMA BÖLÜMÜ
    case 1:

       printf("1 : Kare Alan Hesaplama\n"); 
       printf("2 : Ucgen Alan Hesaplama\n");
       printf("3 : Daire Alan Hesaplama\n"); 
       printf("4 : Eskenar Dortgen Alan Hesaplama\n");
       printf("5 : Dikdortgen Alan Hesaplama\n");
       printf("6 : Paralelkenar Alan Hesaplama\n");

       printf("Hangi Cokgenin Alanini Hesaplamak Istiyorsunuz  ? :\n ");

       scanf("%d",&cokgen);


       switch (cokgen)
       {
       case  1:
        
        printf("Karenin Kenarini Giriniz : ");
        
        scanf("%lld",&kenar);

        if (kenar <= 0)
        {
            printf("Kenari 0 Veya 0'dan daha kucuk bir kare olamaz!");
            break;
            
        }
        

        long long int karealan = (kenar * kenar);

        printf("Karenin Alani : %lld",karealan);
    
        break;

       case 2:
       
        printf("Ucgenin Tabanini Giriniz : ");

        scanf("%lld",&taban);

        printf("Ucgenin Yuksekligini Giriniz : ");

        scanf("%lld",&yukseklik);

        if (taban <= 0 || yukseklik <= 0)
        {

            printf("Taban veya Yukseklik 0 Veya 0'dan daha kucuk olamaz!");

            break;
             
        }
        
        float ucgenalan = (taban * yukseklik) / 2.0;

        printf("Ucgenin Alani : %.1f",ucgenalan);

        break;

     case 3:

      printf("Dairenin Yaricapini Giriniz : ");

      scanf("%f",&yaricap);

      if (yaricap <= 0)
      {
       printf("Yaricap 0 Veya 0'dan daha kucuk olamaz!");

       break;
      }
      

      float pi = 3.14;

      float dairealan = pi *(yaricap * yaricap);

      printf("Dairenin Alani : %.1f",dairealan);

      break;
    case 4:
      
      printf("Eskenar Dortgenin Birinci Kosegenin Uzunlugunu Giriniz : ");

      scanf("%lld",&kosegen1);

      printf("Eskenar Dortgenin Ikinci Kosegenin Uzunlugunu Giriniz : ");

      scanf("%lld",&kosegen2);

      if (kosegen1 <= 0 || kosegen2 <= 0)
        {

            printf("Bir Kosegenin Uzunlugu 0 Veya 0'dan daha kucuk olamaz!");

            break;
             
        }

      float eskenardortgenalan = (kosegen1 * kosegen2) / 2.0;

      printf("Eskenar Dortgenin Alani : %.2f",eskenardortgenalan);

      break;

     case 5:
      
       printf("Dikdortgenin Ilk Kenarini Giriniz : ");

       scanf("%lld",&kenar);

       printf("Dikdortgenin Ikinci Kenarini Giriniz : ");

       scanf("%lld",&kenar2);

       if (kenar <= 0 || kenar2 <= 0)
       {

        printf("Bir Dikdortgenin Kenari 0 veya 0'dan daha kucuk olamaz!");

        break;
        
       }
       

       long long int dikdortgenAlan = (kenar * kenar2);

       printf("Diktdortgenin Alani : %lld",dikdortgenAlan);
       
       break;

      case 6:

       printf("Paralelkenarin Tabanini Giriniz : ");

        scanf("%lld",&taban);

        printf("Paralelkenarin Yuksekligini Giriniz : ");

        scanf("%lld",&yukseklik);

        if (taban <= 0 || yukseklik <= 0)
        {

            printf("Taban veya Yukseklik 0 Veya 0'dan daha kucuk olamaz!");

            break;
             
        }

        long long int paralelkenarAlan = (taban * yukseklik);

        printf("Paralelkenarin Alani : %lld",paralelkenarAlan);
         
        break;
       

       default:
        printf("Alanini Bulmak Istediginiz Cokgeni Anlayamadim :(");
        break;
       }
        
        break;
    // CEVRE HESAPLAMA BÖLÜMÜ
    case 2 :

      printf("1 : Kare Cevre Hesaplama\n");
      printf("2 : Ucgen Cevre Hesaplama\n");
      printf("3 : Daire Cevre Hesaplama\n");
      printf("4 : Dikdortgen Cevre Hesaplama\n");
      printf("5 : Eskenar Dortgen Cevre Hesaplama\n");
      printf("6 : Paralelkenar Cevre Hesaplama\n");
      
       printf("Hangi Cokgenin Cevresini Hesaplamak Istiyorsunuz  ? : ");

       scanf("%d",&cokgen);

       switch (cokgen)
       {
       case 1: 

        printf("Karenin Kenarini Giriniz : ");
        
        scanf("%lld",&kenar);

        if (kenar <= 0)
        {
             printf("Bir Kenarinin Uzunlugu 0 veya 0'dan daha kucuk olamaz!");
             break;
        }
        
        long long int karecevre = (kenar * 4);

        printf("Karenin Cevresi : %lld",karecevre);
    
        break;

       case 2:
         
        printf("Ucgenin Birinci Kenarini Giriniz : ");

        scanf("%lld",&kenar);
         
        printf("Ucgenin Ikinci Kenarini Giriniz : ");

        scanf("%lld",&kenar2);

        printf("Ucgenin Ucuncu Kenarini Giriniz : ");

        scanf("%lld",&kenar3);

        if (kenar <= 0 || kenar2 <= 0 || kenar3 <= 0)
        {
           printf("Bir Ucgenin Kenarinin Uzunlugu 0 veya 0'dan daha kucuk olamaz!");

           break;
        }
      
        long long int ucgencevre = (kenar + kenar2 + kenar3);

        printf("Ucgenin Cevresi : %lld",ucgencevre);

        break;
      
      case 3:
        
        printf("Dairenin Yaricapini Giriniz : ");

        scanf("%f",&yaricap);

        float daireninCevresi = (2 * 3.14 * yaricap);

        printf("Dairenin Cevresi : %f",daireninCevresi);

        break;

      case 4:
       
        printf("Dikdortgenin Ilk Kenarini Giriniz : ");

        scanf("%lld",&kenar);

        printf("Dikdortgenin Ikinci Kenarini Giriniz : ");

        scanf("%lld",&kenar2);

        float dikdortgenCevresi = (kenar + kenar2) * 2;

        printf("Dikdortgenin Cevresi : %.1f",dikdortgenCevresi);
         
        break;
      
      case 5:

      printf("Eskenar Dortgenin Bir Kenarini Giriniz : ");

      scanf("%lld",&kenar);
       
      float eskenardortgenCevre = (kenar * 4);

      printf("Eskenar Dortgenin Cevresi : %.1f",eskenardortgenCevre);

      break;

     case 6:
     
       printf("Paralelkenarin Tabanini Giriniz : ");

        scanf("%lld",&taban);

        printf("Paralelkenarin Yuksekligini Giriniz : ");

        scanf("%lld",&yankenar);

        if (taban <= 0 || yankenar <= 0)
        {

            printf("Taban veya Yukseklik 0 Veya 0'dan daha kucuk olamaz!");

            break;
             
        }

        long long int paralelkenarCevre = (2 * taban) + (2 * yankenar);

        printf("Paralelkenarin Cevresi : %lld",paralelkenarCevre);

        break;

       
       default:
        printf("Hesaplamak İstediginiz Cokgeni Anlayamadim :(");
        break;
       }

       break;
     // FAKTORİYEL HESAPLAMA
    case 3:
      
     printf("Faktoriyelini Hesaplamak Istediginiz Sayiyi Giriniz : ");

     scanf("%f",&sayi);

     if (sayi < 0)
     { 
       printf("0'dan kucuk bir sayinin faktoriyeli hesaplanamaz!");

       break;
      
     }
     

     for (sayi; sayi != 0; sayi--)
     {

      toplam *= sayi;

    
       
     }
     printf("Sonuc : %.1f",toplam); 

     break;
    // HACİM HESAPLAMA
    case 4:

     printf("1 : Dikdorgen Prizmasi Hacim Hesaplama\n");
     printf("2 : Kup Hacim Hesaplama\n");
     printf("3 : Kure Hacim Hesaplama\n");
     printf("4 : Silindir Hacim Hesaplama\n");
      

     printf("Hangi Seklin Hacmini Hesaplamak Istiyorsunuz ? :\n ");

     scanf("%d",&sekil);

     switch (sekil)
     {
     case 1:

      printf("Taban Uzunlugunu Giriniz : ");

      scanf("%lld",&taban);

      printf("Genisligi Giriniz : ");

      scanf("%lld",&genislik);

      printf("Yuksekligi Giriniz : ");

      scanf("%lld",&yukseklik);

      if (taban <= 0 || yukseklik <= 0 || genislik <= 0)
        {
           printf("Taban , Yukselik veya Genlislik 0 veya 0'dan daha kucuk olamaz!");

           break;
        }

       
      float dikdortgenprizmasiHacim = (taban * genislik * yukseklik) ;

      printf("Dikdortgen Prizmasinin Hacimi : %.2f",dikdortgenprizmasiHacim);
       
      break;
    
    case 2:

     printf("Kenari Giriniz : ");

     scanf("%lld",&kenar);

     if (kenar <= 0)
     {
       printf("Bir Kupun Kenari 0 veya 0'dan daha kucuk olamaz!");

       break;
     }

     long long int kupHacmi = (kenar * kenar * kenar) ;
     
     printf("Kupun Hacmi : %lld",kupHacmi);

     break;

    case 3:
    
     printf("Kurenin Yaricapini Giriniz : ");

     scanf("%f",&yaricap);

     if (yaricap <= 0)
     {
      printf("Bir Kurenin Yaricapi 0 veya 0'dan daha kucuk olamaz!");

      break;
     }

     float kureninHacmi = (1.3 * 3.14 * (yaricap * yaricap * yaricap));

     printf("Kurenin Hacmi : %.2f",kureninHacmi);

     break;
   
    case 4:
    
     printf("Silindirin Taban Yaricapini Giriniz  : ");
     
     scanf("%f",&yaricap);

     printf("Silindirin Yuksekligini Giriniz : ");

     scanf("%lld",&yukseklik);

     if (yaricap <= 0 || yukseklik <= 0)
     {

      printf("Bir Silindirin Yaricapi veya Yuksekligi 0 veya 0'dan daha kucuk olamaz!");

      break;
       
     }
     
     
     float silindirinHacmi = (3.14 * (yaricap * yaricap) * yukseklik);

     printf("Silindirin Hacmi : %.2f",silindirinHacmi);

     break;
     
     default:
     printf("Hesaplamak İstedigin Sekli Anlayamadim :(");
      break;
     }

      break;
    //Karekök Hesaplama
    case 5:
    
      printf("Karekokunu Hesaplamak Istediginiz Sayiyi Giriniz : ");

      scanf("%f",&sayi);

      float karekokluSayi = sqrt(sayi);

      printf("Sayini Karekoku %.2f",karekokluSayi);
      
      break;

    case 6 :
    
      printf("Tabani Giriniz : ");

      scanf("%lld",&taban);

      printf("Kuvveti Giriniz : ");

      scanf("%lld",&kuvvet);

      float usluSayi = pow(taban , kuvvet);

      printf("Uslu Sayi : %.2f",usluSayi);  

      break;

    case 7:
      
       printf("1 : Sinus Hesaplama\n");
       printf("2 : Cosinus Hesaplama\n");
       printf("3 : Tanjant Hesaplama\n");

       printf("Hangi Hesaplamayi Tercih Edeceksiniz ? :");

       scanf("%d",&isaret);

       switch (isaret)
       {
       case 1:

        printf("Hesaplamak Istediginiz Sayiyi Giriniz : ");

        scanf("%f",&sayi);

        float sinusSayi = sin(sayi);

        printf("Sayinin Sinusu : %f",sinusSayi);
        
        break;
      case 2:

        printf("Hesaplamak Istediginiz Sayiyi Giriniz : ");

        scanf("%f",&sayi);

        float cosinusSayi = cos(sayi);

        printf("Sayinin Kosinusu : %f",cosinusSayi);

        break;

      case 3:
      
        printf("Hesaplamak Istediginiz Sayiyi Giriniz : ");

        scanf("%f",&sayi);

        float tanjantSayi = tan(sayi);

        printf("Sayinin Tanjanti : %f",tanjantSayi);

        break;
       
       default:
        printf("Hesaplamak Istediginiz Trigonometrik Ifadeyi Anlamadim :(");
        break;
       }


       break;
      
     case 8:
     
     printf("Min : ");

     scanf("%lld",&min);

     printf("Max : ");

     scanf("%lld",&max);

     srand(time(NULL));

     randomSayi = rand() % (min - max + 1) + min;

     printf("Random Sayiniz : %lld",randomSayi);
 
     break;
    
    case 9:
    
     printf("Yuzdesini Hesaplamak Istediginiz Sayiyi Giriniz : ");

     scanf("%f",&sayi);

     printf("Yuzdeyi Giriniz : ");

     scanf("%f",&yuzde);

     float hesaplananSayi = (sayi * yuzde) * 0.01;

     printf("Sonuc : %.2f",hesaplananSayi);

     break;
    
    case 10:
    
     printf("Permutasyonunu Hesaplamak Istediginiz Sayiyi Giriniz : ");

     scanf("%f", &sayi);

     printf("Secim Sayisi : ");

     scanf("%f",&secimSayisi);

     bolumdekiSayi = sayi - secimSayisi;

     if (sayi <  0 ||secimSayisi <  0)
     {
        printf("Sayi Ya da Secim Sayisi 0'dan kucuk olamaz.");
     }
     

     for (sayi; sayi != 0; sayi--)
     {

      toplam *= sayi;
       
     }
     
     for (bolumdekiSayi; bolumdekiSayi != 0; bolumdekiSayi--)
     {
       
      toplam2 *= bolumdekiSayi;
       
     }
     
     printf("Sonuc : %.2f",(toplam / toplam2));
      
     break;

    case 11:

    printf("Kombinasyonunu Hesaplamak Istediginiz Sayiyi Giriniz : ");

    scanf("%f", &sayi);

    printf("Secim Sayisi : ");

    scanf("%f",&secimSayisi);

    bolumdekiSayi = sayi - secimSayisi;
    
    if (sayi <  0 || secimSayisi <  0)
     {
        printf("Sayi Ya da Secim Sayisi 0'dan kucuk olamaz.");
     }

    for (sayi; sayi != 0; sayi--)
     {

      toplam *= sayi;
       
     }
     
     for (secimSayisi; secimSayisi != 0; secimSayisi--)
     {

      toplam2 *= secimSayisi;
        
     }
     
     for (bolumdekiSayi; bolumdekiSayi != 0; bolumdekiSayi--)
     {

      toplam3 *= bolumdekiSayi;
       
     }
     
     printf("Sonuc : %.2f",(toplam) / (toplam2 * toplam3));

     break;

    case 12 :
       
    printf("Hesaplamak Istediginiz Sayiyi Giriniz : ");

    scanf("%lld", &sayi3);

    for (int i = 2; i < sayi3 - 1;  i++)
    {  
       
      if (sayi3 % i == 0)
      {
       printf("Asal Sayi Degildir");

       return 0;

       break;

       
      }
      
      
    }

    printf("Asal Sayidir.");
    break;

  case 13:

   printf("1 : Agirlik Birim Donusturucusu\n");
   printf("2 : Guc Birim Donusturucusu\n");
   printf("3 : KMH-MPH Birim Donusturucusu\n");
   printf("4 : Saat-Gun Birim Donusturucusu\n");
   printf("5 : Bilgisayar Olcu Birimleri Donusturucusu\n");

   printf("Hangi Donusuturucuyu Sececeksiniz :\n ");

   scanf("%d",&isaret2);

   switch (isaret2)
   {
   case 1:

     printf("1 : Kilogram\n");
     printf("2 : Ton\n");
     printf("3 : Gram\n");
     printf("4 : Miligram\n");

     printf("Donusturulecek Agirligin Birimi : ");

     scanf("%d",&isaret3);

     switch (isaret3)
     {
     case 1:

      printf("Kac Kilogram Donusuturelecek ? :");

      scanf("%lld",&miktar);

      printf("1 :Kilogram - Ton Donusturme\n");
      printf("2 :Kilogram - Gram Donusturme\n"); 
      printf("3 :Kilogram - Miligram Donusturme\n");

      printf("Donusecegi Birim : ");

      scanf("%d",&isaret4);

      if (miktar < 0)
      {
        printf("0'dan kucuk bir agirlik olamaz!");

        break;
      }
      

      switch (isaret4)
      {
      case 1:
         
        ton =  (miktar * 0.001);
        
        printf("Sonuc : %f Ton",ton);
       
        break;

      case 2:
      
       gram = (miktar * 1000);

       printf("Sonuc : %f Gram",gram);

       break;

      case 3:
      
       miligram = (miktar * 1000000);

       printf("Sonuc : %f Miligram",miligram);

       break;
      
      default:
       printf("Kilograma Donustureceginiz Birimi Anlamadim :(");  
        break;
      }
       
      break;
    //TON BOLUMU
    case 2:

      printf("Kac Ton Donusuturelecek ? :");

      scanf("%lld",&miktar);

      printf("1 :Ton - Kilogram Donusturme\n");
      printf("2 :Ton - Gram Donusturme\n");
      printf("3 :Ton - Miligram Donusturme\n");

      printf("Donusecegi Birim : ");

      scanf("%d",&isaret4);

      if (miktar < 0)
      {
        printf("0'dan kucuk bir agirlik olamaz!");

        break;
      }
      

      switch (isaret4)
      {
      case 1:
         
        kilogram =  (miktar * 1000);
        
        printf("Sonuc : %f Kilogram",kilogram);
       
        break;

      case 2:
      
       gram = (miktar * 1000000);

       printf("Sonuc : %f Gram",gram);

       break;

      case 3:
      
       miligram = (miktar * 1000000000);

       printf("Sonuc : %f Miligram",miligram);

       break;
      
      default:
       printf("Tona Donustureceginiz Birimi Anlamadim :(");  
        break;
      }
      break;
    //GRAM BOLUMU
    case 3:

      printf("Kac Gram Donusuturelecek ? :");
 
      scanf("%lld",&miktar);

      printf("1 :Gram - Ton Donusturme\n");
      printf("2 :Gram - Kilogram Donusturme\n");
      printf("3 :Gram - Miligram Donusturme\n");
   

      printf("Donusecegi Birim : ");

      scanf("%d",&isaret4);

      if (miktar < 0)
      {
        printf("0'dan kucuk bir agirlik olamaz!");

        break;
      }
      

      switch (isaret4)
      {
      case 1:
         
        ton =  (miktar * 0.000001);
        
        printf("Sonuc : %f Ton",ton);
       
        break;

      case 2:
      
       kilogram = (miktar * 0.001);

       printf("Sonuc : %f Kilogram",kilogram);

       break;

      case 3:
      
       miligram = (miktar * 1000);

       printf("Sonuc : %f Miligram",miligram);

       break;
      
      default:
       printf("Grama Donustureceginiz Birimi Anlamadim :(");  
        break;
      }
      break;
     //MiliGram
      case 4:

      printf("Kac Miligram Donusuturelecek ? :");
 
      scanf("%lld",&miktar);

      printf("1 : Miligram - Ton Donusturme\n");
      printf("2 :Miligram - Kilogram Donusturme\n");
      printf("3 :Miligram - Gram Donusturme\n");

      printf("Donusecegi Birim : ");

      scanf(" %d",&isaret4);

      if (miktar < 0)
      {
        printf("0'dan kucuk bir agirlik olamaz!");

        break;
      }
      

      switch (isaret4)
      {
      case 1:
         
        ton =  (miktar * 0.000000001);
        
        printf("Sonuc : %f Ton",ton);
       
        break;

      case 2:
      
       kilogram = (miktar * 0.000001);

       printf("Sonuc : %f Kilogram",kilogram);

       break;

      case 3:
      
      gram = (miktar * 0.001);

       printf("Sonuc : %f  Gram",gram);

       break;
      
      default:
       printf("Miligrama Donustureceginiz Birimi Anlamadim :(");  
        break;
      }

      break;
    
     
     
     default:
     printf("Donusturulecek Birimi Yazmadiniz.");
      break;
       
     }
     break;
    // BEYGİR - KWH
    case 2:

     printf("1 : Beygir - Kwh Donusturme\n");
     printf("2 : Kwh - Beygir Donusturme\n");
    
     printf("Gucunu Cevireceginiz Birimi Giriniz : ");

     scanf("%d",&isaret3);

     switch (isaret3)
     {
     case 1:

      printf("Kac Beygir Donusuturelecek ? :");
 
      scanf("%lld",&miktar);

      if (miktar < 0)
      {
        printf("0'dan az beygir olamaz!");

        break;
      }
      
      kwh = (miktar * 0.745);
      
      printf("%lld Beygir %f Kwhdir.", miktar , kwh);
       
      break;

    case 2:

      printf("Kac Kwh Donusuturelecek ? :");
 
      scanf("%lld",&miktar);

      if (miktar < 0)
      {
        printf("0'dan az kwh olamaz!");

        break;
      }
      
      beygir = (miktar * 1.341);
      
      printf("%lld Kwh %f Beygirdir.", miktar , beygir);
       
      break;
    
     
     
     default:
      printf("Hangi Birime Donusturmek Istedigini Anlamadim :(");
      break;
     }
     break;
    //KMH - MPH
    case 3:

    printf("1 : KMH - MPH Donusturme\n");
    printf("2 : MPH - KMH Donusturme\n");

    printf("Donusturulecek Birim : ");

    scanf("%d",&isaret3);

    switch (isaret3)
    {
    case 1:

    printf("KMH : ");

    scanf("%d",&miktar);

    mph =  (0.621 * miktar);

    printf("%lld KMH = %lld MPH",miktar , mph);

    break;
   
   case 2:

    printf("MPH : ");

    scanf("%d",&miktar);

    kmh =  (1.609 * miktar);

    printf("%lld MPH = %lld KMH",miktar , kmh);

    break;

    
    default:
    printf("Lutfen Gecerli Bir Birim Giriniz!");
      break;
    }
    break;
    //Saat-Gün Cevirme
    case 4: 


    printf("1 : Saat-Gun Cevirme\n");
    printf("2 : Gun-Saat Cevirme\n");
     

    scanf("%d",&isaret3);

    switch (isaret3)
    {
    case 1:

     printf("Saat : ");

     scanf("%lld",&saat);

     if (saat < 0)
     {
      printf("Lutfen Gecerli Bir Saat Giriniz !");
      break;
     }
     
     gun = (saat / 24);

     printf("%lld Saat : %lld Gundur.",saat , gun);

    break;

    case 2:

    printf("Gun : ");

     scanf("%lld",&gun);

     if (gun < 0)
     {
      printf("Lutfen Gecerli Bir Gun Giriniz !");
      break;
     }
     
     saat = (gun * 24);

     printf("%lld Gun : %lld Saatdir.",gun , saat);

     break;
      
    default:
     printf("Lutfen Gecerli Bir İsaret Giriniz!");
      break;
    }
    break;
    
    //Bilgisayar Olcu Birimleri Cevirme
    case 5:
    
    printf("Donusturulecek Birim :  \n");

    printf("1 : Petabyte\n");
    printf("2 : Terabyte\n");
    printf("3 : Gigabyte\n");
    printf("4 : Megabyte\n");
    printf("5 : Kilobyte\n");
    printf("6 : Byte\n");

    scanf("%d",&isaret3);

    switch (isaret3)
    {
    //PETABYTE Cevirme
    case 1:


    printf("1 : Petabyte - Terabyte\n");
    printf("2 : Petabyte - Gigabyte\n");
    printf("3 : Petabyte - Megabyte\n");
    printf("4 : Petabyte - Kilobyte\n");
    printf("5 : Petabyte - Byte\n");
    printf("Donusecek Birim : ");

    scanf("%d",&isaret4);

    switch (isaret4)
    {
    //TB
    case 1:

    printf("Petabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
    
     
    teraByte = (miktar * 1024);

    printf("%lld Petabyte : %lld Terabyte",miktar , teraByte);

    break;
   //GB
   case 2:

    printf("Petabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    gigaByte = (miktar * 1048576);

    printf("%lld Petabyte : %lld Gigabyte",miktar , gigaByte);

    break; 
   //MB
   case 3:

    printf("Petabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    megaByte = (miktar * 1073741824);

    printf("%lld Petabyte : %lld Megabyte",miktar , megaByte);

    break; 
   //KB
   case 4:

    printf("Petabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    kiloByte = (miktar * 1125899906842624);

    printf("%lld Petabyte : %lld Kilobyte",miktar , kiloByte);

    break;  
   //Byte
   case 5:

    printf("Petabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    byte1 = (miktar * (1125899906842624 ));

    printf("%lld Petabyte : %lld Byte",miktar , byte1);

    break;   

    default:
    printf("Lutfen Gecerli Bir Birim Giriniz!");
      break;
    }
    break;

    //TB Cevirme

   case 2:
    
    printf("1 : Terabyte - Gigabyte\n");
    printf("2 : Terabyte - Megabyte\n");
    printf("3 : Terabyte - Kilobyte\n");
    printf("4 : Terabyte - Byte\n");
    printf("5 : Terabyte - Petabyte\n");
    
    printf("Donusecek Birim : ");

    scanf("%d",&isaret4);

    switch (isaret4)
    {
    case 1:

    printf("Terabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    gigaByte = (miktar * 1024);

    printf("%lld Terabyte : %lld Gigabyte",miktar , gigaByte);

    break; 
    //MB
    case 2:

    printf("Terabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    megaByte = (miktar * 1048576);

    printf("%lld Terabyte : %lld Megabyte",miktar , megaByte);

    break; 
   //KB
   case 3:

    printf("Terabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    kiloByte = (miktar * 1073741824);

    printf("%lld Terabyte : %lld Kilobyte",miktar , kiloByte);

    break; 

   //Byte
   case 4:

   printf("Terabyte Miktari : ");

   scanf("%d",&miktar);

   if (miktar < 0)
   {
     printf("Lutfen Gecerli Bir Sayi Giriniz!");
     break;
   }
    
   byte1 = (miktar * (1099511627776));

   printf("%lld Terabyte : %lld Byte",miktar , byte1);

   break;
  //Petabyte
  case 5:
  
    printf("Terabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    petaByte = (miktar * 0.0009765625);

    printf("%lld Terabyte : %lld Petabyte",miktar , petaByte);

    break; 

      

    default:
    printf("Lutfen Gecerli Bir Birim Giriniz!");
    break;
    }
    break;
  //GB Cevirme
  case 3:
   
    printf("1 : Gigabyte - Megabyte\n");
    printf("2 : Gigabyte - Kilobyte\n");
    printf("3 : Gigabyte - Byte\n");
    printf("4 : Gigabyte - Terabyte\n");
    printf("5 : Gigabyte - Petabyte\n");
    printf("Donusecek Birim : ");

    scanf("%d",&isaret4);

    switch (isaret4)
    {
    case 1:

    printf("Gigabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    megaByte = (miktar * 1024);

    printf("%lld Gigabyte : %lld Megabyte",miktar , megaByte);

    break; 
    //KB
    case 2:

    printf("Gigabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    kiloByte = (miktar * 1048576);

    printf("%lld Gigabyte : %lld Kilobyte",miktar , kiloByte);

    break; 
   //Byte
   case 3:

    printf("Gigabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    byte1 = (miktar * (1048576 * 1024));

    printf("%lld Gigaabyte : %lld  Byte",miktar , byte1);

    break; 

   //Tera
   case 4:

   printf("Gigabyte Miktari : ");

   scanf("%d",&miktar);

   if (miktar < 0)
   {
     printf("Lutfen Gecerli Bir Sayi Giriniz!");
     break;
   }
    
   teraByte = (miktar *  0.0009765625);

   printf("%lld Gigabyte : %lld Terayte",miktar , teraByte);

   break;
  //Petabyte
  case 5:
  
    printf("Gigabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    petaByte = (miktar *  0.000000953674316);

    printf("%lld Terabyte : %lld Petabyte",miktar , petaByte);

    break; 

    default:
    printf("Lutfen Gecerli Bir Birim Giriniz!");
    break;
    }
    break;

   //MB Cevirme
   case 4: 

   printf("1 : Megabyte - Kilobyte\n");
   printf("2 : Megabyte -  Byte\n");
   printf("3 : Megabyte - Gigabyte\n");
   printf("4 : Megabyte - Terabyte\n");
   printf("5 : Megabyte - Petabyte\n");
    
    printf("Donusecek Birim : ");

    scanf("%d",&isaret4);

    switch (isaret4)
    {
    case 1:

    printf("Megabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    kiloByte = (miktar * 1024);

    printf("%lld Megabyte : %lld Kilobyte",miktar , kiloByte);

    break; 
    //Byte
    case 2:

    printf("Megabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    byte1 = (miktar * (1024 * 1024));

    printf("%lld Megabyte : %lld Byte",miktar , byte1);

    break; 
   //GB
   case 3:

    printf("Megabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    gigaByte = (miktar *  0.0009765625);

    printf("%lld Megabyte : %lld  GigaByte",miktar , gigaByte);

    break; 

   //Tera
   case 4:

   printf("Megabyte Miktari : ");

   scanf("%d",&miktar);

   if (miktar < 0)
   {
     printf("Lutfen Gecerli Bir Sayi Giriniz!");
     break;
   }
    
   teraByte = (miktar *   0.000000953674316);

   printf("%lld Megabyte : %lld Terayte",miktar , teraByte);

   break;
  //Petabyte
  case 5:
  
    printf("Megabyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    petaByte = (miktar *  0.0000000009313225746154785);

    printf("%lld Megabyte : %lld Petabyte",miktar , petaByte);

    break; 

    default:
    printf("Lutfen Gecerli Bir Birim Giriniz!");
    break;
    }
    break;
  //KiloByte Cevirme
  case 5:

    
    printf("1 : Kilobyte - Byte\n");
    printf("2 : Kilobyte - MegaByte\n");
    printf("3 : Kilobyte - GigaByte\n");
    printf("4 : Kilobyte - TeraByte\n");
    printf("5 : Kilobyte - PetaByte\n");
    printf("Donusecek Birim : ");

    scanf("%d",&isaret4);

    switch (isaret4)
    {
    case 1:

    printf("Kilobyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    byte1 = (miktar * 1024);

    printf("%lld Kilobyte : %lld Byte",miktar , byte1);

    break; 
    //Byte
    case 2:

    printf("Kilobyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    byte1 = (miktar * (1024 * 8));

    printf("%lld Kilobyte : %lld Byte",miktar , byte1);

    break; 
   //GB
   case 3:

    printf("Kilobyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    gigaByte = (miktar *  0.0009765625);

    printf("%lld Kilobyte : %lld  GigaByte",miktar , gigaByte);

    break; 

   //Tera
   case 4:

   printf("Kilobyte Miktari : ");

   scanf("%d",&miktar);

   if (miktar < 0)
   {
     printf("Lutfen Gecerli Bir Sayi Giriniz!");
     break;
   }
    
   teraByte = (miktar *   0.000000953674316);

   printf("%lld Kilobyte : %lld Terayte",miktar , teraByte);

   break;
  //Petabyte
  case 5:
  
    printf("Kilobyte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    petaByte = (miktar *  0.0000000009313225746154785);

    printf("%lld Kilobyte : %lld Petabyte",miktar , petaByte);

    break; 

    default:
    printf("Lutfen Gecerli Bir Birim Giriniz!");
    break;
    }
    break;
    //Byte Cevirme
    case 6:
   
    printf("1 : Byte - Kilobyte\n");
    printf("2 : Byte - Megabyte\n");
    printf("3 : Byte - Gigabyte\n");
    printf("4 : Byte - Terabyte\n");
    printf("5 : Byte - PetaByte\n");
    printf("Donusecek Birim : ");

    scanf("%d",&isaret4);

    switch (isaret4)
    {
    //KiloByte
    case 1:

    printf("Byte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    kiloByte = (miktar * 0.0009765625);

    printf("%lld Byte : %lld KiloByte",miktar , kiloByte);

    break; 
    //MegaByte
    case 2:

    printf("Byte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    megaByte = (miktar *  0.000000953674316);

    printf("%lld  Byte : %lld MegaByte",miktar , megaByte );

    break; 
   //Gb
   case 3:

    printf("Byte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    gigaByte = (miktar *  0.0000000009313225746154785);

    printf("%lld Byte : %lld  GigaByte",miktar , gigaByte);

    break; 

   //Tera
   case 4:

   printf("Kilobyte Miktari : ");

   scanf("%d",&miktar);

   if (miktar < 0)
   {
     printf("Lutfen Gecerli Bir Sayi Giriniz!");
     break;
   }
    
   teraByte = (miktar *  9.094947e-13);

   printf("%lld  Byte : %lld Terayte",miktar , teraByte);

   break;
  //Petabyte
  case 5:
  
    printf("Byte Miktari : ");

    scanf("%d",&miktar);

    if (miktar < 0)
    {
      printf("Lutfen Gecerli Bir Sayi Giriniz!");
      break;
    }
     
    petaByte = (miktar *   8.881784e-13);

    printf("%lld Byte : %lld Petabyte",miktar , petaByte);

    break; 

    default:
    printf("Lutfen Gecerli Bir Birim Giriniz!");
    break;
    }
       
    break;
    
    default:
    printf("Hangi Birimi Donusturmek Istediginizi Anlayamadim :(");
      break;
    }

     
     
    default:
     printf("Lutfen Gecerli Bir Birim Giriniz!");
        break;
    }

    
    


    default:
    printf("Lutfen Gecerli Bir Birim Giriniz!");
    break;


}//SWİTCH

}//MAİN
