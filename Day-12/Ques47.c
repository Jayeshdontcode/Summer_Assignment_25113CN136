#include<stdio.h>

//this program is for finding fibonacci series.

void fibonacci(int number)
{
    int first=0, second=1, third;
    if(number==1)
        printf("0\n");
    else if(number==2)
        printf("0\n1\n");
    else if(number>=3)
    {
        printf("0\n1\n");
        while(number>2)
        {
            third=first+second;
            printf("%d\n",third);
            first=second;
            second=third;
            number-=1;
        }
    }
    else
        printf("Please enter a positive number!\n");
}

int main()
{
    int number;
    printf("Enter a number to print that many terms of the fibonacci series: ");
    scanf("%d",&number);
    fibonacci(number);
    return 0;
}