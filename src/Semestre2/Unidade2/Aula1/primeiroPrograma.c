#include <stdbool.h>
#include <stdio.h>
//
// Created by claud on 11/08/2025.
//
int main() {
    printf("Hello, World!\n");

    char nome[100];
    int age = 12;
    double price = 15.99;
    char letter = 'L';
    bool isItRaining = true;

    printf("What's your name? ");
    scanf("%s", nome);
    printf("Welcolme, %s \n", nome);                                    // %s pois o tipo é 'string'
    printf("Age: %d \n", age);                                          // %d pois o tipo é 'int'
    printf("Letter: %c \n", letter);                                    // %c pois o tipo é 'char'
    printf("Price: $ %.2f \n", price);                                  // %f pois o tipo é 'flot'
    printf("Is it raining?: %s \n", isItRaining ? "Yes" : "No");        // %s pois o tipo que ele espera é 'string' (char)
    printf("End");

    return 0;
}
