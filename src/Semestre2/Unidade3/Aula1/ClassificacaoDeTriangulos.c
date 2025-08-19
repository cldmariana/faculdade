#include <stdio.h>
//
// Created by claud on 19/08/2025.
//
int main()
{
    int lado1, lado2, lado3;

    printf("Digite o comprimento do lado 1: ");
    scanf("%d", &lado1);

    printf("Digite o comprimento do lado 2: ");
    scanf("%d", &lado2);

    printf("Digite o comprimento do lado 3: ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("Triangulo Equilatero.\n");
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        printf("Triangulo Isosceles.\n");
    }
    else
    {
        printf("Triangulo Escaleno.\n");
    }
    return 0;
}
