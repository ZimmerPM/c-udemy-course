#include <stdio.h>

int main()
{
    int num1, num2;

   printf("Enter number 1:\n");
   scanf("%d", &num1);

   printf("Enter number 2:\n");
   scanf("%d", &num2);

   printf("%d+%d=%d\n", num1, num2, num1+num2);
   printf("%d-%d=%d\n", num1, num2, num1-num2);
   printf("%d*%d=%d\n", num1, num2, num1*num2);
   printf("%d/%d=%d\n", num1, num2, num1/num2);
   printf("%d%%d=%d\n", num1, num2, num1%num2);

   return 0;
}