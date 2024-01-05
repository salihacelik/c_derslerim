/*1/x^2+3/x^4+5/x^6....2n-1/x^2n   serisi */
#include<stdio.h>
#include<math.h>
int main()
{ 
    int n,i;
    float x,sonuc=0;
    char devam;

  do
  {
    printf("n degerlerini giriniz\n");
    scanf("%d",&n);
    printf("x degeri giriniz\n");
    printf("devam etmek ister misiniz\n");
    scanf("%f %c",&x,&devam);
    for ( i = 1; i <= 2*n-1 ; i+=2)
    {
       sonuc+=i /pow(x,i+1);
    }
    printf("sonuc= %f\n",sonuc);
   
 

   
  }

    while ((devam == 'e') || (devam == 'E'));
    {
    
    }
    

    
    return 0;
}