#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char songs[3][30] = {
        "Perfect",
        "Believer",
        "Shape of You"
    };

    char guess[30];
    int random;

    srand(time(NULL));

    random = rand() % 3;

    printf("=== Guess the Song ===\n");

    do
    {
        printf("Guess the song: ");
        scanf(" %[^\n]", guess);

        if(strcmp(guess, songs[random]) != 0)
        {
            printf("Wrong! Try Again.\n");
        }

    } while(strcmp(guess, songs[random]) != 0);

    printf("Correct! The song was %s.\n", songs[random]);

    return 0;
}
