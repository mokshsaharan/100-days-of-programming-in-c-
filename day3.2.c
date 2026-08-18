#include <stdio.h>

int main(void) {
    int first, second, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);

    temp = first;
    first = second;
    second = temp;

    printf("After swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    return 0;
}