#include<stdio.h>
int main()
{
int A,B,C;
printf("enter the A number");
scanf("%d",&A);
printf("enter the B number");
scanf("%d",&B);
printf("enter the C number");
scanf("%d",&C);
if (A>B && A>C)
{
   printf("the largest number is :%d",A);
}
else if (B>A && B>C)
{
printf("the largest number is :%d",B);
     
}
else if (C>A && C>B)

{
    printf("the largest number is :%d",C);
    
}

return 0;
}