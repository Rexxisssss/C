#include <stdio.h>
#include <stdlib.h>

int main(){

    int count;
    int soma = 0;

    do{

        printf("%d\n", count);
        soma = soma + count;
        count++;

    }

    while(count <= 20);

    printf("A soma dos numeros e: %d", soma);

    return 0;
}