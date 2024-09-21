#include <stdio.h>

int main() {
    int n, i, max, min, max_pos, min_pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];
    max_pos = min_pos = 0;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_pos = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_pos = i;
        }
    }

    printf("Maximum value: %d at position %d\n", max, max_pos + 1);
    printf("Minimum value: %d at position %d\n", min, min_pos + 1);

    return 0;
}