#include <stdio.h>


int isEven(int num)
{
   
    if(num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number = 8;

    if(isEven(number))
    {
        printf("%d is Even\n", number);
    }
    else
    {
        printf("%d is Odd\n", number);
    }

    return 0;
}
