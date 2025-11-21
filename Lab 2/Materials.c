#include <stdio.h>
#include <math.h>

int main() {
    double strength1, strength2;

    printf("Enter tensile strength of Material 1 (MPa): ");
    if (scanf("%lf", &strength1) != 1 || strength1 < 0) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Enter tensile strength of Material 2 (MPa): ");
    if (scanf("%lf", &strength2) != 1 || strength2 < 0) {
        printf("Invalid input!\n");
        return 1;
    }
    if (strength1 == strength2) {
        printf("Both materials have equal tensile strength: %.2lf MPa\n", strength1);
    } else {
        printf("The larger tensile strength is: %.2lf MPa\n", fmax(strength1, strength2));
    }
    return 0;
}
