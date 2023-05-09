#include <stdio.h>
#include <string.h>

char letras[52] = {'A','E', 'I','O','U',

                    'a','e', 'i','o','u',
                    'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z',
                    'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'

};

void minusculaMaiuscula(char c) {
    
    if(c >= '0' && c <= '9'){
         
        printf("O caractere '%c' é um dígito.\n", c);
        
    }

    else if(c >= 'a' && c <= 'z'){
        
        printf("O caractere '%c' é uma letra minúscula.\n", c);

    }

    else if(c >= 'A' && c <= 'Z'){

        printf("O caractere '%c' é uma letra maiúscula.\n", c);

    }

    else{

        printf("O caractere '%c' não é um dígito, letra minúscula ou letra maiúscula. Seu código ASCII é %d.\n", c, c);

    }

}

int main()

{

    char c;

    do{
        
        printf("Digite um caractere: ");
        scanf(" %c", &c);
        
        if(c != '.'){

            minusculaMaiuscula(c);

        }
    }

    while(c != '.');

    return 0;

}


