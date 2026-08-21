#include <stdio.h>

main(){

int idade_cao;
int idade_humana;

printf("\n--- Neste programa você podera consultar a idade do seu cão em idade humana! ---\n");

printf("Digite a idade do seu cão: ");
scanf("%d", &idade_cao);

idade_humana = idade_cao * 7;

printf("\n--- Resultado ---\n");

printf("A idade humana do seu cachorro é:");
printf("%d\n", idade_humana);

return 0;
}