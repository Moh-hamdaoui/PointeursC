#include <stdio.h>
#include <stdlib.h>

void inverserTableau(int tableau[], int *premierElement, int *dernierElement) {
    int i;
    int temp;
    int taille = dernierElement - premierElement + 1; 

    for (i = 0; i < taille / 2; i++) {
        temp = *(premierElement + i);
        *(premierElement + i) = *(dernierElement - i);
        *(dernierElement - i) = temp;
    }
}

int main() {
    int tableau[] = {12, 9, 15, 7};
    int *ptr;
    int *ptr1;

    ptr = tableau;
    ptr1 = tableau + 3; 

    printf("Tableau original : ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", tableau[i]);
    }

    
    inverserTableau(tableau, ptr, ptr1);

    printf("\nTableau inversé : ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}

