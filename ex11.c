#include <stdio.h>
int main ()
{

int num,sum,i;
sum=0;
printf("enter a number:");
scanf("%d:",&num);
for ( i = 1; i <=num/2; i++)
{
   if (num%i==0)
   {
      sum+=i;
   }
  

}
if (num==sum)
{
   printf("perfect number:%d",num);
}
else 
     printf("not a perfect number:(");


}