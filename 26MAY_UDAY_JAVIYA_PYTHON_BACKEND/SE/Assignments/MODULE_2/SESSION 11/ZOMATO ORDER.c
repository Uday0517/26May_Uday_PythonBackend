#include <stdio.h>

int main()
{
    int orders[5] = {250, 499, 120, 350, 699};
    int *ptr;
    int i;    // Declare i here

    ptr = orders;

    printf("Zomato Order Amounts and Their Memory Addresses:\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Order %d Amount = %d\tAddress = %p\n",
               i + 1, *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}
