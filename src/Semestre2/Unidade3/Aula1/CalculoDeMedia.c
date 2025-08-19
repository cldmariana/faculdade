#include <stdio.h>
//
// Created by claud on 19/08/2025.
//
int main()
{
    float nota1, nota2, media;

    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 70)
    {
        printf("Aprovado. Media Final: %.1f\n", media);
    }
    else if (media >= 40)
    {
        printf("Em recuperacao. Media Final: %.1f\n", media);
    }
    else
    {
        printf("Reprovado. Media Final: %.1f\n", media);
    }

    return 0;
}
