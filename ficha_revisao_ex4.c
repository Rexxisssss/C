#include <stdio.h>
#include <stdlib.h>


int main(){

    int count;
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    while(count <= numero){

        printf("%d\n", count);
        count++;

    }
    return 0;
}
