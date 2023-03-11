//
// Created by Andrés Torres Rivera on 11/3/23.
//

#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter to factions to sum in the format of 'x/y+n/m': ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is: %d/%d\n", result_num, result_denom);

    return 0;
}