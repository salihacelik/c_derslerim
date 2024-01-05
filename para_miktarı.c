#include<stdio.h>
#include<stdlib.h>
int main()
{
    int para;
    int sonuc;
    printf("para miktari giriniz\n");
    scanf("%d",&para);

    sonuc=para/100;
    printf("100 bankot=%d\n",sonuc);

    para=para%100;
    sonuc=para/50;
    printf("50 bankot= %d\n",sonuc);

    para=para%50;
    sonuc=para/20;
    printf("20 bankot=%d\n",sonuc);

    para=para%20;
    sonuc=para/10;
    printf("10  bankot=%d",sonuc);

    return 0;


}