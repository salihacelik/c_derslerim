#include<stdio.h>
#include<stdlib.h>
int main ()
{ 
    int i;
    int deger;
    int toplam;
    toplam=0;
    printf("degeri giriniz\n");
    scanf("%d",&deger);

    for (size_t i = 1; i <= deger; i++)
    {
        toplam=toplam+i;
    
    }
     printf("toplam=%d\n",toplam);
    return 0;
    












}