#include <stdio.h>
//
// Created by claud on 31/08/2025.
//
void imprimirNumeros(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printf("%d ", n);
        imprimirNumeros(n - 1);
    }
}

int main()
{
    int numero = 5;
    printf("Os %d primeiros numeros naturais em ordem decrescente sao..:\n", numero);

    imprimirNumeros(numero);
    printf("\n");

    return 0;
}
