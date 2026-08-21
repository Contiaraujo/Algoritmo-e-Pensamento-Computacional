#include <stdio.h>

int main(){
    char nome[50];
    int idade;

    printf("\n--- Seja bem vindo ao registro ---\n");

    printf("\n--- Para começarmos precisaremos que você digite o seu nome abaixo ---\n");

    printf("Nome: ");
    scanf("%s", &nome);

    printf("\n--- Perfeito! ---\n");
    printf("\n--- Agora precisaremos que você informe sua idade ---\n");

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\n--- Perfeito! seu cadastro foi realizado com sucesso e é possivel ver o resultado abaixo:  ---\n");

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);

    return 0;
}