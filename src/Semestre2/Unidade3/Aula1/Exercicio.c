//
// Created by claud on 19/08/2025.
//
// a. Controle de combustível: se o nível de combustível estiver abaixo de 20%, exiba uma mensagem de alerta.
// b. Orientação da nave: se a nave estiver fora da rota programada, corrija automaticamente a trajetória.
// c. Condições climáticas: se for identificada uma tempestade solar, ative o protocolo de proteção da nave.

#include <stdbool.h>
#include <stdio.h>

int main()
{
    float combustivel;
    printf("=====================================\n");
    printf("Qual o nivel de combustivel da nave? ");
    scanf("%f", &combustivel);

    if (combustivel < 20.0)
    {
        printf("ALERTA! Baixo nivel de combustivel.\n");
    } else
    {
        printf("O nivel de combustivel esta acima de 20%%.\n");
    }


    bool estaNaRota;
    int rotaOpcao;

    printf("=====================================\n");
    printf("A nave esta na rota programada? (1 para 'SIM' | 0 para 'NAO')\n");
    scanf("%d", &rotaOpcao);

    estaNaRota = rotaOpcao == 1;

    if (!estaNaRota)
    {
        printf("A nave esta fora da rota programada. Alterando rota...\n");
    } else
    {
        printf("A nave esta na rota programada.\n");
    }


    int temTempestade;

    printf("=====================================\n");
    printf("Esta acontecendo uma tempestade solar? (1 para 'SIM' | 0 para 'NAO')\n");
    scanf("%d", &temTempestade);


    if (temTempestade == 1)
    {
        printf("Esta ocorrendo uma tempestade solar. Ativando o protocolo de protecao da nave...\n");
    } else
    {
        printf("Nao ha tempestades.\n");
    }
    return 0;
}
