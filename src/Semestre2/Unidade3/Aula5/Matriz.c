#include <stdio.h>
//
// Created by claud on 29/08/2025.
//
int main()
{
    int matrizA[3][3];
    char resposta = 's';

    while (resposta == 'S' || resposta == 's')
    {
        //  PARA LER OS VALORES DIGITADOS
        printf("=== digite os valores da matriz ===");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &matrizA[i][j]);
            }
            printf("\n");
        }

        printf("matriz A:\n");

        //  PARA MOSTRAR OS VALORES DIGITADOS
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d ", matrizA[i][j]);
            }
            printf("\n");
        }

        printf("a mariana eh legal.\n");
        printf("quer repetir o programa? s/n\n");
        scanf(" %c", &resposta);
    }
}
