#include <stdio.h>
#include <string.h>
//
// Created by claud on 13/08/2025.
//

// STRUCTS -> DIFERENTES INFORMAÇÕES DE DIFERENTES TIPOS ( FORA DO METODO PRINCIPAL )
struct Aluno
{
    char nome[50];
    int idade;
    float mediaNota;
};

int main()
{
    struct Aluno aluno1;
    strcpy(aluno1.nome, "Mariana");
    aluno1.idade = 19;
    aluno1.mediaNota = 8.5;

    printf("Nome....: %s\n", aluno1.nome);
    printf("Idade...: %d\n", aluno1.idade);
    printf("Media...: %.1f\n", aluno1.mediaNota);

    // ARRAYS ->  DIFERENTES INFORMAÇÕES DO MESMO TIPO
    int numeros[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numeros[i]);
        printf("\n");
    }


    // UNIONS -> ARMAZENAMENTO DE DIFERENTES TIPOS DE DADOS EM UMA UNICA ESTRUTURA
    union Dado
    {
        int inteiro;
        float decimal;
    };

    // PONTEIROS -> VARIAVEL QUE ARMAZENA A LOCALIZAÇÃO NA MEMORIA ONDE O DADO ESTA SALVO
    // declara uma variavel
    int numero = 135;

    // declara um ponteiro para inteiro e atribui o endereço da variavel 'numero' a ele
    int* ponteiroNumero = &numero;

    printf("Valor da variavel 'numero': %d\n", *ponteiroNumero);

    return 0;
}
