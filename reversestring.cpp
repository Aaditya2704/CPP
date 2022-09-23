#include <iostream>
#include <string.h>
using namespace std;

void reversestring(string s)
{
    int size = s.length();

    for (int i = size - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}

int main()
{
    string s;
    cin >> s;
    reversestring(s);
}
