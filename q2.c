#include <stdio.h>

int lastOccurrence(int arr[], int size, int number)
{
    int i;

    for(i = size - 1; i >= 0; i--)
    {
        if(arr[i] == number)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[10];
    int size;
    int number;
    int i;
    int result;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter the elements:\n");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number : ");
    scanf("%d", &number);

    result = lastOccurrence(arr, size, number);

    printf("Last occurrence = %d", result);

    return 0;
}