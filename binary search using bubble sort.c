#include <stdio.h>

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x is greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, the element was not present
    return -1;
}

int main() {
    // Employee Salaries in USD (unsorted)
    int salaries[] = {2000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    int n = sizeof(salaries) / sizeof(salaries[0]);

    // Sort the salaries using bubble sort
    bubbleSort(salaries, n);

    // Print the sorted array
    printf("Sorted Salaries: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", salaries[i]);
    }
    printf("\n");

    int searchSalary = 4000; // Salary to find (e.g., Arun's salary)

    // Perform binary search
    int result = binarySearch(salaries, 0, n - 1, searchSalary);

    // Output the result
    if (result != -1)
        printf("Salary %d is present at index %d.\n", searchSalary, result);
    else
        printf("Salary %d is not present in the array.\n", searchSalary);

    return 0;
}


