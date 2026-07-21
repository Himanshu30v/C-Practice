// Number Guessing Game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int num = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    do
    {
        printf("Attempt %d: Guess a Number: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if (guess < 1 || guess > 100)
        {
            printf("Please Guess Number between 1-100.\n\n");
            continue;
        }
        if (num < guess)
        {
            printf("Lower number please!\n");
        }
        else if (num > guess)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congratsss!\n");
            printf("YOU GUESS THE NUMBER!\n");
            printf("The Secret Number is %d\n", num);
            printf("You Guessed it in %d attempts.\n", attempts);
        }
    } while (guess != num);

    return 0;
}