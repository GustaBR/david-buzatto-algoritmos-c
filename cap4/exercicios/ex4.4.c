#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[5];
    int numero;
    
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &numero);

    for (int i = 0; i < 5; i++) {
        printf("Indice %d: ", i);
        if (numero == array[i]) {
            printf("ACHEI\n");
        }
        else {
            printf("NAO ACHEI\n");
        }
    }

    return 0;
}