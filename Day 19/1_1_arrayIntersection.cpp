#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return ans;
}

int main()
{
    // Example usage
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 3, 4, 5, 6};
    int n = arr1.size();
    int m = arr2.size();

    vector<int> intersection = findArrayIntersection(arr1, n, arr2, m);

    // Printing the intersection elements
    cout << "Intersection: ";
    for (int num : intersection)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
