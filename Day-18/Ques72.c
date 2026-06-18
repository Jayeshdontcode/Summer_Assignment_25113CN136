#include <stdio.h>

void sortDescending(int arr[], int n) 
{
    int i,j,temp;
    for(i=0;i<n-1;i++) 
    {
        for (j=0;j<n-i-1;j++) 
        {
            if(arr[j]<arr[j+1]) 
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main() 
{
    int n,i,arr[50];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }
    sortDescending(arr, n);
    printf("Array in descending order:\n");
    for(i=0;i<n;i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}