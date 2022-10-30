#include <stdio.h>
int main(){
    float quantidadeMaxima;
    float quantidadeMinima;
    float stockMedio;
    int opcao;
    
do {
    system("clear");
    printf ("Escreva a quantidade Máxima: ");
    scanf ("%f", &quantidadeMaxima);
    
    printf ("Escreva a quantidade Mínima: ");
    scanf ("%f", &quantidadeMinima);
    
        if (quantidadeMaxima == 0 && quantidadeMinima == 0){
            
            opcao = 0;
        
        }
        
        else{
            
            opcao = 1;
        }
        
    
    } while(opcao != 1);   
    
    
    stockMedio = (quantidadeMinima + quantidadeMaxima) / 2;
    
    system("clear");
    printf ("O stock médio é: %f ", stockMedio);
    
    
    return 0;
}
