#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char nome[999];
    char endereco[999];
    int cc;
    int telefone;
    
    printf ("Introduz o teu nome: ");
    scanf ("%s", &nome);
    
    printf ("\nIntroduz o teu endereço: ");
    scanf ("%s", &endereco);
    
    printf ("\nIntroduz o teu número de Cartão de Cidadão: ");
    scanf ("%d", &cc);
    
    printf ("\nIntroduz o teu número de telefone: ");
    scanf ("%d", &telefone);
    
    system("cls");
    
    printf ("\nFicha Criada! ");
    printf ("\nO teu nome é %s ", nome);
    printf ("\nO teu endereço é %s ", endereco);
    printf ("\nO número do teu Cartão de Cidadão é %d ", cc);
    printf ("\nO seu número de Telefone é %d ", telefone);
    
    return 0;
}