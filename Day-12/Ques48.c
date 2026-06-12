#include<stdio.h>

//this program checks whether a number perfect or not.

void isPerfect(int number)
{
    int sum=0,i;
    for(i=1;i<=number/2;i++)
    {
        if(number%i==0)
            sum=sum+i;
    }
    if(sum==number)
        printf("The given number is perfect.\n");
    else
        printf("The given number is NOT perfect.\n");
}

int main()
{
    int number;
    printf("Enter a number to check whether it's perfect or not: ");
    scanf("%d",&number);
    isPerfect(number);
    return 0;
}