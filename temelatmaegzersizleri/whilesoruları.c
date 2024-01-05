// while geriye sayıları yazdırma 

/*#include<stdio.h>
int main()
{
    int N;
    printf("N degeri giriniz\n");
    scanf("%d",&N);

    while (N>=1)
    {
        printf("%d\n",N);
        N--;
    }
    return 0;
}*/


//kullanıcının girdiği sayıdan 1 e kadar toplayan c programı

/*#include<stdio.h>
int main()
{
    int sayi,sonuc=0,i=1;
    printf("sayi degeri giriniz\n");
    scanf("%d",&sayi);

    while (sayi>=i)
    {
             if (sayi==i)
            {
               printf("%d",sayi);
            }
            else
            printf(" %d + ",sayi);
        
        sonuc+=sayi;
        sayi--;

    }
    printf(" = %d",sonuc);
    return 0;
}*/



// kullanıcıdan aldığı sayı ve 0 arasındaki 17 nin katlarını yazdıran program 
#include<stdio.h>
int main()
{
    int sayi,sayac=0;
    printf("sayi giriniz\n");
    scanf("%d",&sayi);

    while (sayi>=0)
    {
        if (sayi%17==0)
        {
            printf(" %d",sayi);
            sayac++;
            if (sayac==10)
            {
                printf("\n");
            }
            
        
        }
       sayi--;
        
    }
    return 0;
}