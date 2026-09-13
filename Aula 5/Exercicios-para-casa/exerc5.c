#include <stdio.h>

int main(void) {

    float a, b, c;
    
    printf("Digite valor de a: ");
    scanf("%f", &a);

    printf("Digite valor de b: ");
    scanf("%f", &b);

    printf("Digite valor de c: ");
    scanf("%f", &c);

    if (a + b < c) {
    printf("A soma de a e b e menor que c\n");
    }
    else if (a + b == c) {
    printf("A soma de a e b e igual que c\n");
}
    else if (a + b > c) {
    printf("A soma de a e b e maior que c\n");
    }

    else {
        printf("Valores invalidos\n");
    }
    return 0;
}


