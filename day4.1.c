#include <stdio.h>

int main(void) {
    int first, second;

    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);

    first = first + second;
    second = first - second;
    first = first - second;

    printf("After swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    return 0;
}