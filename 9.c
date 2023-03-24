#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, freq = 0;

    printf("Input string: ");
    fgets(str, 100, stdin);

    printf("Input the character to find the frequency: ");
    scanf("%c", &ch);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            freq++;
        }
    }

    printf("The frequency of '%c' in the string is %d.", ch, freq);

    return 0;
}
output:
Input string: this is a string
Input the character to find the frequency: s
The frequency of 's' in the string is 3.