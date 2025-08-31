//
// Created by claud on 28/08/2025.
//
// Descrição da situação-problema:
//
// Um e-commerce deseja disponibilizar os produtos de sua loja na página de busca de produtos.
// Para isso, é necessário criar um algoritmo utilizando o comando while na linguagem de programação C.
//
// Resolução da situação-problema:
//
// Identificação dos Dados:
//
// 1. Inicialização das variáveis: Defina as variáveis necessárias para o algoritmo, como contador, limite de produtos por página e a lista de produtos disponíveis no e-commerce.
// 2. Verificação da condição: utilize o comando while para verificar se ainda existem produtos para serem disponibilizados na página de busca.
// 3. Exibição dos produtos: dentro do laço while, exiba os produtos na página de busca, respeitando o limite de produtos por página.
// 4. Atualização do contador: após exibir os produtos, atualize o contador para indicar que esses produtos já foram disponibilizados na página de busca.
// 5. Condição de parada: Verifique se todos os produtos já foram exibidos, caso contrário, retorne ao passo 3.
// 6. Fim do algoritmo: ao final do processo, encerre o algoritmo.
//
// Com esse algoritmo, o e-commerce poderá disponibilizar os produtos de forma eficiente e organizada na página de busca,
// garantindo uma melhor experiência para os usuários que estão em busca de produtos específicos.

#include <stdio.h>

int main()
{
    const char* produtos[] = {
        "Placa-mae", "Processador", "Placa de video", "Memoria RAM", "HD", "SSD", "Fonte de alimentacao",
        "Gabinete", "Monitor", "Teclado", "Mouse", "Headset", "Impressora", "Roteador Wi-Fi", "Webcam"
    };

    int porPagina = 5;
    int contador = 0;

    int n = (int)(sizeof(produtos) / sizeof(produtos[0]));
    int numero = 1;

    while (contador < n)
    {
        printf("%d. %s\n", numero, produtos[contador]);
        contador++;
        numero++;
    }


    for (int i = 1; i < n; i++)
    {
        //printf("%s\n", produtos[i]);
    }
}
