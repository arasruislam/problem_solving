#include <iostream>

using namespace std;

int main()
{
   int a, b, difference;
   cin >> a >> b;

   if (a > b)
   {
      difference = a - b;
   }
   else
   {
      difference = b - a;
   }
   cout << difference << endl;

   return 0;
}