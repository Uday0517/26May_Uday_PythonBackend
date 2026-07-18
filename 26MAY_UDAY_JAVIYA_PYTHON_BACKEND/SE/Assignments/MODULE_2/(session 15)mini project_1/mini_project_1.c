#include <stdio.h>

int main()
{
    int minutes[7] = {0};
    int choice, i;
    char confirm;
    FILE *fp;

    while(1)
    {
        printf("\n=============================\n");
        printf(" MUSIC LISTENING LOGGER\n");
        printf("=============================\n");
        printf("1. Log Weekly Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Generate Report from File\n");
        printf("4. Reset Weekly Data\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                fp = fopen("music_log.txt","w");

                if(fp == NULL)
                {
                    printf("Error opening file!\n");
                    break;
                }

                printf("\nEnter Listening Minutes:\n");

                for(i=0;i<7;i++)
                {
                    printf("Day %d: ",i+1);
                    scanf("%d",&minutes[i]);

                    fprintf(fp,"%d\n",minutes[i]);
                }

                fclose(fp);

                printf("\nData Saved Successfully!\n");

                break;

            case 2:
            {
                int total=0;
                int highest=0;
                float average;

                printf("\nWeekly Summary\n");

                for(i=0;i<7;i++)
                {
                    printf("Day %d = %d Minutes\n",i+1,minutes[i]);

                    total += minutes[i];

                    if(minutes[i]>highest)
                        highest=minutes[i];
                }

                average=(float)total/7;

                printf("\nTotal Minutes = %d",total);
                printf("\nAverage Minutes = %.2f",average);
                printf("\nHighest Minutes = %d\n",highest);

                break;
            }

            case 3:
            {
                int value;
                int total=0;
                int highest=0;
                int count=0;
                float average;

                fp=fopen("music_log.txt","r");

                if(fp==NULL)
                {
                    printf("No File Found!\n");
                    break;
                }

                while(fscanf(fp,"%d",&value)==1)
                {
                    total+=value;

                    if(value>highest)
                        highest=value;

                    count++;
                }

                fclose(fp);

                if(count>0)
                {
                    average=(float)total/count;

                    printf("\nReport From File\n");
                    printf("---------------------\n");
                    printf("Total Minutes = %d\n",total);
                    printf("Average Minutes = %.2f\n",average);
                    printf("Highest Minutes = %d\n",highest);
                }

                break;
            }

            case 4:

                printf("Are you sure? (Y/N): ");
                scanf(" %c",&confirm);

                if(confirm=='Y' || confirm=='y')
                {
                    for(i=0;i<7;i++)
                    {
                        minutes[i]=0;
                    }

                    fp=fopen("music_log.txt","w");

                    if(fp!=NULL)
                        fclose(fp);

                    printf("Weekly Data Reset Successfully!\n");
                }
                else
                {
                    printf("Reset Cancelled.\n");
                }

                break;

            case 5:

                printf("Thank You!\n");
                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
