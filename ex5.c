# include <stdio.h>
int main ()
{
 int f;
 float c;

 printf("enter the temperature:");
 scanf("%d",&f);

 c=(f-32)/1.8;
 printf("celsius;%f",c);
 return 0;

}