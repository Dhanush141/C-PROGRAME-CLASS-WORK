#include <stdio.h>
#include <conio.h>

int main() {
    int i = 1, n, sum = 0;
    clrscr();
    printf("Enter the value for n: ");
    scanf("%d", &n);
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    printf("The sum of first %d natural numbers is %d", n, sum);
    getch();
    return 0;
}
output:
Enter the value for n: 5
The sum of first 5 natural numbers is 15