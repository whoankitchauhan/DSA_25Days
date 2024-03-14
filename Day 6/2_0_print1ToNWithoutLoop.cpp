#include <iostream>
#include <vector>

using namespace std;

vector<int> printNos(int x)
{
    if (x == 0)
    {
        return {};
    }
    else
    {
        vector<int> arr = printNos(x - 1);
        arr.emplace_back(x);
        return arr;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> result = printNos(n);
    cout << "Generated vector: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
