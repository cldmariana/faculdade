#include <stdio.h>
//
// Created by claud on 30/08/2025.
//
void dobrarElementos(int* arr, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    dobrarElementos(numeros, 5);

    printf("array dobrado: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}
