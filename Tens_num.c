#include <stdio.h>

int main()
{
    int number, tens_digit, ones_digit, sum;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    // Extract the tens and ones digits
    tens_digit = number / 10;
    ones_digit = number % 10;

    // Calculate the sum of both digits
    sum = tens_digit + ones_digit;

    // Check if the sum is a multiple of seven
    if (sum % 7 == 0)
    {
        printf("The number %d has a sum of digits that is a multiple of seven.\n", number);
    }
    else 
    {
        printf("The number %d does not meet the criteria.\n", number);
    }

    return 0;
}