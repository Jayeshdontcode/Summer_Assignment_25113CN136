#include<stdio.h>

//This program is for printing a reverse number triangle.

int main()
{
    int i,j,length;
    printf("This program is for printing a reverse number triangle.\nPlease enter the length of the patter than you want to have:");
    scanf("%d",&length);
    if(length>0)
    {
        for(i=1;i<=length;i++)
        {
            for(j=1;j<=length-i+1;j++)
            {    
                printf("%d",j);
            }
            printf("\n");
        }
    }
    else
        printf("Please enter a positive number!(Entering a non positve number is diabolical btw.)\n");
    return 0; 
}