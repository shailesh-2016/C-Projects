#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int modulus(int a, int b)
{
    return a % b;
}

int main()
{
    int choice, a, b;

    printf("\nPress 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %%\n");
    printf("Press 0 for the exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 0)
    {
        printf("Exiting the program.\n");
        return 0;
    }

    if (choice >= 1 && choice <= 5)
    {
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
    }

    switch (choice)
    {
    case 1:
        printf("Addition of %d and %d is %d\n", a, b, add(a, b));
        break;
    case 2:
        printf("Subtraction of %d and %d is %d\n", a, b, subtract(a, b));
        break;
    case 3:
        printf("Multiplication of %d and %d is %d\n", a, b, multiply(a, b));
        break;
    case 4:
        if (b != 0)
            printf("Division of %d and %d is %d\n", a, b, divide(a, b));
        else
            printf("Error: Cannot divide by zero.\n");
        break;
    case 5:
        if (b != 0)
            printf("Modulus of %d and %d is %d\n", a, b, modulus(a, b));
        else
            printf("Error: Cannot modulus by zero.\n");
        break;
    default:
        printf("Invalid choice. Please enter a valid option.\n");
    }

    return 0;
}
