#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float numero;

    // Entrada
    printf("Entre com um valor qualquer: ");
    scanf("%f", &numero);

    // Saída
    printf("%f\n", numero);
    printf("%.2f\n", numero);
    printf("%.3f", numero);

    return 0;
}