#include<stdio.h>
int main()
{
    int x,y;
    printf("x ve y degerlerini giriiniz\n");
    scanf("%d%d",&x,&y);
    if (x == 0 || y == 0)
    {
       printf("carpma degeri = 0");
    }
    if (x>0 && y>0 || x<0 && y<0 )
    {
        printf("carpma degeri = 1");
    }
    if (x<0 && y>0 || x>0 && y<0)
    {
        printf("carpma degeri = -1");
    }
    return 0;
}