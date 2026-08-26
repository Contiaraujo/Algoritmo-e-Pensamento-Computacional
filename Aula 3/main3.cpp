#include <stdio.h>

int main() {

    int hora;
    int minuto;
    int dia;

    printf("Digite a hora (0-23): ");
    scanf("%d", &hora);

    printf("Digite os minutos (0-59): "); 
    scanf("%d", &minuto);

dia = (hora * 60) + minuto;

    printf("Já se passatam %d minutos desde o inicio do dia.\n", dia);

    return 0;
    
}