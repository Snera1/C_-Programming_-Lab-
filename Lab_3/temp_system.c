#include <stdio.h>

int main() {
    float teptr;

    printf("Enter temperature of given machine (in degrees Celsius):\n");
    scanf("%f", &teptr);

    if (teptr > 60 && teptr <= 80) {
        printf("The machine is within safe bounds.\n");
    } else {
        printf("Danger! Initiate safety protocols.\n");
    }

    return 0;
}