#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeros(int n, vector<int> a)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return a; // If no zeros found, return the array as it is

    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12}; // Original array
    int n = arr.size();

    cout << "Original array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<int> result = moveZeros(n, arr); // Move zeros to end of the array

    cout << "Modified array: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
