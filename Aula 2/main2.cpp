#include <stdio.h>

int main(){

float comprimento;
float largura;
float perimetro;
float jardim_area;

printf("Digite o comprimento do jardim: ");
scanf("%f", &comprimento);
printf("Digite a largura do jardim: ");
scanf("%f", &largura);

perimetro = 2 * (comprimento + largura);
jardim_area = comprimento * largura;


printf("\n--- Resultado do cálculo do jardim  ---\n");
printf("O perímetro do jardim é: %f\n", perimetro);
printf("A área do jardim é: %f\n", jardim_area);

return 0;
}
