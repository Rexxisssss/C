#include <stdio.h>
#include <stdlib.h>

int main(){

    int mes;

    do{
        printf("Introduza o numero de um mes: ");
        scanf("%d", &mes);

    } 

    while((mes < 1) || (mes >= 12));

        printf("O mes que inseriu foi %d", mes);
    
    return 0;
}