#include <stdio.h>
//
// Created by claud on 31/08/2025.
//
int main()
{
    float notas[100]; // recebe até 100 notas
    int contadorNotas = 0; // armazenar a quantidade de notas digitadas
    float entrada; // opção para o usuário colocar, ou não, mais notas
    float soma = 0;

    printf("Digite a nota do aluno (ou -1 para sair).\n", contadorNotas + 1);
    do
    {
        printf("Nota do aluno %d:\n", contadorNotas + 1);
        scanf("%f", &entrada);

        // se digitar -1, sai do loop
        if (entrada == -1)
        {
            break;
        }

        // validação de nota:
        if (entrada >= 0 && entrada <= 10.0)
        {
            notas[contadorNotas] = entrada; // lê a nota inserida e adiciona ao array
            soma += entrada; // faz a soma das notas no array
            contadorNotas++; // aumenta o indice do array em 1
        }
        else
        {
            printf("Nota invalida. Digite um valor entre 0 e 10.\n");
        }
    }
    while (contadorNotas < 100);


    // se houver notas digitadas, calcula a média
    if (contadorNotas > 0)
    {
        float media = soma / contadorNotas;

        // inicializa maior e menor
        float maior = notas[0];
        float menor = notas[0];

        // contadores de aprovados e reprovados
        int aprovados = 0, reprovados = 0;

        // percorre todas as notas
        for (int i = 1; i < contadorNotas; i++)
        {
            if (notas[i] > maior)
                maior = notas[i]; // atribui a maior nota do array

            if (notas[i] < menor)
                menor = notas[i]; // atribui a menor nota do array

            if (notas[i] >= 6) // verifica a quantidade de alunos aprovados e reprovados
                aprovados++;

            else
                reprovados++;
        }
        printf("\nForam digitadas %d notas.\n", contadorNotas);
        printf("A media das notas eh: %.2f\n", media);
        printf("A maior nota foi: %.2f\n", maior);
        printf("A menor nota foi: %.2f\n", menor);
        printf("Quantidade de alunos aprovados: %d\n", aprovados);
        printf("Quantidade de alunos reprovados: %d\n", reprovados);
    }
    else
    {
        printf("Nenhuma nota valida foi digitada.\n");
    }

    return 0;
}
