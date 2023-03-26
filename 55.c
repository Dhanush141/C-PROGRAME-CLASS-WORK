#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[30];
    struct {
        int day;
        int month;
        int year;
    } dob;
    float marks;
};

int main() {
    struct student stud;
    printf("Enter student roll number: ");
    scanf("%d", &stud.rollno);
    printf("Enter student name: ");
    scanf("%s", stud.name);
    printf("Enter student date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &stud.dob.day, &stud.dob.month, &stud.dob.year);
    printf("Enter student marks: ");
    scanf("%f", &stud.marks);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", stud.rollno);
    printf("Name: %s\n", stud.name);
    printf("Date of Birth: %d-%d-%d\n", stud.dob.day, stud.dob.month, stud.dob.year);
    printf("Marks: %.2f\n", stud.marks);
    return 0;
}