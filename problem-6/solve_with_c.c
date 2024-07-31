#include <stdio.h>

int main()
{
   int a, b, product;
   scanf("%d %d", &a, &b);

   if (b != 0)
   {
      product = a / b;
      printf("%d\n", product);
   }
   else
   {
      printf("Division by zero is not allowed.");
   }

   return 0;
}