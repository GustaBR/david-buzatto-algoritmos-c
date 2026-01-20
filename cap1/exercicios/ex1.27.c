#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float nota1;
    float nota2;
    float nota3;
    int peso1;
    int peso2;
    int peso3;
    float mediaPonderada;

    // Entrada
    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Peso da primeira nota: ");
    scanf("%d", &peso1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);
    printf("Peso da segunda nota: ");
    scanf("%d", &peso2);
    printf("Terceira nota: ");
    scanf("%f", &nota3);
    printf("Peso da terceira nota: ");
    scanf("%d", &peso3);

    // Processamento
    mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)
    / (peso1 + peso2 + peso3);

    // Saída
    printf("Media ponderada: %.2f", mediaPonderada);
    
    return 0;
}