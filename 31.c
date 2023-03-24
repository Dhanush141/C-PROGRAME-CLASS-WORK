#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);    // pass addresses of x and y to swap function

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
output:
Before swap: x = 10, y = 20
After swap: x = 20, y = 10