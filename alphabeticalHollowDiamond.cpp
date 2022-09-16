#include <iostream>
using namespace std;

int main()
{
    int a = 6;

    for (int i = 1; i <= a; i++)
    {
        for (int k = 1; k <= a - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == 1)
            {
                cout << "A ";
            }
            if (i == 2)
            {
                if (i == 2 && j == 1 || i == 2 && j == i)
                {
                    cout << "B ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i == 3)
            {
                if (i == 3 && j == 1 || i == 3 && j == i)
                {
                    cout << "C ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i == 4)
            {
                if (i == 4 && j == 1 || i == 4 && j == i)
                {
                    cout << "D ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i == 5)
            {
                if (i == 5 && j == 1 || i == 5 && j == i)
                {
                    cout << "E ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i == 6)
            {
                if (i == 6 && j == 1 || i == 6 && j == i)
                {
                    cout << "F ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= a - 1; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = a - 1; j >= i; j--)
        {
            if (i == 1)
            {
                if (i == 1 && j == a - 1 || i == 1 && j == i)
                {
                    cout << "E ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i == 2)
            {
                if (i == 2 && j == a - 1 || i == 2 && j == i)
                {
                    cout << "D ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i == 3)
            {
                if (i == 3 && j == a - 1 || i == 3 && j == i)
                {
                    cout << "C ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i == 4)
            {
                if (i == 4 && j == a - 1 || i == 4 && j == i)
                {
                    cout << "B ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i == 5)
            {
                if (i == 5 && j == a - 1 || i == 5 && j == i)
                {
                    cout << "A ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i == 6)
            {
                continue;
            }
        }
        cout << endl;
    }
}