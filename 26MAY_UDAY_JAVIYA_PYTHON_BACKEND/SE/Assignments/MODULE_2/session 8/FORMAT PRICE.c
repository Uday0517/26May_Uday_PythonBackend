#include <stdio.h>

void formatPrice(int price)
{
    printf("$%d\n", price);
}

int main()
{
    printf("Product Prices:\n");

    formatPrice(1599);
    formatPrice(24999);
    formatPrice(799);

    return 0;
}
