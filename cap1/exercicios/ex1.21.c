#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;
    int sucessor;
    int antecessor;

    // Entrada
    printf("Forneca um numero inteiro: ");
    scanf("%d", &numero);

    // Processamento
    sucessor = numero + 1;
    antecessor = numero - 1;

    // Saída
    printf("Sucessor de %d: %d\n", numero, sucessor);
    printf("Antecessor de %d: %d", numero, antecessor);

    return 0;
}