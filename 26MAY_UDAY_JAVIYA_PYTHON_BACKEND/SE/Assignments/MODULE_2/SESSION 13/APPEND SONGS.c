#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    fprintf(fp, "Love Me Like You Do\n");
    fprintf(fp, "Believer\n");

    fclose(fp);

    printf("Songs appended successfully.");

    return 0;
}
