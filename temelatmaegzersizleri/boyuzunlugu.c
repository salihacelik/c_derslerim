/* sınıfta 150 ye en yakın kişi */
#include<stdio.h>
#include<math.h>
#define sbt 150
int main()
{
    int boy,no,fark=0,minno,minboy;

    printf("ogrencino:");
    scanf("%d",&no);
    printf("boy:");
    scanf("%d",&boy);
    fark=abs(sbt-boy);
    minno=no;
    minboy=boy;

    do
    {
        printf("ogrencino:");
        scanf("%d",&no);
        printf("boy:");
        scanf("%d",&boy);
        if (abs(sbt-boy)<fark)
        {
            fark=abs(sbt-boy);
            minboy=boy;
            minno=no;

        }
        



    } while (no>0);
   
    printf("\n\n%d numarali ogrenci %d boyla 150 ye en yakindir",minno,minboy);
    return 0;
    
}