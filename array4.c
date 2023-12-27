#include <stdio.h>
#include  <math.h>

int main()
{
int n,c,sum;

printf("enter the number: ");
scanf("%d",&n);

c=0;
sum=0;

while (n>0)
{   
   
   
   sum=sum+(n%2)*pow(10,c);
    n=n/2;
  c++;
 }
     
     

 printf("%d",sum);

return 0;


}