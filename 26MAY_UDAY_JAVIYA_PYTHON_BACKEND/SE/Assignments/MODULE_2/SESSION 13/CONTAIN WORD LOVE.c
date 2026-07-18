#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char song[100];
    char lower[100];
    int i;

    fp = fopen("playlist.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    printf("Songs containing 'love':\n\n");

    while(fgets(song, sizeof(song), fp) != NULL)
    {
        strcpy(lower, song);

        for(i = 0; lower[i] != '\0'; i++)
        {
            lower[i] = tolower(lower[i]);
        }

        if(strstr(lower, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(fp);

    return 0;
}
