
/*2. Adınız soyadınız için gerekli minimum char bellek alanını malloc fonksiyonu kullanarak ayırınız ve
içerisine strcpy fonksiyonunu kullanarak adınızı ve soyadınızı arada boşluk bırakarak yazınız. */
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   
   char isim[]="Elif Zehra";
   char surname[]="Unal";
   char * ptr,*ptr2;
   ptr=(char*)malloc(10);
   ptr2=(char*)malloc(4);

   strcpy(ptr,isim);
   strcpy(ptr2,surname);
   printf("name and surname: %s %s",ptr,ptr2);
   



}
