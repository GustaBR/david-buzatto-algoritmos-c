#include <stdio.h>
#include <stdlib.h>

float maiorNumero(float n1, float n2);

int main(void) {
    float numeros[5][2];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            do {
                printf("n%d[%d]: ", j+1, i);
                scanf("%f", &numeros[i][j]);

                if (numeros[i][j] <= 0) {
                    printf("Entre com um valor positivo!\n");
                }

            } while (numeros[i][j] <= 0);
        }
    }

    for (int i = 0; i < 5; i++) {
        float n1 = numeros[i][0];
        float n2 = numeros[i][1];
        float maior = maiorNumero(n1, n2);

        printf("%.2f, %.2f: ", n1, n2);

        if (maior == -1) printf("Eles sao iguais");
        else printf("O maior valor e %.2f", maior);

        printf("\n");
    }
    
    return 0;
}

float maiorNumero(float n1, float n2) {
    if (n1 > n2) return n1;
    else if (n1 == n2) return -1;
    else return n2;
}