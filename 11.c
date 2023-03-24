#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    printf("Input first number: ");
    scanf("%d", &num1);

    printf("Input second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    printf("The sum of %d and %d is %d.", *ptr1, *ptr2, sum);

    return 0;
}
output:
Input first number: 19
Input second number: 9
The sum of 19 and 9 is 28.