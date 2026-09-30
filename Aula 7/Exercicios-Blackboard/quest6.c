#include <stdio.h>
int main(void) {
    int numero, soma, contador;

    soma = 0;
    contador = 1;

    while (contador <= 10) {
        printf("Digite o %d numero: ", contador);
        scanf("%d", &numero);

        soma = soma + numero;

        contador = contador + 1;
    }

    printf("A soma dos 10 numeros e: %d\n", soma);
}