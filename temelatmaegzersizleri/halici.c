/*#include<stdio.h>
int main()
{
    int metre,tutar=200;
    printf("hali uzunlugu giriniz\n");
    scanf("%d",&metre);
    tutar+=metre*40;
    printf("odenmesi gereken miktar=%d\n",tutar);
    return 0;

}*/

/*#include<stdio.h>
#define birim 40
#define emek 200
int main()
{
    int metre,tutar;
     printf("hali uzunlugu giriniz\n");
    scanf("%d",&metre);
    tutar=birim*metre+emek;
    printf("toplam tutar=%d\n",tutar);
    return 0;

}*/

#include<stdio.h>
#define twetty 18
#define bugs 17
#define spiderman 19
int main()
{
    int uzunluk,tutar;
    char tip;
    printf("hali tipi kodu giriniz\n");
    scanf("%c",&tip);

    printf("hali uzunlugu giriniz\n");
    scanf("%d",&uzunluk);
    if ('T'==tip)
    {
       tutar=twetty*uzunluk;
       printf("tutar=%d",tutar);
    }
    if (tip=='B')
    {
       tutar=bugs*uzunluk;
       printf("tutar=%d",tutar);
    }
    if (tip=='S')
    {
        tutar=spiderman*uzunluk;
        printf("tutar=%d",tutar);
    }
    else 
   { printf("sectiginiz tip mevcut degildir\n");
   }
return 0;
    
    



}