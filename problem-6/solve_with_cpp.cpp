#include <iostream>

using namespace std;

int main()
{
   int a, b, product;
   cin >> a >> b;

   if (b != 0)
   {
      product = a / b;
      cout << product << endl;
   }
   else
   {
      cout << "Division by zero is not allowed." << endl;
   }

   return 0;
}