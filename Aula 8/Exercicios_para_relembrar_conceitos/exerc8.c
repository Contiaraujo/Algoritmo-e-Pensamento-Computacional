#include <stdio.h>

int main(){
    int numero, soma = 0;

    printf("Digite um numero inteiro (0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0){
        soma += numero;
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("A soma dos numeros digitados foi: %d\n", soma);
    return 0;
}