#include <stdio.h>
int main ()
{
   int n;
   float S,i;
   S=0;
   printf("enter a number:");
   scanf("%d",&n);
   for ( i = 2; i <= n; i+=2)
   {
    S=S+( 1/i);
    printf("%f",S);
   }
   printf("sum:%f", S);

return 0;

}