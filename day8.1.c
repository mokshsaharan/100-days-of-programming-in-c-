#include <stdio.h>

int main(void) {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (character >= 'A' && character <= 'Z') {
        printf("It is an uppercase alphabet.\n");
    } else if (character >= 'a' && character <= 'z') {
        printf("It is a lowercase alphabet.\n");
    } else if (character >= '0' && character <= '9') {
        printf("It is a digit.\n");
    } else {
        printf("It is a special character.\n");
    }

    return 0;
}