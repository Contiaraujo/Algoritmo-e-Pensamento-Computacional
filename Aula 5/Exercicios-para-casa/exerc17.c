#include <stdio.h>

int main(){

    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    if (num1 > 0 && num2 > 0) {
        printf("M");
    }
    else if(num1 < 0 && num2 > 0 || num2 < 0 && num1 > 0)
    {
    printf("O");
    }
    else if(num1 == 0 || num2 == 0){
        printf("Z");
    }
    return 0;
}