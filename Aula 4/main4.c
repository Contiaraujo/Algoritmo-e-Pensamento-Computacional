#include <stdio.h>

int main(){

float nota1;
float nota2;
float nota3;
float media;


printf("Digite a primeira nota: ");
scanf("%f", &nota1);
printf("Digite a segunda nota: ");
scanf("%f", &nota2); 
printf("Digite a terceira nota: ");
scanf("%f", &nota3);

nota1 = nota1 * 1;
nota2 = nota2 * 2;
nota3 = nota3 * 4;

media = (nota1 + nota2 + nota3) / 7;

printf("A média ponderada é: %.2f\n", media);

return 0;

}