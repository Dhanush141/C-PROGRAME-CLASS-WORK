#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], result[100];
    int i, j, carry = 0, sum;

    printf("Enter binary string 1: ");
    scanf("%s", s1);

    printf("Enter binary string 2: ");
    scanf("%s", s2);

    // Reverse the strings to align least significant bit
    strrev(s1);
    strrev(s2);

    // Make sure both strings have the same length
    while (strlen(s1) < strlen(s2)) strcat(s1, "0");
    while (strlen(s2) < strlen(s1)) strcat(s2, "0");

    // Perform binary addition
    for (i = 0; i < strlen(s1); i++) {
        sum = (s1[i] - '0') + (s2[i] - '0') + carry;
        result[i] = sum % 2 + '0';
        carry = sum / 2;
    }

    // If there's a carry after the last digit, add it to the result
    if (carry) result[i++] = carry + '0';

    // Reverse the result string to get the correct order
    strrev(result);

    printf("Result: %s\n", result);

    return 0;
}
output:
Enter binary string 1: 1101
Enter binary string 2: 100101
Result: 110010
Enter binary string 1: 1111001001111101
Enter binary string 2: 10000
Result: 1111001010001101