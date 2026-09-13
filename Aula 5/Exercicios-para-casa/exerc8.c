#include <stdio.h>

int main (void){

    int a, b, c;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);


    if (a < b && a < c){
        if (b < c) {
            printf("Ordem crescente: %d, %d, %d\n", a, b, c);
        } else {
            printf("Ordem crescente: %d, %d, %d\n", a, c, b);
        }
    }
  
    else if (b < a && b < c){
        if (a < c) {
            printf("Ordem crescente: %d, %d, %d\n", b, a, c);
        } else {
            printf("Ordem crescente: %d, %d, %d\n", b, c, a);
        }
    }

    else { 
        if (a < b) {
            printf("Ordem crescente: %d, %d, %d\n", c, a, b);
        } else {
            printf("Ordem crescente: %d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}
