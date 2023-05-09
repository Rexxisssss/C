#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void adicao(float a, float b){

    printf("Adicao (%.2f, %.2f) = %.2f", a , b, a + b);

}

void subtracao(float a, float b){

    printf("Subtracao (%.2f, %.2f) = %.2f", a, b, a - b);

}

void multiplicacao(float a, float b){

    printf("Multiplicacao (%.2f, %.2f) = %.2f", a, b, a * b);

}

void divisao(float a, float b){

    if(b == 0){

        printf("Sintax Error!\n\n");

        system("pause");
    }
    
    printf("Divisao (%.2f, %.2f) = %.2f", a, b, a / b);

    

}

int fatorial(float escolhido){

    float fat = 1;
    int i;

    for(i = 1; i <= escolhido; i++)

        fat = fat * i;

    printf("Fatorial de %.2f = %.2f", escolhido, fat);

}

void potencia(float base, float expoente){

    printf("Potencia (%.2f, %.2f) = %.2f", base, expoente, pow(base, expoente));

}

void asteriscos(){

    int i;

    for(i = 1; i <= 26; i++)
        putchar('*');
        putchar('\n');
}

int main(){

    system("cls");
    system("color 0D");

    int opcao;
    float a;
    float b;
    float base;
    float expoente;
    float escolhido;
    float fat;

    puts("**CALCULADORA CIENTIFICA**");
    asteriscos();
    puts("*     1 - Somar          *");
    puts("*     2 - Subtrair       *");
    puts("*     3 - Multiplicar    *");
    puts("*     4 - Dividir        *");
    puts("*     5 - Factorial      *");
    puts("*     6 - Potencia       *");
    puts("*     7 - Limpar o ecra  *");
    puts("*     8 - Sair           *");
    asteriscos();

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);


    switch(opcao){

        case 1:

            printf("De um valor ao primeiro numero: ");
            scanf("%f", &a);

            printf("De um valor ao segundo numero: ");
            scanf("%f", &b);

            adicao(a, b);
        break;

        case 2:
            
            printf("De um valor ao primeiro numero: ");
            scanf("%f", &a);

            printf("De um valor ao segundo numero: ");
            scanf("%f", &b);
            
            subtracao(a, b);
        break;

        case 3:

            printf("De um valor ao primeiro numero: ");
            scanf("%f", &a);

            printf("De um valor ao segundo numero: ");
            scanf("%f", &b);

            multiplicacao(a, b);
        break;

        case 4:

            printf("De um valor ao primeiro numero: ");
            scanf("%f", &a);

            printf("De um valor ao segundo numero: ");
            scanf("%f", &b);

            divisao(a, b);
        break;

        case 5:

            printf("De que numero quer o fatorial?: ");
            scanf("%f", &escolhido);

            fatorial(escolhido);
        break;

        case 6:

            printf("De um valor a BASE: ");
            scanf("%f", &base);

            printf("De um valor ao EXPOENTE:");
            scanf("%f", &expoente);

            potencia(base, expoente);
        break;

        case 7:
            system("cls");
        break;

        case 8:
            system("pause");
        break;

    }
    
    return 0;
}