#include <stdio.h>
//
// Created by claud on 27/08/2025.
//
int main()
{
    int escolha;

    do
    {
        printf("1. Jogar novamente\n"
            "2. Sair\n"
            "Escolha: ");

        scanf("%d", &escolha);
    }
    while (escolha != 2);
    return 0;
}
