#include<stdio.h>
int main()
{
    int num,sum,i,f,k,a;
printf ("enter a number:");
scanf("%d",&num);
a=num;
sum=0;

while (num>0)
{f=1;
  k=num%10;
  for ( i = 1; i <=k; i++)
  {
    f*=i;
    
  }sum+=f;
  
  num=num/10;
}
if (a==sum)
{
   printf("strong number:)");
}
else 
printf("not a strong number");






}