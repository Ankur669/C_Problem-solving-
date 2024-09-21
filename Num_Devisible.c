#include <stdio.h>

int main() 
{
    int i;
    int firstNumber, secondNumber;
    int firstDivisorSum = 0;
    int secondDivisorSum = 0;

    printf("Enter two numbers to check if they are amicable or not: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    // Calculate the sum of divisors for the first number
    for (i = 1; i < firstNumber; i++)
    {
        if (firstNumber % i == 0)
        {
            firstDivisorSum += i;
        }
    }

    // Calculate the sum of divisors for the second number
    for (i = 1; i < secondNumber; i++) 
    {
        if (secondNumber % i == 0)
        {
            secondDivisorSum += i;
        }
    }

    // Check if the sums of divisors match
    if ((firstNumber == secondDivisorSum) && (secondNumber == firstDivisorSum))
    {
        printf("%d and %d are amicable numbers.\n", firstNumber, secondNumber);
    } else 
    {
        printf("%d and %d are not amicable numbers.\n", firstNumber, secondNumber);
    }

    return 0;
}