#include <stdio.h>

int main(void){

int cod, moeda;
printf("Codigo da moeda: \n 1 - Libra Esterlina\n 2 - Franco Suico\n 3 - Dolar americano\n 4 - Marco alemao\n 5 - Real\n");

printf("Digite o codigo da moeda: ");
scanf("%d", &cod);

switch (cod)
{
case 1: printf("Libra Esterlina | Preco: R$ 6,93\n"); break;
case 2: printf("Franco Suico | Preco: R$ 6,28\n"); break;
case 3: printf("Dolar americano | Preco: R$ 5,12\n"); break;
case 4: printf("Marco alemao | Preco: R$ 3,04\n"); break;
case 5: printf("Real | Preco: R$ 1,00\n"); break;
default: printf("Codoigo nao registrado\n");
}

return 0;
}