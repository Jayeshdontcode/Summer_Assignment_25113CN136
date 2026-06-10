#include<stdio.h>

//this program is for printing a reverse star pyramid.

int main()
{
    int i,j,k,length;
    printf("This program is for printing a reverse star pyramid pattern.\nPlease enter the length of the pattern that you want to have: ");
    scanf("%d",&length);
    if(length>0){
    for(i=1;i<=length;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*(length-i)+1);k++)
        {
            printf("*");
        }
        printf("\n");
    }}
    else 
        printf("Please enter a number bigger than zero!\n");
    return 0;
}
