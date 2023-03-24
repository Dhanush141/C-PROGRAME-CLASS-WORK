#include <stdio.h>

int main() {
    float python_marks, c_marks, maths_marks, physics_marks, total_marks, aggregate_marks;
    
    // take input from the user for marks in each subject
    printf("Enter the marks in python: ");
    scanf("%f", &python_marks);
    
    printf("Enter the marks in c programming: ");
    scanf("%f", &c_marks);
    
    printf("Enter the marks in Mathematics: ");
    scanf("%f", &maths_marks);
    
    printf("Enter the marks in Physics: ");
    scanf("%f", &physics_marks);
    
    // calculate the total marks
    total_marks = python_marks + c_marks + maths_marks + physics_marks;
    
    // calculate the aggregate marks
    aggregate_marks = total_marks / 4;
    
    // determine the grade based on the aggregate marks
    if (aggregate_marks >= 75) {
        printf("DISTINCTION");
    } else if (aggregate_marks >= 60) {
        printf("FIRST DIVISION");
    } else if (aggregate_marks >= 50) {
        printf("SECOND DIVISION");
    } else if (aggregate_marks >= 40) {
        printf("THIRD DIVISION");
    } else {
        printf("FAIL");
    }
    
    return 0;
}
output:
Enter the marks in python: 90
Enter the marks in c programming: 91
Enter the marks in Mathematics: 92
Enter the marks in Physics: 93
DISTINCTION