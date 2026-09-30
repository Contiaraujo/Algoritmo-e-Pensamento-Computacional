#include <stdio.h>
int main() {
    float valor1, valor2, valor3, valor4;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    printf("Digite o quarto valor: ");
    scanf("%f", &valor4);
    
    if (valor1 < valor2 && valor1 < valor3 && valor1 < valor4) {
        printf("O menor valor e: %.2f", valor1);
    } else if (valor2 < valor1 && valor2 < valor3 && valor2 < valor4) {
        printf("O menor valor e: %.2f", valor2);
    } else if (valor3 < valor1 && valor3 < valor2 && valor3 < valor4) {
        printf("O menor valor e: %.2f", valor3);
    } else {
        printf("O menor valor e: %.2f", valor4);
    }
return 0;
}