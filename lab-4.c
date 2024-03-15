#include<stdio.h>

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int e1, e2, e3;
    int *p1, *p2, *p3;

    printf("Enter the first element: ");
    scanf("%d", &e1);
    printf("Enter the second element: ");
    scanf("%d", &e2);
    printf("Enter the third element: ");
    scanf("%d", &e3);

    p1 = &e1;
    p2 = &e2;
    p3 = &e3;

    printf("Element %d - %d\n", 1, *p1);
    printf("Element %d - %d\n", 2, *p2);
    printf("Element %d - %d\n", 3, *p3);

    swap(p1, p3);

    printf("After swapping:\n");
    printf("Element 1 - %d\n", *p1);
    printf("Element 2 - %d\n", *p2);
    printf("Element 3 - %d\n", *p3);

    return 0;
}
