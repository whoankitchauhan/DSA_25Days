#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{

    if (n == 0 || n == 1)

        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {

        if (n % i == 0)

            return false;
    }

    return true;
}

int main()
{

    cout << isPrime(5);
    return 0;
}