/*sayi oluşturma*/
#include<stdio.h>
#define yuzler 100
#define onlar 10
#define birler 1
int main()
{
    int x,y,z,sayi;
    printf("x,y ve z degerlerini giriniz\n");
    scanf("%d%d%d",&x,&y,&z);
    sayi=yuzler * x + onlar * y + birler * z ;

    printf("%d",sayi);
    return 0;

}