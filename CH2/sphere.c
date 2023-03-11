//
// Created by Andrés Torres Rivera on 11/3/23.
//

#include <stdio.h>

#define PI_CONSTANT 3.1415f

int power_of_3(float x) {
    float result = 1;

    for (int i = 0; i < 3; i++)
        result *= x;
    printf("Computing power of 3: %f", result);

    return result;
}


int main(void) {
    float radius, volume;
    printf("Enter the value of the radius: ");
    scanf("%f", &radius);

    volume = 4 / 3 * PI_CONSTANT * (power_of_3(radius));

    printf("The volume of the sphere is: %f\n", volume);
    return 0;
}