#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int number;
    char grade;
};

int main() {
    int n, i;
    int num_A = 0, num_B = 0, num_C = 0, num_D = 0, num_F = 0;
    struct Student students[MAX_STUDENTS];
    
    // take input from the user for the number of students
    printf("Enter No. of Students: ");
    scanf("%d", &n);
    
    // take input from the user for the student number and grade for each student
    for (i = 0; i < n; i++) {
        printf("Enter student %d Number, Grade: ", i + 1);
        scanf("%d %c", &students[i].number, &students[i].grade);
        
        // update the count for each grade
        switch (students[i].grade) {
            case 'A':
                num_A++;
                break;
            case 'B':
                num_B++;
                break;
            case 'C':
                num_C++;
                break;
            case 'D':
                num_D++;
                break;
            case 'F':
                num_F++;
                break;
        }
    }
    
    // print out each student's details
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("Student Number: %d, Grade: %c\n", students[i].number, students[i].grade);
    }
    
    // print out the total number of As, Bs, Cs, Ds, and Fs
    printf("\nTotal Grades:\n");
    printf("A: %d\nB: %d\nC: %d\nD: %d\nF: %d\n", num_A, num_B, num_C, num_D, num_F);
    
    return 0;
}
output:
Enter No. of Students: 1
Enter student 1 Number, Grade: 2001 A

Student Details:
Student Number: 2001, Grade: A

Total Grades:
A: 1
B: 0
C: 0
D: 0
F: 0