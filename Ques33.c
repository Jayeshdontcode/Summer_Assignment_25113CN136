#include<stdio.h>

//Program to print reverse star pattern.

int main()
{
    int i,j,length;
    printf("This program is for printing a reverse star pattern.\nPlease enter the length of the pattern that you want:");
    scanf("%d",&length);
    if(length>0)
    {
        for(i=1;i<=length;i++)
        {
            for(j=1;j<=length-i+1;j++)
            {    
                printf("*");
            }
            printf("\n");
        }
    }
    else
        printf("Please enter a positive number!(Entering a non positve number is diabolical btw.)\n");
    return 0;
}