/*1/x^2+3/x^4+5/x^6....2n-1/x^2n   serisi */
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float x,sonuc=0;

    printf("n ve x degerlerini giriniz\n");
    scanf("%d%f",&n,x);


    for ( i = 1; i <= 2*n-1 ; i+=2)
    {
       sonuc+=i /pow(x,i+1);
    }
    printf(" sonuc:%f",sonuc);

    return 0;
}
