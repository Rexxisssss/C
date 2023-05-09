#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int b;
    int c;
    int soma;

    printf("Insira um numero: ");
    scanf("%d", &a);

    printf("Insira um numero: ");
    scanf("%d", &b);

    printf("Insira um numero: ");
    scanf("%d", &c);

    if(a < b && (b < c || c < b)){

        soma = b + c;
        printf("A soma dos 2 maiores numeros e: %d", soma);

    }

    if(b < a && (a < c || c < a)){

        soma = a + c;
        printf("A soma dos 2 maiores numeros e: %d", soma);
    
    }

    if(c < b && (b < a || a < b)){

        soma = a + b;
        printf("A soma dos 2 maiores numeros e: %d", soma);

    }

    return 0;
}