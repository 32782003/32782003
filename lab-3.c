#include<stdio.h>
#define max 100

int main() 
{
   char arr[max];
   char* ptr=arr;
   printf("enter a string: ");
   fgets(arr,sizeof(arr),stdin);
   int c=0;
   for (int i =1; *(ptr+i)!='\0'; i++)
   {
    if(*(ptr+i)!='\n')
    {
     c++;
    }
   }
   printf("lenght:%d",(c-1));
   
}
