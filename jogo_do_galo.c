#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#define DIM 3

int vez;
 
int menu(void);
void limpar_tabuleiro(int tabuleiro[][DIM]);
void mostra_tabuleiro(int tabuleiro[][DIM]);
void jogar(int tabuleiro[][DIM]);
int verif_local(int tabuleiro[][DIM], int linha, int coluna);
int verif_linha(int tabuleiro[][DIM]);
int verif_coluna(int tabuleiro[][DIM]);
int verif_diagonal(int tabuleiro[][DIM]);
int verif_empate(int tabuleiro[][DIM]);
int verif_gameover(int tabuleiro[][DIM], int vez);
void jogada(int tabuleiro[][DIM]);

int menu(void){

    int opcao;

    puts("Jogo da velha: \n");
    puts("1- Jogar\n");
    puts("0- Sair");

    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao){

        case 1:

        case 0:

        break;

        default: 

            sytem("cls");
            printf("Opcao Invalida");
    }

    return opcao;
}

void jogar(int tabuleiro[][DIM]){

    int continua;
    limpar_tabuleiro(tabuleiro);

    do{

        system("cls");
        mostra_tabuleiro(tabuleiro);

        jogada(tabuleiro);
    
    }

    while(verif_gameover(tabuleiro, vez) != 1);

}

void limpar_tabuleiro(int tabuleiro[][DIM]){

    int linha;
    int coluna;

    for(linha = 0; linha < DIM; linha++)
        for(coluna = 0; coluna < DIM; coluna++)
            tabuleiro[linha][coluna] = 0;
}

void mostra_tabuleiro(int tabuleiro[][DIM]){

    int linha;
    int coluna;

    for(linha = 0; linha < DIM; linha++){

        for(coluna = 0; coluna < DIM; coluna++){

            if(tabuleiro[linha][coluna] == 0)
                printf("    ");
            
            else if(tabuleiro[linha][coluna] == 1)
                printf(" X ");

            else
                printf(" O ");
        }
        putchar('\n');
    }
    putchar('\n');
}

int verif_linha(int tabuleiro[][DIM]){

    int linha;
    int coluna;
    int soma;

    for(linha = 0; linha < DIM; linha++){

        soma = 0;

        for(coluna = 0; coluna < DIM; coluna++)
            soma += tabuleiro[linha][coluna];
        
        if(soma == DIM || soma == (-1) * DIM)
            return 1;
    }
    return 0;
}

int verif_coluna(int tabuleiro[][DIM]){

    int linha;
    int coluna;
    int soma;

    for(coluna = 0; coluna < DIM; coluna++){

        soma = 0;

        for(linha = 0; linha < DIM; linha++)
            soma += tabuleiro[linha][coluna];
        
        if(soma == DIM || soma == (-1) * DIM)
            return 1;
    }
    return 0;
}

int verif_diagonal(int tabuleiro[][DIM]){
    
    int linha,
        
        diagonal_principal = 0,
        diagonal_secundaria = 0;
 
    for(linha = 0 ; linha < DIM ; linha++){

        diagonal_principal += tabuleiro[linha][linha];
        diagonal_secundaria += tabuleiro[linha][DIM-linha-1];
    }
 
    if(diagonal_principal == DIM || diagonal_principal == (-1)*DIM ||
       diagonal_secundaria == DIM || diagonal_secundaria == (-1)*DIM)
       return 1;
 
    return 0;
}

int verif_local(int tabuleiro[][DIM], int linha){
    
    if(linha < 0 || linha > (DIM-1) || coluna < 0 || coluna > (DIM-1) || tabuleiro[linha][coluna] != 0)
        return 0;
    else
        return 1;
}

int verif_empate(int tabuleiro[][DIM]){

    int linha, coluna;
 
    for(linha = 0 ; linha < DIM ; linha++)
        for(coluna = 0 ; coluna < DIM ; coluna++)
            if(tabuleiro[linha][coluna] == 0)
                return 0;
 
    return 1;
}


int verif_gameover(int tabuleiro[][DIM]){
    
    if(verif_linha(tabuleiro)){
        
        printf("Jogo encerrado. Jogador %d venceu !\n\n", (vez%2)+1);
        mostra_tabuleiro(tabuleiro);
        return 1;
    }
 
    if(verif_coluna(tabuleiro)){
        
        printf("Jogo encerrado. Jogador %d venceu !\n\n", (vez%2)+1);
        mostra_tabuleiro(tabuleiro);
        return 1;
    }
 
    if(verif_diagonal(tabuleiro)){~

        printf("Jogo encerrado. Jogador %d venceu !\n\n", (vez%2)+1);
        mostra_tabuleiro(tabuleiro);
        return 1;
    }
 
    if(verif_empate(tabuleiro)){

        printf("Jogo encerrado. Ocorreu um empate! !\n\n");
        mostra_tabuleiro(tabuleiro);
        return 1;
    }
 
    return 0;
}
 
void jogada(int tabuleiro[][DIM])
{
    int linha, coluna;
    vez++;
    printf("\n--> Jogador %d \n", (vez % 2) + 1);
 
    do
    {
        printf("Linha: ");
        scanf("%d", &linha);
        linha--;
 
        printf("Coluna: ");
        scanf("%d", &coluna);
        coluna--;
 
        if(checaLocal(tabuleiro, linha, coluna) == 0)
            printf("Posicao ocupada ou inexistente, escolha outra.\n");
 
    } while(checaLocal(tabuleiro, linha, coluna) == 0);
 
    if(vez%2)
        tabuleiro[linha][coluna] = -1;
    else
        tabuleiro[linha][coluna] = 1;

}

int main(){

    int tabuleiro[DIM][DIM];
    int continuar;

    do{

        vez = 1;
        continuar = menu();

        if(continuar == 1){

        }
    }

    while(continuar);
}