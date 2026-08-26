#include <stdio.h>

int main() {

    int manha; 
    int tarde;
    int total;

    printf("Qual é a quantidade recebida pela manhã?: ");
    scanf("%d", &manha);

    printf("Qual é a quantidade recebida pela tarde?: ");
    scanf("%d", &tarde);

    total = manha + tarde;

    printf("A quantidade total de produtos recebidos é: %d\n", total);

    return 0;
}
