#include <stdio.h>
#include <stdlib.h>

int main(){

    int valeur = 10;

    printf("Avant la modification : %d \n", valeur);

    int *pointeur = &valeur ;


    *pointeur = 20;

    printf("Apres la modification : %d ",valeur);

}