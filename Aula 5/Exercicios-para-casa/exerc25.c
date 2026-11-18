#include <stdio.h>

int main() {
    int total_dias, anos, meses, dias, resto;

    printf("Digite a idade em dias: ");
    scanf("%d", &total_dias);

    anos = total_dias / 365;
    resto = total_dias % 365;

    meses = resto / 30;
    dias = resto % 30;

    printf("%d ano(s), %d mes(es) e %d dia(s)\n", anos, meses, dias);

    return 0;
}
