#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");

    for (int i = 5; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= 5; i++) {
        for (int j = i; 5 - j >= 1; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 5; i >= 1; i--) {
        for (int j = 5 - i; j >= 1; j--) {
            printf(" ");
        }
        for (int j = i; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}