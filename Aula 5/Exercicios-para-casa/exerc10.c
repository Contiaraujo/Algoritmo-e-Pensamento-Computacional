#include <stdio.h>
int main(){

    int a,b,c;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    if (a < b && a < c) {
        printf("%d", a);
    } 
    else if (b < a && b < c) {
        printf("%d", b);
    }
    else if (c < a && c < b) {
        printf("%d", c);
    }

return 0;
}