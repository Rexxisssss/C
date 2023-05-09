#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;

    system("cls");

    printf("Insira a idade do cliente: ");
    scanf("%d", &idade);

    system("cls");

    if(idade <= 12 || idade >= 60){

        printf("O cliente paga 1 euro");

    }

    else{

        printf("o cliente paga 2 euros");

    }

    return 0;
}