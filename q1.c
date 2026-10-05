#include <stdio.h>

int total(int arr[], int size)
{
    int sum = 0;
    int i;

    for(i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[10];
    int size;
    int i;
    int result;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter the elements:\n");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = total(arr, size);

    printf("Total = %d", result);

    return 0;
}