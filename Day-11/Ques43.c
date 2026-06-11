#include<stdio.h>

//This program checks whethere a number is prime or not.

int isprime(int number)
{
    int i, check=1;
    for(i=2;i<=number/2;i++)
    {
        check=((number%i==0)?0:1);
        if(check==0)
            break;
    }
    return check;
}

int main()
{
    int number;
    printf("This program checks whether a number is prime or not.\nPlease enter a number: ");
    scanf("%d",&number);
    if(isprime(number)==1)
        printf("The entered number is a prime number.\n");
    else
        printf("The entered number is not a prime number.\n");
    return 0;
}