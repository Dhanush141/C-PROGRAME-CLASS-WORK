#include <stdio.h>

int main() {
    const int a = 5; // declaring a constant variable
    int *ptr = (int *)&a; // declaring a pointer to the constant variable

    printf("Original value of a: %d\n", a);
    *ptr = 10; // modifying the value of the constant variable using the pointer

    printf("Modified value of a: %d\n", a);

    return 0;
}
output:
Original value of a: 5
Modified value of a: 10