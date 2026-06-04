#include<stdio.h>

int isprime(int number_1)
{
    int i, check=1;
    for(i=2;i<=number_1/2;i++)
    {
        check=((number_1%i==0)?0:1);
        if(check==0)
            break;
    }
    return check;
}

void printprimes(int number_1, int number_2)
{
    int i,updater=0;
    printf("prime number between %d and %d are:\n",number_1, number_2);
    for(i=(number_1<number_2?number_1:number_2); i<=(number_1>number_2?number_1:number_2);i++)
    {
        if((isprime(i))==1)
        {
            printf("%d\n",i);
            updater=1;
        }
    }
    if(updater==0)
        printf("\n\n\nwell, there are no primes...are you dumb?\n");
}

int GCD(int number_1, int number_2)
{
    int GCD=1,i;
    for(i=2;i<=(number_1>number_2?number_2:number_1);i++)
    {
        if((number_1%i==0)&&(number_2%i==0))
        {
            GCD=i;
        }
    }
    return GCD;    
}

int LCM(int number_1, int number_2)
{
    int LCM;
    LCM=(number_1*number_2)/GCD(number_1, number_2);
    return LCM;
}

int main()
{
    int number_1, number_2,choice;
    printf("Which program do you want to run?\n1. Check whether a number is prime or not?\n2. Print prime numbers in a range\n3. Find the GCD of two numbers\n4. Find the LCM of two numbers\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Please enter a number:\n");
            scanf("%d",&number_1);
            if(number_1<=0)
                printf("Please enter a positive number!\n");
            else
            {
                if((isprime(number_1)==0))
                    printf("This number is NOT a prime number.\n");
                else
                    printf("This number IS a prime number.\n");
            }
            break;
        case 2:
            printf("Please enter the start of the range:\n");
            scanf("%d",&number_1);
            printf("Please enter the end of the range:\n");
            scanf("%d",&number_2);
            if(number_1>0 && number_2>0)
                printprimes(number_1, number_2);
            else
                printf("Please enter positive numbers!\n");
            break;
        case 3:
            printf("Please enter the first number:\n");
            scanf("%d",&number_1);
            printf("Please enter the second number:\n");
            scanf("%d",&number_2);
            if(number_1>0 && number_2>0)
                printf("The GCD of %d and %d is %d.\n",number_1, number_2, GCD(number_1, number_2));
            else
                printf("Please enter positive numbers!\n");
            break;
        case 4:
            printf("Please enter the first number:\n");
            scanf("%d",&number_1);
            printf("Please enter the second number:\n");
            scanf("%d",&number_2);
            if(number_1>0 && number_2>0)
                printf("The LCM of %d and %d is %d.\n",number_1, number_2, LCM(number_1, number_2));
            else
                printf("Please enter positive numbers!\n");
            break;
        default:
            printf("Please select between 1,2,3 or 4!\n");       
   }
   return 0;
}
