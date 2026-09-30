#include <stdio.h>

int main(void){
    int valor, atual;
    int nota100, nota50, nota10, nota5, nota1;

    printf("Digite um valor reais: ");
    scanf("%d", &valor);

    atual = valor;

    nota100 = atual / 100;
    atual = atual % 100;

    nota50 = atual / 50;
    atual = atual % 50;

    nota10 = atual / 100;
    nota10 = atual / 10;
    atual = atual % 10;

    nota5 = atual / 5;
    atual = atual % 5;

    nota1 = atual;

    printf("O valor de %d reais e composto por:\n", valor);
    printf("Relacao de notas necessarias:\n");
    printf("%d nota(s) de 100 reais\n", nota100);
    printf("%d nota(s) de 50 reais\n", nota50);
    printf("%d nota(s) de 10 reais\n", nota10);
    printf("%d nota(s) de 5 reais\n", nota5);
    printf("%d nota(s) de 1 real\n", nota1);
    return 0;
}