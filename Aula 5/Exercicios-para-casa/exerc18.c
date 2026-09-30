#include <stdio.h>

int main(void){
    int num1, num2;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num1 % 2 == 0 && num2 % 2 == 0) {
        printf("Os dois numeros sao pares");
    } else if (num1 % 2 != 0 && num2 % 2 != 0) {
        printf("Os dois numeros sao impares");
    } else {
        printf("Um numero e par e o outro e impar");
    }
}


