#include <stdio.h>

int main(void) {

    int numero;

    printf("Selecione um numero para ser gerado a tabuada\n");
    scanf("%i", &numero);

    for (int i = 0; i <= 10; i++){
        int valor = numero * i;
        printf ("%i x %i = %i\n", numero, i, valor);
    }

    return 0;
}