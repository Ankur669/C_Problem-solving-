#include <stdio.h>

// Function to merge two arrays into one
void mergeArrays(int arr1[], int arr2[], int m, int n, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1[], if any
    while (i < m) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2[], if any
    while (j < n) {
        merged[k++] = arr2[j++];
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int merged[m + n];
    mergeArrays(arr1, arr2, m, n, merged);

    printf("Sorted merged array: ");
    printArray(merged, m + n);

    return 0;
}