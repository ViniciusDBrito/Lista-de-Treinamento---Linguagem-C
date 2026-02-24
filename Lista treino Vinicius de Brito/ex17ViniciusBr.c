#include <stdio.h>
#include <math.h>

float distanciaPontos(float Xa, float Xb, float Ya, float Yb);

int main()
{
    float Xa, Xb, Ya, Yb;

    printf("\nConsiderando pontos A e B, informe o eixo X para A (Xa):\n");
    scanf("%f", &Xa);

    printf("\nConsiderando pontos A e B, informe o eixo Y para A (Ya):\n");
    scanf("%f", &Ya);

    printf("\nConsiderando pontos A e B, informe o eixo X para B (Xb):\n");
    scanf("%f", &Xb);

    printf("\nConsiderando pontos A e B, informe o eixo Y para B (Yb):\n");
    scanf("%f", &Yb);

    float distPontos;
    distPontos = distanciaPontos(Xa, Xb, Ya, Yb);

    printf("\nPortanto, diante desses valores, a distância entre A e B é %4.2f", distPontos);
}

float distanciaPontos(float Xa, float Xb, float Ya, float Yb)
{
    float sub1, elevado1, sub2, elevado2, somaTot, distP;

    sub1 = (Xb - Xa);
    elevado1 = pow (sub1, 2);
    sub2 = (Yb - Ya);
    elevado2 = pow (sub2, 2);
    somaTot = (elevado1 + elevado2);

    distP = sqrt(somaTot);

    return (distP);
}