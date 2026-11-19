#include <stdio.h>

int main(){
    int n, impar = 1;

    printf("Digite um numeros impares: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("%d\n", impar);
        impar += 2;
    }
    return 0;  
}