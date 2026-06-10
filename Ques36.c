#include<stdio.h>

//Program to print a hollow square pattern.

int main()
{
    int i,j,k,length;
    printf("This program is for printing a hollow square pattern.\nPlease enter the length of the patter than you want to have:");
    scanf("%d",&length);
    if(length>0){
    for(i=1;i<=length;i++)
    {   
        printf("*");
    }
    printf("\n");
    for(j=1;j<length-1;j++)
    {
        printf("*");
        for(k=1;k<length-1;k++)
        {
            printf(" ");
        }
        printf("*\n");

    }
    for(i=1;i<=length;i++)
    {   
        printf("*");
    }
    printf("\n");
    }   
    else
        printf("Please enter a positive number!\n");
    return 0;
}
