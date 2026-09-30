#include <stdio.h>

int main(void){

    char vogal;
    printf("Digite uma Letra: ");
    scanf("%c", &vogal);

    switch (vogal) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("A letra digitada e uma vogal");
            break;
            default:
            printf("A letra digitada nao e uma vogal");
    }
    return 0;
}