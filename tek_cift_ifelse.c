#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sayi;

    printf("sayi giriniz\n");
    scanf("%d",&sayi);

    if (sayi%2==0)
    {
       printf("%d sayisi cifttir",sayi);

    }
    else
   {
       printf("%d sayisi tektir",sayi);
   }
    return 0;
}