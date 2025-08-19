#include <stdio.h>
//
// Created by claud on 19/08/2025.
//
int main()
{
    // DESVIO CONDICIONAL SIMPLES
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Voce eh maior de idade.\n");
    }

    // DESVIO CONDICIONAL COMPOSTO
    float media;
    printf("Digite a media do aluno: ");
    scanf("%f", &media);

    if (media >= 6)
    {
        printf("O aluno esta aprovado.\n");
    }
    else
    {
        printf("O aluno esta reprovado.\n");
    }

    // DESVIO CONDICIONAL ENCADEADO
    int idade2;

    printf("Digite sua idade: ");
    scanf("%d", &idade2);

    if (idade2 < 12)
    {
        printf("Crianca.\n");
    }
    else if (idade2 >= 13 && idade2 < 18)
    {
        printf("Adolescente.\n");
    }
    else if (idade2 >= 18 && idade2 < 60)
    {
        printf("Adulto.\n");
    }
    else
    {
        printf("Idoso.\n");
    }

    return 0;
}
