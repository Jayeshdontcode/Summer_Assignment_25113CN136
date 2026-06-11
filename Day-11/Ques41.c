#include<stdio.h>

//This program does addition of two numbers using functions.

int addition(int number_1, int number_2)
{
    int sum;
    sum=number_1+number_2;
    return sum;
}

int main()
{
    int number_1, number_2;
    printf("This program adds two numbers.\nEnter the first number:");
    scanf("%d",&number_1);
    printf("Enter the 2nd number: ");
    scanf("%d", &number_2);
    printf("The addition of these two numbers is %d\n", addition(number_1, number_2));
    return 0;
}