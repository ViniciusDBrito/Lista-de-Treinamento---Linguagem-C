#include <stdio.h>

float ConclusaoHorario(int horas, int minutos);

int main()
{
    int horas, minutos;

    printf("\nInforme o horario atual no formato de 24 horas (apenas as horas):\n");
    scanf("%d", &horas);

    printf("\nInforme também o minuto atual (apenas os minutos):\n");
    scanf("%d", &minutos);

    float concHorario;
    concHorario = ConclusaoHorario(horas, minutos);

    return 0;
}

float ConclusaoHorario(int horas, int minutos)
{
    int horaNova;

    if (((horas > 12) && (horas < 24)) && (minutos <= 60)){
        horaNova = (horas - 12);
        printf("\nPortanto o horário no formato 12 horas é: %d:%d PM\n",horaNova, minutos);
    }
    else if ((horas == 12) && (minutos <= 60)){
        horaNova = horas;
        printf("\nPortanto o horário no formato 12 horas é: %d:%d PM\n",horaNova, minutos);
    }
    else if (((horas < 12) && (horas > 0)) && (minutos <= 60)){
        horaNova = horas;
        printf("\nPortanto o horário no formato 12 horas é: %d:%d AM\n",horaNova, minutos);
    }
    else if ((horas == 0) && (minutos <= 60)){
        horaNova = (horas + 12);
        printf("\nPortanto o horário no formato 12 horas é: %d:%d AM\n",horaNova, minutos);
    }
    else{
        printf("\nErro! Alguma informação foi inserida incorretamente\n");
    }
    return 0;
}