#include <math.h>
#include <stdio.h>
#include <string.h>
//
// Created by claud on 14/08/2025.
//
int main()
{
    char str1[15] = "Hello, ";
    char str2[15] = "world!";

    strcat(str1, str2);
    size_t comprimento = strlen(str1);

    printf("%s\n", str1);
    printf("O tamanho de '%s' é de %zu caracteres.\n", str1, comprimento);

    // =================================
    // 1. RAIZ QUADRADA
    double num = 16;
    double raizQuadrada = sqrt(num);
    double raizQuadrada2 = sqrt(81);

    printf("A raiz quadrada de %.2f é %.2f\n", num, raizQuadrada);
    printf("A raiz quadrada de 81 é %.2f\n", raizQuadrada2);

    // =================================
    // 2. POTENCIAÇÃO
    double num2 = 10;
    double potencia = pow(num2, 2);
    double potencia2 = pow(5.0, 3);

    printf("%.2f elevado a potência de 2 é %.2f\n", num2, potencia);
    printf("5 elevado ao cubo é %.2f\n.", potencia2);

    return (0);
}