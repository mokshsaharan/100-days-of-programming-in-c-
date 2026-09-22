#include <stdio.h>

int main() {
    int n, pos, val;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (scanf("%d %d", &pos, &val) != 2) {
        return 0;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;

    for (int i = 0; i <= n; i++) {
        printf("%d", arr[i]);
        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}