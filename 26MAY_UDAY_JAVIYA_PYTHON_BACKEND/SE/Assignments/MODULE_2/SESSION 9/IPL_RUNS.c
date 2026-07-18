#include <stdio.h>

int main()
{
    int cricketScores[3][2] =
    {
        {180, 175},
        {210, 198},
        {165, 172}
    };

    int i;

    printf("Highest Score in Each Match:\n\n");

    for(i = 0; i < 3; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
        {
            printf("Match %d = %d\n", i + 1, cricketScores[i][0]);
        }
        else
        {
            printf("Match %d = %d\n", i + 1, cricketScores[i][1]);
        }
    }

    return 0;
}
