#include <stdio.h>

int main()
{
    float d;

    scanf("%f", &d);

    float pi = 3.14159;
    float r = d/2;
    float p = pi*r*r;
    
    printf("%.4f", p);

    return 0;
}