/*Este programa que permite ao utilizador inserir notas para um grupo de alunos, armazená-las numa matriz bidimensional e, em seguida, exibi-las. Tambem permite que o utilizador modifique uma das notas e exiba a matriz atualizada*/

/*O programa define duas constantes usando a diretriz #define: "alunos" e "notas", representando o numero de notas por aluno, respetivamente*/

/*Em seguida, na função principal, dois loops aninhados são usados para solicitar que o utilizador insira as notas de cada aluno. As notas são armazenadas na matriz bidimensional "nota", com cada linha representando uma nota e cada coluna representando um aluno*/

/*depois de todas as notas serem inseridas e armazenadas na matriz, o programa exibe-as usando outro loop aninhado. cada nota é exibida com o seu aluno correspondente e numero de nota.*/

/*Em seguida, o programa solicicita que o utilizador insira um novo valor para a segunda serie do segundo aluno. em seguida, o programa modifica esse valor na matriz*/

/*Finalmente, o programa exibe a matriz atualizada usando outro loop aninhado e termina com uma instrução system("pause"), que é um comando especifico do windows para pausar o programa e esperar que o utilizador pressione uma tecla antes de sair.*/

#include <stdio.h>
#include <stdlib.h>
#define alunos 3
#define notas 2

int main(){

    int i;
    int j;
    float nota[notas][alunos];

    for(i = 0; i < alunos; i++){

        for(j = 0; j < notas; j++){

            printf("Insira a %d nota do %d aluno = ", j + 1, i + 1);
            scanf("%f", &nota[j][i]);
        }
    }

    for(i = 0; i < alunos; i++){

        for(j = 0; j < notas; j++){

            printf("T[%d, %d] = %.2f\n", j + 1, i + 1, nota[j][i]);
        }
    }

    printf("Insira novamente a segunda nota do segundo aluno = ");
    scanf("%f", &nota[1][1]);

    for(i = 0; j < alunos; j++){

        for(j = 0; j < notas; j++){

            printf("T[%d, %d] = %.2f", j + 1, i + 1, nota[j][i]);
        }
    }

    system("pause");

}