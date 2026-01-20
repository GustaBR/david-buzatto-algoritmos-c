#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1;
    int n2;
    int guardado;

    // Entrada
    printf("Primeiro numero: ");
    scanf("%d", &n1);
    printf("Segundo numero: ");
    scanf("%d", &n2);
    
    // Processamento;
    guardado = n1;
    n1 = n2;
    n2 = guardado;

    // Saída
    printf("Valores antes da troca:\n");
    printf("Primeiro numero: %d\n", n2);
    printf("Segundo numero: %d\n\n", n1);
    printf("Valores depois da troca:\n");
    printf("Primeiro numero: %d\n", n1);
    printf("Segundo numero: %d", n2);

    return 0;
}