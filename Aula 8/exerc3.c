#include <stdio.h>

int main(){

    float salario [6] = {1800.0, 2500.0, 2200.0, 3100.0, 1500.0, 2700.0};
    float media;
    int qtdacima = 0;

    media = 0;

    for (int i = 0; i < 6; i++){
        printf("Digite o salario do %d funcionario: ", i + 1);
        scanf("%f", &salario[i]);
    }

    printf("  \n");
    for (int i = 0; i < 6; i++){
        media += salario[i];
    }
    media = media / 6;
    printf("A media dos salarios e: %.2f \n", media);
    for (int i = 0; i < 6 ; i++){
        if (salario[i] < media){ qtdacima += 1;}
    }
    printf("A quantidade de salarios abaixo da media e: %d \n", qtdacima);
    return 0;
}