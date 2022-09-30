#include <bits/stdc++.h>
using namespace std;

class abstraction
{
private:
    int a,
        b;

public:
    void setvalue(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << endl;
        cout << b;
    }
};
int main()
{
    abstraction a;
    a.setvalue(10, 20);
    a.display();
    return 0;
}