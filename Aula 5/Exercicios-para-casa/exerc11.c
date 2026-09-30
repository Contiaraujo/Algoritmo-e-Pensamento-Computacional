#include <stdio.h>
#include <math.h>
int main() {

    int a, b, c;
    int delta;
    double raiz1, raiz2;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    delta = pow(b,2) - 4 * a * c;
    
    if (delta < 0) {
        printf("Delta negativo, nao e possivel prosseguir");
    } else {
        raiz1 = (-b + sqrt(delta))/(2 * a);
        raiz2 = (-b - sqrt(delta))/(2 * a);

        printf("O valor da raiz_1 e: %.1f\n", raiz1);
        printf("O valor da raiz_2 e:%.1f\n", raiz2);
    }
return 0;
}