#include <stdio.h>
#include <string.h>

void addToCart(char cart[][30], int *count, char product[])
{
    strcpy(cart[*count], product);
    (*count)++;

    int i;

    printf("\nUpdated Cart:\n");

    for(i = 0; i < *count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main()
{
    char cart[10][30] = {"Laptop", "Mouse"};
    int count = 2;

    addToCart(cart, &count, "Keyboard");

    return 0;
}
