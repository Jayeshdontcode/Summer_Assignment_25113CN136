#include<stdio.h>

//this program is for printing a number pyramid.

int main()
{
    int i,j,k,length;
    printf("This program is for printing a number pyramid pattern.\nPlease enter the length of the pattern that you want to have: ");
    scanf("%d",&length);
    if(length>0){
    for(i=1;i<=length;i++)
    {
        for(j=1;j<=length-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=((2*i)-1);k++)
        {
            printf("%d",(k<=i?k:(2*i)-k));
        }
        printf("\n");
    }}
    else 
        printf("Please enter a number bigger than zero!\n");
    return 0;
}
