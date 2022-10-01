#include <iostream>
using namespace std;

int main()
{
    int a = 6;

    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= a - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= a; i++)
    {
        for (int k = 1; k <= a - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}