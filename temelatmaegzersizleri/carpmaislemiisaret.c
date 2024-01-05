#include<stdio.h>
int main()
{
    int a,b;
    printf(" a ve b degerlerini giriniz\n");
    scanf("%d%d",&a,&b);

    if (a<0 && b<0)
    {
        printf("sonuc '+' isaretli");
    }
    if (a>0 && b>0)
    {
         printf("sonuc '+' isaretli");
    }
    if (a<0 && b>0)
    {
        printf("sonuc '-' isaretli");
    }
    if (a>0 && b<0)
    {
         printf("sonuc '-' isaretli");
    }
    if (a==0 || b==0)
    {
       printf("sonuc 0 a esittir");
    }
    return 0;
}
