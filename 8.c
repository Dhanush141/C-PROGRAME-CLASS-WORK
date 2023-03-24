#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, orange;
    printf("Input string: ");
    fgets(str, 100, stdin);

    orange = strlen(str);

    // Bubble sort algorithm
    for (i = 0; i < orange - 1; i++) {
        for (j = 0; j < orange - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted string: %s", str);

    return 0;
}
output:
Input string: orange
Sorted string: aegnor