#include <stdio.h>

int square(int num);

int main()
{
    int num, sq;
    printf("Input any number for square: ");
    scanf("%d", &num);

    sq = square(num);

    printf("Square of %d is %d\n", num, sq);

    return 0;
}

int square(int num)
{
    return num * num;
}
output:
Input any number for square: 20
Square of 20 is 400