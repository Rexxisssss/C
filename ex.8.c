#include <stdio.h>
int main(){
    
    int opcao;
    
   printf("cadastro de clientes\n");
   printf("0-Fim\n");
   printf("1-Inclui\n");
   printf("2-Altera\n");
   printf("3-Exclui\n");
   printf("4-Consulta\n");
   
   printf("Opção:");
   scanf("%d", &opcao);
   
   system("clear");
   printf("Escolheu a Opção: %d", opcao);
    
    return 0;
}