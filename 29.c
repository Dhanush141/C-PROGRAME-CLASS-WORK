#include <stdio.h>

#define ROW1 2    // number of rows in matrix 1
#define COL1 3    // number of columns in matrix 1
#define ROW2 3    // number of rows in matrix 2
#define COL2 2    // number of columns in matrix 2

int main() {
    int i, j, k;
    int matrix1[ROW1][COL1] = {{1, 2, 3}, {4, 5, 6}};    // input matrix 1
    int matrix2[ROW2][COL2] = {{7, 8}, {9, 10}, {11, 12}};    // input matrix 2
    int result[ROW1][COL2] = {0};    // output matrix

    // multiply matrices
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            for (k = 0; k < ROW2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // print result matrix
    printf("Result:\n");
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
output:
1  2  3     7  8
4  5  6     9  10
           11  12
1*7 + 2*9 + 3*11 = 58
4*7 + 5*9 + 6*11 = 139
Result:
58  64
139 154