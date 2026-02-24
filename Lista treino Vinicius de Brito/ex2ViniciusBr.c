/*Não sei se poderia, mas única forma que connsegui foi fazendo com uma forma que vi externamente (bool)*/
#include <stdio.h>
#include <stdbool.h> 

bool conclusaoNumeroPrimo(int numero);

int main()
{
    int numero;

    printf("\nInforme um número desejado:\n");
    scanf("%d", &numero);

    if (conclusaoNumeroPrimo(numero)){
        printf("\nPortanto, o número (%d) é primo.\n", numero);
    }
    else{
        printf("\nPortanto, o número (%d) não é primo.\n", numero);
    }

    return 0;
}

bool conclusaoNumeroPrimo(int numero)
{
    float div2, div3, div5, div7;
    div2 = (numero % 2);
    div3 = (numero % 3);
    div5 = (numero % 5);
    div7 = (numero % 7);

    if (numero <= 0){
        return false;
    }

    if (numero <=3){
        return true;
    }

    if ((div2 == 0 ) || (div3 == 0)){
        return false;
    }

    if ((numero == 5) || (numero == 7)){
        return true;
    }

    if ((div5 == 0) || (div7 == 0)){
        return false;
    }

    return true;
}