#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[50];
    int age;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);


    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &(students[i].rollNumber));

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter age: ");
        scanf("%d", &(students[i].age));
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
    }

    free(students);

    return 0;
}
