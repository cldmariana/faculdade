#include <stdio.h>
//
// Created by claud on 27/08/2025.
//
int main()
{
    int diaDaSemana;

    printf("Digite um numero de 1 a 7 para representar o dia da semana...\n");
    scanf("%d", &diaDaSemana);

    switch (diaDaSemana)
    {
    case 1:
        printf("Hoje eh domingo.");
        break;
    case 2:
        printf("Hoje eh segunda-feira.");
        break;
    case 3:
        printf("Hoje eh terca-feira.");
        break;
    case 4:
        printf("Hoje eh quarta-feira.");
        break;
    case 5:
        printf("Hoje eh quinta-feira.");
        break;
    case 6:
        printf("Hoje eh sexta-feira.");
        break;
    case 7:
        printf("Hoje eh sabado.");
        break;
        default:
        printf("Numero invalido.");
    }
    return 0;
}
