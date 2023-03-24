#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number, count = 0;
    srand(time(0));  // Seed the random number generator

    number = rand() % 100 + 1;  // Generate a random number between 1 and 100

    printf("Guess the number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        count++;

        if (guess > number) {
            printf("Too high. Try again.\n");
        } else if (guess < number) {
            printf("Too low. Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", count);
        }
    } while (guess != number);

    return 0;
}
output:
Enter your guess: 50
Too low! Try again.
Enter your guess: 75
Too high! Try again.
Enter your guess: 62
Too low! Try again.
Enter your guess: 68
Too high! Try again.
Enter your guess: 65
Congratulations! You guessed the number in 5 tries.
Do you want to play again? (y/n): n
Thanks for playing!