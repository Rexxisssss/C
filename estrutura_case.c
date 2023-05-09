#include <stdio.h>
#include <stdlib.h>

int main() {

    float a;
    float b;
    float y;
    char op;

    printf("A = ");
    scanf("%f", &a);

    printf("B = ");
    scanf("%f", &b);

    printf("\nOperacao: ");
    scanf("%c", &op);

    switch(op){

        case '+': 
            y = a + b; 
        break;
        
        case '-': 
            y = a - b; 
        break;
        
        case '*': 
            y = a * b;
        break;
        
        case '/': 
            y = a / b; 
        break;
    }

    printf("\n %f %c %f", a, op, b);
    printf(" = %.2f", y);

    return 0;

}