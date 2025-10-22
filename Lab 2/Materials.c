#include <stdio.h>

int main() {
    float strength1, strength2;

    // Prompt user for input
    printf("Enter tensile strength of Material 1 (in MPa): ");
    scanf("%f", &strength1);

    printf("Enter tensile strength of Material 2 (in MPa): ");
    scanf("%f", &strength2);

    // Compare and display the larger tensile strength
    if (strength1 > strength2) {
        printf("The larger tensile strength is: %.2f MPa\n", strength1);
    } else if (strength2 > strength1) {
        printf("The larger tensile strength is: %.2f MPa\n", strength2);
    } else {
        printf("Both materials have equal tensile strength: %.2f MPa\n", strength1);
    }

    return 0;
}
