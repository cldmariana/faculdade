//
// Created by claud on 05/09/2025.
//
#include <stdio.h>
#include <time.h>

// Fibonacci recursivo simples
long long fibSimples(int n)
{
    if (n <= 1)
        return n;
    return fibSimples(n - 1) + fibSimples(n - 2);
}

// Fibonacci recursivo em cauda (auxiliar)
long long fibCaudaAux(int n, long long a, long long b)
{
    if (n == 0) return a;
    if (n == 1) return b;
    return fibCaudaAux(n - 1, b, a + b);
}

// Função principal que chama a cauda
long long fibCauda(int n)
{
    return fibCaudaAux(n, 0, 1);
}

int main()
{
    int n;
    printf("Digite um valor de n: ");
    scanf("%d", &n);

    clock_t inicio, fim;
    double tempoSimples, tempoCauda;

    // Recursiva simples
    inicio = clock();
    long long resultadoSimples = fibSimples(n);
    fim = clock();
    tempoSimples = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // Recursiva em cauda
    inicio = clock();
    long long resultadoCauda = fibCauda(n);
    fim = clock();
    tempoCauda = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("\n=== RESULTADOS ===\n");
    printf("Fibonacci Simples(%d) = %lld\n", n, resultadoSimples);
    printf("Tempo Simples: %f segundos\n", tempoSimples);

    printf("Fibonacci Cauda(%d) = %lld\n", n, resultadoCauda);
    printf("Tempo Cauda: %f segundos\n", tempoCauda);

    return 0;
}
