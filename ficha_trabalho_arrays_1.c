#include <stdio.h>
#include <stdlib.h>
#define valor 5

int main(){

    int i;
    int numeros[valor];

    for(i = 0; i < valor; i++){

        printf("insira o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    puts("Numero na ordem inversa: \n\n");

    for(i = valor - 1; i >= 0; i--){

        printf("%d\n", numeros[i]);
    }

    return 0;
}