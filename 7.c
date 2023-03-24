#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, length;
    printf("Input string: ");
    fgets(str1, 100, stdin);

    length = 0;
    while (str1[length] != '\0') {
        length++;
    }

    for (i = 0; i < length; i++) {
        str2[i] = str1[i];
    }

    str2[i] = '\0';

    printf("Copied string: %s", str2);

    return 0;
}
output:
Input the string: length
The copied string is: length