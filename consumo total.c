#include <stdio.h>
int main(){
    float kilometros;
    float litros;
    float consumo;
        
    printf ("Atribua um valor aos kilometros: ");
    scanf ("%f", &kilometros);
        
    printf ("Atribua um valor à quantidade de litros: ");
    scanf ("%f", &litros);
        
    consumo = (kilometros + litros) / 2;
        
    system("clear");
    printf("O consumo total foi de %f litros", consumo);
    
    
    return 0;
    }
   