#include <stdio.h>
int main()
{
    int row, col;
    printf("enter row = ");
    scanf("%d", &row);

    printf("enter col = ");
    scanf("%d", &col);

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i< row; i++)
    {
        for (int j = 0; j< col; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }

    //sum

    printf("\nSum of row:\n");
    for(int i = 0; i < row; i++) {
        int rowSum = 0;
        for(int j = 0; j < col; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d sum = %d\n", i, rowSum);
    }

    printf("\nSum of each column:\n");
    for(int j = 0; j < col; j++) {
        int colSum = 0;
        for(int i = 0; i < row; i++) {
            colSum += arr[i][j];
        }
        printf("Column %d sum = %d\n", j, colSum);
    }
    
    return 0;
}