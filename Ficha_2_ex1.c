#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1;
    int numero2;
    float soma;

        printf("Insira o valor do primeiro numero: ");
        scanf ("%d", &numero1);

        printf("Insira o valor do segundo numero: ");
        scanf("%d", &numero2);

        soma = numero1 + numero2;

        system("clear");

        printf("O valor do número 1 = %d\n", numero1);
        printf("\n");
        printf("O valor do numero 2 = %d\n", numero2);

        printf("\n");
        printf("A soma de numero 1 + numero 2 = %.2f\n", soma);

    return 0;
}