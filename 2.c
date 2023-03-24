#include <stdio.h>

void even_odd(int num);

int main()
{
    int num;
    printf("Input any number: ");
    scanf("%d", &num);

    even_odd(num);

    return 0;
}

void even_odd(int num)
{
    if(num % 2 == 0)
    {
        printf("%d is even.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }
}
output:
Input any number: 5
5 is odd.