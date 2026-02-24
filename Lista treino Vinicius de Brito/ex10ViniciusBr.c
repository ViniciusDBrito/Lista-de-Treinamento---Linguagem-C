#include <stdio.h>

float conclusaoIdade(int idade);

int main()
{
    int idade;

    printf("\nInforme sua idade atual:\n");
    scanf("%d", &idade);

    float concIdade;
    concIdade = conclusaoIdade(idade);

    return 0;
}

float conclusaoIdade(int idade)
{
    if (idade <= 12){
        printf("\nPortanto, conclui-se que esta classificado como criança.\n");
    }
    else if ((idade >= 13) && (idade <= 17)){
        printf("\nPortanto, conclui-se que esta classificado como adolescente.\n");
    }
    else if ((idade >= 18) && (idade <= 64)){
        printf("\nPortanto, conclui-se que esta classificado como adulto.\n");
    }
    else if (idade >= 65){
        printf("\nPortanto, conclui-se que esta classificado como idoso.\n");
    }
    else{
        printf("\nError! Algo de errado nas informações.\n");
    }

    return 0;
}