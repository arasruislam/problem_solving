#include <stdio.h>

int main()
{
   int a, b;
   scanf("%d %d", &a, &b);

   int Difference;

   if (a > b)
   {
      Difference = a - b;
   }
   else
   {
      Difference = b - a;
   }

   printf("%d\n", Difference);

   return 0;
}