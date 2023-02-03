#include <stdio.h>

int main(){

    int numero;

    printf("Introduza um numero: ");
    scanf("%d", &numero);

    for ( ;numero <= 100; ){

        printf("Menor ou igual a 100\n");

        system("PAUSE");
    }

    printf("Maior que 100");


    return 0;
}
