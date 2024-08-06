#include <stdio.h>
void selection_sort(int arr[], int n) {
    int i, j, min_index, temp;

    for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        
        if (min_index != i) {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

int main() {
    int product_ids1[] = {87, 67, 21, 59, 99, 46, 84, 32, 43, 12, 90, 23};
    int product_ids2[] = {64, 56, 21, 90, 32, 87, 59, 60, 43, 10, 29, 74};
    int n1 = sizeof(product_ids1) / sizeof(product_ids1[0]);
    int n2 = sizeof(product_ids2) / sizeof(product_ids2[0]);
    selection_sort(product_ids1, n1);
    printf("After Sorting Product IDs (Test Case 1):\n");
    for (int i = 0; i < n1; i++) {
        printf("%d", product_ids1[i]);
        if (i < n1 - 1) printf(", ");
    }
    printf("\n");
    selection_sort(product_ids2, n2);
    printf("After Sorting Product IDs (Test Case 2):\n");
    for (int i = 0; i < n2; i++) {
        printf("%d", product_ids2[i]);
        if (i < n2 - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
