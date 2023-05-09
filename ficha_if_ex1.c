#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1;
    int numero2;

    printf("Insira o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Insira o segundo numero: ");
    scanf("%d", &numero2);

    if(numero1 > numero2){

        printf("O segundo numero e menor que o primeiro");

    }

    else if(numero2 > numero1){

        printf("O primeiro numero e maior que o segundo");

    }

    else{

        printf("Os numeros sao iguais");

    }

    return 0;
}