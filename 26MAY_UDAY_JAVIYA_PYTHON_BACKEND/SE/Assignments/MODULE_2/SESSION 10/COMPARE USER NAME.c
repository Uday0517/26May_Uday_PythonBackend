#include <stdio.h>
#include <string.h>

int main()
{
    char username1[30];
    char username2[30];

    printf("Enter First Username: ");
    scanf("%s", username1);

    printf("Enter Second Username: ");
    scanf("%s", username2);

    if(strcmp(username1, username2) == 0)
    {
        printf("Both usernames are the same.\n");
    }
    else
    {
        printf("Usernames are different.\n");
    }

    return 0;
}
