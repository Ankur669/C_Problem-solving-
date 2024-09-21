#include <stdio.h>

int main()
{
    int number;
    int hasThreeConsecutiveFives = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        if (number % 10 == 5)
        {
            // Check if the next two digits are also 5
            if ((number / 10) % 10 == 5 && (number / 100) % 10 == 5) {
                hasThreeConsecutiveFives = 1;
                break;
            }
        }
        number /= 10;
    }

    if (hasThreeConsecutiveFives) {
        printf("YES\n");
    }
     else 
    {
        printf("NO\n");
    }

    return 0;
}