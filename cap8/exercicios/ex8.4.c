#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void decompoeData(int diaDoAno, int ano, int *mes, int *dia);

bool ehBissexto(int ano);

int main(void) {
    int diaDoAno;
    int ano;
    int mes;
    int dia;

    printf("Dia do ano: ");
    scanf("%d", &diaDoAno);
    
    printf("Ano: ");
    scanf("%d", &ano);

    decompoeData(diaDoAno, ano, &mes, &dia);
    printf(
        "O dia %d do ano %d cai no dia %d do mes %d.",
        diaDoAno,
        ano,
        dia,
        mes
    );

    return 0;
}

void decompoeData(int diaDoAno, int ano, int *mes, int *dia) {
    int diasRestantes = diaDoAno;
    *mes = 1;
    int duracaoAtual = 31;

    while (*mes < 12) {
        if (diasRestantes - duracaoAtual < 1) break;
        diasRestantes -= duracaoAtual;

        switch (*mes) {
            case 1:
                duracaoAtual = ehBissexto(ano) ? 29 : 28;
                break;
            case 2:
            case 4:
            case 6:
            case 7:
            case 9:
            case 11:
                duracaoAtual = 31;
                break;
            case 3:
            case 5:
            case 8:
            case 10:
                duracaoAtual = 30;
                break;
        }

        (*mes)++;
    }

    *dia = diasRestantes;
}

bool ehBissexto(int ano) {
    return (ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0));
}