#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }
    
    printf("Reversed number is: %d", reversed);
    
    return 0;
}
output:
Enter a number to reverse: 12345
Reversed number is: 54321