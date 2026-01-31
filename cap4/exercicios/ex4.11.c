#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int quantidade;

    do {
        printf("Quantidade de elementos: ");
        scanf("%d", &quantidade);

        if (quantidade < 1 || quantidade > 9) {
            printf("Quantidade incorreta. forneca novamente!\n");
        }

    } while (quantidade < 1 || quantidade > 9);

    int array[quantidade+1];

    for (int i = 0; i < quantidade; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int novoValor;

    printf("Valor que sera inserido: ");
    scanf("%d", &novoValor);

    for (int i = quantidade; i > 0; i--) {
        array[i] = array[i-1];
    }

    array[0] = novoValor;

    for (int i = 0; i < quantidade+1; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    
    return 0;
}