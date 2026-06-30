//Write a code snippet that demonstrates the difference between pre-increment (++count) and post-increment (count++) by logging the values before and after using both on a followerCount variable.
#include <stdio.h>

int main()
{
    int followerCount = 207;

    printf("Initial Follower Count = %d\n", followerCount);

    // Post-increment
    printf("\nUsing Post-Increment (followerCount++)\n");
    printf("Value returned = %d\n", followerCount++);
    printf("Follower Count after increment = %d\n", followerCount);

    // Reset value
    followerCount = 800;
    printf("\nreseting Follower Count = %d\n", followerCount);
    // Pre-increment
    printf("\nUsing Pre-Increment (++followerCount)\n");
    printf("Value returned = %d\n", ++followerCount);
    printf("Follower Count after increment = %d\n", followerCount);

    return 0;
}
