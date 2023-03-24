#include <stdio.h>
#include <conio.h>

main()
{
    int i, n, d, sum;
    clrscr();

    printf("Armstrong numbers : ");
    for(i=2; i<=1000; i++)
    {
        sum = 0; 
        n = i; 
        while(n)
        {
            d = n % 10;
            sum = sum + (d * d * d);
            n = n / 10;
        }
        if (sum == i) printf("%d	", i);
    }
    getch();
}
output:
Armstrong numbers : 153	370	371	407	