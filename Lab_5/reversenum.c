#include <stdio.h>

int main() {
    int num;
    int digit;
    int reversed = 0;
    int original;

    printf("Enter number: ");
    scanf("%d", &num);
    original = num;

    while (original != 0) {
        digit = original % 10;
        reversed = reversed * 10 + digit;
        original = original / 10;
    }
    printf("Reversed = %d\n", reversed);
    return 0;
}
