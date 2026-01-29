#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int altura;

    printf("Altura: ");
    scanf("%d", &altura);
    
    if (altura >= 0) {
        for (int i = 1; i <= altura; i++) {
            for (int j = altura - i; j >= 1; j--) {
                printf(" ");
            }
            for (int j = i; j >= 1; j--) {
                printf("*");
            }
            for (int j = i - 1; j >= 1; j--) {
                printf("*");
            }

            printf("\n");
        }
    }
    else {
        for (int i = 1; i <= -altura; i++) {
            for (int j = i - 1; j >= 1; j--) {
                printf(" ");
            }
            for (int j = -altura; j >= i; j--) {
                printf("*");
            }
            for (int j = -altura - 1; j >= i; j--) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}