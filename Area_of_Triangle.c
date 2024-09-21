#include<stdio.h>
int main()
{
    float b;
    float h;
    float area;
    printf("enter the value of b:");
    scanf("%f",&b);
    printf("enter the value for h:");
    scanf("%f",&h);
    area= (b*h)/2;
    printf("area = %.2f\n",area);
    return 0;
}
