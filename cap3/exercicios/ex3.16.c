#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 1;
    int b = 1;

    printf("%d %d ", a, b);

    for (int i = 2; i <= 19; i++) {
        if (a <= b) {
            a = a + b;
            printf("%d ", a);
        }
        else {
            b = b + a;
            printf("%d ", b);
        }
    }
    
    return 0;
}