#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    printf("Enter how many entries you want: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int t;
        printf("Enter your number: ");
        scanf("%d", &t);
        sum += t;
    }

    printf("Sum of all numbers = %.2f\n", sum);
    printf("Average of given numbers = %.2f\n", sum / n);

    return 0;
}
