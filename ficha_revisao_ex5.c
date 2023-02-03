#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    int count = 1;

    printf("Insira o numero ate ao qual que ver os numeros impares: ");
    scanf("%d", &numero);

    while(count <= numero){


        if(!(count % 2 == 0 )){

            printf("%d\n", count);

        }

        count++;
    }

    return 0;
}