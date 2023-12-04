#include<stdio.h>
#include <string.h>
int main ()
{
    int i,n,k;
    char m;
    printf("enter a number:");
    scanf("%d",&n);
      m=0;
       while (n>0)
       {    i=n%2;
            n=n/2;
        
       
           
            m=m*10+i;
             strrev(m*_String);
            
      }
    printf("%d",m);
    return 0;


}