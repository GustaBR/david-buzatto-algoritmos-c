#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[3][3];
    int determinante = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        int termoPositivo = 1;
        int termoNegativo = 1;

        for (int j = 0; j < 3; j++) {
            termoPositivo *= array[j][(i+j)%3];
            termoNegativo *= array[2-j][(i+j)%3];
        }

        determinante += termoPositivo;
        determinante -= termoNegativo;
    }

    printf("Determinante: %d", determinante);

    return 0;
}