#include <stdio.h>
#include <stdlib.h>

int main() {
    float *tableau = (float *)malloc(5 * sizeof(float));

    if (tableau == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire \n");
        return 1;
    }

    for (int i = 0; i < 5; ++i) {
        tableau[i] = 0.75 * i; 
    }
    printf("Taille initiale du tableau : %zu\n",5 * sizeof(float));

    tableau = (float *)realloc(tableau, 10 * sizeof(float));

    

    if (tableau == NULL) {
        fprintf(stderr, "Erreur de réallocation de mémoire \n");
        return 1;
    }

    printf("La nouvelle taille du tableau : %zu\n", 10 * sizeof(float));
    for (int i = 0; i < 10; ++i) {
        tableau[i] = 0.75 * i; 
    }

    free(tableau);
    tableau = NULL;

    return 0;
}
