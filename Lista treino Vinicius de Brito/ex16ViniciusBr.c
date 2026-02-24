#include <stdio.h>
#include <math.h>

float conclusaoBaskara(float Vla, float Vlb, float Vlc);

int main()
{
    float Vla, Vlb, Vlc;

    printf("\nInforme um valor para a incognita 'A':\n");
    scanf("%f", &Vla);

    printf("\nInforme um valor para a incognita 'B':\n");
    scanf("%f", &Vlb);

    printf("\nInforme um valor para a incognita 'C':\n");
    scanf("%f", &Vlc);


    float concBaskara;
    concBaskara = conclusaoBaskara(Vla, Vlb, Vlc);

    return 0;
}

float conclusaoBaskara(float Vla, float Vlb, float Vlc)
{
    float Vldelta; float Vlx1; float Vlx2;
    Vldelta = ((Vlb * Vlb) + (-4 * Vla * Vlc));

    if (Vldelta > 0){
        Vlx1 = (((-Vlb) + sqrt(Vldelta))/(2 * Vla));
        Vlx2 = (((-Vlb) - sqrt(Vldelta))/(2 * Vla));
        
        printf("\nPortanto, diante dessas incógnitas (delta > 0), o valor de X1 é %4.2f e o de X2 é %4.2f",Vlx1, Vlx2);
    }
    else if (Vldelta == 0)
    {
        printf("\nPortanto, diante dessas incógnitas (delta = 0), a equação apresentará apenas uma raiz real ");
    }
    
    else{
        printf("\nImpossivel calcular a equação de segundo grau com esses valores (Não possui duas raízes)");
    }
    return 0;
}