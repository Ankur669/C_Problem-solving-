#include <stdio.h>

int main()
{
    int n, i, product, sum = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the integers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        product = arr[i] * arr[i + 1];
        sum += product;
    }

    printf("The sum of the product of consecutive numbers is: %d\n", sum);
    return 0;
}