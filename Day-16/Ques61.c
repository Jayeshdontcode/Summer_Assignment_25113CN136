#include <stdio.h>

int findMissingNumber(int array1[], int size1, int array2[], int size2) {
    int i,sum1=0, sum2=0;

    for (i=0;i<size1;i++)
    {
        sum1+=array1[i];
    }

    for (i=0;i<size2;i++)
    {
        sum2+=array2[i];
    }

    return sum1-sum2;
}

int main() {
    int i,n,array1[50],array2[49];

    printf("Enter the size of the first array: ");
    scanf("%d", &n);

    printf("Enter the elements of the first array:\n");
    for (i=0;i<n;i++) 
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter the elements of the second array (one number missing):\n");
    for (i=0;i<n-1;i++) 
    {
        scanf("%d", &array2[i]);
    }

    int missingNumber = findMissingNumber(array1, n, array2, n - 1);
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}