#include<stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("Elligible");
    }
    else
    {
        printf("not elligible");
    }
    return 0;
}