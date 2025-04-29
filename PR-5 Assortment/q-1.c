#include <stdio.h>
int main()
{
    int size;
    printf("enter arr size : ");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter arr value %d= ", i + 1);
        scanf("\n %d", &arr[i]);
    }

    printf("negative elements of arr are : ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }
}