#include <stdio.h>

int main(void){

    float valor_diaria;
    float diaria_promo = valor_diaria * 0.75f;
    float total_promo = (75 * 0.80) * diaria_promo;
    float total_normal = (75 * 0.50) * valor_diaria;
    float diferenca = total_normal - total_promo;

    printf("Informe o valor da diaria: ");
    scanf("%f", &valor_diaria);

    printf("Diarias promocionais: %.2f\n", total_promo);
    printf("Total com 80%% de desconto: %.2f\n", total_normal);
    printf("Total com 50%% de desconto: %.2f\n", total_normal);
    printf("Diferenca entre os dois valores: %.2f\n", diferenca);

    return 0;
}