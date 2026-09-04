#include <stdio.h>
#include <math.h>

int main(){

float cordx1;
float cordy1;
float cordx2;
float cordy2;
float distancia;

printf("Digite a cordenada x do 1 ponto: ");
scanf("%f", &cordx1);
printf("Digite a cordenada y do 1 ponto:");
scanf("%f", &cordy1);
printf("Digite a cordenada x do 2 ponto: ");
scanf("%f", &cordx2);
printf("Digite a cordenada y do 2 ponto:");
scanf("%f", &cordy2);


distancia = sqrt((cordx2 - cordx1) * (cordx2 - cordx1) + (cordy2 - cordy1) * (cordy2 - cordy1));

printf("A distancia entre os pontos e: %.2f\n", distancia);

return 0;
    


}