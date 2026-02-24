 #include <stdio.h>

 float ordemNumeros(float A, float B, float C);

 int main()
 {
    float A = 0.0;
    float B = 0.0;
    float C = 0.0;

    printf("Digite um número para 'A': \n");
    scanf("%f", &A);

    printf("Digite um número para 'B': \n");
    scanf("%f", &B);

    printf("Digite um número para 'C': \n");
    scanf("%f", &C);

    float ordemN;
    ordemN = ordemNumeros(A, B, C);

    return 0;
 }   

float ordemNumeros(float A, float B, float C)
{
    if ((A > B) && (A > C)){ 
        if (B > C)
        {
            printf("\nA ordem crescente é C < B < A\n");
            printf("\nA ordem decrescente é A > B > C\n");
        }
        else{
            printf("\nA ordem crescente é B < C < A\n");
            printf("\nA ordem decrescente é A > C > B\n");
        }
    }    

    if ((B > A) && (B > C)){ 
        if (A > C)
        {
            printf("\nA ordem crescente é C < A < B\n");
            printf("\nA ordem decrescente é B > A > C\n");
        }
        else{
            printf("\nA ordem crescente é A < C < B\n");
            printf("\nA ordem decrescente é B > C > A\n");
        }
        }    

    if ((C > A) && (C > B)){ 
        if (A > B)
        {
            printf("\nA ordem crescente é B < A < C\n");
            printf("\nA ordem decrescente é C > A > B\n");
        }
        else{
            printf("\nA ordem crescente é A < B < C\n");
            printf("\nA ordem decrescente é C > B > A\n");
        }
        }    

    else{
        printf("\nERROR\n");
    }

    return 0;
}
    
