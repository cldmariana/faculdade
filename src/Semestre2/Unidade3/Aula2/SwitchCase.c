#include <stdio.h>
//
// Created by claud on 27/08/2025.
//
int main()
{
    int tipoProduto = 2;
    float preco = 100;
    float desconto;

    printf("Qual o tipo de produto que voce quer?");
    scanf("%d", &tipoProduto);

    switch (tipoProduto)
    {
    case 1:
        desconto = preco * 0.1;
        printf("Produto com 10%% de desconto.");
        break;
    case 2:
        desconto = preco * 0.2;
        printf("Produto com 20%% de desconto.");
        break;
    case 3:
        desconto = preco * 0.3;
        printf("Produto com 30%% de desconto.");
        break;
    case 4:
        desconto = preco * 0.4;
        printf("Produto com 40%% de desconto.");
        break;
    default:
        desconto = 0;
        printf("Produto sem direito a desconto.");
    }
    return 0;
}
