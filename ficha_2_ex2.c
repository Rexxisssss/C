#include <stdio.h>

int main(){

    int numero1;
    int numero2;
    float soma;
    float sub;
    float mult;
    float div;

    printf("Insira o valor do primeiro numero: ");
    scanf("%d", &numero1);

    printf("Insira o valor do segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    sub = numero1 - numero2;
    mult = numero1 * numero2;
    div = numero1 / (float)numero2; //typecasting

    system("clear");

    printf("O valor do primeiro numero = %d\n", numero1);
    printf("\n");
    printf("O valor do segundo numero = %d\n", numero2);

    printf("\n");
    printf("numero 1 + numero 2 = %.2f\n", soma);
    
    printf("\n");
    printf("numero1 - numero2 = %.2f\n", sub);

    printf("\n");
    printf("numero1 * numero2 = %.2f\n", mult);

    printf("\n");
    printf("numero1 / numero2 = %.2f\n", div);
    printf("\n");

    return 0;

}