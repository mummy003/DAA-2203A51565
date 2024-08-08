#include <stdio.h>

#define MAX_TIMES 100

void sort_descending(int times[], int n) {
    int temp;
    // Sort array in descending order using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (times[i] < times[j]) {
                temp = times[i];
                times[i] = times[j];
                times[j] = temp;
            }
        }
    }
}

int main() {
    int n, times[MAX_TIMES];

    // Input number of times
    printf("Enter the number of times: ");
    scanf("%d", &n);

    // Input times
    printf("Enter time to reach destination:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &times[i]);
    }

    // Sort times in descending order
    sort_descending(times, n);

    // Print sorted times
    printf("Sorted times in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%10d\n", times[i]);
    }

    return 0;
}

