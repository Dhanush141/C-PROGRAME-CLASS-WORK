#include <stdio.h>

struct Student {
    int python;
    int c_prog;
    int math;
    int physics;
};

int main() {
    int n;
    float total, aggregate;
    char grade[20];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the marks in python for student %d: ", i+1);
        scanf("%d", &s[i].python);
        printf("Enter the marks in c programming for student %d: ", i+1);
        scanf("%d", &s[i].c_prog);
        printf("Enter the marks in mathematics for student %d: ", i+1);
        scanf("%d", &s[i].math);
        printf("Enter the marks in physics for student %d: ", i+1);
        scanf("%d", &s[i].physics);

        total = s[i].python + s[i].c_prog + s[i].math + s[i].physics;
        aggregate = total / 4;

        if (aggregate >= 75) {
            sprintf(grade, "DISTINCTION");
        }
        else if (aggregate >= 60 && aggregate < 75) {
            sprintf(grade, "FIRST DIVISION");
        }
        else if (aggregate >= 50 && aggregate < 60) {
            sprintf(grade, "SECOND DIVISION");
        }
        else if (aggregate >= 40 && aggregate < 50) {
            sprintf(grade, "THIRD DIVISION");
        }
        else {
            sprintf(grade, "FAIL");
        }

        printf("Total= %.0f\n", total);
        printf("Aggregate= %.1f\n", aggregate);
        printf("%s\n", grade);
    }

    return 0;
}
output:
Enter the marks in python: 90
Enter the marks in c programming: 91
Enter the marks in Mathematics: 92
Enter the marks in Physics: 93
Total= 366
Aggregate = 91.5