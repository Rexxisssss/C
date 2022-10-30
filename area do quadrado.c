#include <stdio.h>
int main(){
    int lado;
    int area;
    
    printf ("Atribua um valor ao lado do quadrado: ");
    scanf ("%d", &lado);
    
    area = lado * lado;
    
    printf ("A area do quadrado é %d metros quadrados", area);
    
    
    return 0;
}
