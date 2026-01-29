#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int idade;
    int menoresDe21 = 0;
    int maioresDe50 = 0;
    int contador = 1;

    do {
        printf("Idade da pessoa %02d: ", contador++);
        scanf("%d", &idade);

        if (idade < 21 && idade >= 0) {
            menoresDe21++;
        }
        else if (idade > 50) {
            maioresDe50++;
        }

    } while (idade >= 0);

    printf("Total de pessoas menores de 21 anos: %d\n", menoresDe21);
    printf("Total de pessoas com mais de 50 anos: %d", maioresDe50);

    return 0;
}