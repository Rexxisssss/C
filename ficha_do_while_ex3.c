#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    int count = 1;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    do{

        printf("%d\n", count);
        count++;

    }

    while(count <= numero);

    return 0;
}