#include <stdio.h>

float conclusaoForma(int forma);

int main()
{
    int forma;

    printf("\nQual é a forma geométrica desejada para o cálculo?\n1- Quadrado\n2- Retângulo\n3- Triângulo\n4- Círculo\n");
    scanf("%d", &forma);

    float concForma;
    concForma = conclusaoForma(forma);

    return 0;
}

float conclusaoForma(int forma)
{
    float ladoQ, areaQ, perimetroQ, lado1R, lado2R, areaR, perimetroR, baseT, lado1T, lado2T, alturaT, areaT, perimetroT, raioC, areaC, perimetroC;

    switch (forma)
    {
    case 1:
        printf("\nInforme qual o valor do lado do quadrado:\n");
        scanf("%f", &ladoQ);

        areaQ = (ladoQ * ladoQ);
        perimetroQ = (ladoQ * 4);

        printf("\nPortanto, diante da escolha e dados, a aréa do quadrado é %4.2f e o perimetro é %4.2f. \n", areaQ, perimetroQ);
        break;

    case 2:
        printf("\nInforme qual o valor do lado 1 do retângulo:\n");
        scanf("%f", &lado1R);

        printf("\nInforme também qual o valor do lado 2 do retângulo:\n");
        scanf("%f", &lado2R);

        areaR = (lado1R * lado2R);
        perimetroR = ((lado1R * 2) + (lado2R * 2));

        printf("\nPortanto, diante da escolha e dados, a aréa do retângulo é %4.2f e o perimetro é %4.2f. \n", areaR, perimetroR);
        break;
    
        case 3:
            printf("\nInforme qual é o valor da base do triângulo:\n");
            scanf("%f", &baseT);

            printf("\nInforme também qual o valor de um dos outros lados do triângulo:\n");
            scanf("%f", &lado1T);

            printf("\nInforme agora também qual o valor do último lado do triângulo:\n");
            scanf("%f", &lado2T);

            printf("\nPor fim, informe também qual o valor da altura do triângulo:\n");
            scanf("%f", &alturaT);

            areaT = ((baseT * alturaT) / 2);
            perimetroT = (baseT + lado1T + lado2T);

            printf("\nPortanto, diante da escolha e dados, a aréa do triângulo é %4.2f e o perimetro é %4.2f. \n", areaT, perimetroT);
            break;

        case 4:
            printf("\nInforme qual é o raio do círculo:\n");
            scanf("%f", &raioC);

            areaC = 3.14 * (raioC * raioC);
            perimetroC = (6.28 * raioC);

            printf("\nPortanto, diante da escolha e dados (usando pi = 3.14), a aréa do círculo é %4.2f e o perimetro é %4.2f. \n", areaC, perimetroC);
            break;
    
    default:
        break;
    }

    return 0;
}