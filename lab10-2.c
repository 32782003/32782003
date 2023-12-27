#include<stdio.h>
int main ()
{
    int A[10],n,f,i,j;
    for ( i = 0; i <10; i++)
    {
        printf("\nenter a number: ");
        scanf("%d",&n);
        if (n==-1)
        {
           i=10;
        } 
        
        else
        {
            A[i]=n;
            printf("A[%d]=%d\n",i,n);
           f=n*n;
            printf("A[%d]= %d",i,f);
            
        }
       
        
       
            
        
    }
  return 0;




}