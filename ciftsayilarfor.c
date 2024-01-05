#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int count;

printf("deger giriniz\n");
scanf("%d",&count);

   for (i = 0; i <=count; i+=2)
   {
     printf("%d\n",i);
   }
return 0;
}