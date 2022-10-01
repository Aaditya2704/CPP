#include <iostream>
using namespace std;

int main()
{
    int a = 6;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}