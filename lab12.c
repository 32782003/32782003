#include<stdio.h>
int main ()
{
    int n,f,i;
printf("enter a number:");
scanf("%d",&n);
f=1;
for ( i = 1; i <=n; i++)
{
   f*=i;
}

printf("factorial :%d!:%d",n,f);

}