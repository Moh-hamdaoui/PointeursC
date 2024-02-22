#include <stdio.h>

int main() {
    int X = 25, Y = 12;

    int *ptrX = &X;
    int *ptrY = &Y;

    printf("L'adresse de ptrX avant : %p\n", (void*)ptrX);
    printf("L'adresse de ptrY avant : %p\n", (void*)ptrY);

    
    int *tempPtr = ptrX;
    ptrX = ptrY;
    ptrY = tempPtr;

    printf("L'adresse de ptrX après : %p\n", (void*)ptrX);
    printf("L'adresse de ptrY après : %p\n", (void*)ptrY);

    return 0;
}
