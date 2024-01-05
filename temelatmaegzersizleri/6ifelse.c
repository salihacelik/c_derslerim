/*#include<stdio.h>
int main()
{
    int sayi;
    printf("sayi giriniz\n");
    scanf("%d",&sayi);
    if (sayi % 17 == 0 || sayi % 13 == 0)
    {
       printf(" sayi 17 veya 13 e tam bolunur\n");

    }
    return 0;

}*/

/* kullanıcıdan n sayı alan ve onun ortalaması*/

#include<stdio.h>
int main()
{
    float sayi,ortalama,sonuc=0;
    int sayac=0;
    char o;

    printf("sayi giriniz\n");
    printf("ortalama icin 'o' basiniz\n");
    while (1)
    {
        scanf("%f",&sayi);
        sayac++;
        sonuc+=sayi;
        ortalama=sonuc/sayac;

    }
    
}