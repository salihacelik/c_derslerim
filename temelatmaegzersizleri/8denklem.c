/*1+1/2+1/3+1/4+1/n...*/
#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  int i=1;
  float sonuc;
 do
  {
    printf(" n degeri giriniz\n");
    scanf("%d",&n);
  }
  while (n<=0);
  



  do
  {
    sonuc += (float)1/i;
  } while (i<n);
  i++;


  printf("sonuc=%f",sonuc);
  return 0;
  


}