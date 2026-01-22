#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float n1;
    float n2;
    float nOp;
    float media;

    printf("Nota Av. 1: ");
    scanf("%f", &n1);
    
    printf("Nota Av. 2: ");
    scanf("%f", &n2);
    
    printf("Nota Optativa: ");
    scanf("%f", &nOp);
    
    if (nOp < 0 || (nOp <= n1 && nOp <= n2)) {
        media = (n1 + n2) / 2;
    }
    else if (n1 >= n2) {
        media = (nOp + n1) / 2;
    }
    else {
        media = (nOp + n2) / 2;
    }

    printf("Media: %.2f\n", media);

    if (media >= 6) {
        printf("Aprovado!");
    }
    else if (media >= 4) {
        printf("Exame.");
    }
    else {
        printf("Reprovado...");
    }

    return 0;
}