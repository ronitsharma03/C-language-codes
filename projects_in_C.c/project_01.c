// Let's play a game for guessing the number in the mind of CPU

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, no = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    // Used to generate a random number between 1 and 100
    // The loop will run until your guess matches with the random number generated by CPU !
    do
    {
        printf("Guess the number between 1 and 100\n");
        scanf("%d", &guess);

        if (guess < number)
        {
            printf("Higher number please !\n");
        }
        else if (guess > number)
        {
            printf("Lower number please !\n");
        }
        else
        {
            printf("You guessed it in %d attempts \n", no);
        }
        no++;

    } while (guess != number);

    return 0;
}