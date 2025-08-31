//
// Created by claud on 28/08/2025.
//
// Imagine que você está desenvolvendo um programa educacional para crianças que ajuda a praticar a tabuada de multiplicação.
// O programa deve solicitar à criança um número específico e, em seguida, exibir a tabuada de multiplicação desse número de 1 a 10.
// Se a resposta da criança estiver correta, ela avança para o próximo número; caso contrário, recebe uma nova chance.
#include <stdio.h>

int main()
{
    char opcao;

    do
    {
        int numero, resposta;

        printf("Digite um numero inteiro....:\n");
        scanf("%d", &numero);

        printf("Tabuada de %d:\n", numero);
        for (int i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", numero, i, numero * i);
        }

        printf("Qual o resultado de %d X 7?\n", numero);
        scanf("%d", &resposta);

        if (resposta == numero * 7)
        {
            printf("Voce acertou! %d * 7 eh igual a %d.\n", numero, numero * 7);
        }
        else
        {
            printf("Voce errou. Tente novamente.\n");
        }

        printf("Deseja tentar novamente? (S/N)");
        scanf(" %c", &opcao);
    }
    while (opcao == 'S' || opcao == 's');

    return 0;
}
