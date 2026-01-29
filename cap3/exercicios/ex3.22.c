#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int altura;
    char contorno;
    char preenchimento;

    printf("Altura: ");
    scanf("%d", &altura);

    printf("Caractere de desenho: ");

    if (altura >= 0) {
        scanf(" %c", &contorno);
    }
    else {
        scanf(" %c", &preenchimento);
    }

    printf("Caractere de preenchimento: ");

    if (altura >= 0) {
        scanf(" %c", &preenchimento);
    }
    else {
        scanf(" %c", &contorno);
    }

    if (altura < 0) altura = -altura;

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura; j++) {
            if (i == 1 || j == 1 || i == altura || j == altura || i == j || i + j == altura + 1) {
                printf("%c", contorno);
            }
            else {
                printf("%c", preenchimento);
            }
        }
        printf("\n");
    }
    
    return 0;
}