#include<stdio.h>
int main()
{
    int r,t;
    float pi,a,b;
    pi=3.14;
    printf("enter the radius:");
    scanf("%d",&r);
    printf("enter the type:");
    scanf("%d",&t);
    if (t==1)
    {
        a=2*pi*r;
        printf("perimeter:%d",a);
    }
    else if (t==2)
    {
      b=pi*r*r;
      printf("area:%d",b);
    }
    else
         printf("wrong input:(");
    
    



}