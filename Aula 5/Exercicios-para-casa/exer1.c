#include <stdio.h>

int main(void){
int cod1, cod2, cod3;

printf("Digite o codigo da alimentacao: ");
scanf("%d", &cod1);

printf("Digite o codigo da bebida: ");
scanf("%d", &cod2);

printf("Digite o codigo da sobremesa: ");
scanf("%d", &cod3);

switch (cod1)
{
case 1:printf("Hamburger | Preco 4,50\n"); break;
case 2:printf("chessburger | Preco 5,50\n"); break;
case 3:printf("cachorro quente| Preco 4,00\n"); break;
case 4:printf("sanduiche | Preco 3,50\n"); break;
default: printf("Codigo nao registrado\n");
}

switch(cod2){
case 5:printf("Refrigerante | Preco 1,00\n"); break;
case 6:printf("suco de laranja | Preco 2,00\n"); break;
default:printf("Codigo nao registrado\n");
}

switch(cod3){
case 7:printf("Hamburger | Preco 4,50\n"); break;
case 8:printf("Hamburger | Preco 4,50\n"); break;
case 9:printf("Hamburger | Preco 4,50\n"); break;
default:printf("Codigo nao registrado\n");
}
    return 0;
}