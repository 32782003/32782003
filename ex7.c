# include<stdio.h>
int main()
{
   int i,n,m,j;
   printf("enter a number:");
    scanf("%d",&n);
    
    for ( i = 1; i <=n; i++)
    {    
        m=0;
for ( j =1; j <=i; j++)
{
    if(i%j==0){
        m++;
    }
    
   
}
    if(m==2){
        printf("%d\t",i);
    }
    }
    

   
     return 0;
   
     



}