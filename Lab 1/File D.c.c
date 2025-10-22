#include <stdio.h>

int main() {
    float mass, acceleration, force;

    // Prompt user for input
    printf("Enter mass (in kilograms): ");
    scanf("%f", &mass);

    printf("Enter acceleration (in meters per second squared): ");
    scanf("%f", &acceleration);

    // Calculate force using F = m * a
    force = mass * acceleration;

    // Display the result
    printf("The calculated force is: %.2f Newtons\n", force);

    return 0;
}
