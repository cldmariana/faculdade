//
// Created by claud on 30/08/2025.
//
//  Descrição da situação-problema:
//
//  Você foi contrato como desenvolvedor júnior em uma empresa de software e seu primeiro trabalho é desenvolver uma função do tipo inteiro,
//  que por meio de um valor numérico recebido por parâmetro, teste se esse valor é positivo ou negativo.

#include <stdio.h>

int positivoOuNegativo(int numero)
{
    if (numero > 0)
    {
        return printf("Valor positivo.\n");
    }
    else
    {
        return printf("Valor negativo.\n");
    }
}

int main()
{
    int valor;
    printf("Digite um valor diferente de 0...:\n");
    scanf("%d", &valor);

    if (valor != 0)
    {
        positivoOuNegativo(valor);
    }
    else
    {
        printf("Valor invalido.\n");
    }
}



