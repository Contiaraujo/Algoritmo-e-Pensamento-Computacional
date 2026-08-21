#include <stdio.h>

main(){
float nota1;
float nota2;
float nota3;
float media;

printf("\n--- Neste programa você irá ver sua média da notas ---\n");

printf("Digite a sua primeira nota: ");
scanf("%f", &nota1);

printf("Digite a sua segunda nota: ");
scanf("%f", &nota2);

printf("Digite a sua terceira nota: ");
scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) / 3;

printf("\n--- Ótimo, aqui você vai conseguir visualizar a média final: ---\n");

printf("%.2f\n", media);

return 0;

}