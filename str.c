#include <stdio.h>

struct Student {
    int roll;
    char course[20];
    float percentage;
};

void main() {
    struct Student s[10], temp;
    int i, j;

    // Input details of 10 students
    printf("Enter details of 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Course: ");
        scanf("%s", s[i].course);

        printf("Enter Percentage: ");
        scanf("%f", &s[i].percentage);
    }

    // Sorting in ascending order of percentage
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (s[i].percentage > s[j].percentage) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Display sorted data
    printf("\nStudents in Ascending Order of Percentage:\n");
    printf("------------------------------------------\n");
    printf("Roll\tCourse\tPercentage\n");

    for (i = 0; i < 10; i++) {
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].course, s[i].percentage);
    }
}