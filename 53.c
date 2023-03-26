#include <stdio.h>

int main() {
    int arr[3][4];
    int i, j;

    printf("Enter array elements:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array elements are:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
output:
Enter array elements:
1 2 3 4
5 6 7 8
9 10 11 12
Array elements are:
1 2 3 4
5 6 7 8
9 10 11 12