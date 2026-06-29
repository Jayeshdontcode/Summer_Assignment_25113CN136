#include <stdio.h>
#include <string.h>

void stringLength(char str[]) 
{
    printf("Length of the string: %lu\n", strlen(str));
}

void stringCopy(char str[]) 
{
    char copy[100];
    strcpy(copy, str);
    printf("Copied string: %s\n", copy);
}

void stringConcat(char str[]) 
{
    char toConcat[100];
    printf("Enter string to concatenate: ");
    scanf(" %[^\n]", toConcat);
    strcat(str, toConcat);
    printf("Concatenated string: %s\n", str);
}

void stringCompare(char str[]) 
{
    int result;
    char toCompare[100];
    printf("Enter string to compare: ");
    scanf(" %[^\n]", toCompare);
    result=strcmp(str, toCompare);
    if (result==0) 
    {
        printf("Strings are equal.\n");
    } else if (result>0) 
    {
        printf("First string is greater.\n");
    } else {
        printf("Second string is greater.\n");
    }
}

int main() 
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do {
        printf("\nMenu:\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. concatenate String\n");
        printf("4. compare Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                stringLength(str);
                break;
            case 2:
                stringCopy(str);
                break;
            case 3:
                stringConcat(str);
                break;
            case 4:
                stringCompare(str);
                break;
            case 5:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice! please try again\n");
        }
    } while (choice!=5);
    return 0;
}