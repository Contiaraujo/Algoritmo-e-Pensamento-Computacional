#include <stdio.h>

int main(){

    float primNum, segNum, tercNum;
    float resultado;

    printf("Selecione o primeiro numero:\n");
    scanf("%f", &primNum);
    printf("Selecione o segundo numero:");
    scanf("%f", &segNum);
    printf("Selecione o terceiro numero:");
    scanf("%f", &tercNum);

    if (primNum > segNum && primNum > tercNum){
        resultado = primNum + segNum + tercNum;
        printf("A Soma dos numeros e: %.2f", resultado);
    }
    else if (segNum > primNum && segNum < tercNum){
        resultado = tercNum;
        printf("O resultado é: %.2f", resultado);
    }
     else{
    resultado = (primNum + tercNum) * 2;
    printf("A Soma do primeiro com terceiro multiplicado pelo 2 e: %.2f", resultado);
}

return 0;
}   