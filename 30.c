#include <stdio.h>

#define SIZE 3    // size of matrix

int main() {
    int i, j;
    int matrix[SIZE][SIZE] = {{1, 4, 3}, {4, 2, 6}, {7, 1, 3}};    // input matrix
    int sum = 0;

    // display diagonal elements and compute sum
    printf("Diagonal Elements are ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    // print sum of diagonal elements
    printf("\nSum of diagonal elements = %d\n", sum);

    return 0;
}
output:
Diagonal Elements are 1 2 3
Sum of diagonal elements = 6