#include <stdio.h>

int main() {

    float peso;
    float altura;
    float imc;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("Seu IMC é: %.2f\n", imc);

    return 0;
    
}