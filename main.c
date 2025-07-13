#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    //  printf("Random number between 1 and 100: %d\n", randomNumber);
    do
    {
        printf("Guess The Number : ");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Go Lower \n");
        }
        else if (guessed < randomNumber)
        {
            printf("Go Higher \n");
        }
        else
        {
            printf("Congratulations!! \n");
        }

        no_of_guesses++;

    } while (guessed != randomNumber);

    printf("You took %d guesses to guess the correct number", no_of_guesses);

    return 0;
}
