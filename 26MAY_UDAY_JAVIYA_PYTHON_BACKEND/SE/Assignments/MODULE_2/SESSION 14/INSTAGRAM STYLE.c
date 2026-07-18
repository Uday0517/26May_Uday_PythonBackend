#include <stdio.h>

// Function to format follower count
void formatFollowersCount(int count)
{
    if(count >= 1000000)
    {
        printf("%.1fM\n", count / 1000000.0);
    }
    else if(count >= 1000)
    {
        printf("%.1fK\n", count / 1000.0);
    }
    else
    {
        printf("%d\n", count);
    }
}

int main()
{
    printf("1500 -> ");
    formatFollowersCount(1500);

    printf("1200000 -> ");
    formatFollowersCount(1200000);

    printf("950 -> ");
    formatFollowersCount(950);

    return 0;
}
