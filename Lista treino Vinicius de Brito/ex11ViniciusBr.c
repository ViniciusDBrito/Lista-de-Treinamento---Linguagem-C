#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int aleatorio, intervalo1, intervalo2;

    printf("\nInforme 2 números inteiros seguidos para designar um intervalo para geração de um número aleatório (um  por vez):\n");
    scanf("%d%d", &intervalo1, &intervalo2);

    srand((unsigned) time(NULL));
    aleatorio = intervalo1 + (rand() % intervalo2);

    printf("\nPortanto, um número aleatório nesse intervalo é: %d", aleatorio);
}