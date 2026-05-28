#include<stdio.h>
void Natural_numbers(int n)
{   
    int i,sum=0;
    
    
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is %d\n",n, sum);
    
}
void Multiplication_table(int n)
{
    int i;
    printf("The table of %d is:\n",n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
void Factorial(int n)
{
    int i,factorial=1;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of %d is %d\n",n,factorial);
}
void CountDigits(int n)
{
    int length=0,temporary;
    temporary=n;
    while(temporary>0)
    {
        length=length+1;
        temporary/=10;
    }
    printf("The number of digits in %d is %d\n",n,length);
}
int main()
{
    int n,program;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Which program do you want to run:\n1. Sum of natural numbers\n2. Multiplication table of a number\n3. Factorial of a number\n4. Counting the number of digits in a number\n");
        scanf("%d",&program);
        switch(program)
        {
            case 1:
                Natural_numbers(n);
                break;
            case 2:
                Multiplication_table(n);
                break;
            case 3:
                Factorial(n);
                break;
            case 4:
                CountDigits(n);
                break;
            default:
                printf("Error! Please enter 1,2,3 or 4\n");
        }
    }
    else   
        printf("Please enter a positive number!\n");
    return 0;
}