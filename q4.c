#include <stdio.h>

void reverse(int arr[], int size)
{
    int i;
    int temp;

    for(i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int arr[10] ;
    int i,size;
   
    printf("Enter the number of elements : ");
    scanf("%d", &size);

    printf("Enter the elements :\n");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, size);

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}