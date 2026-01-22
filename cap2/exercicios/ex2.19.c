#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float tC;
    float tF;
    char operacao;

    printf("Escolha uma operacao de acordo com o menu:\n");
    printf("\tC) Celsius -> Fahrenheit;\n");
    printf("\tF) Fahrenheit -> Celsius.\n");
    
    printf("Opcao: ");
    scanf(" %c", &operacao);
    
    switch (operacao) {
        case 'C':
            printf("Entre com a temperatura em graus Celsius: ");
            scanf("%f", &tC);
            
            tF = 1.8 * tC + 32;
        
            printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", tC, tF);
            break;
        case 'F':
            printf("Entre com a temperatura em graus Fahrenheit: ");
            scanf("%f", &tF);
        
            tC = (tF - 32) / 1.8;
        
            printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", tF, tC);
            break;
        default:
            printf("Opcao invalida!");
            break;
    }

    return 0;
}