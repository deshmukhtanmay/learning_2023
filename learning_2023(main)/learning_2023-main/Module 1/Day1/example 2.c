#include <stdio.h>
void grade(int score)
{
    if (score >= 90 && score <= 100) {
        printf("Grade A\n");
    }
    else if (score >= 75 && score <= 89) {
        printf("Grade B\n");
    }
    else if (score >= 60 && score <= 74) {
        printf("Grade C\n");
    }
    else if (score >= 50 && score <= 59) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }
}

int main() {
    int marks;
    printf("Enter the student marks : ");
    scanf("%d", &marks);
    grade(marks);

    return 0;
}
