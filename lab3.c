#include<stdio.h>
int main()
{
    int stn,visa,final,pg;
    float a,b;
    pg =50;

    printf("enter the student number:");
    scanf("%d",&stn);
    printf("enter the visa:");
    scanf("%d",&visa);
    printf("enter the final:");
    scanf("%d",&final);
    a=(visa*40)/100;
    b=(final*60)/100;
    if (a+b>pg)
    {
       printf("you passed,student num:%d",stn);
    }
    else
    printf("you failed, student num:%d",stn);
    





}