#include <stdio.h>
#include <ctype.h>

void capitalize(char str[])
{
    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = toupper(str[0]);
    }
}

int main()
{
    char product[] = "laptop";
    char username[] = "uday";

    capitalize(product);
    capitalize(username);

    printf("Product Name : %s\n", product);
    printf("Username     : %s\n", username);

    return 0;
}
