#include <stdio.h>
int main(void){

int a, b, c;
printf("Digite o primeiro numero: ");  
scanf("%d", &a);
printf("Digite o segundo numero: ");
scanf("%d", &b);

if (a == b){
    printf("numeros iguais e a soma deles e: %d", a + b);
}
else if (a < b){
    printf("A Multiplicacao desses numeros e: %d", a * b);
}
else {

}

return 0;
}