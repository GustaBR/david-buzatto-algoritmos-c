#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &numero);

    switch (numero) {
        case 2:
        case 4:
        case 6:
        case 8:
            printf("O valor fornecido foi %d.", numero);
            break;
        default:
            printf("Valor invalido.");
            break;
    }

    return 0;
}