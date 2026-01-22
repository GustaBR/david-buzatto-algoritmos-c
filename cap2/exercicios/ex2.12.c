#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int h1;
    int h2;
    int m1;
    int m2;
    int hMaisVelho;
    int mMaisNova;
    int hMaisNovo;
    int mMaisVelha;

    printf("Idade Homem 1: ");
    scanf("%d", &h1);

    printf("Idade Homem 2: ");
    scanf("%d", &h2);

    printf("Idade Mulher 1: ");
    scanf("%d", &m1);

    printf("Idade Mulher 2: ");
    scanf("%d", &m2);

    if (h1 >= h2) {
        hMaisVelho = h1;
        hMaisNovo = h2;
    }
    else {
        hMaisVelho = h2;
        hMaisNovo = h1;
    }

    if (m1 >= m2) {
        mMaisVelha = m1;
        mMaisNova = m2;
    }
    else {
        mMaisVelha = m2;
        mMaisNova = m1;
    }

    printf("Idade homem mais velho + idade mulher mais nova: %d\n", hMaisVelho + mMaisNova);
    printf("Idade homem mais novo * idade mulher mais velha: %d", hMaisNovo * mMaisVelha);

    return 0;
    
}