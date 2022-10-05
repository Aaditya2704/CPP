#include <iostream>
using namespace std;

int LinearSearch(int a[], int x, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == x)
        {
            return 1;
            break;
        }
    }
    return -1;
}

int main()
{
    int size, numberToBeSearched;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number you want to search:";
    cin >> numberToBeSearched;
    int position = LinearSearch(a, numberToBeSearched, size);
    if (position == -1)
    {
        cout << "Number is not present";
    }
    else
    {
        cout << "Number is present";
    }
}