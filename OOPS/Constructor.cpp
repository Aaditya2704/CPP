#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;
    int rollno;
    int standard;

public:
    student()
    {
        cout << "Enter name:";
        cin >> name;
        cout << "Enter rollno.:";
        cin >> rollno;
        cout << "Enter standard:";
        cin >> standard;
    }
    void display()
    {
        cout << name << endl
             << rollno << endl
             << standard;
    }
};
int main()
{
    student s;
    s.display();
    return 0;
}