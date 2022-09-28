#include <bits/stdc++.h>
using namespace std;

void reversestring(string s)
{
    int size = s.length();

    for (int i = 0; i < size / 2; i++)
    {
        swap(s[i], s[size - i - 1]);
    }
    cout << s;
}

int main()
{
    string s;
    cin >> s;
    reversestring(s);
}
