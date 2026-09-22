#include <stdio.h>

int main() {
    int n, key;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;

    for (int j = 0; j <= n; j++) {
        printf("%d", arr[j]);
        if (j < n) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}