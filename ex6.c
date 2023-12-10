#include<stdio.h>
int main ()
{
    int a,b,i,j,k;
printf("enter the 1. number:");
    scanf("%d",&a);
     printf("enter the 2. number:");
    scanf("%d",&b);
    j=1;
    for ( i = 1; i <=a/2; i++)

    {
        if(a%i==0 && b%i==0)
        j*=i;

    }
    k=a*b/j;
    printf("lcm:%d",k);




}