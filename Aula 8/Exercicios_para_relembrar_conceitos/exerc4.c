#include <stdio.h>

int main(){
    int entrada_numero;
    printf("Digite um numero para tabuada: ");
    scanf("%d", &entrada_numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", entrada_numero, i, entrada_numero * i);
    }
    return 0;
}