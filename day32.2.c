#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    if (scanf("%s", num) != 1) {
        return 0;
    }

    int freq[10] = {0};

    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            freq[num[i] - '0']++;
        }
    }

    int max_freq = 0;
    int most_frequent_digit = 0;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent_digit = i;
        }
    }

    printf("%d\n", most_frequent_digit);

    return 0;
}