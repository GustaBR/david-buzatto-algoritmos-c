#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1;
    int n2;
    int somatorio = 0;

    printf("N1: ");
    scanf("%d", &n1);
    
    printf("N2: ");
    scanf("%d", &n2);

    if (n1 >= n2) {
        for (int i = n1; i >= n2; i--) {
            somatorio += i;
        }

        printf("Somatorio entre %d e %d: %d", n2, n1, somatorio);
    }
    else {
        for (int i = n1; i <= n2; i++) {
            somatorio += i;
        }

        printf("Somatorio entre %d e %d: %d", n1, n2, somatorio);
    }
    

    return 0;
}