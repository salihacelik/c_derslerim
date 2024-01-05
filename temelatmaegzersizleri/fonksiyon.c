//fonksiyon işlemi f(x)=x^3+13x^2+47x+5

#include<stdio.h>
int main()
{
    float x;
    
    printf("x degeri giriniz\n");
    scanf("%f",&x);

    

    printf("f(%f)=%f",x,(x*x*x)+(13*x*x)+(47*x)+5);
    return 0;



   
}