#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 150

int count(char* str, char* str2) {
    int c;
    char temp;
    temp = *str;
    for (int i = 0; *str != '\0'; i++) {
        c = 0;
        for (int j = 0; str2[j] != '\0'; j++) {
            if (*str == str2[j]) {
                c++;
            }
        }
        printf("%c=%d\n", *str, c);
        str++;
    }
}

int main() {
    char* string1 = (char*)realloc(NULL, max);
    printf("enter a string: ");
    fgets(string1, max, stdin);
    count(string1, string1);
}
