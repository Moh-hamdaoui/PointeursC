#include <stdio.h>
#include <stdlib.h>

int main() {
   
    float *tableau = (float *)malloc(10 * sizeof(float));

    if (tableau == NULL) {
        fprintf(stderr, "Erreur d allocation de memoir \n");
        return 1;
    }

    for (int i = 0; i < 10; ++i) {
        tableau[i] = 0.75 * i; 
    }

    printf("Les valeurs de tableau :\n");
    for (int i = 0; i < 10; ++i) {
        printf("%.2f ", tableau[i]);
    }

    free(tableau);

    tableau = NULL;
    
    return 0;
}
