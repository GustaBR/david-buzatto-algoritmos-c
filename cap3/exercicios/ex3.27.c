#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int menor = 0;
    int maior = 0;
    int quantidade = 0;
    int numero;

    do {
        printf("Entre com um valor: ");
        scanf("%d", &numero);

        if (numero < 0) break;

        if (quantidade == 0) {
            maior = numero;
            menor = numero;
        }
        else if (numero > maior) maior = numero;
        else if (numero < menor) menor = numero;
        quantidade++;

    } while (numero >= 0);

    printf("Menor numero: %d\n", menor);
    printf("Maior numero: %d", maior);
    
    return 0;
}