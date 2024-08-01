#include <iostream>

using namespace std;

int main()
{
   int a, b, product;
   cin >> a >> b;

   product = a % b;
   cout << product << endl;
   cout << "Division by zero is not allowed." << endl;

   return 0;
}