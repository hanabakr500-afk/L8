#include <stdio.h>

void swapArrays(int arr1[], int arr2[], int size)
{
    int i;
    int temp;

    for(i = 0; i < size; i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main()
{
    int arr1[10] ;
    int arr2[10] ;
    int i,size1,size2;
     printf("Enter the number of elements of arr1: ");
    scanf("%d", &size1);

    printf("Enter the elements of arr1:\n");

    for(i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

       printf("Enter the number of elements of arr2: ");
    scanf("%d", &size2);

    printf("Enter the elements of arr2:\n");

    for(i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    swapArrays(arr1, arr2, 3);

    for(i = 0; i < 10; i++)
        printf("%d ", arr1[i]);

    printf("\n");

    for(i = 0; i < 10; i++)
        printf("%d ", arr2[i]);

    return 0;
}