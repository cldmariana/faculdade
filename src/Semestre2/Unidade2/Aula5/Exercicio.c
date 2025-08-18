//
// Created by claud on 18/08/2025.
//
#include <stdio.h>
#include <string.h>

#define MAX_RECLAMACOES 5
#define MAX_TEXTO 100

int main()
{
    char vetorReclame[MAX_RECLAMACOES][MAX_TEXTO]; // Passo 1: Reclamações
    int prioridade[MAX_RECLAMACOES]; // Passo 4: Priorização
    char resolucao[MAX_RECLAMACOES][MAX_TEXTO]; // Passo 5: Opções de resolução
    char feedback[MAX_RECLAMACOES][MAX_TEXTO]; // Passo 8: Feedback
    int garantiaValida[MAX_RECLAMACOES]; // Passo 3: Garantia

    int n, i, opcao;

    printf("=== Sistema de Registro de Reclamações ===\n");
    printf("Quantas reclamacoes deseja registrar (max %d)? ", MAX_RECLAMACOES);
    scanf("%d", &n);
    getchar(); // limpar buffer

    // -------------------------------
    // PASSO 1: REGISTRO DETALHADO
    // -------------------------------
    for (i = 0; i < n; i++)
    {
        printf("\nDigite a reclamacao %d: ", i + 1);
        fgets(vetorReclame[i], MAX_TEXTO, stdin);
        vetorReclame[i][strcspn(vetorReclame[i], "\n")] = 0; // remove \n
    }

    // -------------------------------
    // PASSO 2: ANALISE DO PROBLEMA
    // -------------------------------
    printf("\n--- Analise das reclamacoes ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Problema %d: %s\n", i + 1, vetorReclame[i]);
    }

    // -------------------------------
    // PASSO 3: VERIFICACAO DA GARANTIA
    // -------------------------------
    printf("\n--- Verificacao da garantia ---\n");
    for (i = 0; i < n; i++)
    {
        printf("O problema \"%s\" esta na garantia? (1=Sim, 0=Nao): ", vetorReclame[i]);
        scanf("%d", &garantiaValida[i]);
    }

    // -------------------------------
    // PASSO 4: PRIORIZACAO E ORGANIZACAO
    // -------------------------------
    printf("\n--- Priorizacao dos problemas ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Defina a prioridade para \"%s\" (1=Baixa, 2=Media, 3=Alta): ", vetorReclame[i]);
        scanf("%d", &prioridade[i]);
    }

    // -------------------------------
    // PASSO 5: OPCOES DE RESOLUCAO
    // -------------------------------
    getchar(); // limpar buffer
    printf("\n--- Definindo opcoes de resolucao ---\n");
    for (i = 0; i < n; i++)
    {
        if (garantiaValida[i])
        {
            printf("Problema \"%s\" (prioridade %d): ", vetorReclame[i], prioridade[i]);
            printf("\nOpcao (ex: Reparar, Substituir, Reembolso): ");
            fgets(resolucao[i], MAX_TEXTO, stdin);
            resolucao[i][strcspn(resolucao[i], "\n")] = 0;
        }
        else
        {
            strcpy(resolucao[i], "Fora da garantia - Sem solucao gratuita");
        }
    }

    // -------------------------------
    // PASSO 6: COMUNICACAO COM O CLIENTE
    // -------------------------------
    printf("\n--- Comunicacao com o cliente ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Problema \"%s\": Solucao proposta -> %s\n", vetorReclame[i], resolucao[i]);
    }

    // -------------------------------
    // PASSO 7: EXECUCAO DA SOLUCAO
    // -------------------------------
    printf("\n--- Executando solucoes escolhidas ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Executando: %s -> %s\n", vetorReclame[i], resolucao[i]);
    }

    // -------------------------------
    // PASSO 8: FEEDBACK DO CLIENTE
    // -------------------------------
    getchar(); // limpar buffer
    printf("\n--- Solicitando feedback do cliente ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Feedback para \"%s\": ", vetorReclame[i]);
        fgets(feedback[i], MAX_TEXTO, stdin);
        feedback[i][strcspn(feedback[i], "\n")] = 0;
    }

    // -------------------------------
    // RESUMO FINAL
    // -------------------------------
    printf("\n=== RESUMO FINAL ===\n");
    for (i = 0; i < n; i++)
    {
        printf("Problema: %s | Garantia: %s | Prioridade: %d | Solucao: %s | Feedback: %s\n",
               vetorReclame[i],
               garantiaValida[i] ? "Sim" : "Nao",
               prioridade[i],
               resolucao[i],
               feedback[i]);
    }

    return 0;
}
