/*.Fibonacci serisinin ilk 10 terimini dizi kullanarak bulan
programın algoritma ve akış diyagramı çiziniz.*/
#include<stdio.h>
int main(){
int  A[10],i;

A[0]=1;
A[1]=1;

printf("%d\t",A[0]);
printf("%d\t",A[1]);
for ( i = 2; i < 10; i++)
{

   
    A[i]=A[i-2]+A[i-1];

   
    printf("%d\t",A[i]);


    
}


}