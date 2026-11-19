#include <stdio.h>

int main() {
    int n, soma = 0;
    printf("Digite um numero inteiro (N): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("A soma de 1 ate %d eh: %d\n", n, soma);
    return 0;
}
