#include <stdio.h>
//
// Created by claud on 27/08/2025.
//
int main()
{
    int codigo, senha;

    printf("Digite o codigo de atendente...:");
    scanf("%d", &codigo);
    if (codigo == 2468)
    {
        printf("Digite a senha...:");
        scanf("%d", &senha);

        if (senha == 13579)
        {
            int opcao;

            printf("\nESCOLHA UMA OPCAO...:\n");
            printf("1. LANCHE\n");
            printf("2. COMBO\n");
            printf("3. BEBIDA\n");
            printf("4. CONDIMENTOS EXTRAS\n");

            scanf("%d", &opcao);

            switch (opcao)
            {
            case 1:
                printf("\nVoce escolheu LANCHE. Informe os detalhes do pedido.\n");
                break;
            case 2:
                printf("\nVoce escolheu COMBO. Informe os detalhes do pedido.\n");
                break;
            case 3:
                printf("\nVoce escolheu BEBIDA. Informe os detalhes do pedido.\n");
                break;
            case 4:
                printf("\nVoce escolheu CONDIMENTOS EXTRAS. Informe os detalhes do pedido.\n");
                break;
            default:
                printf("\nOPCAO INVALIDA. Tente novamente com numeros de 1 a 4.\n");
            }
        }
        else
        {
            printf("\nCREDENCIAIS INVALIDAS. Tente novamente.\n");
        }
    }
    else
    {
        printf("\nCREDENCIAIS INVALIDAS. Tente novamente.\n");
    }
    return 0;
}
