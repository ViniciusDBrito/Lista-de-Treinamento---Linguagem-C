#include <stdio.h>

float verificaAnoBissexto(int ano, int final);

int main()
{
    int ano, final;

    printf("\nQual é o ano? (permitido apenas com 4 dígitos)\n");
    scanf("%d", &ano);

    final = (ano % 100);

    float vrAnoBissexto;
    vrAnoBissexto = verificaAnoBissexto(ano, final);

    return 0;
}   

float verificaAnoBissexto(int ano, int final)
{
    float resto1, resto2;
    resto1 = (ano % 4);
    resto2 = (ano % 400);

    if ((final == 0) && (resto2 == 0)){
        printf("\nPortanto Verdadeiro! O ano informado (%d) é bissexto.\n", ano);
    }
    else if ((final != 0) && (resto1 == 0)){
        printf("\nPortanto Verdadeiro! O ano informado (%d) é bissexto.\n", ano);  
    }
    else{
        printf("\nPortanto Falso! O ano informado (%d) não é bissexto.\n", ano);  
    }

    return  0;
}