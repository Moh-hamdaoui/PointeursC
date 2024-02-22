#include <stdio.h>
#include <stdlib.h>

void EchagerValeurs(int *ptr1, int *ptr2){ 
    
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

int main(){

    int entier1 = 10;
    int entier2 = 15;

    printf("Avant : La valeurs de entier1 est : %d et la valeur de entier2 est : %d \n",entier1, entier2);

    EchagerValeurs(&entier1,&entier2);

    printf("Apres : La valeurs de entier1 est : %d et la valeur de entier2 est : %d \n",entier1, entier2);

    return 0;
}