#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void asteriscos(){

    int i;

    for(i = 1; i <= 64; i++)

        putchar('*');
        putchar('\n');
}

void numero_ascii(int num){

    printf("Insira um numero inteiro entre 0 e 255: ");
    scanf("%d", &num);

    printf("o carater inserido foi %d e o seu correspondente na tabela ascii e %c", num, num);

}

void carater_e_seguinte(int num){

    printf("Insira um numero inteiro entre 0 e 255: ");
    scanf("%d", &num);

    printf("O numero introduzido foi %d, e o carater correspondente e %c\n", num, num);
    printf("O numero inteiro seguinte inserido foi %d, e o seu codigo e %c\n", num + 1, num + 1);

}

void tabela_ascii(){

    int i;

    printf("Tabela ASCII: \n");
    
    for(i = 0; i <= 255; i++)

        printf("%d - %c\n", i, i);
}

void seguidos(int car1, int car2){

    int i;

    printf("Insira um numero inteiro entre 0 e 255: ");
    scanf("%d", &car1);

    printf("Insira um numero inteiro entre 0 e 255: ");
    scanf("%d", &car2);

    for(i = car1; i <= car2; i++)
        
        printf("%d - %c\n", i, i);
}

int main(){

    system("cls");

    int escolha;
    int num;
    int car1;
    int car2;


    printf("*************************Carater ASCII:*************************\n");
    asteriscos();
    printf("*          1 - CARATER CORRESPONDENTE AO NUMERO INSERIDO       *\n");
    printf("*          2 - CARATER E CARATER SEGUINTE AO NUMERO INSERIDO   *\n");
    printf("*          3 - TABELA ASCII                                    *\n");
    printf("*          4 - CARATERES ENTRE OS NUMEROS ESCOLHIDOS           *\n");
    printf("*          5 - LIMPAR O ECRA                                   *\n");
    printf("*          6 - SAIR                                            *\n");
    asteriscos();

    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);

    switch(escolha){

        case 1:
            numero_ascii(num);
        break;

        case 2:
            carater_e_seguinte(num);
        break;

        case 3:
            tabela_ascii();
        break;

        case 4:
            seguidos(car1, car2);
        break;
        
        case 5:
            system("cls");
        break;

        case 6:
            system("cls");
            puts("a desligar...");
        break;

        default:
            puts("opcao invalida...");
        break;
    }

    return 0;
}
