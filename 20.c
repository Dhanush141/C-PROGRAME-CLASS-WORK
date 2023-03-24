#include <stdio.h>

int main()
{
    int n, sum = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("The sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}
output:
Enter a positive integer: 5
The sum of first 5 natural numbers is 15