#include <stdio.h>

int main(){
float salario [4] = {10.0,20.0,30.0,10.0};

for (int i = 0; i < 4; i++){
    printf("Digite o salario do %d funcionario: ", i + 1);
    scanf("%f", &salario[i]);

}
    printf("  \n");
    for (int i = 0; i < 4; i++){
        printf("O salario do %d funcionario e: %.2f \n", i + 1, salario[i]);
    }
    return 0;
}