#include <stdio.h>

// Function to perform insertion sort on an array
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

    // Sort the salaries using insertion sort
    insertionSort(salaries, n);

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




