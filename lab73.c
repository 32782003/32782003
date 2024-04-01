/*Belli bir metinde veya cümledeki kelimeleri sayan C programını dinamik bellek kullanarak yazınız*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 500
int count(char* string)
{
    int c=1;
    for (int i = 0; *string!='\0'; i++)
    {
        if(*string==' ')
        {
           c++;
        
        }
        string++;
    }
   
    
    printf("kelime sayisi:%d",c);
}


int main()
{
    printf("kelime veya cumle giriniz: ");
    char *string=(char*)malloc(max);
    fgets(string,max,stdin);
    count(string);
    free(string);
}
