#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int a)
{
    if (a < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a;
    cin >> a;
    int flag = 0;
    bool isPrime = checkPrime(a);
    if (isPrime)
    {
        cout << "It is a prime number";
    }
    else
    {
        cout << "It is not a prime number";
    }
    return 0;
}