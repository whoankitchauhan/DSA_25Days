#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{

    int count = 0;

    int num = n;

    while (n != 0)
    {

        int r = n % 10;

        if (r == 0)
        {
        }

        else if (num % r == 0)
        {

            count++;
        }

        n = n / 10;
    }

    return count;
}
int main()
{

    cout << countDigits(123);
    return 0;
}
