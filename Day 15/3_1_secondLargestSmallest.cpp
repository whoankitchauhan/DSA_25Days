#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    vector<int> result;

    // First, find the largest and smallest elements in the array
    int largest = *max_element(a.begin(), a.end());
    int smallest = *min_element(a.begin(), a.end());

    // Initialize second largest and second smallest
    int secondLargest = INT_MIN;
    int secondSmallest = INT_MAX;

    // Traverse the array to update second largest and second smallest
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > secondLargest && a[i] != largest)
            secondLargest = a[i];
        if (a[i] < secondSmallest && a[i] != smallest)
            secondSmallest = a[i];
    }

    result.push_back(secondLargest);
    result.push_back(secondSmallest);

    return result;
}

int main()
{
    // Example usage
    vector<int> array = {4, 5, 3, 6, 7};
    int n = 5;
    vector<int> result = getSecondOrderElements(n, array);

    cout << "Second largest and second smallest elements: " << result[0] << " " << result[1] << endl;

    return 0;
}
