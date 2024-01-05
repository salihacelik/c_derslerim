/*hangi indekste hangi değer var bastır*/
/*#include<stdio.h>
int main()
{
    int dizi[2][3][2]={{{5,8},{8,4},{1,3}},{{2,5},{4,9},{7,6}}};
    int i,j,k;

    printf("hangi degeri bastirmak istersiniz\n");
    scanf("%d %d %d",&i,&j,&k);
    if (i<=1 && i>=0)
    {
        if (j<=2 && j>=0)
        {
            if (k<=1 && k>=0)
            {
                printf("%d",dizi[i][j][k]);
            }
             else
             printf("yanlis deger girdiniz ilk degeri kontrol ediniz\n");
            
        }
         else
        printf("yanlis deger girdiniz ikinci degeri kontrol ediniz\n");
        
    }
    else
    printf("yanlis deger girdiniz ucuncu degeri kontrol ediniz\n");
    


}
*/




/*girdigin degerleri sırayla ekrana yazdıran program*/
#include<stdio.h>
int main()
{
    int dizi[2][3][2];
    int i,j,k;
    printf("12 adet deger giriniz\n");
    
    
    for ( i = 0; i < 2; i++)
    {
       for ( j = 0; j < 3; j++)
       {
           for ( k = 0; k < 2; k++)
            {
                 scanf("%d",&dizi[i][j][k]);
             }
        
       }
       
    }
           

   printf("girdiginiz degerler\n");
   printf("\n");

     for (i = 0; i < 2; i++)
    {
       for ( j = 0; j < 3; j++)
       {
            for ( k = 0; k < 2; k++)
            {
                printf("dizi[%d][%d][%d]=%d\n",i,j,k,dizi[i][j][k]);
            }
        
        }
       
    }
    return 0;
    


} 

