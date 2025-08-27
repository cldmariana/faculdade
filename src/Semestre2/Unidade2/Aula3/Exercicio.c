//
// Created by claud on 14/08/2025.
//
#include <stdio.h>

// FEITO COM AJUDA DE IA

int main() {
    // Capacidades das classes
    int capacidadeEconomica = 150;
    int capacidadeExecutiva = 40;
    int capacidadePrimeiraClasse = 10;

    // Passageiros que querem viajar
    int passageirosEconomica, passageirosExecutiva, passageirosPrimeira;
    int especiaisEconomica, especiaisExecutiva, especiaisPrimeira;

    // Entrada de dados
    printf("Digite o numero de passageiros na classe Economica: ");
    scanf("%d", &passageirosEconomica);
    printf("Quantos possuem necessidades especiais na Economica: ");
    scanf("%d", &especiaisEconomica);

    printf("Digite o numero de passageiros na classe Executiva: ");
    scanf("%d", &passageirosExecutiva);
    printf("Quantos possuem necessidades especiais na Executiva: ");
    scanf("%d", &especiaisExecutiva);

    printf("Digite o numero de passageiros na Primeira Classe: ");
    scanf("%d", &passageirosPrimeira);
    printf("Quantos possuem necessidades especiais na Primeira Classe: ");
    scanf("%d", &especiaisPrimeira);

    // Ajuste para não ultrapassar capacidade
    if (passageirosEconomica > capacidadeEconomica) {
        printf("\nAviso: Classe Economica lotada! %d passageiros ficaram sem assento.\n",
               passageirosEconomica - capacidadeEconomica);
        passageirosEconomica = capacidadeEconomica;
    }

    if (passageirosExecutiva > capacidadeExecutiva) {
        printf("Aviso: Classe Executiva lotada! %d passageiros ficaram sem assento.\n",
               passageirosExecutiva - capacidadeExecutiva);
        passageirosExecutiva = capacidadeExecutiva;
    }

    if (passageirosPrimeira > capacidadePrimeiraClasse) {
        printf("Aviso: Primeira Classe lotada! %d passageiros ficaram sem assento.\n",
               passageirosPrimeira - capacidadePrimeiraClasse);
        passageirosPrimeira = capacidadePrimeiraClasse;
    }

       int totalEconomica = passageirosEconomica + especiaisEconomica;
       int totalExecutiva = passageirosExecutiva + especiaisExecutiva;
       int totalPrimeiraClasse = passageirosPrimeira + especiaisPrimeira;

    // Resultado final
    printf("\n=== Distribuicao Final ===\n");
    printf("Economica: %d assentos ocupados, %d passageiros especiais. Total: %d\n",
           passageirosEconomica, especiaisEconomica, totalEconomica);
    printf("Executiva: %d assentos ocupados, %d passageiros especiais. Total: %d\n",
           passageirosExecutiva, especiaisExecutiva, totalExecutiva);
    printf("Primeira Classe: %d assentos ocupados, %d passageiros especiais. Total: %d\n",
           passageirosPrimeira, especiaisPrimeira, totalPrimeiraClasse);

    return 0;
}
