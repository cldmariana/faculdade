//
// Created by claud on 16/08/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100
#define TAM_NOME 50

// FEITO COM AJUDA DE IA

// Estrutura para representar um produto
typedef struct
{
    int codigo;
    char nome[TAM_NOME];
    float preco;
    int quantidade;
} Produto;

Produto estoque[MAX_PRODUTOS];
int totalProdutos = 0;

// Funções do sistema
void cadastrarProduto()
{
    if (totalProdutos >= MAX_PRODUTOS)
    {
        printf("Limite de produtos atingido!\n");
        return;
    }

    Produto novo;
    novo.codigo = totalProdutos + 1; // Código gerado automaticamente

    printf("\n--- Cadastro de Produto ---\n");
    printf("Nome: ");
    getchar(); // limpar buffer
    fgets(novo.nome, TAM_NOME, stdin);
    novo.nome[strcspn(novo.nome, "\n")] = '\0'; // remover \n

    printf("Preço: ");
    scanf("%f", &novo.preco);

    printf("Quantidade em estoque: ");
    scanf("%d", &novo.quantidade);

    estoque[totalProdutos] = novo;
    totalProdutos++;

    printf("Produto cadastrado com sucesso! Código: %d\n", novo.codigo);
}

void consultarProduto()
{
    int codigo;
    printf("\nInforme o código do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < totalProdutos; i++)
    {
        if (estoque[i].codigo == codigo)
        {
            printf("\n--- Produto Encontrado ---\n");
            printf("Código: %d\n", estoque[i].codigo);
            printf("Nome: %s\n", estoque[i].nome);
            printf("Preço: R$ %.2f\n", estoque[i].preco);
            printf("Quantidade: %d\n", estoque[i].quantidade);
            return;
        }
    }
    printf("Produto não encontrado!\n");
}

void atualizarEstoque()
{
    int codigo, opcao, qtd;
    printf("\nInforme o código do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < totalProdutos; i++)
    {
        if (estoque[i].codigo == codigo)
        {
            printf("\n--- Atualização de Estoque ---\n");
            printf("1 - Entrada (compra)\n2 - Saída (venda)\nEscolha: ");
            scanf("%d", &opcao);

            printf("Quantidade: ");
            scanf("%d", &qtd);

            if (opcao == 1)
            {
                estoque[i].quantidade += qtd;
                printf("Estoque atualizado com sucesso!\n");
            }
            else if (opcao == 2)
            {
                if (estoque[i].quantidade >= qtd)
                {
                    estoque[i].quantidade -= qtd;
                    printf("Venda registrada!\n");
                }
                else
                {
                    printf("Estoque insuficiente!\n");
                }
            }
            else
            {
                printf("Opção inválida!\n");
            }
            return;
        }
    }
    printf("Produto não encontrado!\n");
}

void listarProdutos()
{
    printf("\n--- Lista de Produtos ---\n");
    if (totalProdutos == 0)
    {
        printf("Nenhum produto cadastrado!\n");
        return;
    }

    for (int i = 0; i < totalProdutos; i++)
    {
        printf("Código: %d | Nome: %s | Preço: R$ %.2f | Quantidade: %d\n",
               estoque[i].codigo, estoque[i].nome, estoque[i].preco, estoque[i].quantidade);
    }
}

int main()
{
    int opcao;

    do
    {
        printf("\n--- Sistema de Estoque ---\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Consultar produto\n");
        printf("3 - Atualizar estoque\n");
        printf("4 - Listar produtos\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: cadastrarProduto();
            break;
        case 2: consultarProduto();
            break;
        case 3: atualizarEstoque();
            break;
        case 4: listarProdutos();
            break;
        case 0: printf("Saindo...\n");
            break;
        default: printf("Opção inválida!\n");
        }
    }
    while (opcao != 0);

    return 0;
}
