#include<stdio.h>
int main()
{
    int a,b;
    float sonuc;
   char operator;

    printf("operator seciniz\n");
    scanf("%c",&operator);
    printf("sayilari giriniz\n");
    scanf("%d%d",&a,&b);

    if (a==0 && b==0)
    {
        printf("bu islem yapilamaz\n");
    }
    else
    { 
        switch (operator)
    {
    case '-':
       sonuc= 1/a-1/b;
        break;
    case '+':
         sonuc = 1/a + 1/b;
        break;
    }
    }

    printf("%f",sonuc);
    return 0;


}