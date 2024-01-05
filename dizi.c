#include<stdio.h>
#include<stdlib.h>
int main()
{
    int saliha[5];
    int i=0;
    while (i<5)
    {  printf("deger giriniz\n");
       scanf("%d",&saliha[i]);
       i++;
    }
     i=0;
     while (i<5)
     {
        printf("%d\n",saliha[i]);
        i++;
     }

    return 0;

}