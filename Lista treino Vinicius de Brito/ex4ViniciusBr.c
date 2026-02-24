#include <stdio.h>

float transformacaoCF(int tipoTranf);
float transformacaoFC(int tipoTranf);

int main()
{
    int tipoTranf;

    printf("\nQual vai ser a transformação desejada?\n1- De Celsius para Fahrenheit\n2- De Fahrenheit para Celsius\n");
    scanf("%d", &tipoTranf);

    float transfCF, transfFC;
    transfCF = transformacaoCF(tipoTranf);
    transfFC = transformacaoFC(tipoTranf);

    return 0;
}

float transformacaoCF(int tipoTranf)
{
    float tempC, tempF;

    switch (tipoTranf)
    {
    case 1:
        printf("\nInforme a temperatura atual em Celsius.\n");
        scanf("%f", &tempC);

        tempF = ((tempC * 1.8) + 32);

        printf("Portanto, a temperatura atual em Fahrenheit é %4.2f\n", tempF);
        break;
    
    default:
        break;
    }
}

float transformacaoFC(int tipoTranf)
{
    float tempF, tempC;

    switch (tipoTranf)
    {
    case 2:
        printf("\nInforme a temperatura atual em Fahrenheit.\n");
        scanf("%f", &tempF);

        tempC = ((tempF - 32) / 1.8);

        printf("Portanto, a temperatura atual em Celsius é %4.2f\n", tempC);
        break;
    
    default:
        break;
    }
}
