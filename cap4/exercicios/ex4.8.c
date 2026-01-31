#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[5];
    int qtdPares = 0;
    int qtdImpares = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);

        if (array[i] % 2 == 0) qtdPares++;
        else qtdImpares++;
    }

    printf("Numeros pares:");

    if (qtdPares == 0) printf(" nao ha.\n");
    else {
        for (int i = 0; i < 5; i++) {
            if (array[i] % 2 == 0) {
                printf(" %d", array[i]);
                qtdPares--;
            }
            if (qtdPares == 0) {
                printf(".\n");
                break;
            }
        }
    }

    printf("Numeros impares:");

    if (qtdImpares == 0) printf(" nao ha.");
    else {
        for (int i = 0; i < 5; i++) {
            if (array[i] % 2 != 0) {
                printf(" %d", array[i]);
                qtdImpares--;
            }
            if (qtdImpares == 0) {
                printf(".");
                break;
            }
        }
    }

    return 0;
}