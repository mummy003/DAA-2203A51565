#include <stdio.h>

// Function to perform binary search on a sorted array of salaries
int binarySearchSalary(int arr[], int low, int high, int salary) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the salary is present at mid
        if (arr[mid] == salary)
            return mid;

        // If the salary is greater, ignore the left half
        if (arr[mid] < salary)
            low = mid + 1;

        // If the salary is smaller, ignore the right half
        else
            high = mid - 1;
    }

    // If we reach here, the element was not present
    return -1;
}

int main() {
    // Employee Salaries in USD (sorted in ascending order)
    int salaries[] = {2000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    int n = sizeof(salaries) / sizeof(salaries[0]);

    int searchSalary = 4000; // Arun's salary

    // Perform binary search
    int result = binarySearchSalary(salaries, 0, n - 1, searchSalary);

    // Output the result
    if (result != -1)
        printf("Salary %d is present at index %d.\n", searchSalary, result);
    else
        printf("Salary %d is not present in the array.\n", searchSalary);

    return 0;
}

