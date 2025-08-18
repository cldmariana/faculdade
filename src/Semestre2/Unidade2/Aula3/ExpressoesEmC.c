#include <stdio.h>
#include <stdlib.h>
//
// Created by claud on 14/08/2025.
//
int main()
{
    int a, b, soma;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    soma = a + b;

    printf("A soma entre %d e %d e: %d\n ", a, b, soma);

    // =================================
    // alocação de memória por meio da utilização dos ponteiros.
    int* ponteiro;
    ponteiro = (int*)malloc(sizeof(int) * 10);

    printf(ponteiro);

    // =================================

    int idade;
    printf("Qual sua idade? ");
    scanf("%d", &idade);

    if (idade>=18)
    {
        printf("Voce atingiu a maioridade");
    } else
    {
        printf("Voce ainda nao atingiu a maioridade");
    }

    return 0;
}
