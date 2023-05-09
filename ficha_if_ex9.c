#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario;

    system("cls");

    printf("Insira o seu salario: ");
    scanf("%f", &salario);

    system("cls");

    if(salario < 500){

        salario = salario + 5;
        printf("O salario e %.2f", salario);

    }

    else{

        printf("O salario e %.2f", salario);

    }
}