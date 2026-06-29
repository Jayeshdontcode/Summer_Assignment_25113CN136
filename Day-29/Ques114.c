#include <stdio.h>

#define MAX 100

void display(int arr[], int n) 
{
    if(n==0) 
    {
        printf("Array is empty\n");
        return;
    }
    printf("Array elements: ");
    for(int i=0;i<n;i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert(int arr[], int *n) 
{
    if (*n>=MAX) 
    {
        printf("Array is full. Cannot insert more elements.\n");
        return;
    }
    int pos, value;
    printf("Enter position (1 to %d): ",*n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > *n + 1) 
    {
        printf("Invalid position.\n");
        return;
    }
    printf("Enter value to insert: ");
    scanf("%d", &value);
    for (int i=*n;i>=pos;i--) 
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    (*n)++;
    printf("Element inserted successfully.\n");
}

void delete(int arr[], int *n) 
{
    if (*n==0) {
        printf("Array is empty, Nothing to delete\n");
        return;
    }
    int pos;
    printf("Enter position (1 to %d): ", *n);
    scanf("%d", &pos);
    if (pos < 1 || pos > *n) 
    {
        printf("Invalid position.\n");
        return;
    }
    for (int i=pos-1;i<*n-1;i++) 
    {
        arr[i]=arr[i+1];
    }
    (*n)--;
    printf("Element deleted successfully\n");
}

void search(int arr[], int n) {
    if (n==0) 
    {
        printf("Array is empty.\n");
        return;
    }
    int value, found=0;
    printf("enter value to search: ");
    scanf("%d", &value);
    for (int i=0;i<n; i++) {
        if (arr[i]==value) 
        {
            printf("Value found at position %d.\n", i+1);
            found=1;
            break;
        }
    }
    if (!found) 
    {
        printf("Value not found in the array.\n");
    }
}

int main() 
{
    int arr[MAX], n = 0, choice;

    do {
        printf("\nMenu:\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                display(arr, n);
                break;
            case 2:
                insert(arr, &n);
                break;
            case 3:
                delete(arr, &n);
                break;
            case 4:
                search(arr, n);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice!=5);
    return 0;
}