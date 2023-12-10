#include<stdio.h>
int main ()
{
 int i,j,k,sum,n;
 sum=0;
 printf("enter a number:");
 scanf("%d",&n);

 for ( i = 1; i <= n; i++)
 {k=0;
   for ( j = 1; j <=i; j++)
   {
    if (i%j==0)
    {
        k++;
    }
    
   }
   if (k==2)
   {
      printf("prime number:%d\n",i);
      sum+=i;
   }
  
    
 }
 
 printf("sum:%d",sum);

}