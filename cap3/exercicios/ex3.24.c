#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float n1;
    float n2;
    float n3;
    float n4;
    float n5;
    float n6;
    float n7;
    float n8;
    float n9;
    float n10;
    float media;

    printf("Forneca a nota de 10 alunos: ");

    printf("Nota 01: ");
    scanf("%f", &n1);
    
    printf("Nota 02: ");
    scanf("%f", &n2);
    
    printf("Nota 03: ");
    scanf("%f", &n3);
    
    printf("Nota 04: ");
    scanf("%f", &n4);
    
    printf("Nota 05: ");
    scanf("%f", &n5);
    
    printf("Nota 06: ");
    scanf("%f", &n6);
    
    printf("Nota 07: ");
    scanf("%f", &n7);
    
    printf("Nota 08: ");
    scanf("%f", &n8);
    
    printf("Nota 09: ");
    scanf("%f", &n9);
    
    printf("Nota 10: ");
    scanf("%f", &n10);

    for (int i = 1; i <= 10; i++) {
        switch (i) {
            case 1:
                media += n1;
                break;
            case 2:
                media += n2;
                break;
            case 3:
                media += n3;
                break;
            case 4:
                media += n4;
                break;
            case 5:
                media += n5;
                break;
            case 6:
                media += n6;
                break;
            case 7:
                media += n7;
                break;
            case 8:
                media += n8;
                break;
            case 9:
                media += n9;
                break;
            case 10:
                media += n10;
                break;
        }
    }

    media = media / 10;
    printf("A media aritmetica das dez notas e: %.2f", media);


    return 0;
}