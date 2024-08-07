#include <stdio.h>

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf("\n");
}

int main() {
    // Test Case 1
    int orders1[] = {87, 67, 21, 59, 99, 46, 84, 32, 43, 12, 90, 23};
    int n1 = sizeof(orders1) / sizeof(orders1[0]);
    printf("Test Case 1\nInput:\nEnter orders Priority Number:\n");
    printArray(orders1, n1);

    insertionSort(orders1, n1);
    printf("\nAfter Sorting Orders Priority:\n");
    printArray(orders1, n1);

    // Test Case 2
    int orders2[] = {44, 66, 37, 90, 81, 43, 55, 19, 98, 33, 72, 51};
    int n2 = sizeof(orders2) / sizeof(orders2[0]);
    printf("\nTest Case 2\nInput:\nEnter orders Priority Number:\n");
    printArray(orders2, n2);

    insertionSort(orders2, n2);
    printf("\nAfter Sorting Orders Priority:\n");
    printArray(orders2, n2);

    return 0;
}
