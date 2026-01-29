#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float numero;
    float somatorio = 0;
    float media = 0;
    int quantidade = 0;

    do {
        printf("Entre com um valor: ");
        scanf("%f", &numero);

        if (numero >= 0) {
            somatorio += numero;
            quantidade++;
        }

    } while (numero >= 0);
    
    if (quantidade > 0) media = somatorio / quantidade;

    printf("Somatorio: %.2f\n", somatorio);
    printf("Media: %.2f\n", media);
    printf("Quantidade: %d", quantidade);

    return 0;
}