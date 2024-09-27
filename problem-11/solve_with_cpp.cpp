#include <iostream>

using namespace std;

int main()
{
   int number, digits_of_sum = 0;
   cin >> number;

   while (number != 0)
   {
      digits_of_sum += number % 10;
      number /= 10;
   }

   cout << digits_of_sum << endl;

   return 0;
}