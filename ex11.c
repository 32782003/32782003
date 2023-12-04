#include <stdio.h>
int main()
{

int i,n,sum,f;
sum=0;
f=1;
    for ( i = 0; i <10; i++)
    {
       printf("enter a number:");
       scanf("%d",&n);
       sum+=n;
       f*=n;
    }
    printf("sum :%d , product:%d ",sum,f);

    return 0;

}