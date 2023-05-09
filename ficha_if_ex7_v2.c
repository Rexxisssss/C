int main(){

    int idade;
    char reforma;

    system("cls");

    printf("Insira a idade do cliente: ");
    scanf("%d", &idade);

    if(idade <= 12){

        printf("O cliente paga 1 euro\n\n");

        system("pause");

    }

    if(idade >= 60){

        printf("Esta reformado? (s/n): ");
        scanf("%s", &reforma);

        if(reforma == 's'){    
            
            printf("O cliente paga 50 centimos\n\n");

            system("pause");
        
        }

        if(reforma == 'n'){

            printf("O cliente paga 1 euro\n\n");

            system("pause");

        }
    }

    else{

        printf("O cliente paga 2 euros\n\n");

    }

    return 0;
}