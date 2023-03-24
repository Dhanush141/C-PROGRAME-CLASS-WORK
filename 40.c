#include <stdio.h>

// Define the employee structure
struct Employee {
    int empid;
    char ename[50];
    float basic, hra, da, it, gross, netpay;
};

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Declare an array of employee structures
    struct Employee employees[n];

    // Read empid, ename, and basic for n employees in an array of structure
    for (i = 0; i < n; i++) {
        printf("Enter empid, ename, and basic for employee %d: ", i+1);
        scanf("%d%s%f", &employees[i].empid, employees[i].ename, &employees[i].basic);

        // Calculate the other fields
        employees[i].hra = 0.02 * employees[i].basic;
        employees[i].da = 0.01 * employees[i].basic;
        employees[i].gross = employees[i].basic + employees[i].hra + employees[i].da;
        employees[i].it = 0.05 * employees[i].basic;
        employees[i].netpay = employees[i].gross - employees[i].it;
    }

    // Print empid, ename, basic, hra, da, it, gross, and netpay for all employees
    printf("\nEmpID\tEName\tBasic\tHRA\tDA\tIT\tGross\tNetPay\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", employees[i].empid, employees[i].ename, employees[i].basic, employees[i].hra, employees[i].da, employees[i].it, employees[i].gross, employees[i].netpay);
    }

    return 0;
}
output:
Enter the number of employees: 2
Enter empid, ename, and basic for employee 1: 101 John 5000
Enter empid, ename, and basic for employee 2: 102 Sarah 6000

EmpID	EName	Basic	HRA	DA	IT	Gross	NetPay
101	John	5000.00	100.00	50.00	250.00	5250.00	5000.00
102	Sarah	6000.00	120.00	60.00	300.00	6360.00	6060.00