#include <stdio.h>

float ConclusaoValor(float valor, float txCambio);

int main()
{
    float valor, txCambio;

    printf("\nInforme o valor desejado para a conversão:\n");
    scanf("%f", &valor);

    printf("\nInforme também qual o valor da taxa de câmbio dessa transformação:\n");
    scanf("%f", &txCambio);

    float concValor;
    concValor = ConclusaoValor(valor, txCambio);

    printf("\nPortanto, diante dessas informações o valor monetário após trannformações para a moeda desejada é %4.2f", concValor);
}

float ConclusaoValor(float valor, float txCambio)
{
    float concVL;

    concVL = (valor * txCambio);

    return (concVL);
}