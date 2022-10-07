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
    vector<int> v;
    int i = 0, j = 0;
    while (i < sizeOfFirstArray, j < sizeOfSecondArray)
    {
        if (a1[i] < a2[j])
        {
            i++;
        }
        else if (a2[j] < a1[i])
        {
            j++;
        }
        else
        {
            v.push_back(a1[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}