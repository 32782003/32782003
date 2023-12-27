/*N elemanlı bir dizi bulunmaktadır. Klavyeden girilen sayılar
diziye, bir tane baştan bir tane sondan olmak üzere
yerleştirilmektedir. Örneğin ilk sayı birinci elemana, ikinci
sayı N’inci elemana, üçüncü sayı ikinci elemana, dördüncü sayı
N-1’inci elemana... şeklinde yerleştirilmektedir. N tane sayıyı
klavyeden okuyup diziye yerleştiren ve diziyi ekranda
görüntüleyen programın algoritma ve akış diyagramını çiziniz.*/
#include <stdio.h>
int main()
{int a,b,i,n,c;
  printf("enter the element's number:");
  scanf("%d",&n);
  int A[n];
  for ( i = 0; i <n ; i++)
  {
   
    printf("enter the value :");
    scanf("%d\n",&a);
    if (i%2==0)
    {
        A[i]=a;
        printf("A[%d]=%d",i,a);
        
    }
    if (i%2!=0)
    {
        A[n-1]=a;
      printf("A[%d]=%d",n-1,a);
    }
    
      
    
    }
    
        
         
      
    
}