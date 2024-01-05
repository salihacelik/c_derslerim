/*çiftlikte tavşam=1042 kuş=2272 tavşan yılda % 3,8 kuş yılda%1,2 kaç yıl sonra tavşam kuşu geçer*/
#include<stdio.h>
#include<math.h>
#define thiz 0.038
#define khiz 0.012
int main()
{
    int tavsan=1042,kus=2272,i;
    float newtavsan,newkus;
    for ( i = 1; i < 100; i++)
    {
       newtavsan=tavsan+(tavsan*thiz);
       newkus=kus+(kus*khiz);
       if (newtavsan<newkus)
       {
        tavsan=newtavsan;
        kus=newkus;
       continue;
       }
       else 
       break;

       
    }
    printf("%d yilda tavsan sayisi kus sayisini gecer\n",i);
    printf(" kus sayisi:%f \n tavsan sayisi: %f",newkus,newtavsan);
    return 0;
    



}