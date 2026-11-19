#include <stdio.h>

int main(){
    int numero, soma = 0, contador = 1;
    while (contador <= 10){
        printf("Digite o %d numero: ", contador);
        scanf("%d", &numero);
        soma += numero;
        contador++;
    }
    printf("A soma dos 10 numeros eh: %d\n", soma);
    return 0;
}