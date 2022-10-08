// Find the number of item a particular element in an array has occured

#include <iostream>
using namespace std;

int main()
{
    // INPUT
    int size;
    cin >> size;
    int a[size], numberYouWantToFind, count = 0;
    cin >> numberYouWantToFind;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] == numberYouWantToFind)
        {
            count++;
        }
    }
    cout << count;
}