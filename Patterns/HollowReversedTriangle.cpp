#include <iostream>
using namespace std;

int main()
{
    int a = 8;
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < a - i; j++)
        {
            if (j == 0 || j == a - i - 1 || i == 0)
                cout << "* ";
            else
                cout << ("  ");
        }
        cout << endl;
    }
}
