#include <math.h>
#include <stdio.h>
//
// Created by claud on 16/08/2025.
//
int main()
{
    int a = 12;
    int b = 5;
    int c = 9;


    // OPERADOR LOGICO AND '&'
    if (c > b & b > a)
    {
        printf("%d eh maior que %d, e %d eh maior que %d\n", c, b, b, a);
    }
    else
    {
        printf("%d nao eh maior que %d ou %d\n", c, b, a);
    }


    // OPERADOR LOGICO OR '|'
    if (a == b | a == c)
    {
        printf("%d eh igual a %d e/ou %d\n", a, b, c);
    }
    else
    {
        printf("%d nao eh igual a %d e nem %d\n", a, b, c);
    }


    // OPERADOR LOGICO NOT '!'
    if (!(a > b))
    {
        printf("%d nao eh maior que %dn", a, b);
    }
    else
    {
        printf("%d eh maior que %d\n", a, b);
    }


    // ARREDONDAR NUMEROS
    double num1 = 4.7;
    double num2 = 7.8;
    double num3 = 9.2;

    // 'ROUND' ARREDONDA P/ CIMA OU P/ BAIXO
    num1 = round(num1);

    // 'FLOOR' ARREDONDA P/ BAIXO
    num2 = floor(num2);

    // 'CEIL' ARREDONDA P/ CIMA
    num3 = ceil(num3);

    printf("valores arredondados: %.2f; %.2f e %.2f\n", num1, num2, num3);
}
