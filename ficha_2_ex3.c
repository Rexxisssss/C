#include <stdio.h>

int main(){

    char vendedor[999];
    float salario_fixo;
    int vendas;
    float salario_final;

    printf("Indique o nome do vendedor: ");
    scanf("%s", &vendedor);

    printf("\nIndique o valor do salario fixo: ");
    scanf("%f", &salario_fixo);

    printf("\nIndique o numero de vendas efetuadas: ");
    scanf("%d", &vendas);

    salario_final = salario_fixo + (vendas * 0.15);

    printf("\nO vendedor %s tem um salario fixo de %.2f e um salario final de %.2f euros", vendedor, salario_fixo, salario_final);

    return 0;

}