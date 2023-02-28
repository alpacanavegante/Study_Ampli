#include <stdio.h>
int main(){
    float orcamento;
    printf("\n Digite o valor do orcamento para viagem \n");
    scanf("%f", &orcamento);
    if (orcamento >= 10000){
        printf("\n João e Mariapossuem orçamento para uma viagem internacional");
    } else {
        printf("\n João e Maria irão optar por uma viagem nacional");
    }
    return 0;
    }