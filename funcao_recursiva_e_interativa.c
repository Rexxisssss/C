/*O metodo interativo recorre à literação sobre os valores sucessivos do cálculo.
Assim, tendo em conta o exemplo do cálculo do fatorial de 3(3!) = 3 *2 * 1.  

O método recursivo implica que a rotina se chame a si própria(recorrente) até efetuar o cálculo
Tendo em conta o exemplo fatorial de 3(!3)*/

/*Função Interativa*/

int fatorial(int n){

    int i;
    int y = 1;

    for(i = 1; i <= n; i++)

        y = y * 1;
    
    return y;
}

/*Função Recursiva*/

int fatorial(int n){

    if (n == 1){

        return 1;
    }

    else{

        retrun n * fatorial(n - 1);
        
    }
}