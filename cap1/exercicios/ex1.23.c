#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int anoNascimento;
    int anoAtual;
    int idade;

    // Entrada
    printf("Ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    // Processamento
    idade = anoAtual - anoNascimento;

    // Saída
    printf("Idade aproximada: %d anos", idade);

    return 0;
}