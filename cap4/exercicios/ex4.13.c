#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[10];
    int posicao;

    for (int i = 0; i < 10; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    do {
        printf("Posicao a ser removida: ");
        scanf("%d", &posicao);

        if (posicao < 0 || posicao > 9) {
            printf("Posicao invalida. forneca novamente!\n");
        }

    } while (posicao < 0 || posicao > 9);


    for (int i = posicao; i < 9; i++) {
        array[i] = array[i+1];
    }

    for (int i = 0; i < 9; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}