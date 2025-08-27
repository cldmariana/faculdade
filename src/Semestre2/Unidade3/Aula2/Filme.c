#include <stdio.h>
//
// Created by claud on 27/08/2025.
//
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    printf("Escolha um filme:\n");
    printf("1. Acao\n");
    printf("2. Comedia\n");
    printf("3. Drama\n");
    printf("4. Animacao\n");
    printf("5. Suspense\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Voce escolheu filme de ACAO.\n");
        break;
    case 2:
        printf("Voce escolheu filme de COMEDIA.\n");
        break;
    case 3:
        printf("Voce escolheu filme de DRAMA.\n");
        break;
    case 4:
        printf("Voce escolheu filme de ANIMACAO.\n");
        break;
    case 5:
        printf("Voce escolheu filme de SUSPENSE.\n");
        break;
    default:
        printf("Opcao invalida. Escolha um numero de 1 a 5.\n");
    }
    return 0;
}
