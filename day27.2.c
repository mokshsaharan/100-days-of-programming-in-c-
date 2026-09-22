#include <stdio.h>

int main() {
    int n = 4;

    // Upper half including the middle row
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}