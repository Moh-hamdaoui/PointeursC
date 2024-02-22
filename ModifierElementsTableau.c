#include <stdio.h>
#include <stdlib.h>

int main() {
    int tableau[] = {12, 9, 15};
    int *ptr = tableau;
    int i;
  
    printf("Tableau original : ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", tableau[i]);
    }

    for(i=0; i < 3; i++){
        *(ptr+i) = *(ptr+i) + 5;
    }

    printf("Tableau modifer : ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", tableau[i]);
    }


}