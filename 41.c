#include <stdio.h>

int main() {
    char operator;
    float n1, n2, result;

    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%f %f", &n1, &n2);

    switch(operator) {
        case '+':
            result = n1 + n2;
            break;

        case '-':
            result = n1 - n2;
            break;

        case '*':
            result = n1 * n2;
            break;

        case '/':
            result = n1 / n2;
            break;

        case '%':
            result = (int)n1 % (int)n2;  // typecasting to integer to calculate remainder
            break;

        default:
            printf("Invalid operator");
            return 0;
    }

    printf("%.2f %c %.2f = %.2f", n1, operator, n2, result);
    return 0;
}
output:
Enter an operator (+, -, *, /, %): +
Enter two operands: 2.5 3.7
2.50 + 3.70 = 6.20