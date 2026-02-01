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
            if (i <= (numero-1) / 2 && j <= (numero-1) / 2) {
                if (i <= j) {
                    array[i][j] = i+1;
                }
                else {
                    array[i][j] = j+1;
                }
            }
            else if (i > (numero-1) / 2 && j <= (numero-1) / 2) {
                if (numero-1-i <= j) {
                    array[i][j] = numero-i; 
                }
                else {
                    array[i][j]= j+1;
                }
            }
            else if (i <= (numero-1) / 2 && j > (numero-1) / 2) {
                if (numero-1-j <= i) {
                    array[i][j] = numero-j;
                }
                else {
                    array[i][j] = i+1;
                }
            }
            else {
                if (numero-1-i <= numero-1-j) {
                    array[i][j] = numero-i; 
                }
                else {
                    array[i][j] = numero-j; 
                }
            }
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