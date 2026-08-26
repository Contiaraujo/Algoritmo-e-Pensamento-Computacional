#include <stdio.h>

int main(){
    int idade;
    float altura;
    char inicial;

    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("\n--- Dados Registrados ---\n");
    printf("Inicial: %c\n", inicial);
    printf("Idade: %d\n", idade);
    printf("altura: %.2f metros\n", altura);

    return 0;
}