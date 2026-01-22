#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float n1;
    float n2;
    char operacao;
    float resultado;

    printf("N1: ");
    scanf("%f", &n1);

    printf("N2: ");
    scanf("%f", &n2);

    printf("Escolha uma operacao de acordo com o menu:\n");
    printf("\t+) Adicao;\n");
    printf("\t-) Subtracao;\n");
    printf("\t*) Multiplicacao;\n");
    printf("\t/) Divisao.\n");

    printf("Operacao: ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            resultado = n1 + n2;
            break;
        case '-':
            resultado = n1 - n2;
            break;
        case '*':
            resultado = n1 * n2;
            break;
        case '/':
            resultado = n1 / n2;
            break;
        default:
            printf("Opcao invalida!");
            return 0;
    }

    printf("%.2f %c %.2f = %.2f", n1, operacao, n2, resultado);
    
    return 0;
}