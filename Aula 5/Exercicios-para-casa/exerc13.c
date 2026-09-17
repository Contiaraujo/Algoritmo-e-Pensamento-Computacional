#include <stdio.h>

int main(void){

    float litrcomb;
    char tipcomb;
    printf("Informe o combustivel - (A - Alcool, D - Diesel, G - Gasolina): ");
    scanf("%c", &tipcomb);
    if (tipcomb != 'a' && tipcomb != 'A' && tipcomb != 'd' && tipcomb != 'D' && tipcomb != 'g' && tipcomb != 'G'){
        printf("Combustivel invalido\n");
    } else{
            printf("Informe a quantidade de litros: ");
        scanf("%f", &litrcomb);
        if (tipcomb == 'a' || tipcomb == 'A'){
            printf("O valor a ser pago é: %.2f\n", litrcomb * 1.7997f);
        }
        else if (tipcomb == 'd' || tipcomb == 'D'){
            printf("O valor a ser pago é: %.2f\n", litrcomb * 0.9798f);
        }
        else if (tipcomb == 'g' || tipcomb == 'G'){
            printf("O valor a ser pago é: %.2f\n", litrcomb * 2.1009f);
        }
    }
        return 0;
    }
