#include <stdio.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, special = 0;
    printf("Input the string: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            special++;
        }
    }

    printf("Total number of alphabets in the string: %d\n", alphabets);
    printf("Total number of digits in the string: %d\n", digits);
    printf("Total number of special characters in the string: %d\n", special);

    return 0;
}
output:
Input the string: Welcome to w3resource.com
Total number of alphabets in the string: 22
Total number of digits in the string: 1
Total number of special characters in the string: 4