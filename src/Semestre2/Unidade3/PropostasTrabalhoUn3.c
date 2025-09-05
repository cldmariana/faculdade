//
// Created by claud on 05/09/2025.
//
//ATIVIDADE PROPOSTA:
// Desenvolver um programa em C que utilize variáveis primárias e compostas, ponteiros,
// constantes e operações matemáticas. Bem como funções de exibição de resultados.
//
#include <stdio.h>

int main()
{
    // EXERCÍCIO 1: if, else if, else
    // Implementar um programa que leia um número inteiro e informe se ele é positivo, negativo ou zero.
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("O número é positivo.\n");
    }
    else if (num < 0)
    {
        printf("O número é negativo.\n");
    }
    else
    {
        printf("O número é zero.\n");
    }


    // EXERCÍCIO 2: for
    // Implementar um programa que imprima os números de 1 a 10.
    int num2, fatorial = 1;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num2);
    if (num2 < 0)
    {
        printf("Número inválido.\n");
    }
    else
    {
        int i = num2;
        do
        {
            fatorial *= i;
            i--;
        }
        while (i > 0);
        printf("O fatorial de %d é: %d\n", num2, fatorial);
    }


    // EXERCÍCIO 3: while
    // Implementar um programa que leia números inteiros até que o usuário digite zero, e então imprimir
    // a soma desses números.
    int num3, soma = 0;
    printf("Digite um número inteiro (0 para sair): ");
    scanf("%d", &num3);
    while (num3 != 0)
    {
        soma += num3;
        printf("Digite um número inteiro (0 para sair): ");
        scanf("%d", &num3);
    }
    printf("A soma dos números é: %d\n", soma);


    // EXERCÍCIO 4: do-while
    // Implementar um programa que leia um número inteiro positivo e calcule seu fatorial.
    int num4, fatorial2 = 1;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num4);
    if (num4 < 0) {
        printf("Número inválido.\n");
    } else {
        int i = num4;
        do {
            fatorial2 *= i;
            i--;
        } while (i > 0);
        printf("O fatorial de %d é: %d\n", num4, fatorial2);

    return 0;
}
