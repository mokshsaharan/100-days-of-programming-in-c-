#include <stdio.h>

int main(void) {
    int first, second, third, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &first, &second, &third);

    if (first >= second && first >= third) {
        largest = first;
    } else if (second >= first && second >= third) {
        largest = second;
    } else {
        largest = third;
    }

    printf("The largest number is %d.\n", largest);

    return 0;
}