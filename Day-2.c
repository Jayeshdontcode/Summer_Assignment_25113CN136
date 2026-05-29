#include<stdio.h>
int digit, number;
int SumOfDigits(number)
{
    int sum=0;
    while(number>0)
    {
        digit=number%10;
        sum=sum+digit;
        number/=10;
    }
    return sum;
}

int ReverseNumber(number)
{
    int reverse=0;
    while(number>0)
    {
        digit=number%10;
        reverse=reverse*10+digit;
        number/=10;
    }
    return reverse;
}

int ProductOfdigits(number)
{
    int Product=1;
    while(number>0)
    {
        digit=number%10;
        Product*=digit;
        number/=10;
    }
    return Product;
}

void Palindrome(number)
{
    if(number==(ReverseNumber(number)))
        printf("The given number is a palindrome.\n");
    else
        printf("The given number is not a palindrome.\n");
}

int main()
{
    int program;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number>0)
    {
        printf("Which program do you want to use?\n1. Sum of digits\n2. Reverse of a number\n3. Product of digits\n4. Check whether given number is palindrome or not?\n");
        scanf("%d",&program);
        switch(program)
        {
            case 1:
                printf("The sum of digits of the number %d is %d.\n",number, SumOfDigits(number));
                break;
            case 2:
                printf("The reverse of the number %d is %d.\n",number, ReverseNumber(number));
                break;
            case 3:
                printf("The product of digits of the number %d is %d.\n", number,ProductOfdigits(number));
                break;
            case 4:
                Palindrome(number);
                break;
            default:
                printf("Error! Please enter 1,2,3 or 4!\n");
        }
    }
    else
        printf("Please enter a positive number!\n");
    return 0;
}