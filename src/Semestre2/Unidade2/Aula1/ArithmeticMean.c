//
// Created by claud on 11/08/2025.
//

#include <stdio.h>

int main() {

    float grade1, grade2, mean;

    printf("Enter the first grade: ");
    scanf("%f", &grade1); // %f pois o tipo da variável é 'float'

    printf("Enter the second grade: ");
    scanf("%f", &grade2);

    mean = (grade1 + grade2) / 2;

    printf("The mean is: %.2f\n", mean); // %.2f -> duas casas após a virgula e 'f' pois o tipo é float

    return 0;
}
