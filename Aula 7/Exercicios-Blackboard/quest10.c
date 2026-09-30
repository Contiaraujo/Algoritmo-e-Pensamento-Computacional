#include <stdio.h>
int main(void) {


    int n, numero;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Os %d primeiros numeros impares são: \n", n);
    numero = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", numero);
        numero += 2;
    }
    return 0;
}