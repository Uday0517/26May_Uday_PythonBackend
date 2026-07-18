#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    fprintf(fp, "Perfect\n");
    fprintf(fp, "Shape of You\n");
    fprintf(fp, "Love Story\n");

    fclose(fp);

    printf("Songs written successfully.");

    return 0;
}
