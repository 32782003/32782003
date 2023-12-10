#include <stdio.h>
int main()
{
    int i,j,k,l,m;
    printf("enter the 1. number:");
    scanf("%d",&k);
     printf("enter the 2. number:");
    scanf("%d",&l);
    j=1;
    for ( i = 0; i < l; i++)

    {
          j*=k;
    }
    printf("pow:%d",j);
}