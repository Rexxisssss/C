#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int b;
    int c;

    printf("Aplique um valor a A: ");
    scanf("%d", &a);

    printf("Aplique um valor a B: ");
    scanf("%d", &b);

    printf("Aplique um valor a C: ");
    scanf("%d", &c);

    if(b < a && a < c){

        printf("%d < %d < %d", b, a, c); // condicao a1

    }

    if(c < a && a < b){

        printf("%d < %d < %d", c, a, b); // condicao a2

    }

    if(a < b && b < c){

        printf("%d < %d < %d", a, b, c); // condicao b1

    }

    if(c < b && b < a){

        printf("%d < %d < %d", c, b, a); // condicao b2

    }

    if(b < c && c < a){

        printf("%d < %d < %d", b, c, a); // condicao c1

    }

    if(a < c && c < b){

        printf("%d < %d < %d", a, c, b); // condicao c2

    }

    if(a == b && b == c){

        printf("%d = %d = %d", a, b, c);

    }

    if(a == b && b < c){

	  	printf("%d = %d < %d", b, a ,c); // condição b = a, menor que c
	  	
	}

	if(a == b && b > c){
	  	printf("%d < %d = %d", c, a, b); // condição b = a, maior que c
	  	
	}

	if(a == c && b < c){ 
	  	printf("%d = %d < %d", a, c, b); // condição a = c, maior que b 
	  	
	}

	if(a == c && b > c){
	  	
        printf("%d < %d = %d", b, c, a); // condição a = c, menor que b
	  	
	}

	if(b == c && b < a){

	  	printf("%d = %d < %d", b, c, a); // condição para se b = c, menor que a
	  	
	}

	if(b == c && b > a){

	  	printf("%d < %d = %d ", a, c, b); // condição para se b = c, maior que a

	}

    return 0;
}