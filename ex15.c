#include<stdio.h>
int main()
{
    int num,num2,sum,k,l,m;
   printf("enter a number:");
   scanf("%d",&num);
   k=num;
   sum=0;
   while (num>0)
   {
    l=num%10;
    sum=sum*10+l;
    num=num/10;
   }
   if (sum==k)
   {
    printf("polindrome");
   }
   else
   printf("not");
   
}