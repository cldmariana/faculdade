#include <stdio.h>
//
// Created by claud on 30/08/2025.
//

//  função sem retorno 'void'
void mensagem()
{
    printf("ola, mundo!\n");
}


//  função com retorno, retorna a multiplicado de a por b 'return'
int multiplicacao(int a, int b)
{
    return a * b;
}


int main()
{
    mensagem();

    int resultado = multiplicacao(3,5);
    printf("resultado da multiplicacao..: %d\n", resultado);

    return 0;
}