#include<stdio.h>
int main()
{
  int sayi1,sayi2;
    printf("sayi1 ve sayi2 giriniz\n");
    scanf("%d %d",&sayi1,&sayi2);


    if (sayi1<=sayi2)
       { if (sayi1==sayi2)
       {
        printf("%d esittir %d ye\n",sayi1,sayi2);
       }
        else
        {

          printf("%d buyuktur",sayi2);
       }
     

    }
    else
    {
        printf("%d buyuktur",sayi1);
    }

   
   return 0;
}