#include <stdio.h>
int main(void) {
    char genero;
    float altura;

    printf("Digite seu gênero (M para Masculino, F para Feminino): ");
    scanf("%c", &genero);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    switch (genero)
    {
case 'M': 
case 'm': 
    printf("Seu peso ideal para um homem é: %.2f", (72.7 * altura) - 58); break;
case 'F': 
case 'f': 
    printf("Seu peso ideal para uma mulher é: %.2f", (62.1 * altura) - 44.7); break;
default: printf("Expressao inexistente"); break;
}

return 0;
}