#include <stdio.h>
#include <stdlib.h>

int main(){

    int mes;

    system("cls");

    printf("Indique o numero do mes: ");
    scanf("%d", &mes);

    system("cls");

    if(mes == 2){

        printf("O mes %d tem 28 ou 29 dias\n\n", mes);

    }    
    
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 9 || mes == 11){

        printf("O mes %d tem 31 dias\n\n", mes);

    }

    if(mes == 4 || mes == 6 || mes == 8 || mes == 10 || mes == 12){

        printf("O mes %d tem 30 dias\n\n", mes);

    }



    return 0;
}