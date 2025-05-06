#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int chem, math, phy;
    float percent;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Chemistry: ");
        scanf("%d", &s[i].chem);
        printf("Mathematics: ");
        scanf("%d", &s[i].math);
        printf("Physics: ");
        scanf("%d", &s[i].phy);

        s[i].percent = (s[i].chem + s[i].math + s[i].phy) / 3.0;
    }

    printf("\n----- Student Marksheet -----\n");
    for(i = 0; i < 5; i++) {
        printf("\nName: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Chemistry: %d\n", s[i].chem);
        printf("Mathematics: %d\n", s[i].math);
        printf("Physics: %d\n", s[i].phy);
        printf("Percentage: %.2f%%\n", s[i].percent);
    }

    return 0;
}
