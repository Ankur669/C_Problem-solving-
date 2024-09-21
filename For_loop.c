#include <stdio.h>

int main() {
    int i, j, n = 6; // Initialize three integer variables i, j, and n, and set n to 6

    for (i = 0; i < n; i++) { // Loop from 0 to n-1 (5 times in this case)
        for (j = 0; j < i; j++) { // Loop from 0 to i-1 (0 times on the first iteration, 1 time on the second, etc.)
            printf("\t"); // Print a tab character
        }
        printf("\n"); // Print a newline character
    }

    return 0; // Exit the program with a status code of 0
}