#include <stdio.h>
int main ()
{
 int i,f,n;
 printf("enter a number");
 scanf("%d",&n);
 f=1;
 for ( i = 1; i <= n; i++)
 {
    f*=i;

    
 }
 printf("%d!",f);
 




}