#include <stdio.h>
int main(void) {
    int contador = 10;

    do {
        printf("%d\n", contador);
        contador--;
    } while (contador >= 0);
    
    printf("Fim da contagem!\n");
    
    return 0;
}