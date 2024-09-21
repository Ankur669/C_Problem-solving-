#include<stdio.h>

int main()

{
    

 int price, quant;
    printf("enter price and qunatity of items: ");
    scanf("%d %d", &price, &quant);

int sum=price * quant;

int total ;

printf(" total price %d", sum);

if( sum< 1000)

{

    int d=(sum* 5)/100;

    total=sum-d;

}

else if(sum>1000 && sum<5000)

{

    int d=(sum* 10)/100;

    total=sum-d;

}

else if( sum>5000)

{

    int d=(sum* 15)/100;

    total=sum-d;

}
{
    printf ("final price =%d  discount=%d \n", total);
}
    return 0;
}