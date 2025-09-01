#include <stdio.h>
//
// Created by claud on 31/08/2025.
//
//  ESCOPO GLOBAL ==> VARIÁVEIS DECLADARAS FORA DE FUNÇÕES E QUE MANTÉM O SEU VALOR
int variavelGlobal = 50;


//  OCULTAÇÃO DE VARIÁVEIS ==> QUANDO A VARIÁVEL LOCAL TEM O MESMO NOME DE UMA VARIÁVEL GLOBAL, A VARIÁVEL LOCAL VAI 'OCULTAR' A VARIÁVEL GLOBAL DENTRO DO ESCOPO LOCAL
void ocultaVariavel()
{
    variavelGlobal = 30;
    printf("Dentro dessa funcao, a variavel global vale: %d\n", variavelGlobal);
}


//  ESCOPO LOCAL ==> DECLARADAS DENTRO DE FUNÇÕES E SÓ EXISTEM ENQUANDO A FUNÇÃO ESTA EM EXEC
void exemploEscopoLocal()
{
    int x = 10;
    printf("X = %d\n", x);
}


//  CONSTANTE ==> VALOR QUE NÃO PODE SER ALTERADO ENQUANTO O PROGRAMA EXECUTA. USA A PALAVRA-CHAVE 'const'
const int PI = 3.1415;


//  MODIFICADORES DE ACESSO ==> A PALAVRA-CHAVE 'extern' PERMITE QUE UMA VARIÁVEL SEJA USADA EM VÁRIOS ARQUIVOS, ENQUANTO 'static' RESTRINGE A VARIÁVEL À UM ÚNICO ARQUIVO


//  VARIÁVEIS AUTOMÁTICAS ==> VARIÁVEIS LOCAIS SÃO AUTOMÁTICAS EM C (SÃO ALOCADAS AUTOMATICAMENTE QUANDO UMA FUNÇÃO É CHAMADA E DESALOCADAS QUANDO A FUNÇÃO É CONCLUÍDA).
//ISSO CONTRASTA COM VARIÁVEIS ESTÁTICAS, QUE MANTÊM SEU VALOR ENTRE CHAMADAS DE FUNÇÃO


//  VARIÁVEIS ESTÁTICAS ==> VARIÁVEIS ESTÁTICAS MANTÊM SEU VALOR ENTRE CHAMADAS DE FUNÇÃO E TÊM ESCOPO LOCAL. ELAS SÃO DECLARADAS USANDO A PALAVRA-CHAVE 'static'
void variavelEstatica()
{
    static int contador = 0;
    contador++;
    printf("Contador: %d\n", contador);
}


int main()
{
    printf("A variavel global vale: %d\n", variavelGlobal); // mostra o valor da variável global

    ocultaVariavel(); // mostra o valor da variável global que foi modifica dentro da função

    exemploEscopoLocal(); // maneira certa de mostrar a variável
    //printf("%d\n", x); // erro pois, X é variável local da função exemploEscopoLocal()

    printf("O valor de PI eh: %d\n", PI);

    variavelEstatica(); // contador = 1;
    variavelEstatica(); // contador = 2;
    variavelEstatica(); // contador = 3;

    return 0;
}