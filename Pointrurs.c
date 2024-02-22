#include <stdio.h>

typedef int (*Operation)(int);


int appliquerOperation(int valeur, Operation operation) {
    return operation(valeur);
}


int doublement(int x) {
    return 2 * x;
}

int main() {
    int nombre = 5;

    printf("Nombre  : %d\n", nombre);

    

    int resultatDoublement = appliquerOperation(nombre, doublement);
    printf("Doublement : %d\n", resultatDoublement);

    return 0;
}
