#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float saldo;
    float valor;
    char operacao;

    printf("Saldo inicial: ");
    scanf("%f", &saldo);

    printf("Operacoes: \n");
    printf("\t1) Deposito;\n");
    printf("\t2) Saque;\n");
    printf("\t3) Fim.\n");
    do {
        printf("Operacao desejada: ");
        scanf(" %c", &operacao);

        switch (operacao) {
            case '1':
                printf("Valor a depositar: ");
                scanf("%f", &valor);

                saldo += valor;
                break;
            case '2':
                printf("Valor a sacar: ");
                scanf("%f", &valor);

                saldo -= valor;
                break;
            case '3':
                break;
            default:
                printf("Operacao invalida.\n");
                break;
        }

    } while (operacao != '3');
    
    if (saldo < 0) {
        printf("Saldo final: -R$%.2f\n", -saldo);
        printf("Conta devedora.");
    }
    else {
        printf("Saldo final: R$%.2f\n", saldo);
    }

    if (saldo == 0) printf("Sem saldo.");
    else if (saldo > 0) printf("Conta preferencial.");

    return 0;
}