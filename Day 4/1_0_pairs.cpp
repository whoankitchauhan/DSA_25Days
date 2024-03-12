#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Storing 2 variable
    pair<int, int> a = {1, 2};
    cout << a.first << " " << a.second << endl;

    // Storing 3

    pair<int, pair<int, int>> b = {1, {2, 3}};

    cout << b.first << " " << b.second.first << endl;

    // Storing Pairs Array

    pair<int, int> arr[] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    cout << arr[0].first << " " << arr[1].second << endl;

    return 0;
}