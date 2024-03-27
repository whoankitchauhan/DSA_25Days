#include <iostream>
#include <vector>
#include <algorithm> // For using std::sort
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    vector<int> visited(m, 0); // To maintain visited status for elements in arr2

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j] && visited[j] == 0)
            {
                // If element matches and has not been matched with any other before
                ans.push_back(arr2[j]);
                visited[j] = 1; // Mark the element as visited
                break;
            }
            else if (arr2[j] > arr1[i])
                break; // No need to continue searching in arr2 if the current element is greater
        }
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 3, 5, 6, 8};

    vector<int> intersection = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());

    cout << "Intersection of the arrays: ";
    for (int num : intersection)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
