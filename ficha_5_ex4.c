#include <stdio.h>

int main(){

    int numero;
    int count;

    printf("Insira o numero ate ao qual que ver os numeros impares: ");
    scanf("%d", &numero);

    for (count =1; count <= numero; count++){

        if(count % 2 == 0 ){

            continue;
        }

        printf("%d\n", count);
        
    }
    return 0;
}