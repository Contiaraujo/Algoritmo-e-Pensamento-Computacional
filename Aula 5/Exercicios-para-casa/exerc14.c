#include <stdio.h>

int main(void){

int idade;
printf("Informe a idade: ");
scanf("%d", &idade);

if (idade >= 5 && idade <= 7){
    printf("Pré-Mirim\n");}
    else if(idade >= 8 && idade <= 10){
        printf("Mirim\n");
    }
    else if(idade >= 11 && idade <= 13){
        printf("Infantil\n");
    }
    else if(idade >= 14 && idade <= 17){
        printf("Infanto-Juvenil\n");
    }
    else if(idade >= 18 && idade <=20){
        printf("Juvenil\n");
    }
    else if(idade >= 21){
        printf("Adulto\n");
    }
    else{
        printf("Idade invalida\n");
    }
    return 0;
}
    
