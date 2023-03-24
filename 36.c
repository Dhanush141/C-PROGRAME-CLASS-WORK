#include <stdio.h>

void squareAndCube(int num, int *square, int *cube);

int main() {
    int num, square, cube;
    printf("Enter a number: ");
    scanf("%d", &num);
    squareAndCube(num, &square, &cube);
    printf("The square of %d is %d\n", num, square);
    printf("The cube of %d is %d\n", num, cube);
    return 0;
}

void squareAndCube(int num, int *square, int *cube) {
    *square = num * num;
    *cube = num * num * num;
}
output:
Enter a number: 5
The square of 5 is 25
The cube of 5 is 125