#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano;

    system("cls");

    printf("Insira um Ano: ");
    scanf("%d", &ano);

    system("cls");

    if(ano % 4 == 0 && ano % 100 != 0){

        printf("O ano %d e bissexto", ano);

    }

    else{

        printf("O ano %d nao e bissexto", ano);

    }

    return 0;
}