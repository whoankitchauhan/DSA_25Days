#include <bits/stdc++.h>
using namespace std;

void recur(int i, int n)
{
    if (i > n)
        return;
    cout << "Hey" << endl;
    recur(i + 1, n);
}
int main()
{
    int n;
    cout << "How Many times Should Print :";
    cin >> n;
    recur(1, n);
    return 0;
}