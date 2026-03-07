#include <stdio.h>
#include <stdlib.h>

int lePositivo(void);

int somatorio(int n);

int main(void) {
    int array[5];

    for (int i = 0; i < 5; i++) {
        printf("n[%d]: ", i);
        array[i] = lePositivo();
    }

    for (int i = 0; i < 5; i++) {
        printf(
            "Somatorio de 1 a %d: %d\n",
            array[i],
            somatorio(array[i])
        );
    }


    return 0;
}

int lePositivo(void) {
    int resultado;

    do {
        scanf("%d", &resultado);

        if (resultado <= 0) {
            printf("Entre com um valor positivo");
        }

    } while (resultado <= 0);

    return resultado;
}

int somatorio(int n) {
    return n*(n+1) / 2;
}