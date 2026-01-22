#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char caractere;

    printf("Entre com um caractere: ");
    scanf(" %c", &caractere);

    switch (caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("O caractere '%c' e uma vogal.", caractere);
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            printf("O caractere '%c' e uma consoante.", caractere);
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("O caractere '%c' e um digito.", caractere);
            break;
        default:
            printf("O caractere '%c' e um simbolo.", caractere);
            break;
    }

    return 0;
}