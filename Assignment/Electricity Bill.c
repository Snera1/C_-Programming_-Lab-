#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2;
    } else (units <= 300) {
        bill = 100 * 1.5 + 100 * 2 + (units - 200) * 3;
    } else {
        bill = 100 * 1.5 + 100 * 2 + 100 * 3 + (units - 300) * 5;
    }

    printf("Total Bill = ₹%d", bill);

    return 0;

}
