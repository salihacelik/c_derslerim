//ax^2+bx+c sonucu
/*#include<stdio.h> 

int main()
{
    int a,b,c,x;
     printf("a,b,c ve x degerlerini giriniz\n");
     scanf("%d %d %d %d",&a,&b,&c,&x);

    printf("sonuc:%d",a * x * x + b * x + c);
    return 0;
}*/


//dikdörtgen prizma 
/*#include<stdio.h>
int main()
{
    int a,b,h;
    int tabanA,yanalA,topA,hacim;

    printf("dikdortgenin a,b ve h degerlerini giriniz\n");
    scanf("%d%d%d",&a,&b,&h);
    tabanA=a*b;
    yanalA=(2 * a * h) + (2 * b * h);
    topA=yanalA + (2 * yanalA);
    hacim=tabanA * h;

    printf("taban alani:%d \nyanal alani:%d \ntoplam alan:%d \nhacim:%d",tabanA,yanalA,topA,hacim);
    return 0;

}
*/


//3 tamsayi içinden en büyük ve küçüğü yazdıran c programı
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("3 adet tamsayi degeri giriniz\n");
    scanf("%d%d%d",&a,&b,&c);
    int max,min;
    max=a;
  
    if (max<a)
    {
       max=a;
    }
    if (max<b)
    {
        max=b;
    }
    if (max<c)
    {
        max=c;
    }
    
    printf("en buyuk sayi=%d\n",max);
    min=a;
    if (min>b)
    {
       min=b;
    }
    if (min>c)
    {
        min=c;
    }
     printf("en kucuk sayi =%d",min); 
    
}

*/

//iki tamsayının karşılaştırılması 
#include<stdio.h>
int main()
{ 
    int a,b;
    printf("2 adet sayi giriniz\n");
    scanf("%d%d",&a,&b);

    if (a==b)
    {
        printf("a=%d sayisi b=%d sayisina esittir\n");
    }
    else
    printf("sayilar esit degildir\n");
    

    if (a<b)
    {
        printf("a=%d sayisi kucuktur b=%d\n",a,b);

    }
    else
    {
       printf("b=%d kucuktur a=%d\n",b,a);
    }
   
   if (a%b==0)
   {
    printf("b a nin katidir\n");
   } 
   
    if (b%a==0)
    {
         printf("a b nin katidir\n");
    }
    else
    printf("birbirinin kati degildir");
    return 0;
   
    
    

}