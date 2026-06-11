#include<stdio.h>

//this program finds the factorial of a number.

int factorial(int number)
{
    int factorial=1;
    while(number>0)
    {
        factorial=factorial*number;
        number=number-1;
    }
    return factorial;
}

int main()
{
    int number;
    printf("This programs finds the factorial of a number.\nPlease enter a number: ");
    scanf("%d",&number);
    printf("The factorial of %d is %d\n",number, factorial(number));
    return 0;
}
