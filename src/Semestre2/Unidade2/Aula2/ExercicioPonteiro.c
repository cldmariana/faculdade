#include <stdio.h>
//
// Created by claud on 14/08/2025.
//
int main()
{
    int temperatura = 21;

    int *ponteiroTemperatura = &temperatura;

    printf("A temperatura atual é de %d graus celsius.", *ponteiroTemperatura);
}
