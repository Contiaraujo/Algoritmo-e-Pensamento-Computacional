#include <stdio.h>
int main(void) {
    float valor_total_de_venda;
    float valor_de_bonus;
    float valor_da_comissao;

    printf("Digite o valor total de venda: ");
    scanf("%f", &valor_total_de_venda);

    if(valor_total_de_venda < 50000.00){
        valor_de_bonus = valor_total_de_venda * 0.015;
        valor_da_comissao = valor_total_de_venda * 0.030;
        printf("Valor de bonus: %.1f\n", valor_de_bonus);
        printf("Valor de comissao: %.1f\n", valor_da_comissao);
    }
    else if(valor_total_de_venda >= 50000.00){
        valor_de_bonus = valor_total_de_venda * 0.025;
        valor_da_comissao = valor_total_de_venda * 0.05;
        printf("Valor de bonus: %.1f\n", valor_de_bonus);
        printf("Valor de comissao: %.1f\n", valor_da_comissao);
    }
    return 0;
}