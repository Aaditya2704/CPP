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
    unordered_map<int, int> mp;
    for (int i = 0; i < sizeOfFirstArray; i++)
    {
        mp[a1[i]] = a2[i];
    }
    unordered_map<int, int>::iterator iter;

    for (iter = mp.begin(); iter != mp.end(); iter++)
    {
        cout << iter->first << " " << iter->second << endl;
    }
}