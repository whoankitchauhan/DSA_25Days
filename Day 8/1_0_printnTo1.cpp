#include <bits/stdc++.h>
using namespace std;

void backTracking(int i, int n)
{
    if (i > n)
    {
        return;
    }
    backTracking(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cout << "Enter :";
    cin >> n;
    backTracking(1, n);
    return 0;
}