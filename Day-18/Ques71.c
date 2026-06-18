#include <stdio.h>

void binarySearch(int arr[], int size, int target) {
    int low=0,high=size-1, mid;

    while(low<=high) 
    {
        mid=(low+high)/2;
        if(arr[mid]==target) 
        {
            printf("Element %d found at index %d.\n", target, mid);
            return;
        } 
        else if (arr[mid] < target) 
        {
            low=mid+1;
        } 
        else 
        {
            high=mid-1;
        }
    }

    printf("Element %d not found in the array.\n", target);
}

int main() 
{
    int n,i, target,arr[50];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order:\n", n);
    for (i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    binarySearch(arr, n, target);
    return 0;
}