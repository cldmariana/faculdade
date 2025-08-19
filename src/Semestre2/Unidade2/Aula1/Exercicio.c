//
// Created by claud on 11/08/2025.
//

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define MIN_AGE 10
#define MAX_NAME 100

// Função para limpar o buffer de entrada. Essencial ao misturar scanf com fgets.
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char name[MAX_NAME];
    int age;
    int ticketNumber;
    bool needSpecialAssist;
    int assistOption; // Variável temporária para ler a escolha do usuário (1 ou 0)

    printf("======================================\n");
    printf("    BOARDING CHECK-IN SYSTEM\n");
    printf("======================================\n\n");
    printf("Boarding rule: Minimum age of %d years and no need for special assistance.\n\n", MIN_AGE);

    // 1 NOME
    printf("Passenger complete name: ");

    // fgets para ler nomes com espaços de forma segura
    fgets(name, MAX_NAME, stdin);

    // Remove o caractere de nova linha (\n) que o fgets captura
    name[strcspn(name, "\n")] = '\0';

    // 2 IDADE
    printf("Age: ");
    scanf("%d", &age);

    if (age < MIN_AGE) {
        printf("UNAUTHORIZED BOARDING. Reason: Age below %d.\n", MIN_AGE);
        return 0;
    }

    // 3 NUMERO DO BILHETE
    printf("Ticket number: ");
    scanf("%d", &ticketNumber);

    // 4 NECESSIDADE DE ASSISTENCIA
    printf("Need special assistance? (1 for 'YES' | 0 for 'NO')");
    scanf("%d", &assistOption);

    // Converte a opção (1 ou 0) para um valor booleano (true ou false)
    needSpecialAssist = (assistOption == 1);

    if (needSpecialAssist) {
        printf("UNAUTHORIZED BOARDING. Reason: Needs special assistance.");
    } else {
        printf("****************************************\n");
        printf("            AUTHORIZED BOARDING\n");
        printf("****************************************\n");
        printf("Passenger: %s.\n", name);
        printf("Age: %d years.\n", age);
        printf("Ticket No: %d.\n", ticketNumber);
        printf("\nHave a great trip!\n");
    }
    printf("\n");

    return 0;
}
