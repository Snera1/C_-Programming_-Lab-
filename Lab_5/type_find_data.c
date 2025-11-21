#include <stdio.h>

int main() {
    char letter;

    printf("Enter a letter, character, number or symbol: ");
    scanf("%c", &letter);

    if (letter >= 'A' && letter <= 'Z') {
        printf("Given input is upper case\n");
    } else if (letter >= 'a' && letter <= 'z') {
        printf("Given input is lower case\n");
    } else if (letter >= '0' && letter <= '9') {
        printf("Given input is a number\n");
    } else {
        printf("Given input is a special symbol\n");
    }
    return 0;
}
