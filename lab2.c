# include<stdio.h>
int main ()
{
 int A,B,temp;
 printf("enter the A number:");
 scanf("%d",&A);
  printf("enter the B number:");
 scanf("%d",&B);
  
  printf("new A value:",A);
  printf("new A value:",B);
  temp=A;
  A=B;
  B=temp;
  printf("A:%d || B:%d",A,B);

  


}