#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            double numerator = 2 * i - 1;
            double denominator = 2 * i - 2;
            sum += numerator / denominator;
        }
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}