#include <stdio.h>
#include <ctype.h>

void getUserInitials(char name[])
{
    printf("Initials: ");

  
    printf("%c", toupper(name[0]));

    
    int i;
    for(i = 1; name[i] != '\0'; i++)
    {
        if(name[i - 1] == ' ')
        {
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");
}

int main()
{
    char cricketer[] = "UDAY JAVIYA";

    getUserInitials(cricketer);

    return 0;
}
