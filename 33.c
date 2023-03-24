#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 100
#define MAX_LINE_LENGTH 100

int main() {
    char filename[100];
    char lines[MAX_LINES][MAX_LINE_LENGTH];
    FILE *fp;
    int i;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    i = 0;
    while(fgets(lines[i], MAX_LINE_LENGTH, fp) != NULL) {
        i++;
        if(i >= MAX_LINES) {
            break;
        }
    }

    fclose(fp);

    printf("\nContents of %s:\n", filename);

    for(int j = 0; j < i; j++) {
        printf("%s", lines[j]);
    }

    return 0;
}
output:
The content of the file test.txt  are :                                                                      
 test line 1                                                                                                  
 test line 2                                                                                                  
 test line 3                                                                                                  
 test line 4
