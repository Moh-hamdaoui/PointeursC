#include <stdio.h>
#include <stdlib.h>

int main() {

    float *ptr1 = NULL;
    float floattant = 3.7;

    ptr1 = &floattant;

    printf("L'adresse contenue dans le ptr1 est : %p\n ",(void *)ptr1);
    printf("La valeur poite par le ptr1 est : %.2f\n ", *ptr1);


    return 0;


}