#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a < b)
    {
        cout << a << " is the minimum number" << endl;
    }
    else
    {
        cout << b << " is the minimum number" << endl;
    }

    return 0;
}