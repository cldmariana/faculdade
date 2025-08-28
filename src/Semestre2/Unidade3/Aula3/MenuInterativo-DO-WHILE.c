#include <stdio.h>
//
// Created by claud on 27/08/2025.
//
int main()
{
    int escolha;

    do
    {
        printf("===== MENU INTERATIVO =====\n");
        printf("1. Opcao A.\n");
        printf("2. Opcao B.\n");
        printf("3. Opcao C.\n");
        printf("4. Sair.\n");

        printf("Escolha um opcao..:");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Voce escolheu a opcao A.\n");
            break;
        case 2:
            printf("Voce escolheu a opcao B.\n");
            break;
        case 3:
            printf("Voce escolheu a opcao C.\n");
            break;
        case 4:
            printf("Voce escolheu sair do menu. Saindo...\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.");
        }
    }
    while (escolha != 4);

    return 0;
}
