#include<stdio.h>
int main ()
{
   int num,sum,i,j;
   printf("enter a number:");
   scanf("%d",&num);

   for ( i = 1; i <=num; i++)
   {
    sum=0;
      for ( j = 1; j <=i/2; j++)
      {
        if (i%j==0)
        {
          sum+=j;
        }
      
      }
        if (sum==i)
        {
            printf("perfect number:%d\n",i);

        }
        
   }
   



}