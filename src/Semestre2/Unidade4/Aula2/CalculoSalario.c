#include <stdio.h>
//
// Created by claud on 31/08/2025.
//
float calcularSalarioBruto(float valorHora, float horasTrabalhadas)
{
    return valorHora * horasTrabalhadas;
}

int main()
{
    float valorHora, horasTrabalhadas;
    printf("quantas horas voce trabalhou neste mes?\n");
    scanf("%f", &horasTrabalhadas);
    printf("quanto voce recebe por hora?\n");
    scanf("%f", &valorHora);


    float salario = calcularSalarioBruto(valorHora, horasTrabalhadas);
    printf("Salario bruto $%.2f", salario);

    return 0;
}