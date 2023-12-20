#include <stdio.h>

int main ()
{
int i,x,k,f,j,m;
float sum;
printf("enter the x: ");
scanf("%d",&x);
sum=1+x;

for ( i = 2; i <=x; i++)
{  m=1;
   for ( k = x; k >=1; k--)
   {
     m*=x;
    
   }
   
   
    f=1;
   for (j = 1; j <=i; j++)
   {
     f*=j;
   }
   
    sum+=m/(float)j;
    
}
printf("sum: %f",sum);

 }

