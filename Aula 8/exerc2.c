#include <stdio.h>

int main(){

float valor[8] = {0.0};
float media;
int qtdacima = 0;
for (int i = 0; i < 8; i++){
    printf("Digite o %d valor: ", i + 1);
    scanf("%f", &valor[i]);
}
printf("  \n");
for (int i = 0; i < 8; i++){
    media += valor[i];
}
media = media / 8;
printf("A media dos valores e: %.2f \n", media);
for (int i = 0; i < 8; i++){
    if (valor[i] > media){ qtdacima += 1;}
}
printf("A quantidade de valores acima da media e: %d \n", qtdacima);
return 0;
}