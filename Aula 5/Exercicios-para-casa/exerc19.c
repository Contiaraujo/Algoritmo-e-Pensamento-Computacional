#include <stdio.h>

int main(void){
    float salario, reajuste;

    printf("Informe o valor do salario: ");
    scanf("%f", &salario);

    if (salario <= 2000.00){
        reajuste = salario * 0.10;
    }
    else if (salario > 2001.00 && salario <= 5000.00){
        reajuste = salario * 0.07;
    }
    else{
        reajuste = salario * 0.03;
    }

    printf("O valor do reajuste e: %.2f", reajuste);
    return 0;
}   