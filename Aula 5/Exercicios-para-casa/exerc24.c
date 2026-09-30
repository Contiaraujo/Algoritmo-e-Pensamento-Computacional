#include <stdio.h>

int main() {
    float v1, v2, v3, v4, media;
    char opcao;

    printf("Digite os quatro valores separados por espaco: ");
    scanf("%f %f %f %f", &v1, &v2, &v3, &v4);

    printf("\nEscolha o tipo de media desejada:\n");
    printf("a) Aritmetica\n");
    printf("b) Ponderada (pesos 1, 2, 3, 4)\n");
    printf("c) Harmonica\n");
    printf("Opcao: ");
    scanf(" %c", &opcao); 

    switch(opcao) {
        case 'a':
        case 'A':
            media = (v1 + v2 + v3 + v4) / 4.0;
            printf("Media Aritmetica: %.2f\n", media);
            break;

        case 'b':
        case 'B':
            media = (v1 * 1 + v2 * 2 + v3 * 3 + v4 * 4) / 10.0;
            printf("Media Ponderada: %.2f\n", media);
            break;

        case 'c':
        case 'C':
            if (v1 == 0 || v2 == 0 || v3 == 0 || v4 == 0) {
                printf("Erro: Nao eh possivel calcular a media harmonica com valor zero.\n");
            } else {
                media = 4.0 / ((1.0/v1) + (1.0/v2) + (1.0/v3) + (1.0/v4));
                printf("Media Harmonica: %.2f\n", media);
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
