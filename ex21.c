#include <stdio.h>
int main(){
    int number,count,i,j,b;
    printf("bir sayi gir");
    scanf("%d",&number);
    count=0;
    b=number;
    i=number;
    while(number>0){
        number=number/10;
        count++;
    }
    for(j=0;j<count-1;j++){
       i=i/10;
    }
    printf("ilk basamak = %d",i);
    printf(" son basamak = %d",b%10);
    

    return 0;
}