#include <stdio.h>

int main(void){
    float salario;
    char cargo;
    float salario_ajustado;

    printf("Cargo ---- Percentual\n");
    printf("Gerente ---- 5%\n");
    printf("Tecnicos ---- 7,5%\n");
    printf("Auxiliares ---- 10%\n");
    printf("Outros ---- 4%\n");

    printf("Digite seu cargo: ");
    scanf("%c", &cargo);

    printf("Digite seu salario atual: ");
    scanf("%f", &salario);

    switch (cargo)
    {
    case 'g':
    case 'G':
    {   salario_ajustado = salario * 1.05 ;
        printf("Seu salario ajustado e: %.2f", salario_ajustado);
    }; break;
    case 't':
    case 'T': 
    {       salario_ajustado = salario * 1.075;
            printf("Seu salario ajustado e: %.2f", salario_ajustado);
    }break;
    case 'a':
    case 'A':
        {   salario_ajustado = salario * 1.1;
            printf("Seu salario ajustado e: %.2f", salario_ajustado);
        }break;
    case 'o':
    case 'O':
        {   salario_ajustado = salario * 1.04;
            printf("Seu salario ajustado e: %.2f", salario_ajustado);
        }break;

    default:
            printf("Cargo nao encontrado, tente novamente");
        break;
    };
    return 0;
}

