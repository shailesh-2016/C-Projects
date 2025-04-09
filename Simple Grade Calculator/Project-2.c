#include <stdio.h>
int main()
{
    int score;
    char grade;
    printf("Enter your score: ");
    scanf("%d", &score);
    grade = (score >= 90) ? 'A' : (score >= 80) ? 'B'
                              : (score >= 70)   ? 'C'
                              : (score >= 60)   ? 'D'
                                                : 'F';
    printf("Your grade is %c. ", grade);
    switch (grade)
    {
    case 'A':
        printf("Excellent work! ");
        break;
    case 'B':
        printf("Well done! ");
        break;
    case 'C':
        printf("Good job! ");
        break;
    case 'D':
        printf("You passed, but you could do better. ");
        break;
    case 'F':
        printf("Sorry, you failed. ");
        break;
    }
    if (grade != 'F')
    {
        printf("Congratulations! You are eligible for the next level.\n");
    }
    else
    {
        printf("Please try again next time.\n");
    }
    return 0;
}