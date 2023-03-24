#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    /* Function to check if a number is prime */
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int nth_prime(int n) {
    /* Function to find the nth prime number */
    int count = 0, num = 2;
    while (count < n) {
        if (is_prime(num)) {
            count++;
            if (count == n) {
                return num;
            }
        }
        num++;
    }
}

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    // print the first n prime numbers
    printf("%d prime numbers are: ", n);
    int count = 0, num = 2;
    while (count < n) {
        if (is_prime(num)) {
            count++;
            printf("%d ", num);
        }
        num++;
    }
    printf("\n");

    // find the nth prime number
    int nth = nth_prime(n);
    printf("%dth Prime number is %d\n", n, nth);

    // print n prime numbers after the nth prime number
    printf("%d prime numbers after %d are: ", n, nth);
    count = 0, num = nth + 1;
    while (count < n) {
        if (is_prime(num)) {
            count++;
            printf("%d ", num);
        }
        num++;
    }
    printf("\n");

    return 0;
}
output:
N = 3
Enter value of n: 3
3 prime numbers are: 2 3 5 
3th Prime number is 5
3 prime numbers after 5 are: 7 11 13