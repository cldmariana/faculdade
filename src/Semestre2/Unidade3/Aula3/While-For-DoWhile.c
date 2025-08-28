#include <stdio.h>
//
// Created by claud on 27/08/2025.
//
int main()
{
    //  WHILE
    //  útil quando o número de iterações não é conhecido antecipadamente
    int contador = 1;

    printf("Comando WHILE\n");
    while (contador <= 5)
    {
        printf("%d. Mariana\n", contador);
        contador++;
    }

    //  FOR
    //  útil quando o número de iterações é conhecido antecipadamente
    printf("Comando FOR\n");
    for (int numeroDeDedos = 1; numeroDeDedos <= 5; numeroDeDedos++)
    {
        printf("Na minha mao eu tenho %d dedo(s).\n", numeroDeDedos);
    }

    //  DO
    //  garante que o bloco de código seja executado pelo menos uma vez, mesmo se a condição inicial for falsa
    int cont = 1;
    printf("Comando DO WHILE\n");
    do
    {
        printf("%d. Mariana\n", cont);
        cont++;
    }
    while (cont <= 5);

    return 0;
}
