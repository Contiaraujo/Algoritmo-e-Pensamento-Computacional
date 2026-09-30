#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero != 0) {
            printf("Incorreto! Tente novamente.\n\n");
        }
    } while (numero != 0); // Repete enquanto o número NÃO for 0

    printf("\n Parabens! Voce digitou 0 e ganhou o jogo!\n");

    return 0;
}