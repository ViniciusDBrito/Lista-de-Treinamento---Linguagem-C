#include <stdio.h>

float conclusaoAdicao(float num1, float num2, int tipoConta);
float conclusaoSubitracao(float num1, float num2, int tipoConta);
float conclusaoMultiplicacao(float num1, float num2, int tipoConta);
float conclusaoDivisao(float num1, float num2, int tipoConta);

int main()
{
    float num1, num2;
    int tipoConta;

    printf("\nInforme um número desejado:\n");
    scanf("%f", &num1);

    printf("\nInforme outro número desejado:\n");
    scanf("%f", &num2);

    printf("Qual é a operação desejada entre o número 1 e 2\n1. Adição\n2. Subitração\n3. Multiplicação\n4. Divisão\n");
    scanf("%d", &tipoConta);

    float concAdicao, concSubitracao, concMultiplicacao, concDivisao;
    concAdicao = conclusaoAdicao( num1, num2, tipoConta);
    concSubitracao = conclusaoSubitracao( num1, num2, tipoConta);
    concMultiplicacao = conclusaoMultiplicacao( num1, num2, tipoConta);
    concDivisao = conclusaoDivisao( num1, num2, tipoConta);

    return 0;
}

float conclusaoAdicao(float num1, float num2, int tipoConta)
{   
    float resultado1;
    resultado1 = (num1 + num2);

    switch (tipoConta)
    {
    case 1:
        printf("\nAssim diante dos numeros e operação inserida: %4.2f + %4.2f = %4.2f \n", num1, num2, resultado1);
        break;
    
    default:
        break;
    }
}

float conclusaoSubitracao(float num1, float num2, int tipoConta)
{   
    float resultado2;
    resultado2 = (num1 - num2);

    switch (tipoConta)
    {
    case 2:
        printf("\nAssim diante dos numeros e operação inserida: %4.2f - %4.2f = %4.2f \n", num1, num2, resultado2);
        break;
    
    default:
        break;
    }
}

float conclusaoMultiplicacao(float num1, float num2, int tipoConta)
{   
    float resultado3;
    resultado3 = (num1 * num2);

    switch (tipoConta)
    {
    case 3:
        printf("\nAssim diante dos numeros e operação inserida: %4.2f * %4.2f = %4.2f \n", num1, num2, resultado3);
        break;
    
    default:
        break;
    }
}

float conclusaoDivisao(float num1, float num2, int tipoConta)
{   
    float resultado4;
    resultado4 = (num1 / num2);

    switch (tipoConta)
    {
    case 4:
        printf("\nAssim diante dos numeros e operação inserida: %4.2f / %4.2f = %4.2f \n", num1, num2, resultado4);
        break;
    
    default:
        break;
    }
}
