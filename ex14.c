#include<stdio.h>
int main ()
{
    int sum,f,k,j,i,n,m,l;
    printf("enter a number:");
    scanf("%d",&n);
    for ( m = 1; m <=n; m++)
    { 
      m=i;
      sum=0;
      while (i>0)
      {f=1;
       k=i%10;
       for ( j = 1; j <=k;j++)
       {
         f*=j;
       }
       sum+=f;
       i=i/10;
       
       }
      m=l;
      if (sum==l)
      {
        printf("strong number:%d\n",l);
      }
      
      
    

    }


return 0;



}