#include<stdio.h>

//this program is to check whether a number is palindomre or not.

void palindrome(int number)
{
    int reverse=0,digit,temporary=number;
    while(temporary>0)
    {
        digit=temporary%10;
        reverse=reverse*10+digit;
        temporary/=10;
    }
    if(number==reverse)
        printf("The given number is a palindrome.\n");
    else
        printf("The given number is NOT a palindrome.\n");
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not: ");
    scanf("%d",&number);
    palindrome(number);
    return 0;
}