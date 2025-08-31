#include <stdio.h>
//
// Created by claud on 31/08/2025.
//

//  PASSAGEM POR VALOR
void exemploPassagemPorValor(int x)
{
    x = x * 2; //  ALTERA APENAS A CÓPIA LOCAL DE X
    printf("Dentro da funcao a variavel tem valor: %d\n", x);

    //  passagem por valor é mais segura em termos de prevenção contra modificações indesejadas nos dados originais
}


//  PASSAGEM POR REFERÊNCIA
void exemploPassagemPorReferencia(int *y)
{
    //  o ponteiro permite que a função modifique diretamente a variável original
    (*y) = (*y) * 2; //  ALTERA DIRETAMENTE O VALOR DA VARIÁVEL ORIGINAL
    printf("Dentro da funcao a variavel tem valor: %d\n", *y);

    //  em casos em que a eficiência e a necessidade de modificar os valores originais são prioridades, a passagem por referência usando ponteiros é uma escolha mais adequada
}

int main()
{
    int numero1 = 5;
    exemploPassagemPorValor(numero1);
    printf("Fora da funcao a variavel tem valor: %d\n", numero1); //  PERMANECE 5, POIS A FUNÇÃO SÓ ATUA NA SUA CÓPIA LOCAL

    int numero2 = 5;
    exemploPassagemPorReferencia(&numero2);
    printf("Fora da funcao a variavel tem valor: %d\n", numero2); //  VALOR MODIFICADO PARA 10

    return 0;
}
