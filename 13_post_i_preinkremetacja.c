#include <stdio.h>

int main()
{
    int x=15;
    int y=24;

    printf("x=%d\n", x);
    printf("x=%d\n", x++);
    printf("x=%d\n", x);

    printf("\n");

    printf("x=%d\n", y);
    printf("x=%d\n", ++y);
    printf("x=%d\n", y);

    return 0;
}