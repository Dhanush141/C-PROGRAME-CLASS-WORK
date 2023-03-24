#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num);

int main()
{
    int num;
    printf("Input a positive number: ");
    scanf("%d", &num);

    if(is_prime(num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

bool is_prime(int num)
{
    int i;
    bool flag = true;

    if(num == 1)
    {
        return false;
    }
    else
    {
        for(i=2; i<=num/2; ++i)
        {
            if(num%i == 0)
            {
                flag = false;
                break;
            }
        }
    }

    return flag;
}
output:
Input a positive number: 5
5 is a prime number.