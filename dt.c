#include <stdio.h>
struct Student 
{
    int roll;
    char name[20];
    char course[10];
};
struct Student s[2];

int main()
{
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("Enter roll no of student %d: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", &s[i].name);
        printf("Enter course of student %d: ", i + 1);
        scanf("%s", &s[i].course);
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        printf("Roll no of student %d is: %d\n", i + 1, s[i].roll);
        printf("name of student %d is: %s\n", i + 1, s[i].name);
        printf("course of student %d is: %s\n", i + 1, s[i].course);
    }
    return 0;
}