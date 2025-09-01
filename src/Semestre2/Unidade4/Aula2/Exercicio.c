//
// Created by claud on 31/08/2025.
//
// Você, como estudante de programação, foi designado para criar uma solução algorítmica que calcule o reajuste salarial de um colaborador da empresa "ABC001".
// O objetivo é desenvolver um programa eficiente que leve em consideração o salário atual, a porcentagem de reajustee forneça o novo salário após o aumento
// por meio de uma função em "C".

#include <stdio.h>

float reajusteSalarial(float salarioAtual, float porcentagemReajuste)
{
    float novoSalario = (salarioAtual * porcentagemReajuste) / 100;
    return salarioAtual + novoSalario;
}

int main()
{
    float salarioAtual, porcentagemReajuste;

    printf("Qual o seu salario atual?\n");
    scanf("%f", &salarioAtual);
    printf("Qual sera a porcentagem do seu reajuste salarial?\n");
    scanf("%f", &porcentagemReajuste);

    float novoSalario = reajusteSalarial(salarioAtual, porcentagemReajuste);
    printf("Seu salario reajustado sera de $%.2f\n", novoSalario);

    return 0;
}
