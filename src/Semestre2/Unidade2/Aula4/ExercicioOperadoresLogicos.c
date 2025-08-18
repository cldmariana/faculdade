#include <stdbool.h>
#include <stdio.h>
//
// Created by claud on 16/08/2025.
//
int main()
{
    bool temHabilitacao;
    bool permissaoPais;
    int habilitacaoOpcao;
    int permissaoOpcao;
    int idade;

    printf("Qual sua idade?\n");
    scanf("%d", &idade);

    printf("Possui habilitacao? (1 para 'SIM' | 0 para 'NAO')\n");
    scanf("%d", &habilitacaoOpcao);

    printf("Possui permissao dos pais? (1 para 'SIM' | 0 para 'NAO')\n");
    scanf("%d", &permissaoOpcao);


    // Converte a opção (1 ou 0) para um valor booleano (true ou false)
    temHabilitacao = (habilitacaoOpcao == 1);
    permissaoPais = (permissaoOpcao == 1);


    if ((idade >= 18 && temHabilitacao) || (permissaoPais))
    {
        printf("Pode dirigir");
    }
    else
    {
        printf("Nao pode dirigir");
    }

    return 0;
}
