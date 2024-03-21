/*1. Toplam eleman sayısını kullanıcıdan alarak bu sayı kadar bellekten calloc fonksiyonunu kullanarak
gerekli yeri alınız. Ayırdığınız bu bellek alanına eleman sayısı kadar değeri kullanıcıdan alınız. Daha
sonra girilen en büyük değeri tanımladığınız işaretçi değişkeni kullanarak bulunuz ve ekrana
yazdırınız. */
#include<stdio.h>
#include<stdlib.h>
int max(int * ptr,int num)
{
    int max1= * ptr ;
   for (int  i = 1; i < num; i++)
   {
     for (int j = 0; j < num; j++)
     {
        if(*(ptr+i)> max1)
        {
             max1=*(ptr+i);
        }
       
     }
   } 
   return  max1;
}


int main()
{
    int num;
    printf("enter the number of element: ");
     scanf("%d",&num);
     int* arr;
     arr=(int*)calloc(num,sizeof(int));
     int*  ptr=arr;
     for (int i = 0; i <num; i++)
     {
        printf("enter a number: ");
        scanf("%d",ptr+i);


     }
     
     printf("%d",max(ptr,num));
     free(arr);

     
}
