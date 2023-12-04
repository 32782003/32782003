#include <stdio.h>
int main ()
{
   
   int n,k,c;
   c=0;
    printf("enter a number");
    scanf("%d",&n);
    while (n>0)
    {
        k=n%10;
        n=n/10;
        c++;
        /* code */
    }
    printf("digit:%d",c);
    return 0;
}