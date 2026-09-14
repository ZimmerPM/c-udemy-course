#include <stdio.h>

int main()
{
   int x;

   x=15;
   printf("x=%d\n", x);

   x/=2;
   printf("x=%d\n", x);

   x*=2;
   printf("x=%d\n", x);

   ++x;
   printf("x=%d\n", x);

   --x;
   printf("x=%d\n", x);
   return 0;
}