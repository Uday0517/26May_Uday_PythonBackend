#include <stdio.h>

float calculateAverage(int orders[], int size)
{
    int i, sum = 0;

    for(i = 0; i < size; i++)
    {
        sum = sum + orders[i];
    }

    return (float)sum / size;
}

int main()
{
    int orders[7] = {250, 180, 300, 220, 150, 400, 275};

    printf("Average Weekly Spend = %.2f\n",
           calculateAverage(orders, 7));

    return 0;
}
