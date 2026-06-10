#include<stdio.h>

//this program is for printing a character pyramid.

int main()
{
    int i,j,k,length;
    printf("This program is for printing a character pyramid pattern.\nPlease enter the length of the pattern that you want to have: ");
    scanf("%d",&length);
    if(length>0 && length<27){
    for(i=1;i<=length;i++)
    {
        for(j=1;j<=length-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=((2*i)-1);k++)
        {
            printf("%c",(k<=i?(k+64):((2*i)-k)+64));
        }
        printf("\n");
    }}
    else 
        printf("Please enter a number between 1 and 26!\n");
    return 0;
}
