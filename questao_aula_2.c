#include <stdio.h>
#include <stdlib.h>

int main(){

    int mes;

    printf("Introduza o mes para saber o signo: "); // input do utilizador
    scanf("%d", &mes);

    system("cls");

    switch(mes){

        case 1:
            printf("21/1 a 19/2, Aquario"); // caso 1, aquario
        break;

        case 2:
            printf("20/2 a 20/3 Peixes"); // caso 2, peixes
        break;

        case 3:
            printf("21/3 a 20/4, Aries"); // caso 3, aries
        break;

        case 4:
            printf("21/4 a 20/5, Touro"); // caso 4, touro
        break;

        case 5:
            printf("21/5 a 20/6, Gemeos"); // caso 5, gemeos
        break;

        case 6:
            printf("21/6 a 21/7, Cancer"); // caso 6, cancer
        break;

        case 7:
            printf("22/7 a 22/8, Leao"); // caso 7, leao
        break;

        case 8:
            printf("23/8 a 22/9, Virgem"); // caso 8, virgem
        break;

        case 9:
            printf("23/9 a 22/10, Libra"); // caso 9, libra
        break;

        case 10:
            printf("23/10 a 21/11, Escorpiao"); // caso 10, escorpiao
        break;

        case 11:
            printf("22/11 a 21/12, Sagitario"); // caso 11, sagitario
        break;

        case 12:
            printf("22/12 a 20/1, Capricornio"); // caso 12, capricornio
        break;

        default:
            printf("Mes invalido :("); // mes invalido
        break;

    }

    return 0;
}