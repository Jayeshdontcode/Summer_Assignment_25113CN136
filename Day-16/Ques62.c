#include <stdio.h>

void findMaxFrequencyElement(int array[], int size) {
    int i, j,count, maxCount=0, maxElement=array[0];

    for (i=0;i<size;i++) {
        count=0;
        for (j=0;j<size;j++)
        {
            if (array[i]==array[j]) 
            {
                count++;
            }
        }
        if (count>maxCount)
        {
            maxCount=count;
            maxElement=array[i];
        }
    }

    printf("Element with maximum frequency: %d\n", maxElement);
    printf("Frequency: %d\n", maxCount);
}

int main() {
    int n,array[50];;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }
    findMaxFrequencyElement(array, n);
    return 0;
}