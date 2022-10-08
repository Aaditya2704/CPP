#include <iostream>
using namespace std;

int main()
{
    int a = 6, firstNumber = 0, secondNumber = 1;

    cout << firstNumber << " " << secondNumber << " ";
    for (int i = 0; i < a; i++)
    {
        int c = 0;
        c = firstNumber + secondNumber;
        cout << c << " ";
        firstNumber = secondNumber;
        secondNumber = c;
    }
}