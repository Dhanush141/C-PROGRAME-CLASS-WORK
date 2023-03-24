#include <stdio.h>

int factorial(int *n);

int main() {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = factorial(&n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}

int factorial(int *n) {
    int fact = 1, i;
    for(i=1; i<=*n; i++) {
        fact *= i;
    }
    return fact;
}
output:
Enter a number: 5
Factorial of 5 is 120