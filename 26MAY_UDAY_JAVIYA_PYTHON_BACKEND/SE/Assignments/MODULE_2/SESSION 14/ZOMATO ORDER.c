#include <stdio.h>

int main()
{
    char items[3][20] = {"Burger", "Pizza", "Fries"};
    int prices[3] = {120, 250, 90};
    int total = 0;
    int i;

    // Calculate total price
    for(i = 0; i < 3; i++)
    {
        total += prices[i];
    }

    printf("Total price is: %d\n", total);

    return 0;
}
