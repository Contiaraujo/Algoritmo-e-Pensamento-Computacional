#include <stdio.h>

int main() {

double largura;
double comprimento;
float valor;
double area_total;
int quantidade;
float valor_total;

printf("Digite a largura do terreno (em metros): ");
scanf("%lf", &largura);
printf("Digite o comprimento do terreno (em metros): ");
scanf("%lf", &comprimento);

printf("Qual é o valor de cada caixa?: ");
scanf("%lf", &valor);

area_total = largura * comprimento;
quantidade = area_total / 2.5;
valor_total = quantidade * valor;


printf("Area total do terreno é %.2f metros quadrados\n", area_total);
printf("Quantidade de caixas necessárias: %d\n", quantidade);
printf("Valor total da compra: %.2f\n ");

return 0;
}