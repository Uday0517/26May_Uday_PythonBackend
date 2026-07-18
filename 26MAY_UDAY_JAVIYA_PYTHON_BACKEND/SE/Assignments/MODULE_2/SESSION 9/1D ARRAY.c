#include <stdio.h>

int main()
{
    int dailySteps[7] = {6500, 7200, 8000, 5500, 9000, 10000, 7500};
    int i;

    printf("Daily Step Count:\n\n");

    for(i = 0; i < 7; i++)
    {
        printf("Day %d = %d steps\n", i + 1, dailySteps[i]);
    }

    return 0;
}
