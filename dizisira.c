#include<stdio.h>
#include<math.h>
/*Bu program, 8 elemanlı bir tamsayı dizisi oluşturur, diziyi ekrana yazdırır,
 bir sıralama algoritması kullanarak diziyi küçükten büyüğe sıralar ve
  ardından sıralı diziyi ekrana yazdırır.*/
int main()
{
    int dizi1[3];
    int i,j;
    int max=0;

    for ( i = 0; i < 3; i++)
    {
        printf("sayi giriniz\n");
        scanf("%d",&dizi1[i]);

    }
    i=0;
    do
    {
        printf("%d\n",dizi1[i]);
        i++;
    } while (i<3);

    i=0;
    

   for(i = 0; i < 3; i++)
    if (dizi1[i] > max)

     max = dizi1[i];
     
    printf("max = %d\n", max);

   
    



}