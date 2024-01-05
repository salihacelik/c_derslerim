/*kitap 0 kodu %4 vergi temelgıda 1 kodu %5.6 vergi lükx ürün 2 kodu %19.6 vergi 
kullanıcı kodu ve fiyatı girisn ekrana son fiyat bastır */ 
#include<stdio.h>
int main()
{
    int kod;
    float fiyat,sonfiyat;
     printf("urun kodu:");
     scanf("%d",&kod);
     printf("urun fiyat:");
     scanf("%f",&fiyat);
      switch (kod)
      {
      case 0 :
        printf("sonfiyat: %f",fiyat+(fiyat*0.04));
        break;
      case 1 :
       printf("sonfiyat: %f",fiyat+(fiyat*0.056));
        break;
     case 2 :
       printf("sonfiyat: %f",fiyat+(fiyat*0.196));
        break;

      default:
      printf("yanlis kod girdiniz");
        break;
      }

      return 0;
}