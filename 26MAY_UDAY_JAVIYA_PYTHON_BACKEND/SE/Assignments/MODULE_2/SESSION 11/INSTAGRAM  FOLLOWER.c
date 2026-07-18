#include <stdio.h>


void incrementFollowers(int *followers, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        *(followers + i) = *(followers + i) + 100;
    }
}

int main()
{
    int followers[5] = {1200, 850, 2500, 1750, 3100};
    int i;

    incrementFollowers(followers, 5);

    printf("Updated Instagram Followers:\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Friend %d Followers = %d\n", i + 1, followers[i]);
    }

    return 0;
}
