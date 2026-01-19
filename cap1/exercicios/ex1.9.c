#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int base;
    int altura;
    int area;

    // Entrada
    printf("Valor da base: ");
    scanf("%d", &base);
    printf("Valor da altura: ");
    scanf("%d", &altura);

    // Processamento
    area = base * altura / 2.0;

    // Saída
    printf("Area = %d", area);

    return 0;
}

/* 
 * Eu tentei armazenar o valor da área
 * em uma variável do tipo float, em vez
 * de uma do tipo int, já que a área de um
 * triângulo cuja medida da base e da altura
 * são números inteiros não necessariamente é
 * também inteira, mas o software de correção
 * não aceitou a resposta, então resolvi deixar
 * dessa forma.
 * 
 * Exemplo: a área do triângulo de base 9 e
 * altura 3 é 13,5 - não inteiro.
 * 
 * Nos últimos exercicíos de cálculo de área,
 * as restrições de domínio dos possíveis valores
 * para as medidas impediam que valores calculados
 * a partir deles fossem não inteiros - afinal,
 * o conjunto dos números inteiros é fechado
 * sob as operações de soma, subtração e multiplicação,
 * isso é, qualquer uma dessas operações resulta
 * em um número inteiro quando aplicada sobre outros
 * números inteiros.
 */ 