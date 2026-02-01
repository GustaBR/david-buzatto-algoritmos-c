#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;

    printf("Numero entre 1 e 100: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 100) {
        printf("Numero incorreto!");
        return 0;
    }

    int array[numero][numero];

    for (int i = 0; i < numero; i++) {
        for (int j = 0; j < numero; j++) {
            int diferenca = i-j;

            if (diferenca < 0) diferenca = -diferenca;
            
            array[i][j] = diferenca + 1;
        }
    }

    for (int i = 0; i < numero; i++) {
        for (int j = 0; j < numero; j++) {
            if (j == numero-1) printf("%3d", array[i][j]);
            else printf("%3d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}