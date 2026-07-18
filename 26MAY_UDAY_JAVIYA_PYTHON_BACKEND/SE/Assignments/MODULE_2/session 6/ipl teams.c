#include <stdio.h>
#include <string.h>

int main()
{
    char teams[4][30] = {
        "Chennai Super Kings",
        "Mumbai Indians",
        "Royal Challengers Bengaluru"
    };

    int choice;
    int count = 3;

    while (1)
    {
        printf("\n===== IPL MENU =====\n");
        printf("1. View Favorite IPL Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            {
                int i;
                printf("\nFavorite IPL Teams:\n");

                for (i = 0; i < count; i++)
                {
                    printf("%d. %s\n", i + 1, teams[i]);
                }
                break;
            }

            case 2:
            {
                if (count < 4)
                {
                    printf("Enter New Team Name: ");
                    scanf(" %[^\n]", teams[count]);

                    count++;

                    printf("Team Added Successfully!\n");
                }
                else
                {
                    printf("Only one additional team can be added.\n");
                }
                break;
            }

            case 3:
            {
                printf("Thank You! Exiting Program...\n");
                return 0;
            }

            default:
            {
                printf("Invalid Choice! Please try again.\n");
            }
        }
    }

    return 0;
}
