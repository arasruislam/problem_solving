#include <stdio.h>

int main()
{
   int a, b, product;
   scanf("%d %d", &a, &b);

   product = a % b;
   printf("%d\n", product);

   printf("Division by zero is not allowed.");

   return 0;
}