#include<stdio.h>
int main()
{
   int n1,n2,sum,i;
   printf("enter the lower number:");
   scanf("%d",&n1);
   printf("enter the higher number:");
   scanf("%d",&n2);
   sum=0;
   for ( i = n1; i <=n2; i++)
   {
     sum+=i;

   }
   printf("%d",sum);
  return 0;
}