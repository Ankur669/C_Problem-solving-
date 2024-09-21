#include <stdio.h>

int main() {
    int a = 10;          // Initialize integer variable 'a' with a value of 10
    int *b;              // Declare a pointer to an integer 'b'
    int **c;             // Declare a pointer to a pointer to an integer 'c'

    b = &a;              // Assign the memory address of 'a' to 'b'
    c = &b;              // Assign the memory address of 'b' to 'c'

    (*b)++;              // Increment the value of the integer pointed to by 'b' by 1
    (**c)++;             // Increment the value of the pointer 'b' itself by 1

    printf("a=%d\t b=%d\t c=%d", a, b, c);  // Print the values of 'a', 'b', and 'c'

    return 0;
}