// Let's play a game for guessing the number in the mind of CPU

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, no = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Random number is %d\n",number);
    return 0;
}