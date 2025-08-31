#include <stdio.h>
//
// Created by claud on 28/08/2025.
//
int main()
{
    int tabuada = 0;
    int resultado = 0;

    printf("Tabuada do numero....:\n");
    scanf("%d", &tabuada);

    int contador = 1;
    while (contador <= 10)
    {
        resultado = tabuada * contador;
        printf("%d * %d = %d\n", tabuada, contador, resultado);

        contador++;
    }
}
