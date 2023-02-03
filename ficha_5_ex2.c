#include <stdio.h>

int main(){

    int count;
    int soma = 0;

    for (count = 0; count <= 20; count++){

        printf("%d\n", count);

        soma = soma + count;

        
    }

    printf("A soma dos numeros e: %d", soma);

    return 0;
}