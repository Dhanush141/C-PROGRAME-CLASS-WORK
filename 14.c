#include <stdio.h>

int stringwelcome(char *str);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int welcome = stringwelcome(str);
    printf("Length of string: %d\n", welcome);
    return 0;
}

int stringwelcome(char *str) {
    int welcome = 0;
    while(*str != '\0') {
        welcome++;
        str++;
    }
    return welcome;
}
output:
Enter a string: welcome
Length of string: 7