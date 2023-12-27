/*  10 elemanlı bir sayı dizisini girişini yapan algoritma ve akış diyagramını çiziniz.*/
#include<stdio.h>
int main()
{

int A[10],i;
for ( i = 0; i < 10; i++)
{
  printf("enter the %d.number:",i+1);
  scanf("%d",&A[i]);
 
}
 printf("%d",A[5]);


}