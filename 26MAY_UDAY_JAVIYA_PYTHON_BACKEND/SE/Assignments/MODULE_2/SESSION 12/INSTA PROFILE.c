#include <stdio.h>

struct Bio
{
    char description[100];
    int age;
};

struct InstaProfile
{
    char username[50];
    int followers;
    struct Bio bio;
};

int main()
{
    struct InstaProfile user =
    {
        "uday_javiya",
        1250,
        {"AI & ML Student , Gym Lover", 20}
    };

    printf("Instagram Profile\n\n");

    printf("Username    : %s\n", user.username);
    printf("Followers   : %d\n", user.followers);
    printf("Description : %s\n", user.bio.description);
    printf("Age         : %d\n", user.bio.age);

    return 0;
}
