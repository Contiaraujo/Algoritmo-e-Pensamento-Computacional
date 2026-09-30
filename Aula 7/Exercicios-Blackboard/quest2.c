#include <stdio.h>
int main(void) {

    int pares;
    pares = 0;

    while (pares < 50) {
        if (pares % 2 == 0) {
            printf("%d\n", pares);
        }
        pares++;
    }
    printf("A quantidade de numeros pares é: %d\n", pares);
    return 0;
}