#include <stdio.h>

int main(){

    int potencia;
    int horas_dia;
    float consumo_mensal;

    printf("Qual é a potencia do equipamento em W?: ");
    scanf("%d", &potencia);

    printf("Horas de uso por dia?: ");
    scanf("%d", &horas_dia);

    consumo_mensal = (potencia*horas_dia*30)/1000;
    printf("O consumo mensal do equipamento é: %.2f kWh\n", (float)consumo_mensal);

    return 0;


}