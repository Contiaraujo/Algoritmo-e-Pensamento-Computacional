#include <stdio.h>

int main(){

float comprimento;
float largura;
float perimetro;
float jarim_area;

printf("Digite o comprimento do jardim: ");
scanf("%f", &comprimento);
printf("Digite a largura do jardim: ");
scanf("%f", &largura);

perimetro = 2 * (comprimento + largura);
jarim_area = comprimento * largura;


printf("\n--- Resultado do cálculo do jardim  ---\n");
printf("O perímetro do jardim é: %f\n", perimetro);
printf("A área do jardim é: %f\n", jarim_area);

return 0;
}