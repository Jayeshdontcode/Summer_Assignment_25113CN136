#include<stdio.h>

//This program is for printing a repeated character pattern..

int main()
{
    int i,j,length;
    char character;
    printf("This program is for printing a repeated character pattern.\nPlease enter the length of the patter than you want to have:");
    scanf("%d",&length);
    if(length>0 && length<=26)
    {
        for(i=1;i<=length;i++)
        {
            for(j=1;j<=i;j++)
            {   
                character=64+j; 
                printf("%c",character);
            }
            printf("\n");

        }
    }
    else
        printf("Please enter a number between 1 and 26!\n");
    return 0; 
}