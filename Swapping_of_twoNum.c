#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value pf b;");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping of a and b\n");
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;
}