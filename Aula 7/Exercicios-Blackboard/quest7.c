#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    // 1. Lê os 10 números inteiros do usuário
    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // 2. Exibe os números que são negativos
    printf("\nNumeros negativos digitados:\n");
    int tem_negativo = 0; 
    
    for(i = 0; i < 10; i++) {
        if(numeros[i] < 0) {
            printf("%d ", numeros[i]);
            tem_negativo = 1;
        }
    }

    // Caso nenhum número seja negativo
    if(!tem_negativo) {
        printf("Nenhum numero negativo foi digitado.");
    }

    printf("\n");
    return 0;
}