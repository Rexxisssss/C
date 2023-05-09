#include <stdio.h>
#include <stdlib.h>
#define alunos 3
#define notas 2

void notas(float nota[notas][alunos]){

    int i;
    int j;

    for(i = 0; i < alunos; i++){
        for(j = 0; j < notas; i++){

            printf("Insira a %d nota do %d aluno = ", j + 1, i + 1);
            scanf("%f", &nota[j][i]);
        }
    }

}

int main(){

    int i;
    int j;
    float nota[notas][alunos];


    for(i = 0; i < alunos; i++){

        for(j = 0; j < notas; j++){

            printf("T[%d, %d] = %.2f\n", j + 1, i + 1, nota[j][i]);
        }
    }

    system("pause");

}