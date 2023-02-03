#include <stdio.h>

int main(){

    int numero;
    int count;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    for (count =1; count <= numero; count++){

        printf("%d\n", count);
    }

    return 0;
}