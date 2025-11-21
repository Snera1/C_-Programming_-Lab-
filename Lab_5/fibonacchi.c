#include <stdio.h>

int main() {
    int n;
    int first = 0, second = 1, next = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("There cannot be negative or zero number of terms\n");
    } else {
        printf("Fibonacci series\n");
        printf("-----------------------------\n");

        if (n >= 1) printf("%d ", first);
        if (n >= 2) printf("%d ", second);

        for (int i = 2; i < n; i++) {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
