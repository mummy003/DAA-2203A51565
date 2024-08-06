#include <stdio.h>
void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void bubble_sort_descending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
            
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int prices1[] = {399, 129, 499, 249};
    int prices2[] = {99, 149, 349, 299};
    int n1 = sizeof(prices1) / sizeof(prices1[0]);
    int n2 = sizeof(prices2) / sizeof(prices2[0]);

    bubble_sort(prices1, n1);
    printf("After Sorting Song Prices (Test Case 1):\n");
    for (int i = 0; i < n1; i++) {
        printf("%03d", prices1[i]);
        if (i < n1 - 1) printf("\n");
    }
    printf("\n");
    bubble_sort_descending(prices2, n2);
    printf("After Sorting Song Prices (Test Case 2):\n");
    for (int i = 0; i < n2; i++) {
        printf("%03d", prices2[i]);
        if (i < n2 - 1) printf("\n");
    }
    printf("\n");

    return 0;
}
