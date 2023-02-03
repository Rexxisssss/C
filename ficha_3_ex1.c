#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);

    printf("Insira o segundo numero: ");
    scanf("%d", &num2);

    system("cls");

    if (num1 < num2){

        printf("%d e maior que %d", num2, num1);

    }

    else if(num2 < num1){

        printf("%d e maior do que %d", num1, num2);

    }
    
    else{

        printf("Os valores sao iguais");
    }

    return 0;
}