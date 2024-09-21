#include <stdio.h>

int main()
{
    float salary, tax = 0;
                                                                                                                                                                                                                                                                   
    printf("Enter the basic salary: ");
    scanf("%f", &salary);

    if (salary >= 1000000)
    {
        tax = salary * 15/100;
    }
    else if (salary >= 500000)
    {
        tax = salary * 5/100;
    }
    else if (salary >= 250000)
    {
        tax = salary * 2.5/100;
    }

    printf("Tax calculated: %0.2f\n", tax);

    return 0;
}