#include <stdio.h>

void findCubes(int *ptr, int rows, int cols) {
    for (int i = 0; i < rows * cols; i++) {
        ptr[i] = ptr[i] * ptr[i] * ptr[i];
    }
}

void display(int *ptr, int rows, int cols) {
    printf("\nCubes of array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", *(ptr + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes(&arr[0][0], rows, cols);
    display(&arr[0][0], rows, cols);

    return 0;
}
