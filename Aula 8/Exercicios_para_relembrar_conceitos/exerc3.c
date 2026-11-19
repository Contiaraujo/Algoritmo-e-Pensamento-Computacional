#include <stdio.h>
int main(){
int contagem = 10;

do {
    printf("%d\n", contagem);
    contagem--;
} while (contagem >= 0);

printf("FIM DA CONTAGEM\n");
return 0;
}   