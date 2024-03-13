#include <bits/stdc++.h>
using namespace std;


long reverseBits(long n)
{

    long ans = 0;

    long i = 0;

    while (n)
    {

        int bit = n & 1;

        ans = ans ^ (bit << (31 - i));

        n = n >> 1;

        i++;
    }

    return (unsigned)ans;
}


int main()
{

    cout << reverseBits(3);
    return 0;
}