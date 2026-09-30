#include <stdio.h>

int main(void){
    
    int codigo;
    int quantidade;
    float preco;

    printf("---Tabela de produto---\n");
    printf("Cod   Produto  -- Preco unitario\n");
    printf("123   Verniz maritimo  -- 15,80\n");
    printf("456   Seladora  -- 10,52\n");
    printf("789   Verniz comum  -- 12,78\n");
    printf("Outros   Nao classificados  -- Fornecer valor para efetuar o calculo");

    printf("Coloque o codigo do item aqui: ");
    scanf("%d", &codigo);

    printf("Coloque a quantidade desejada: ");
    scanf("%d", &quantidade);

    if(codigo == 123){
    preco = 15.80 * quantidade;
    printf("%.2f", preco);
    }
    else if(codigo == 456) {
        preco = 10.52 * quantidade;
        printf("%.2f", preco);
    }
    else if(codigo == 789) {
        preco = 12.78 * quantidade;
        printf("%.2f", preco);
    }
    else{
        printf("Outros -- Nao classificados");
    }
    return 0; 
}