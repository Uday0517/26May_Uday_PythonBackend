#include <stdio.h>
#include <string.h>

int main()
{
    char fullName[50];
    char username[6];

    printf("Enter Your Full Name: ");
    scanf(" %[^\n]", fullName);

    if(strlen(fullName) < 5)
    {
        strcpy(username, fullName);
    }
    else
    {
        strncpy(username, fullName, 5);
        username[5] = '\0';
    }

    printf("Generated Username: %s\n", username);

    return 0;
}
