#include <stdio.h>
//
// Created by claud on 31/08/2025.
//
int fatorial(int n)
{
    //  Caso base
    if (n == 0 || n == 1)
    {
        return 1;
    }
    //  Caso recursivo
    else
    {
        return n * fatorial(n - 1);
    }
}

//Uma alternativa interessante para evitar estouros de pilha (a função entrar em loop infinito), é utilizar a recursividade de cauda.
//Neste caso, a chamada recursiva é a última operação realizada pela função, o que permite otimizações por parte do compilador.
//Versão de fatorial usando recursividade de cauda:

int fatorial_tail(int n, int resultado)
{
    // Caso base
    if (n == 0 || n == 1)
    {
        return resultado;
    }
    // Caso recursivo
    else
    {
        return fatorial_tail(n - 1, n * resultado);
    }
}

int novoFatorial(int n)
{
    return fatorial_tail(n, 1);
}

int main()
{
    int numero = 5;
    printf("O fatorial de %d eh %d\n", numero, novoFatorial(numero));

    return 0;
}
