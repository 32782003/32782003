#include <stdio.h>
#include <math.h>

int main ()
{ int n,i,c,k,sum,a,m,tot;
    printf("enter a number:");
    scanf("%d",&n);
    tot=0;
for ( i = 1; i <=n; i++)
{   sum=0;
    m=i;
    c=0;
    while (m>0)
    {
      m=m/10;
      c++;
    }
    k=i;
    while (k>0)
    {
        a=k%10;
        sum=sum+ pow(a,c);
        k=k/10;
    }
    if (i==sum)
    {
        printf("armstrong number:%d\n",i);
        tot+=i;
    }
    
    
    
}
printf("total amstrong number:%d",tot);

return 0;


}
     
     
   
