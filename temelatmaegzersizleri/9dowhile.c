#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float x;
    do
    {
        printf("sayi giriniz\n");
        scanf("%f",&x);
    } while (x<0);

    //if (x=0)break;

    printf("sayinin karakoku = %f",sqrt(x));

    
    return 0;
}

