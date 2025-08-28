#include <stdio.h>
//
// Created by claud on 27/08/2025.
//
//  SWITCH CASE NÃO FUNCIONA POIS 'case nota >= 70' é uma variável, e não uma constante
//  USAR IF-ELSE PARA COMPILAR
//
//
// int main()
// {
//     int nota;
//
//     printf("Digite a nota do aluno:\n");
//     scanf("%d", &nota);
//
//     switch (nota)
//     {
//     case nota >= 70:
//         printf("O aluno pertence ao grupo 1.\n");
//         break;
//     default:
//         printf("O aluno pertence ao grupo 2\n");
//     }
//     return 0;
// }
//
//
//  CODIGO CORRIGIDO PARA A REALIZAÇÃO DO EXERCICIO, COM AJUDA DE IA
//
int main()
{
    float nota;

    printf("Digite a nota do aluno.....:");
    scanf("%f", &nota);

    int grupo;
    if (nota >= 70.0f)
    {
        grupo = 1;
    }
    else if (nota > 0 && nota < 70)
    {
        grupo = 2;
    }
    else
    {
        printf("Nota invalida.\n");
        return 0;
    }


    switch (grupo)
    {
    case 1:
        printf("O aluno pertence ao grupo 1.\n");
        break;
    case 2:
        printf("O aluno pertence ao grupo 2.\n");
        break;
    default: ;
    }
    return 0;
}
