#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float valorPorAula;
    int numeroDeAulas;
    float descontoINSS;
    float salario;

    // Entrada
    printf("Valor da hora/aula: ");
    scanf("%f", &valorPorAula);
    printf("Quantidade de aulas: ");
    scanf("%d", &numeroDeAulas);
    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &descontoINSS);

    // Processamento
    salario = valorPorAula * numeroDeAulas * (100 - descontoINSS) / 100;

    // Saída
    printf("Salario Liquido: %.2f", salario);

    return 0;
}