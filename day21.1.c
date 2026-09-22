#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, num;

    scanf("%d", &n);

    last = n % 10;
    digits = (int)log10(n);
    first = n / pow(10, digits);

    if (n < 10) {
        printf("%d\n", n);
        return 0;
    }

    num = n % (int)pow(10, digits);
    num = num / 10;

    int result = last * pow(10, digits) + num * 10 + first;

    printf("%d\n", result);

    return 0;
}