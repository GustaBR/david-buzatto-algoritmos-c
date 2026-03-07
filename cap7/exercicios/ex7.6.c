#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lePositivo(void);

int somaDivisores(int numero);

int main(void) {
    int array[5];

    for (int i = 0; i < 5; i++) {
        printf("n[%d]: ", i);
        array[i] = lePositivo();
    }
    
    for (int i = 0; i < 5; i++) {
        printf(
            "Soma dos divisores de %d: %d\n",
            array[i],
            somaDivisores(array[i])
        );
    }

    return 0;
}

int lePositivo(void) {
    int resultado;

    do {
        scanf("%d", &resultado);

        if (resultado <= 0) {
            printf("Entre com um valor positivo: ");
        }

    } while (resultado <= 0);

    return resultado;
}

int somaDivisores(int numero) {
    int soma = 0;
    int limite = floor(sqrt(numero));
    for (int i = 1; i <= limite; i++) {
        if (numero % i == 0) {
            soma += i;
            soma += numero/i;
        }

        if (i * i == numero) soma -= i;
    }

    soma -= numero;

    return soma;
}