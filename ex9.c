#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,m,k,z,sum,j,a;
  
   
printf("enter the number:");
scanf("%d",&n);
m=n;
j=0;
sum=0;
while (n>0)
{
  i=n%10;
  n=n/10;
  j++;
}
k=m;
while (m>0)
{
    a=m%10;
    
    sum+=pow(a,j);
    m=m/10;


}
if (sum==k)
{
   printf("armstrong");
}
else
printf("not");
 return 0;




}