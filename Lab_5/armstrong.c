#include <stdio.h>
int main() {
    int num, original, n = 0, sum = 0;

    printf("Please enter a number: ");
    scanf("%d", &num);

    original = num;

    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;
    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, n);
        original /= 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
