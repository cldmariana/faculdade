#include <stdio.h>
//
// Created by claud on 31/08/2025.
//

//  A série de Fibonacci é uma sequência em que cada número é a
//  soma dos dois anteriores (0, 1, 1, 2, 3, 5, 8, 13, ...)
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int termo;
    printf("Qual termo da sequencia de Fibonacci voce quer saber?\n");
    scanf("%d", &termo);

    //int valor = fibonacci(termo);
    printf("O termo de posicao %d eh %d\n", termo, fibonacci(termo));

    return 0;
}
