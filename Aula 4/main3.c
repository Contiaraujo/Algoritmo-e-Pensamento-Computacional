#include <stdio.h>

int main(){

float pri_valor;
float seg_valor;
float ter_valor;
float qua_valor;
float media;

printf("Digite o primeiro valor: ");
scanf("%lf", &pri_valor);
printf("Digite o segundo valor: ");
scanf("%lf", &seg_valor);
printf("Digite o terceiro valor: ");
scanf("%lf", &ter_valor);
printf("Digite o quarto valor: ");
scanf("%lf", &qua_valor);

media = (pri_valor + seg_valor + ter_valor + qua_valor) / 4;

printf("A média aritimetica é: %.2f\n", media);

return 0;

}