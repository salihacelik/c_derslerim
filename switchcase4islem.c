#include<stdio.h>
int main()
{
   float x,y;
    char ope;

     printf("opetaror giriniz\n");
    scanf("%c",&ope);

    printf("x ve y degeri giriniz\n");
    scanf("%f %f",&x,&y);
-
   
    switch (ope)
    {
        case '+': printf("%f",x+y);
        break;
        case '-': printf("%f",x-y);
        break; 
        case '*': printf("%f",x*y);
        break; 
        case '/': printf("%f",x/y);
        break;
    
    default:printf("yanlis operator girdiniz\n");
        break;
    }

return 0;

}
