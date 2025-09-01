#include <stdio.h>
//
// Created by claud on 31/08/2025.
//
void moveTorre(int n, char origem, char destino, char intermediario)
{
    if (n == 1)
    {
        printf("Mova o disco de %c para %c\n", origem, destino);
        return;
    }
    moveTorre(n - 1, origem, intermediario, destino);
    printf("Mova o disco de %c para %c\n", origem, destino);
    moveTorre(n - 1, intermediario, destino, origem);
}


int main()
{
    moveTorre(3, 'A', 'B', 'C');
}
