#include <stdio.h>

int main() {
    int N;
    int soma = 0;


    printf("Digite um numero inteiro positivo (N): ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Por favor, digite um numero maior ou igual a 1.\n");
        return 1; 
    }

    for (int i = 1; i <= N; i++) {
        soma += i; 
    }

    printf("A soma de todos os numeros inteiros de 1 ate %d e: %d\n", N, soma);

    return 0;
}
