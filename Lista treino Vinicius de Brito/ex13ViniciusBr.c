#include <stdio.h>

float conversorHoras(int tipoC);

int main()
{
    int tipoC;

    printf("\nInforme a conversão que deseja:\n1. De horas para minutos\n2. De minutos para segundos\n3. De segundos para milésimos de segundos\n4. De minutos para horas\n5. De segundos para minutos\n6. De milésimos de segundos para segundos\n");
    scanf("%d", &tipoC);

    float convHoras;
    convHoras = conversorHoras(tipoC);

    return 0;
}

float conversorHoras(int tipoC)
{
    float hr1, min1, min2, seg2, seg3, mlsg3, min4, hr4, seg5, min5, mlsg6, seg6;
    switch (tipoC)
    {
    case 1:
        printf("\nInforme a quantidade de horas desejada para conversão:\n");
        scanf("%f", &hr1);

        min1 = (hr1 * 60);

        printf("\nPortanto, com as devidas transformações chega-se a: %4.2f minutos", min1);
        break;

    case 2:
        printf("\nInforme a quantidade de minutos desejada para conversão:\n");
        scanf("%f", &min2);

        seg2 = (min2 * 60);

        printf("\nPortanto, com as devidas transformações chega-se a: %4.2f segundos", seg2);
        break;

    case 3:
        printf("\nInforme a quantidade de segundos desejada para conversão:\n");
        scanf("%f", &seg3);

        mlsg3 = (seg3 * 1000);

        printf("\nPortanto, com as devidas transformações chega-se a: %4.2f milissegundos", mlsg3);
        break;

    case 4:
        printf("\nInforme a quantidade de minutos desejada para conversão:\n");
        scanf("%f", &min4);

        hr4 = (min4 / 60);

        printf("\nPortanto, com as devidas transformações chega-se a: %4.2f horas", hr4);
        break;

    case 5:
        printf("\nInforme a quantidade de segundos desejada para conversão:\n");
        scanf("%f", &seg5);

        min5 = (seg5 / 60);

        printf("\nPortanto, com as devidas transformações chega-se a: %4.2f minutos", min5);
        break;

    case 6:
        printf("\nInforme a quantidade de milissegundos desejada para conversão:\n");
        scanf("%f", &mlsg6);

        seg6 = (mlsg6 / 1000);

        printf("\nPortanto, com as devidas transformações chega-se a: %4.2f segundos", seg6);
        break;
    
    default:
        break;
    }

    return 0;
}
