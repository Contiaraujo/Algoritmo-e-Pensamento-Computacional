#include <stdio.h>

int main() {

int n1;
int n2;
int soma;
int subtracao;
int multiplicacao;

printf("digite o primeiro número: ");
scanf("%d", &n1);
printf("digite o segundo número: ");
scanf("%d", &n2);

soma = n1 + n2;
subtracao = n1 - n2;
multiplicacao = n1 * n2;

printf("Soma: %d\n", soma);
printf("subtração: %d\n", subtracao);
printf("multiplicação: %d\n", multiplicacao);

return 0;
}