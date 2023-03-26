#include <stdio.h>
#include <string.h>

struct employee {
    int empno;
    char name[30];
    float salary;
    struct {
        char jobtype[30];
    } job;
};

int main() {
    struct employee emp;
    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    printf("Enter employee job type: ");
    scanf("%s", emp.job.jobtype);

    printf("\nEmployee Details:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
    printf("Employee Job Type: %s\n", emp.job.jobtype);
    return 0;
}