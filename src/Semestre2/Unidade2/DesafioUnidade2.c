//
// Created by claud on 18/08/2025.
//
#include <stdio.h>

const double TAXA_JUROS = 0.05;

int main()
{
    double valorInicial, valorFinal;
    int anos;

    printf("Qual o valor do seu investimento inicial? $");
    scanf("%lf", &valorInicial);

    if (valorInicial <= 0)
    {
        printf("Valor invalido. Tente novamente.\n");
        return 1;
    }

    printf("Quantos anos esse valor ficara investido? ");
    scanf("%d", &anos);

    if (anos <= 0)
    {
        printf("Tempo invalido. Tente novamente.\n");
        return 1;
    }


    valorFinal = valorInicial * (1 + (TAXA_JUROS * anos));

    printf("====================================\n");
    printf("Investimento inicial: $%.2f\n", valorInicial);
    printf("Por %d ano(s).\n", anos);
    printf("O valor final sera de: $%.2f.\n", valorFinal);
    printf("====================================\n");

    // ======================================================

    printf("\n---- VETOR ----\n");
    int numerosInteiros[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        printf("numerosInteiros[%d] = %d | endereco = %p\n", i, numerosInteiros[i], (void*)&numerosInteiros[i]);
        printf("\n");
    }

    // ponteiro para alterar o primeiro elemento do array
    int* ponteiroNumerosInteiros = &numerosInteiros[0];
    *ponteiroNumerosInteiros = 99;

    printf("\nPrimeiro elemento modificado pelo ponteiro: %d\n", numerosInteiros[0]);

    printf("\n---- Vetor apos modificacao ----\n");
    for (int i = 0; i < 3; i++)
    {
        printf("numerosInteiros[%d] = %d | endereco = %p\n", i, numerosInteiros[i], (void*)&numerosInteiros[i]);
    }

    // ======================================================

    printf("\n");
    printf("---- MATRIZ ----\n");

    int matrizExemplo[2][2] = {{10, 20}, {30, 40}};

    for (int j = 0; j < 2; j++)
    {
        for (int k = 0; k < 2; k++)
        {
            printf("matrizExemplo[%d][%d] = %d | endereco = %p\n", j, k, matrizExemplo[j][k],
                   (void*)&matrizExemplo[j][k]);
        }
        printf("\n");
    }

    return 0;
}
