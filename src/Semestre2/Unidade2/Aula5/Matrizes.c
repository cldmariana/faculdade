#include <stdio.h>
//
// Created by claud on 18/08/2025.
//
int main()
{
    int matrizA[4][4];

    // POPULAÇÃO DA MATRIZ
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
        printf("\n");
    }

    // EXIBIÇÃO DA MATRIZ
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", matrizA[i][j]);
        }
        printf("\n");
    }
}
