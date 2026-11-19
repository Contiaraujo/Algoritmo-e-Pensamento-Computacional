#include <stdio.h>

int main(){
 int numero, negativo = 0;
    for (int i = 1; i <= 10; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if (numero < 0){
            negativo++;
        }
    }
    printf("A quantidade de numeros negativos digitados foi: %d\n", negativo);
    return 0;
}