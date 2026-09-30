#include <stdio.h>
int main (){

    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor % 2 == 0 ||valor % 3 == 0){
        printf("Valor divisivel por 2 ou 3");
    }
    else{
        printf("Valor nao e divisivel por 2 ou 3");
    }

    return 0;
}