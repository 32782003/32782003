#include<stdio.h>
int main()
{

float A[8],ort,sum=0;
int i,n,m;
for ( i = 0; i <8; i++)
{
    printf("enter the number:");
    scanf("%d",&n);
    A[i]=n;
    printf("A[%d]=%d\n",i,n);
    sum+=A[i];
}
ort=sum/8;
printf("average:%f",ort);


}