#include <stdio.h>
#include<math.h>
int main ()
{
int a , b,c,r,z;

printf("enter a number");
scanf("%d",&a);
printf("enter a number");
scanf("%d",&b);
printf("enter a number");
scanf("%d",&c);

r=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
z=(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);

printf("roots :%d,%d",r,z);


}