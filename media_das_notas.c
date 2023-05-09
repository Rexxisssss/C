#include <stdio.h>
#include <ctype.h>

int main(){
    
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
    
    printf("Digite a nota do bimestre 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota do segundo bimestre 2: ");
    getchar();
    scanf("%f", &nota2);
    
    printf("Digite a nota do bimestre 3: ");
    scanf("%f", &nota3);
    
    printf("Digite a nota do bimeste 4: ");
    getchar();
    scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    system("clear");
    printf("A media é %.2f", media);
    
}