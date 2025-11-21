#include <stdio.h>

int main() {
    double mass, velocity, kinetic_energy;

    printf("Enter mass (kg): ");
    if (scanf("%lf", &mass) != 1 || mass < 0) {
        printf("Invalid mass!\n");
        return 1;
    }

    printf("Enter velocity (m/s): ");
    if (scanf("%lf", &velocity) != 1 || velocity < 0) {
        printf("Invalid velocity!\n");
        return 1;
    }

    kinetic_energy = 0.5 * mass * velocity * velocity;

    printf("Kinetic Energy = %.2lf Joules\n", kinetic_energy);

    return 0;
}

