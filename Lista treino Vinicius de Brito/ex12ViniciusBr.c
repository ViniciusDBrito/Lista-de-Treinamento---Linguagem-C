#include <stdio.h>
#include <math.h>

float ConclusaoMontanteF(float capitalI, float txJuros, float tempo);

int main()
{
    float capitalI, txJuros, tempo;

    printf("\nInforme o valor do capital inicial:\n");
    scanf("%f", &capitalI);

    printf("\nInforme também qual o valor da taxa de juros exercida (em porcento):\n");
    scanf("%f", &txJuros);

    printf("\nAlém disso, informe também qual foi o tempo total durante o investimento (em meses):\n");
    scanf("%f", &tempo);

    float concMontante;
    concMontante = ConclusaoMontanteF(capitalI, txJuros, tempo);

    printf("\nPortanto, neste investimento o montante final será de R$%4.2f", concMontante);
}

float ConclusaoMontanteF(float capitalI, float txJuros, float tempo)
{
    float concMF, parteElevado, juros, nElevado;
    juros = (txJuros / 100);
    nElevado = (juros + 1);
    parteElevado = pow (nElevado, tempo);  

    concMF = (capitalI * parteElevado);

    return (concMF);
}
