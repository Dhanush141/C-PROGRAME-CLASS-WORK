#include <stdio.h>

int main() {
    char str1[100], str2[100], combined_str[200];
    int i, j;

    printf("Input the first string: ");
    fgets(str1, 100, stdin);

    printf("Input the second string: ");
    fgets(str2, 100, stdin);

    // copy str1 to combined_str
    for (i = 0; str1[i] != '\0'; i++) {
        combined_str[i] = str1[i];
    }

    // append str2 to combined_str
    for (j = 0; str2[j] != '\0'; j++) {
        combined_str[i + j] = str2[j];
    }

    combined_str[i + j] = '\0';  // add null character at end of combined_str

    printf("The combined string is: %s", combined_str);

    return 0;
}
output:
Input the first string: Saveetha
Input the second string: College
The combined string is: SaveethaCollege