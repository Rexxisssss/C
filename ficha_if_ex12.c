#include <stdio.h>
#include <stdlib.h>

int main(){

    int mes;
    int ano;

    system("cls");

    printf("Indique o numero do mes: ");
    scanf("%d", &mes);

    printf("Indique o ano: ");
    scanf("%d", &ano);

    system("cls");

    if(mes == 2){

        if(ano % 4 == 0 && ano % 100 != 0){

            printf("O ano %d e bissexto\n", ano);
            printf("O mes %d tem 29 dias\n\n", mes);

        }

        else{

            printf("O ano %d nao e bissexto\n", ano);
            printf("O mes %d tem 28 dias\n\n", mes);

        }
    }

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 9 || mes == 11){

        if(ano % 4 == 0 && ano % 100 != 0){

            printf("O ano %d e bissexto\n", ano);
            printf("O mes %d tem 31 dias\n\n", mes);

        }

        else{

            printf("O ano %d nao e bissexto\n", ano);
            printf("O mes %d tem 31 dias\n\n", mes);

        }

    }

    if(mes == 4 || mes == 6 || mes == 8 || mes == 10 || mes == 12){

        if(ano % 4 == 0 && ano % 100 != 0){

            printf("O ano %d e bissexto\n", ano);
            printf("O mes %d tem 30 dias\n\n", mes);

        }

        else{

            printf("O ano %d nao e bissexto\n", ano);
            printf("O mes %d tem 30 dias\n\n", mes);

        }

    }

}
   