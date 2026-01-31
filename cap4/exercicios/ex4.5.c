#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[5];
    int numero;
    int contador = 0;

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &numero);

    for (int i = 0; i < 5; i++) {
        if (numero == array[i]) contador++;
    }

    if (contador == 0) printf("O array nao contem o valor %d.", numero);
    else if (contador == 1) printf("O array contem %d ocorrencia do valor %d.", contador, numero);
    else printf("O array contem %d ocorrencias do valor %d.", contador, numero);

    return 0;
}