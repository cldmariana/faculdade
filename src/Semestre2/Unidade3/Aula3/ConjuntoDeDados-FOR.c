#include <stdio.h>
//
// Created by claud on 27/08/2025.
//
//  EXEMPLO DO PROFESSOR
//
int main()
{
    int tamanho = 5;

    //  conjunto de dados
    int dados[] = {8, 2, 6, 4, 10};

    printf("Conjunto de Dados Original:\n");

    //  exibição do conjunto de dados
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", dados[i]);
    }

    //  ordenação do conjunto de dados
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - 1; j++)
        {
            //  troca dos elementos se estiverem fora de ordem
            if (dados[j] > dados[j + 1])
            {
                int temp = dados[j];
                dados[j] = dados[j + 1];
                dados[j + 1] = temp;
            }
        }
    }

    printf("\nConjunto de Dados Ordenado: \n");

    //  exibição do conjunto de dados ordenado
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", dados[i]);
    }

    printf("\nOrdenacao Concluida.\n");

    return 0;
}
