#include <stdio.h>
#include <ctype.h>

int main(){
    
    float raio;
    float area;
    
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);
    
    area = 3.1416 *  (raio * raio);
    
    system("clear");
    
    printf("A area do circulo é %f", area);
}
