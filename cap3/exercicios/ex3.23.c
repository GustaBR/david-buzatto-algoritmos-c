#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int maior;

    printf("N1: ");
    scanf("%d", &n1);

    maior = n1;

    printf("N2: ");
    scanf("%d", &n2);
    
    if (n2 > maior) maior = n2;
    
    printf("N3: ");
    scanf("%d", &n3);
    
    if (n3 > maior) maior = n3;
    
    printf("N4: ");
    scanf("%d", &n4);
    
    if (n4 > maior) maior = n4;
    
    printf("N5: ");
    scanf("%d", &n5);
    
    if (n5 > maior) maior = n5;
    
    if (n1 <= 0 || n2 <= 0 || n3 <= 0 || n4 <= 0 || n5 <= 0) {
        printf("Forneca apenas numeros positivos.");
        return 0;
    }
    
    for (int i = maior; i >= 1; i--) {
        printf("%04d", i);
        printf("  ");
        n1 >= i ? printf("*") : printf(" ");
        n2 >= i ? printf("*") : printf(" ");
        n3 >= i ? printf("*") : printf(" ");
        n4 >= i ? printf("*") : printf(" ");
        n5 >= i ? printf("*") : printf(" ");
        printf("\n");
    }

    return 0;
}