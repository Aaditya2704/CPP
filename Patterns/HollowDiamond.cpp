#include <iostream>
using namespace std;

int main()
{
    int a = 7;

    for (int i = 1; i <= a; i++)
    {
        for (int k = 1; k <= a - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if ((j == 1) || (j == i))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i < a; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = a - 1; j >= i; j--)
        {
            if (j == a - 1 || j == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}