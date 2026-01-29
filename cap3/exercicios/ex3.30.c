#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1;
    int n2;
    char escolha;

    do {
        printf("N1: ");
        scanf("%d", &n1);

        do {
            printf("N2: ");
            scanf("%d", &n2);

            if (n2 == 0) {
                printf("Nao existe divisao inteira por zero!\n");
                printf("Entre novamente com ");
            }
    
        } while (n2 == 0);

        printf("%d / %d = %d\n", n1, n2, n1 / n2);

        printf("Voce deseja realizar outro calculo? (S/N): ");
        scanf(" %c", &escolha);
    } while (escolha == 'S');

    return 0;
}