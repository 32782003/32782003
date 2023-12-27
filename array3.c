/*65.Bir sayı dizisinin en büyük elemanını bulan programın algoritma ve
akış diyagramı çiziniz*/
#include<stdio.h>
int main()
{   int max=0,i;
    int A[5]={1,3,5,8,6};
    for ( i = 0; i < 5; i++)
    {
        if (max<A[i])
        {
           max=A[i];
        }
        
    }
    printf("max number:%d",max);
    




}