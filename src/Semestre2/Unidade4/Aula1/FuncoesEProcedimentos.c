//
// Created by claud on 30/08/2025.
//
#include <stdio.h>
#include <stdlib.h>


//  Procedimentos
//  São blocos de códigos separados do programa principal, que
//  realizam tarefas específicas, porém não retornam valor.
void saudacao()
{
    printf("Ola, mundo!\n");
}


//  Funções
//  Similares aos procedimentos, porém podem retornar um
//  valor, além de ter um tipo definido para retornar valores.
int soma(int a, int b)
{
    return a + b;
}


//  Funções com ponteiros
//  Variáveis que armazenam endereços de memória, permitindo o
//  acesso direto e a modificação dos dados naquela posição.
int ponteiro = 10;
int* pntNumero = &ponteiro;


//  Vetor com ponteiros
//  Funções podem retornar ponteiros, permitindo a alocação dinâmica
//  de memória ou o retorno de endereços de variáveis locais.
int* alocacaoMemoria()
{
    int* segundoPonteiro = (int*)malloc(sizeof(int)); // alocação dinâmica de memória
    *segundoPonteiro = 20;
    return segundoPonteiro;
}


int main()
{
    saudacao();

    int resultado = soma(2, 3);
    printf("a soma eh %d\n", resultado);

    printf("%d\n", pntNumero);

    int* pntAlocacao = alocacaoMemoria();
    printf("valor alocado dinamicamente: %d", *pntAlocacao);
    free(pntAlocacao); // libera a memória alocada

    return 0;
}
