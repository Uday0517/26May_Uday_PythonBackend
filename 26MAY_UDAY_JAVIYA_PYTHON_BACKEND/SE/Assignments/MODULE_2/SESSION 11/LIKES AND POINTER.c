#include <stdio.h>

int main()
{
    int likes;
    int *ptrLikes;


    likes = 100;

    
    ptrLikes = &likes;

    printf("Value of likes = %d\n", likes);

    printf("Value pointed to by ptrLikes = %d\n", *ptrLikes);

    printf("Address stored in ptrLikes = %p\n", (void *)ptrLikes);

    return 0;
}
