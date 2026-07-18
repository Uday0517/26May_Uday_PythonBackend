#include <stdio.h>

int main()
{
    int i;

    printf("Countdown Timer:\n");

    for(i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    printf("Time's Up!\n");

    return 0;
}
