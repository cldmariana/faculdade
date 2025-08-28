#include <stdio.h>
//
// Created by claud on 27/08/2025.
//
int main()
{
    int quantidadeAtual = 100;
    int quantidadeMinima = 50;

    printf("Controle de Estoque\n");

    while (quantidadeAtual > quantidadeMinima)
    {
        printf("Quantidade atual: %d\n", quantidadeAtual);
        printf("Digite a quantidade a ser atualizada (ou 0 para sair): ");

        int atualizacao;
        scanf("%d", &atualizacao);

        if (atualizacao < 0)
        {
            printf("Entrada invalida.\n");
        }
        else if (atualizacao == 0)
        {
            printf("Saindo do Controle de Estoque...\n");
            break;
        }
        else
        {
            quantidadeAtual += atualizacao;
            printf("Estoque atualizado com sucesso.\n");
        }
    }
    return 0;
}
