#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[] = {12,9,15,1,4};
    int *ptr;
    int i;

    ptr = tableau;

    printf("Le parcours de tableau utilisant le pointeur : ");

    
    for (int i = 0; i < 5; i++) {
        //la * sert a faire un dereferencement de la valeurs dont le pointeur point
        printf("%d ", *(ptr + i));  
    }

    printf("\n");

    return 0;
}
