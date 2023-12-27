/*.10 elemanlı bir sayı dizisinde en küçük elemanın bu dizinin kaçıncı
elemanı olduğunu bulan programın algoritma ve akış diyagramını
çiziniz.*/
#include <stdio.h>
int main()
{
int A[10],max=0,i,k;
for ( i = 0; i <10; i++)
{
  printf("enter the  number:");
  scanf("%d",&A[i]);
  if (A[i]>max)
  {
   max=A[i];
   k=i+1;
  }
  }
printf("your max numbers value is:%d ve %d element",max,k);


}