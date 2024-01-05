#include<stdio.h>
#include<stdlib.h>
int main()
{
  int saliha[5];
  int i;
  int sonuc=0;

  for (i = 0; i < 5; i++)
  {
    printf("sayi giriniz\n");
    scanf("%d",&saliha[i]);
  }

  i=0;
  while (i<5)
  {
     printf("%d\n",saliha[i]);
    sonuc=sonuc+saliha[i];
    i++;
  }

  printf("sonuc=%d",sonuc);
  return 0;
   


  
}

