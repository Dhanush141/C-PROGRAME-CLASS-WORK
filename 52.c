#include<stdio.h>
#include<conio.h>

int main() {
    int a[20][20], c[20][20], i, j, r1, c1;

    clrscr();
    printf("\nEnter the number of rows and columns of a matrix: \n");
    scanf("%d %d", &r1, &c1);

    printf("Enter the elements of the matrix: ");
    for(i=0; i<r1; i++) {
        for(j=0; j<c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The elements of the matrix are:\n");
    for(i=0; i<r1; i++) {
        for(j=0; j<c1; j++) {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix is\n");
    for(i=0; i<r1; i++) {
        printf("\n");
        for(j=0; j<c1; j++) {
            c[i][j] = a[j][i]; /* inverse rows and column */
            printf("%d\t", c[i][j]);
        }
    }

    getch();
    return 0;
}
output:
Enter the number of rows and columns of a matrix:
3 4
Enter the elements of the matrix: 
1 2 3 4
5 6 7 8
9 10 11 12
The elements of the matrix are:
        1       2       3       4
        5       6       7       8
        9       10      11      12

Transpose Matrix is
1       5       9
2       6       10
3       7       11
4       8       12