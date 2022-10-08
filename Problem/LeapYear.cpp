#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if ((a % 400) == 0 || ((a % 4 == 0) && (a % 100 != 0)))
    {
        cout << "It is a leap year";
    }
    else
    {
        cout << "It is not a leap year";
    }
    return 0;
}