#include<stdio.h>

//This program finds out the maximum of two numbers.

int maximum(int number_1, int number_2)
{
    int maximum;
    maximum=number_1>number_2?number_1:number_2;
    return maximum;
}

int main()
{
    int number_1, number_2;
    printf("This program finds the maximum of two numbers.\nEnter the first number:");
    scanf("%d",&number_1);
    printf("Enter the 2nd number: ");
    scanf("%d", &number_2);
    printf("The maximum of these two numbers is %d\n", maximum(number_1, number_2));
    return 0;
}