#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    int soma = 0;

        while(numero <= 20){

            printf("%d\n", numero);
            soma = soma + numero;
            numero++;

        }

        printf("A soma dos numeros e igual a: %d ", soma);

    return 0;
}