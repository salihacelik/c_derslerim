#include<stdio.h>
int main()
{
    int day;
    printf("1 ve 7 arasinda sayii giriniz\n");
    scanf("%d",&day);
    switch(day)
    {
        case 1:printf("pazartesi");
        break;
        case 2:printf("sali");
        break;   
        case 3:printf("carsamba");
        break;   
        case 4:printf("persembe");
        break;  
         case 5:printf("cuma");
        break;   
        case 6:printf("cumartesi");
        break;
        case 7:printf("pazar");
        break;
    
        default:printf("gecersiz");
        break;
    }
    return 0;
}