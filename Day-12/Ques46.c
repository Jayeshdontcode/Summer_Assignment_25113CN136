#include<stdio.h>

//this program finds whether a number is armstrong or not.

void isArmstrong(int number)
{
    int digit,i, power=1,length=0,temporary,sum=0;
    temporary=number;
    while(temporary>0)
    {
        length=length+1;
        temporary/=10;
    }
    temporary=number;
    while(temporary>0)
    {
        digit=temporary%10;
        for(i=1;i<=length;i++)
        {
            power=power*digit;
        }
        sum=sum+power;
        temporary/=10;
        power=1;
    }
    if(number==sum)
        printf("The entered number is an armstrong number.\n");
    else
        printf("The entered number is not an armstrong number.\n");
}

int main()
{
    int number;
    printf("Enter a number to check whether it is an armstrong number or not: ");
    scanf("%d",&number);
    isArmstrong(number);
    return 0;
}
