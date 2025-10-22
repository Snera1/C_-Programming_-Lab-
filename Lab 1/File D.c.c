// File name: kinetic_energy.c
#include <stdio.h>

int main() {
    float mass, velocity, kinetic_energy;

    // Prompt user for input
    printf("Enter mass (in kilograms): ");
    scanf("%f", &mass);

    printf("Enter velocity (in meters per second): ");
    scanf("%f", &velocity);

    // Calculate kinetic energy
    kinetic_energy = 0.5 * mass * velocity * velocity;

    // Display the result
    printf("The kinetic energy is: %.2f Joules\n", kinetic_energy);

    return 0;
}
