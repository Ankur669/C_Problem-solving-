/**
 * C program to calculate gross salary of an employee
 */

#include <stdio.h>

int main()
{
    float basic, gross, da, hra;

    /* Input basic salary of employee */
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);


    /* Calculate D.A and H.R.A according to specified conditions */
    if(basic <= 4000)
    {
        da  = basic * 0.5;
        hra = basic * 0.1;
    }
    else if(basic <= 8000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    /* Calculate gross salary */
    gross = basic + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}