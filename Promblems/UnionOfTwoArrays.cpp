#include <bits/stdc++.h>
using namespace std;

int main()
{
    // INPUT
    int sizeOfFirstArray, sizeOfSecondArray;
    cin >> sizeOfFirstArray >> sizeOfSecondArray;
    int a1[sizeOfFirstArray];
    int a2[sizeOfSecondArray];

    for (int i = 0; i < sizeOfFirstArray; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < sizeOfSecondArray; i++)
    {
        cin >> a2[i];
    }
    // LOGIC
    set<int> s;

    for (int i = 0; i < sizeOfFirstArray; i++)
    {
        s.insert(a1[i]);
    }
    for (int i = 0; i < sizeOfSecondArray; i++)
    {
        s.insert(a2[i]);
    }
    set<int>::iterator itr;
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
}